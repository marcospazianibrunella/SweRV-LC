// Copyright 2019 ETH Zurich and University of Bologna.
//
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

// Author: Stefan Mach <smach@iis.ee.ethz.ch>

`include "registers.svh"

module fpnew_fma #(
    parameter fpnew_pkg::fp_format_e   FpFormat    = fpnew_pkg::fp_format_e'(0),
    parameter int unsigned             NumPipeRegs = 0,
    parameter fpnew_pkg::pipe_config_t PipeConfig  = fpnew_pkg::BEFORE,
    parameter type                     TagType     = logic,
    parameter type                     AuxType     = logic,

    localparam int unsigned WIDTH = fpnew_pkg::fp_width(FpFormat)  // do not change
) (
    input  logic                                         clk_i,
    input  logic                                         rst_ni,
    // Input signals
    input  logic                  [      2:0][WIDTH-1:0] operands_i,       // 3 operands
    input  logic                  [      2:0]            is_boxed_i,       // 3 operands
    input  fpnew_pkg::roundmode_e                        rnd_mode_i,
    input  fpnew_pkg::operation_e                        op_i,
    input  logic                                         op_mod_i,
    input  TagType                                       tag_i,
    input  AuxType                                       aux_i,
    // Input Handshake
    input  logic                                         in_valid_i,
    output logic                                         in_ready_o,
    input  logic                                         flush_i,
    // Output signals
    output logic                  [WIDTH-1:0]            result_o,
    output fpnew_pkg::status_t                           status_o,
    output logic                                         extension_bit_o,
    output TagType                                       tag_o,
    output AuxType                                       aux_o,
    // Output handshake
    output logic                                         out_valid_o,
    input  logic                                         out_ready_i,
    // Indication of valid data in flight
    output logic                                         busy_o
);

  // ----------
  // Constants
  // ----------
  localparam int unsigned EXP_BITS = fpnew_pkg::exp_bits(FpFormat);
  localparam int unsigned MAN_BITS = fpnew_pkg::man_bits(FpFormat);
  localparam int unsigned BIAS = fpnew_pkg::bias(FpFormat);
  // Precision bits 'p' include the implicit bit
  localparam int unsigned PRECISION_BITS = MAN_BITS + 1;
  // The lower 2p+3 bits of the internal FMA result will be needed for leading-zero detection
  localparam int unsigned LOWER_SUM_WIDTH = 2 * PRECISION_BITS + 3;
  localparam int unsigned LZC_RESULT_WIDTH = $clog2(LOWER_SUM_WIDTH);
  // Internal exponent width of FMA must accomodate all meaningful exponent values in order to avoid
  // datapath leakage. This is either given by the exponent bits or the width of the LZC result.
  // In most reasonable FP formats the internal exponent will be wider than the LZC result.
  localparam int unsigned EXP_WIDTH = unsigned'(fpnew_pkg::maximum(EXP_BITS + 2, LZC_RESULT_WIDTH));
  // Shift amount width: maximum internal mantissa size is 3p+3 bits
  localparam int unsigned SHIFT_AMOUNT_WIDTH = $clog2(3 * PRECISION_BITS + 3);
  // Pipelines
  localparam NUM_INP_REGS = PipeConfig == fpnew_pkg::BEFORE
                            ? NumPipeRegs
                            : (PipeConfig == fpnew_pkg::DISTRIBUTED
                               ? ((NumPipeRegs + 1) / 3) // Second to get distributed regs
  : 0);  // no regs here otherwise
  localparam NUM_MID_REGS = PipeConfig == fpnew_pkg::INSIDE
                          ? NumPipeRegs
                          : (PipeConfig == fpnew_pkg::DISTRIBUTED
                             ? ((NumPipeRegs + 2) / 3) // First to get distributed regs
  : 0);  // no regs here otherwise
  localparam NUM_OUT_REGS = PipeConfig == fpnew_pkg::AFTER
                            ? NumPipeRegs
                            : (PipeConfig == fpnew_pkg::DISTRIBUTED
                               ? (NumPipeRegs / 3) // Last to get distributed regs
  : 0);  // no regs here otherwise

  // ----------------
  // Type definition
  // ----------------
  typedef struct packed {
    logic                sign;
    logic [EXP_BITS-1:0] exponent;
    logic [MAN_BITS-1:0] mantissa;
  } fp_t;

  // ---------------
  // Input Stage 
  // ---------------
  logic                  [2:0][WIDTH-1:0] operands_fpx1;
  logic                  [2:0]            is_boxed_fpx1;
  fpnew_pkg::roundmode_e                  rnd_mode_fpx1;
  fpnew_pkg::operation_e                  op_fpx1;
  logic                                   op_mod_fpx1;
  TagType                                 tag_fpx1;
  AuxType                                 aux_fpx1;
  logic                                   valid_fpx1;

  assign operands_fpx1 = operands_i;
  assign is_boxed_fpx1 = is_boxed_i;
  assign rnd_mode_fpx1 = rnd_mode_i;
  assign op_fpx1       = op_i;
  assign op_mod_fpx1   = op_mod_i;
  assign tag_fpx1      = tag_i;
  assign aux_fpx1      = aux_i;
  assign valid_fpx1    = in_valid_i;

  // -----------------
  // Input processing
  // -----------------
  fpnew_pkg::fp_info_t [2:0] info_fpx1;

  // Classify input
  fpnew_classifier #(
      .FpFormat   (FpFormat),
      .NumOperands(3)
  ) i_class_inputs (
      .operands_i(operands_fpx1),
      .is_boxed_i(is_boxed_fpx1),
      .info_o    (info_fpx1)
  );

  fp_t operand_a_fpx1, operand_b_fpx1, operand_c_fpx1;
  fpnew_pkg::fp_info_t info_a_fpx1, info_b_fpx1, info_c_fpx1;

  // Operation selection and operand adjustment
  // | \c op_q  | \c op_mod_q | Operation Adjustment
  // |:--------:|:-----------:|---------------------
  // | FMADD    | \c 0        | FMADD: none
  // | FMADD    | \c 1        | FMSUB: Invert sign of operand C
  // | FNMSUB   | \c 0        | FNMSUB: Invert sign of operand A
  // | FNMSUB   | \c 1        | FNMADD: Invert sign of operands A and C
  // | ADD      | \c 0        | ADD: Set operand A to +1.0
  // | ADD      | \c 1        | SUB: Set operand A to +1.0, invert sign of operand C
  // | MUL      | \c 0        | MUL: Set operand C to +0.0
  // | *others* | \c -        | *invalid*
  // \note \c op_mod_q always inverts the sign of the addend.
  always_comb begin : op_select

    // Default assignments - packing-order-agnostic
    operand_a_fpx1 = operands_fpx1[0];
    operand_b_fpx1 = operands_fpx1[1];
    operand_c_fpx1 = operands_fpx1[2];
    info_a_fpx1    = info_fpx1[0];
    info_b_fpx1    = info_fpx1[1];
    info_c_fpx1    = info_fpx1[2];

    // op_mod_q inverts sign of operand C
    operand_c_fpx1.sign = operand_c_fpx1.sign ^ op_mod_fpx1;

    unique case (op_fpx1)
      fpnew_pkg::FMADD:  ;  // do nothing
      fpnew_pkg::FNMSUB: operand_a_fpx1.sign = ~operand_a_fpx1.sign;  // invert sign of product
      fpnew_pkg::ADD: begin  // Set multiplicand to +1
        operand_a_fpx1 = '{sign: 1'b0, exponent: BIAS, mantissa: '0};
        info_a_fpx1    = '{is_normal: 1'b1, is_boxed: 1'b1, default: 1'b0}; //normal, boxed value.
      end
      fpnew_pkg::MUL: begin  // Set addend to -0 (for proper rounding with RDN)
        operand_c_fpx1 = '{sign: 1'b1, exponent: '0, mantissa: '0};
        info_c_fpx1    = '{is_zero: 1'b1, is_boxed: 1'b1, default: 1'b0}; //zero, boxed value.
      end
      default: begin  // propagate don't cares
        operand_a_fpx1 = '{default: fpnew_pkg::DONT_CARE};
        operand_b_fpx1 = '{default: fpnew_pkg::DONT_CARE};
        operand_c_fpx1 = '{default: fpnew_pkg::DONT_CARE};
        info_a_fpx1    = '{default: fpnew_pkg::DONT_CARE};
        info_b_fpx1    = '{default: fpnew_pkg::DONT_CARE};
        info_c_fpx1    = '{default: fpnew_pkg::DONT_CARE};
      end
    endcase
  end

  // ---------------------
  // Input classification
  // ---------------------
  logic any_operand_inf_fpx1;
  logic any_operand_nan_fpx1;
  logic signalling_nan_fpx1;
  logic effective_subtraction_fpx1;
  logic tentative_sign_fpx1;

  // Reduction for special case handling
  assign any_operand_inf_fpx1 = (|{info_a_fpx1.is_inf, info_b_fpx1.is_inf, info_c_fpx1.is_inf});
  assign any_operand_nan_fpx1 = (|{info_a_fpx1.is_nan, info_b_fpx1.is_nan, info_c_fpx1.is_nan});
  assign signalling_nan_fpx1 = (|{
    info_a_fpx1.is_signalling, info_b_fpx1.is_signalling, info_c_fpx1.is_signalling
  });
  // Effective subtraction in FMA occurs when product and addend signs differ
  assign effective_subtraction_fpx1 = operand_a_fpx1.sign ^ operand_b_fpx1.sign ^ operand_c_fpx1.sign;
  // The tentative sign of the FMA shall be the sign of the product
  assign tentative_sign_fpx1 = operand_a_fpx1.sign ^ operand_b_fpx1.sign;

  // ----------------------
  // Special case handling
  // ----------------------
  fp_t                special_result_fpx1;
  fpnew_pkg::status_t special_status_fpx1;
  logic               result_is_special_fpx1;

  always_comb begin : special_cases
    // Default assignments
    special_result_fpx1 = '{
        sign: 1'b0,
        exponent: '1,
        mantissa: 2 ** (MAN_BITS - 1)
    };  // canonical qNaN
    special_status_fpx1 = '0;
    result_is_special_fpx1 = 1'b0;

    // Handle potentially mixed nan & infinity input => important for the case where infinity and
    // zero are multiplied and added to a qnan.
    // RISC-V mandates raising the NV exception in these cases:
    // (inf * 0) + c or (0 * inf) + c INVALID, no matter c (even quiet NaNs)
    if ((info_a_fpx1.is_inf && info_b_fpx1.is_zero) || (info_a_fpx1.is_zero && info_b_fpx1.is_inf)) begin
      result_is_special_fpx1 = 1'b1;  // bypass FMA, output is the canonical qNaN
      special_status_fpx1.NV = 1'b1;  // invalid operation
      // NaN Inputs cause canonical quiet NaN at the output and maybe invalid OP
    end else if (any_operand_nan_fpx1) begin
      result_is_special_fpx1 = 1'b1;  // bypass FMA, output is the canonical qNaN
      special_status_fpx1.NV = signalling_nan_fpx1;  // raise the invalid operation flag if signalling
      // Special cases involving infinity
    end else if (any_operand_inf_fpx1) begin
      result_is_special_fpx1 = 1'b1;  // bypass FMA
      // Effective addition of opposite infinities (±inf - ±inf) is invalid!
      if ((info_a_fpx1.is_inf || info_b_fpx1.is_inf) && info_c_fpx1.is_inf && effective_subtraction_fpx1)
        special_status_fpx1.NV = 1'b1;  // invalid operation
      // Handle cases where output will be inf because of inf product input      else
      if (info_a_fpx1.is_inf || info_b_fpx1.is_inf) begin
        // Result is infinity with the sign of the product
        special_result_fpx1 = '{
            sign: operand_a_fpx1.sign ^ operand_b_fpx1.sign,
            exponent: '1,
            mantissa: '0
        };
        // Handle cases where the addend is inf
      end else if (info_c_fpx1.is_inf) begin
        // Result is inifinity with sign of the addend (= operand_c_fpx1)
        special_result_fpx1 = '{sign: operand_c_fpx1.sign, exponent: '1, mantissa: '0};
      end
    end
  end

  // ---------------------------
  // Initial exponent data path
  // ---------------------------
  logic signed [EXP_WIDTH-1:0] exponent_a_fpx1, exponent_b_fpx1, exponent_c_fpx1;
  logic signed [EXP_WIDTH-1:0]
      exponent_addend_fpx1, exponent_product_fpx1, exponent_difference_fpx1;
  logic signed [EXP_WIDTH-1:0] tentative_exponent_fpx1;

  // Zero-extend exponents into signed container - implicit width extension
  assign exponent_a_fpx1 = signed'({1'b0, operand_a_fpx1.exponent});
  assign exponent_b_fpx1 = signed'({1'b0, operand_b_fpx1.exponent});
  assign exponent_c_fpx1 = signed'({1'b0, operand_c_fpx1.exponent});

  // Calculate internal exponents from encoded values. Real exponents are (ex = Ex - bias + 1 - nx)
  // with Ex the encoded exponent and nx the implicit bit. Internal exponents stay biased.
  assign exponent_addend_fpx1 = signed'(exponent_c_fpx1 + $signed(
          {1'b0, ~info_c_fpx1.is_normal}
      ));  // 0 as subnorm
  // Biased product exponent is the sum of encoded exponents minus the bias.
  assign exponent_product_fpx1 = (info_a_fpx1.is_zero || info_b_fpx1.is_zero)
                            ? 2 - signed'(BIAS) // in case the product is zero, set minimum exp.
                            : signed'(exponent_a_fpx1 + info_a_fpx1.is_subnormal
                                      + exponent_b_fpx1 + info_b_fpx1.is_subnormal
                                      - signed'(BIAS));
  // Exponent difference is the addend exponent minus the product exponent
  assign exponent_difference_fpx1 = exponent_addend_fpx1 - exponent_product_fpx1;
  // The tentative exponent will be the larger of the product or addend exponent
  assign tentative_exponent_fpx1 = (exponent_difference_fpx1 > 0) ? exponent_addend_fpx1 : exponent_product_fpx1;

  // Shift amount for addend based on exponents (unsigned as only right shifts)
  logic [SHIFT_AMOUNT_WIDTH-1:0] addend_shamt_fpx1;

  always_comb begin : addend_shift_amount
    // Product-anchored case, saturated shift (addend is only in the sticky bit)
    if (exponent_difference_fpx1 <= signed'(-2 * PRECISION_BITS - 1))
      addend_shamt_fpx1 = 3 * PRECISION_BITS + 4;
    // Addend and product will have mutual bits to add    else
    if (exponent_difference_fpx1 <= signed'(PRECISION_BITS + 2))
      addend_shamt_fpx1 = unsigned'(signed'(PRECISION_BITS) + 3 - exponent_difference_fpx1);
    // Addend-anchored case, saturated shift (product is only in the sticky bit)
    else
      addend_shamt_fpx1 = 0;
  end

  // ------------------
  // Product data path
  // ------------------
  logic [PRECISION_BITS-1:0] mantissa_a_fpx1, mantissa_b_fpx1, mantissa_c_fpx1;
  logic [2*PRECISION_BITS-1:0] product_fpx1;  // the p*p product is 2p bits wide
  logic [3*PRECISION_BITS+3:0] product_shifted_fpx1;  // addends are 3p+4 bit wide (including G/R)

  // Add implicit bits to mantissae
  assign mantissa_a_fpx1 = {info_a_fpx1.is_normal, operand_a_fpx1.mantissa};
  assign mantissa_b_fpx1 = {info_b_fpx1.is_normal, operand_b_fpx1.mantissa};
  assign mantissa_c_fpx1 = {info_c_fpx1.is_normal, operand_c_fpx1.mantissa};

  // Mantissa multiplier (a*b)
  assign product_fpx1 = mantissa_a_fpx1 * mantissa_b_fpx1;

  // Product is placed into a 3p+4 bit wide vector, padded with 2 bits for round and sticky:
  // | 000...000 | product | RS |
  //  <-  p+2  -> <-  2p -> < 2>
  assign product_shifted_fpx1 = product_fpx1 << 2;  // constant shift



  /* 
  FPX1 --> FPX2 Sync Stage 
    */
  logic                  [2:0][WIDTH-1:0] operands_fpx2;
  logic                  [2:0]            is_boxed_fpx2;
  fpnew_pkg::roundmode_e                  rnd_mode_fpx2;
  fpnew_pkg::operation_e                  op_fpx2;
  logic                                   op_mod_fpx2;
  TagType                                 tag_fpx2;
  AuxType                                 aux_fpx2;
  logic                                   valid_fpx2;
  logic                                   any_operand_inf_fpx2;
  logic                                   any_operand_nan_fpx2;
  logic                                   signalling_nan_fpx2;
  logic                                   effective_subtraction_fpx2;
  logic                                   tentative_sign_fpx2;
  logic [PRECISION_BITS-1:0] mantissa_a_fpx2, mantissa_b_fpx2, mantissa_c_fpx2;
  logic [2*PRECISION_BITS-1:0] product_fpx2;  // the p*p product is 2p bits wide
  logic [3*PRECISION_BITS+3:0] product_shifted_fpx2;  // addends are 3p+4 bit wide (including G/R)
  logic signed [EXP_WIDTH-1:0] exponent_a_fpx2, exponent_b_fpx2, exponent_c_fpx2;
  logic signed [EXP_WIDTH-1:0]
      exponent_addend_fpx2, exponent_product_fpx2, exponent_difference_fpx2;
  logic signed        [         EXP_WIDTH-1:0] tentative_exponent_fpx2;
  logic               [SHIFT_AMOUNT_WIDTH-1:0] addend_shamt_fpx2;
  fp_t                                         special_result_fpx2;
  fpnew_pkg::status_t                          special_status_fpx2;
  logic                                        result_is_special_fpx2;

  `FFNR({
        operands_fpx2,
        is_boxed_fpx2,
        rnd_mode_fpx2,
        op_fpx2,
        op_mod_fpx2,
        tag_fpx2,
        aux_fpx2,
        valid_fpx2
        }, {
        operands_fpx1,
        is_boxed_fpx1,
        rnd_mode_fpx1,
        op_fpx1,
        op_mod_fpx1,
        tag_fpx1,
        aux_fpx1,
        valid_fpx1
        }, clk_i)

  `FFNR({
        any_operand_inf_fpx2,
        any_operand_nan_fpx2,
        signalling_nan_fpx2,
        effective_subtraction_fpx2,
        tentative_sign_fpx2
        }, {
        any_operand_inf_fpx1,
        any_operand_nan_fpx1,
        signalling_nan_fpx1,
        effective_subtraction_fpx1,
        tentative_sign_fpx1
        }, clk_i)

  `FFNR({mantissa_a_fpx2, mantissa_b_fpx2, mantissa_c_fpx2}, {
        mantissa_a_fpx1, mantissa_b_fpx1, mantissa_c_fpx1}, clk_i)

  `FFNR({product_fpx2, product_shifted_fpx2}, {product_fpx1, product_shifted_fpx1}, clk_i)

  `FFNR({exponent_a_fpx2, exponent_b_fpx2, exponent_c_fpx2}, {
        exponent_a_fpx1, exponent_b_fpx1, exponent_c_fpx1}, clk_i)

  `FFNR({
        exponent_addend_fpx2,
        exponent_product_fpx2,
        exponent_difference_fpx2,
        tentative_exponent_fpx2,
        addend_shamt_fpx2
        }, {
        exponent_addend_fpx1,
        exponent_product_fpx1,
        exponent_difference_fpx1,
        tentative_exponent_fpx1,
        addend_shamt_fpx1
        }, clk_i)

  `FFNR({special_result_fpx2, special_status_fpx2, result_is_special_fpx2}, {
        special_result_fpx1, special_status_fpx1, result_is_special_fpx1}, clk_i)


  // -----------------
  // Addend data path
  // -----------------
  logic [3*PRECISION_BITS+3:0] addend_after_shift_fpx2;  // upper 3p+4 bits are needed to go on
  logic [PRECISION_BITS-1:0] addend_sticky_bits_fpx2;  // up to p bit of shifted addend are sticky
  logic sticky_before_add_fpx2;  // they are compressed into a single sticky bit
  logic [3*PRECISION_BITS+3:0] addend_shifted_fpx2;  // addends are 3p+4 bit wide (including G/R)
  logic inject_carry_in_fpx2;  // inject carry for subtractions if needed

  // In parallel, the addend is right-shifted according to the exponent difference. Up to p bits
  // are shifted out and compressed into a sticky bit.
  // BEFORE THE SHIFT:
  // | mantissa_c | 000..000 |
  //  <-    p   -> <- 3p+4 ->
  // AFTER THE SHIFT:
  // | 000..........000 | mantissa_c | 000...............0GR |  sticky bits  |
  //  <- addend_shamt -> <-    p   -> <- 2p+4-addend_shamt -> <-  up to p  ->
  assign {addend_after_shift_fpx2, addend_sticky_bits_fpx2} =
      (mantissa_c_fpx2 << (3 * PRECISION_BITS + 4)) >> addend_shamt_fpx2;

  assign sticky_before_add_fpx2 = (|addend_sticky_bits_fpx2);
  // assign addend_after_shift[0] = sticky_before_add;

  // In case of a subtraction, the addend is inverted
  assign addend_shifted_fpx2 = (effective_subtraction_fpx2) ? ~addend_after_shift_fpx2 : addend_after_shift_fpx2;
  assign inject_carry_in_fpx2 = effective_subtraction_fpx2 & ~sticky_before_add_fpx2;

  // ------
  // Adder
  // ------
  logic [3*PRECISION_BITS+4:0] sum_raw_fpx2;  // added one bit for the carry
  logic                        sum_carry_fpx2;  // observe carry bit from sum for sign fixing
  logic [3*PRECISION_BITS+3:0] sum_fpx2;  // discard carry as sum won't overflow
  logic                        final_sign_fpx2;

  //Mantissa adder (ab+c). In normal addition, it cannot overflow.
  assign sum_raw_fpx2 = product_shifted_fpx2 + addend_shifted_fpx2 + inject_carry_in_fpx2;
  assign sum_carry_fpx2 = sum_raw_fpx2[3*PRECISION_BITS+4];

  // Complement negative sum (can only happen in subtraction -> overflows for positive results)
  assign sum_fpx2 = (effective_subtraction_fpx2 && ~sum_carry_fpx2) ? -sum_raw_fpx2 : sum_raw_fpx2;

  // In case of a mispredicted subtraction result, do a sign flip
  assign final_sign_fpx2 = (effective_subtraction_fpx2 && (sum_carry_fpx2 == tentative_sign_fpx2))
                      ? 1'b1
                      : (effective_subtraction_fpx2 ? 1'b0 : tentative_sign_fpx2);

  /* 
      FPX2 --> FPX3 Registers 
      */
  logic [3*PRECISION_BITS+4:0] sum_raw_fpx3;
  logic                        sum_carry_fpx3;
  logic [3*PRECISION_BITS+3:0] sum_fpx3;
  logic                        final_sign_fpx3;
  logic [3*PRECISION_BITS+3:0] addend_after_shift_fpx3;
  logic [  PRECISION_BITS-1:0] addend_sticky_bits_fpx3;
  logic                        sticky_before_add_fpx3;
  logic [3*PRECISION_BITS+3:0] addend_shifted_fpx3;
  logic                        inject_carry_in_fpx3;
  logic signed [EXP_WIDTH-1:0]
      exponent_addend_fpx3, exponent_product_fpx3, exponent_difference_fpx3;
  logic signed           [         EXP_WIDTH-1:0] tentative_exponent_fpx3;
  logic                  [SHIFT_AMOUNT_WIDTH-1:0] addend_shamt_fpx3;
  fpnew_pkg::roundmode_e                          rnd_mode_fpx3;
  logic                                           effective_subtraction_fpx3;

  fp_t                                            special_result_fpx3;
  fpnew_pkg::status_t                             special_status_fpx3;
  logic                                           result_is_special_fpx3;

  TagType                                         tag_fpx3;
  AuxType                                         aux_fpx3;
  logic                                           valid_fpx3;

  `FFNR({tag_fpx3, aux_fpx3, valid_fpx3}, {tag_fpx2, aux_fpx2, valid_fpx2}, clk_i)

  `FFNR({special_result_fpx3, special_status_fpx3, result_is_special_fpx3}, {
        special_result_fpx2, special_status_fpx2, result_is_special_fpx2}, clk_i)

  `FFNR({
        sum_raw_fpx3,
        sum_carry_fpx3,
        sum_fpx3,
        final_sign_fpx3,
        addend_after_shift_fpx3,
        addend_sticky_bits_fpx3,
        sticky_before_add_fpx3,
        addend_shifted_fpx3,
        inject_carry_in_fpx3,
        addend_shamt_fpx3,
        rnd_mode_fpx3
        }, {
        sum_raw_fpx2,
        sum_carry_fpx2,
        sum_fpx2,
        final_sign_fpx2,
        addend_after_shift_fpx2,
        addend_sticky_bits_fpx2,
        sticky_before_add_fpx2,
        addend_shifted_fpx2,
        inject_carry_in_fpx2,
        addend_shamt_fpx2,
        rnd_mode_fpx2
        }, clk_i)

  `FFNR({
        exponent_addend_fpx3,
        exponent_product_fpx3,
        exponent_difference_fpx3,
        tentative_exponent_fpx3,
        effective_subtraction_fpx3
        }, {
        exponent_addend_fpx2,
        exponent_product_fpx2,
        exponent_difference_fpx2,
        tentative_exponent_fpx2,
        effective_subtraction_fpx2
        }, clk_i)


  // --------------
  // Normalization
  // --------------
  logic [LOWER_SUM_WIDTH-1:0] sum_lower_fpx3;  // lower 2p+3 bits of sum are searched
  logic [LZC_RESULT_WIDTH-1:0] leading_zero_count_fpx3;  // the number of leading zeroes
  logic signed [LZC_RESULT_WIDTH:0] leading_zero_count_sgn_fpx3;  // signed leading-zero count
  logic lzc_zeroes_fpx3;  // in case only zeroes found


  logic [SHIFT_AMOUNT_WIDTH-1:0] norm_shamt_fpx3;  // Normalization shift amount
  logic signed [EXP_WIDTH-1:0] normalized_exponent_fpx3;

  logic [3*PRECISION_BITS+4:0] sum_shifted_fpx3;  // result after first normalization shift
  logic [PRECISION_BITS:0] final_mantissa_fpx3;  // final mantissa before rounding with round bit
  logic [2*PRECISION_BITS+2:0] sum_sticky_bits_fpx3;   // remaining 2p+3 sticky bits after normalization
  logic sticky_after_norm_fpx3;  // sticky bit after normalization

  logic signed [EXP_WIDTH-1:0] final_exponent_fpx3;

  assign sum_lower_fpx3 = sum_fpx3[LOWER_SUM_WIDTH-1:0];

  // Leading zero counter for cancellations
  lzc #(
      .WIDTH(LOWER_SUM_WIDTH),
      .MODE (1)  // MODE = 1 counts leading zeroes
  ) i_lzc (
      .in_i   (sum_lower_fpx3),
      .cnt_o  (leading_zero_count_fpx3),
      .empty_o(lzc_zeroes_fpx3)
  );

  assign leading_zero_count_sgn_fpx3 = signed'({1'b0, leading_zero_count_fpx3});

  // Normalization shift amount based on exponents and LZC (unsigned as only left shifts)
  always_comb begin : norm_shift_amount
    // Product-anchored case or cancellations require LZC
    if ((exponent_difference_fpx3 <= 0) || (effective_subtraction_fpx3 && (exponent_difference_fpx3 <= 2))) begin
      // Normal result (biased exponent > 0 and not a zero)
      if ((exponent_product_fpx3 - leading_zero_count_sgn_fpx3 + 1 >= 0) && !lzc_zeroes_fpx3) begin
        // Undo initial product shift, remove the counted zeroes
        norm_shamt_fpx3 = PRECISION_BITS + 2 + leading_zero_count_fpx3;
        normalized_exponent_fpx3 = exponent_product_fpx3 - leading_zero_count_sgn_fpx3 + 1;  // account for shift
        // Subnormal result
      end else begin
        // Cap the shift distance to align mantissa with minimum exponent
        norm_shamt_fpx3          = unsigned'(signed'(PRECISION_BITS) + 2 + exponent_product_fpx3);
        normalized_exponent_fpx3 = 0;  // subnormals encoded as 0
      end
      // Addend-anchored case
    end else begin
      norm_shamt_fpx3          = addend_shamt_fpx3;  // Undo the initial shift
      normalized_exponent_fpx3 = tentative_exponent_fpx3;
    end
  end

  // Do the large normalization shift
  assign sum_shifted_fpx3 = sum_fpx3 << norm_shamt_fpx3;

  // The addend-anchored case needs a 1-bit normalization since the leading-one can be to the left
  // or right of the (non-carry) MSB of the sum.
  always_comb begin : small_norm
    // Default assignment, discarding carry bit
    {final_mantissa_fpx3, sum_sticky_bits_fpx3} = sum_shifted_fpx3;
    final_exponent_fpx3                         = normalized_exponent_fpx3;

    // The normalized sum has overflown, align right and fix exponent
    if (sum_shifted_fpx3[3*PRECISION_BITS+4]) begin  // check the carry bit
      {final_mantissa_fpx3, sum_sticky_bits_fpx3} = sum_shifted_fpx3 >> 1;
      final_exponent_fpx3                         = normalized_exponent_fpx3 + 1;
      // The normalized sum is normal, nothing to do
    end else if (sum_shifted_fpx3[3*PRECISION_BITS+3]) begin  // check the sum MSB
      // do nothing
      // The normalized sum is still denormal, align left - unless the result is not already subnormal
    end else if (normalized_exponent_fpx3 > 1) begin
      {final_mantissa_fpx3, sum_sticky_bits_fpx3} = sum_shifted_fpx3 << 1;
      final_exponent_fpx3                         = normalized_exponent_fpx3 - 1;
      // Otherwise we're denormal
    end else begin
      final_exponent_fpx3 = '0;
    end
  end

  // Update the sticky bit with the shifted-out bits
  assign sticky_after_norm_fpx3 = (|{sum_sticky_bits_fpx3}) | sticky_before_add_fpx3;

  /* FPX3 --> FPX4 */
  logic                  [   LOWER_SUM_WIDTH-1:0] sum_lower_fpx4;
  logic                  [  LZC_RESULT_WIDTH-1:0] leading_zero_count_fpx4;
  logic signed           [    LZC_RESULT_WIDTH:0] leading_zero_count_sgn_fpx4;
  logic                                           lzc_zeroes_fpx4;
  logic                  [SHIFT_AMOUNT_WIDTH-1:0] norm_shamt_fpx4;
  logic signed           [         EXP_WIDTH-1:0] normalized_exponent_fpx4;
  logic                  [  3*PRECISION_BITS+4:0] sum_shifted_fpx4;
  logic                  [      PRECISION_BITS:0] final_mantissa_fpx4;
  logic                  [  2*PRECISION_BITS+2:0] sum_sticky_bits_fpx4;
  logic                                           sticky_after_norm_fpx4;
  logic signed           [         EXP_WIDTH-1:0] final_exponent_fpx4;
  logic                                           final_sign_fpx4;
  fpnew_pkg::roundmode_e                          rnd_mode_fpx4;
  logic                                           effective_subtraction_fpx4;

  fp_t                                            special_result_fpx4;
  fpnew_pkg::status_t                             special_status_fpx4;
  logic                                           result_is_special_fpx4;

  TagType                                         tag_fpx4;
  AuxType                                         aux_fpx4;
  logic                                           valid_fpx4;

  `FFNR({tag_fpx4, aux_fpx4, valid_fpx4}, {tag_fpx3, aux_fpx3, valid_fpx3}, clk_i)

  `FFNR({special_result_fpx4, special_status_fpx4, result_is_special_fpx4}, {
        special_result_fpx3, special_status_fpx3, result_is_special_fpx3}, clk_i)

  `FFNR({
        sum_lower_fpx4,
        leading_zero_count_fpx4,
        leading_zero_count_sgn_fpx4,
        lzc_zeroes_fpx4,
        norm_shamt_fpx4,
        normalized_exponent_fpx4,
        sum_shifted_fpx4,
        final_mantissa_fpx4,
        sum_sticky_bits_fpx4,
        sticky_after_norm_fpx4,
        final_exponent_fpx4,
        final_sign_fpx4,
        rnd_mode_fpx4,
        effective_subtraction_fpx4
        }, {
        sum_lower_fpx3,
        leading_zero_count_fpx3,
        leading_zero_count_sgn_fpx3,
        lzc_zeroes_fpx3,
        norm_shamt_fpx3,
        normalized_exponent_fpx3,
        sum_shifted_fpx3,
        final_mantissa_fpx3,
        sum_sticky_bits_fpx3,
        sticky_after_norm_fpx3,
        final_exponent_fpx3,
        final_sign_fpx3,
        rnd_mode_fpx3,
        effective_subtraction_fpx3
        }, clk_i)

  // ----------------------------
  // Rounding and classification
  // ----------------------------
  logic                         pre_round_sign_fpx4;
  logic [         EXP_BITS-1:0] pre_round_exponent_fpx4;
  logic [         MAN_BITS-1:0] pre_round_mantissa_fpx4;
  logic [EXP_BITS+MAN_BITS-1:0] pre_round_abs_fpx4;  // absolute value of result before rounding
  logic [                  1:0] round_sticky_bits_fpx4;

  logic of_before_round_fpx4, of_after_round_fpx4;  // overflow
  logic uf_before_round_fpx4, uf_after_round_fpx4;  // underflow
  logic                         result_zero_fpx4;

  logic                         rounded_sign_fpx4;
  logic [EXP_BITS+MAN_BITS-1:0] rounded_abs_fpx4;  // absolute value of result after rounding

  // Classification before round. RISC-V mandates checking underflow AFTER rounding!
  assign of_before_round_fpx4 = final_exponent_fpx4 >= 2 ** (EXP_BITS) - 1;  // infinity exponent is all ones
  assign uf_before_round_fpx4 = final_exponent_fpx4 == 0;  // exponent for subnormals capped to 0

  // Assemble result before rounding. In case of overflow, the largest normal value is set.
  assign pre_round_sign_fpx4 = final_sign_fpx4;
  assign pre_round_exponent_fpx4 = (of_before_round_fpx4) ? 2**EXP_BITS-2 : unsigned'(final_exponent_fpx4[EXP_BITS-1:0]);
  assign pre_round_mantissa_fpx4 = (of_before_round_fpx4) ? '1 : final_mantissa_fpx4[MAN_BITS:1]; // bit 0 is R bit
  assign pre_round_abs_fpx4 = {pre_round_exponent_fpx4, pre_round_mantissa_fpx4};

  // In case of overflow, the round and sticky bits are set for proper rounding
  assign round_sticky_bits_fpx4 = (of_before_round_fpx4) ? 2'b11 : {
    final_mantissa_fpx4[0], sticky_after_norm_fpx4
  };

  // Perform the rounding
  fpnew_rounding #(
      .AbsWidth(EXP_BITS + MAN_BITS)
  ) i_fpnew_rounding (
      .abs_value_i            (pre_round_abs_fpx4),
      .sign_i                 (pre_round_sign_fpx4),
      .round_sticky_bits_i    (round_sticky_bits_fpx4),
      .rnd_mode_i             (rnd_mode_fpx4),
      .effective_subtraction_i(effective_subtraction_fpx4),
      .abs_rounded_o          (rounded_abs_fpx4),
      .sign_o                 (rounded_sign_fpx4),
      .exact_zero_o           (result_zero_fpx4)
  );

  // Classification after rounding
  assign uf_after_round_fpx4 = rounded_abs_fpx4[EXP_BITS+MAN_BITS-1:MAN_BITS] == '0;  // exponent = 0
  assign of_after_round_fpx4 = rounded_abs_fpx4[EXP_BITS+MAN_BITS-1:MAN_BITS] == '1;  // exponent all ones

  // -----------------
  // Result selection
  // -----------------
  logic               [WIDTH-1:0] regular_result_fpx4;
  fpnew_pkg::status_t             regular_status_fpx4;

  // Assemble regular result
  assign regular_result_fpx4 = {rounded_sign_fpx4, rounded_abs_fpx4};
  assign regular_status_fpx4.NV = 1'b0;  // only valid cases are handled in regular path
  assign regular_status_fpx4.DZ = 1'b0;  // no divisions
  assign regular_status_fpx4.OF = of_before_round_fpx4 | of_after_round_fpx4;   // rounding can introduce overflow
  assign regular_status_fpx4.UF = uf_after_round_fpx4 & regular_status_fpx4.NX; // only inexact results raise UF
  assign regular_status_fpx4.NX = (| round_sticky_bits_fpx4) | of_before_round_fpx4 | of_after_round_fpx4;

  // Final results for output pipeline
  fp_t                result_fpx4;
  fpnew_pkg::status_t status_fpx4;

  // Select output depending on special case detection
  assign result_fpx4     = result_is_special_fpx4 ? special_result_fpx4 : regular_result_fpx4;
  assign status_fpx4     = result_is_special_fpx4 ? special_status_fpx4 : regular_status_fpx4;

  // Output stage: Ready travels backwards from output side, driven by downstream circuitry
  assign in_ready_o      = out_ready_i;
  // Output stage: assign module outputs
  assign result_o        = result_fpx4;
  assign status_o        = status_fpx4;
  assign extension_bit_o = 1'b1;  // always NaN-Box result
  assign tag_o           = tag_fpx4;
  assign aux_o           = aux_fpx4;
  assign out_valid_o     = valid_fpx4;
  assign busy_o          = 'b0;
endmodule
