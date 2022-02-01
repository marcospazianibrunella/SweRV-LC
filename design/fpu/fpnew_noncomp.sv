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

module fpnew_noncomp #(
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
    input  logic                  [      1:0][WIDTH-1:0] operands_i,       // 2 operands
    input  logic                  [      1:0]            is_boxed_i,       // 2 operands
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
    output fpnew_pkg::classmask_e                        class_mask_o,
    output logic                                         is_class_o,
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

  // ----------------
  // Type definition
  // ----------------
  typedef struct packed {
    logic                sign;
    logic [EXP_BITS-1:0] exponent;
    logic [MAN_BITS-1:0] mantissa;
  } fp_t;

  /* FPX1 Generation */

  logic                  [1:0][WIDTH-1:0] operands_fpx1;  // 2 operands
  logic                  [1:0]            is_boxed_fpx1;  // 2 operands
  fpnew_pkg::roundmode_e                  rnd_mode_fpx1;
  fpnew_pkg::operation_e                  op_fpx1;
  logic                                   op_mod_fpx1;
  TagType                                 tag_fpx1;
  AuxType                                 aux_fpx1;
  logic                                   in_valid_fpx1;

  assign operands_fpx1 = operands_i;
  assign is_boxed_fpx1 = is_boxed_i;
  assign rnd_mode_fpx1 = rnd_mode_i;
  assign op_fpx1       = op_i;
  assign op_mod_fpx1   = op_mod_i;
  assign tag_fpx1      = tag_i;
  assign aux_fpx1      = aux_i;
  assign in_valid_fpx1 = in_valid_i;

  // ---------------------
  // Input classification
  // ---------------------
  fpnew_pkg::fp_info_t [1:0] info_fpx1;

  // Classify input
  fpnew_classifier #(
      .FpFormat   (FpFormat),
      .NumOperands(2)
  ) i_classifier (
      .operands_i(operands_i),
      .is_boxed_i(is_boxed_i),
      .info_o    (info_fpx1)
  );

  fp_t operand_a_fpx1, operand_b_fpx1;
  fpnew_pkg::fp_info_t info_a_fpx1, info_b_fpx1;

  // Packing-order-agnostic assignments
  assign operand_a_fpx1 = operands_fpx1[0];
  assign operand_b_fpx1 = operands_fpx1[1];
  assign info_a_fpx1    = info_fpx1[0];
  assign info_b_fpx1    = info_fpx1[1];

  logic any_operand_inf_fpx1;
  logic any_operand_nan_fpx1;
  logic signalling_nan_fpx1;

  // Reduction for special case handling
  assign any_operand_inf_fpx1 = (|{info_a_fpx1.is_inf, info_b_fpx1.is_inf});
  assign any_operand_nan_fpx1 = (|{info_a_fpx1.is_nan, info_b_fpx1.is_nan});
  assign signalling_nan_fpx1  = (|{info_a_fpx1.is_signalling, info_b_fpx1.is_signalling});

  logic operands_equal_fpx1, operand_a_smaller_fpx1;

  // Equality checks for zeroes too
  assign operands_equal_fpx1    = (operand_a_fpx1 == operand_b_fpx1) || (info_a_fpx1.is_zero && info_b_fpx1.is_zero);
  // Invert result if non-zero signs involved (unsigned comparison)
  assign operand_a_smaller_fpx1 = (operand_a_fpx1 < operand_b_fpx1) ^ (operand_a_fpx1.sign || operand_b_fpx1.sign);

  /* FPX1 --> FPX2 Sync Stage */
  logic                  [1:0][WIDTH-1:0] operands_fpx2;  // 2 operands
  logic                  [1:0]            is_boxed_fpx2;  // 2 operands
  fpnew_pkg::roundmode_e                  rnd_mode_fpx2;
  fpnew_pkg::operation_e                  op_fpx2;
  logic                                   op_mod_fpx2;
  TagType                                 tag_fpx2;
  AuxType                                 aux_fpx2;
  logic                                   in_valid_fpx2;
  fp_t operand_a_fpx2, operand_b_fpx2;
  fpnew_pkg::fp_info_t info_a_fpx2, info_b_fpx2;
  logic any_operand_inf_fpx2;
  logic any_operand_nan_fpx2;
  logic signalling_nan_fpx2;
  logic operands_equal_fpx2, operand_a_smaller_fpx2;

  `FFNR({
        operands_fpx2,
        is_boxed_fpx2,
        rnd_mode_fpx2,
        op_fpx2,
        op_mod_fpx2,
        tag_fpx2,
        aux_fpx2,
        in_valid_fpx2,
        operand_a_fpx2,
        operand_b_fpx2,
        info_a_fpx2,
        info_b_fpx2,
        any_operand_inf_fpx2,
        any_operand_nan_fpx2,
        signalling_nan_fpx2,
        operands_equal_fpx2,
        operand_a_smaller_fpx2
        }, {
        operands_fpx1,
        is_boxed_fpx1,
        rnd_mode_fpx1,
        op_fpx1,
        op_mod_fpx1,
        tag_fpx1,
        aux_fpx1,
        in_valid_fpx1,
        operand_a_fpx1,
        operand_b_fpx1,
        info_a_fpx1,
        info_b_fpx1,
        any_operand_inf_fpx1,
        any_operand_nan_fpx1,
        signalling_nan_fpx1,
        operands_equal_fpx1,
        operand_a_smaller_fpx1
        }, clk_i);


  // ---------------
  // Sign Injection
  // ---------------
  fp_t                sgnj_result_fpx2;
  fpnew_pkg::status_t sgnj_status_fpx2;
  logic               sgnj_extension_bit_fpx2;

  // Sign Injection - operation is encoded in rnd_mode_q:
  // RNE = SGNJ, RTZ = SGNJN, RDN = SGNJX, RUP = Passthrough (no NaN-box check)
  always_comb begin : sign_injections
    logic sign_a_fpx2, sign_b_fpx2;  // internal signs
    // Default assignment
    sgnj_result_fpx2 = operand_a_fpx2;  // result based on operand a

    // NaN-boxing check will treat invalid inputs as canonical NaNs
    if (!info_a_fpx2.is_boxed)
      sgnj_result_fpx2 = '{sign: 1'b0, exponent: '1, mantissa: 2 ** (MAN_BITS - 1)};

    // Internal signs are treated as positive in case of non-NaN-boxed values
    sign_a_fpx2 = operand_a_fpx2.sign & info_a_fpx2.is_boxed;
    sign_b_fpx2 = operand_b_fpx2.sign & info_b_fpx2.is_boxed;

    // Do the sign injection based on rm field
    unique case (rnd_mode_fpx2)
      fpnew_pkg::RNE: sgnj_result_fpx2.sign = sign_b_fpx2;  // SGNJ
      fpnew_pkg::RTZ: sgnj_result_fpx2.sign = ~sign_b_fpx2;  // SGNJN
      fpnew_pkg::RDN: sgnj_result_fpx2.sign = sign_a_fpx2 ^ sign_b_fpx2;  // SGNJX
      fpnew_pkg::RUP: sgnj_result_fpx2 = operand_a_fpx2;  // passthrough
      default:        sgnj_result_fpx2 = '{default: fpnew_pkg::DONT_CARE};  // don't care
    endcase
  end

  assign sgnj_status_fpx2        = '0;  // sign injections never raise exceptions

  // op_mod_q enables integer sign-extension of result (for storing to integer regfile)
  assign sgnj_extension_bit_fpx2 = op_mod_fpx2 ? sgnj_result_fpx2.sign : 1'b1;

  // ------------------
  // Minimum / Maximum
  // ------------------
  fp_t                minmax_result_fpx2;
  fpnew_pkg::status_t minmax_status_fpx2;
  logic               minmax_extension_bit_fpx2;

  // Minimum/Maximum - operation is encoded in rnd_mode_q:
  // RNE = MIN, RTZ = MAX
  always_comb begin : min_max
    // Default assignment
    minmax_status_fpx2 = '0;

    // Min/Max use quiet comparisons - only sNaN are invalid
    minmax_status_fpx2.NV = signalling_nan_fpx2;

    // Both NaN inputs cause a NaN output
    if (info_a_fpx2.is_nan && info_b_fpx2.is_nan)
      minmax_result_fpx2 = '{
          sign: 1'b0,
          exponent: '1,
          mantissa: 2 ** (MAN_BITS - 1)
      };  // canonical qNaN
    // If one operand is NaN, the non-NaN operand is returned    else
    if (info_a_fpx2.is_nan) minmax_result_fpx2 = operand_b_fpx2;
    else if (info_b_fpx2.is_nan) minmax_result_fpx2 = operand_a_fpx2;
    // Otherwise decide according to the operation    else
    begin
      unique case (rnd_mode_fpx2)
        fpnew_pkg::RNE:
        minmax_result_fpx2 = operand_a_smaller_fpx2 ? operand_a_fpx2 : operand_b_fpx2;  // MIN
        fpnew_pkg::RTZ:
        minmax_result_fpx2 = operand_a_smaller_fpx2 ? operand_b_fpx2 : operand_a_fpx2;  // MAX
        default: minmax_result_fpx2 = '{default: fpnew_pkg::DONT_CARE};  // don't care
      endcase
    end
  end

  assign minmax_extension_bit_fpx2 = 1'b1;  // NaN-box as result is always a float value

  // ------------
  // Comparisons
  // ------------
  fp_t                cmp_result_fpx2;
  fpnew_pkg::status_t cmp_status_fpx2;
  logic               cmp_extension_bit_fpx2;

  // Comparisons - operation is encoded in rnd_mode_q:
  // RNE = LE, RTZ = LT, RDN = EQ
  // op_mod_q inverts boolean outputs
  always_comb begin : comparisons
    // Default assignment
    cmp_result_fpx2 = '0;  // false
    cmp_status_fpx2 = '0;  // no flags

    // Signalling NaNs always compare as false and are illegal
    if (signalling_nan_fpx2) cmp_status_fpx2.NV = 1'b1;  // invalid operation
    // Otherwise do comparisons    else
    begin
      unique case (rnd_mode_fpx2)
        fpnew_pkg::RNE: begin  // Less than or equal
          if (any_operand_nan_fpx2)
            cmp_status_fpx2.NV = 1'b1;  // Signalling comparison: NaNs are invalid
          else cmp_result_fpx2 = (operand_a_smaller_fpx2 | operands_equal_fpx2) ^ op_mod_fpx2;
        end
        fpnew_pkg::RTZ: begin  // Less than
          if (any_operand_nan_fpx2)
            cmp_status_fpx2.NV = 1'b1;  // Signalling comparison: NaNs are invalid
          else cmp_result_fpx2 = (operand_a_smaller_fpx2 & ~operands_equal_fpx2) ^ op_mod_fpx2;
        end
        fpnew_pkg::RDN: begin  // Equal
          if (any_operand_nan_fpx2) cmp_result_fpx2 = op_mod_fpx2;  // NaN always not equal
          else cmp_result_fpx2 = operands_equal_fpx2 ^ op_mod_fpx2;
        end
        default: cmp_result_fpx2 = '{default: fpnew_pkg::DONT_CARE};  // don't care
      endcase
    end
  end

  assign cmp_extension_bit_fpx2 = 1'b0;  // Comparisons always produce booleans in integer registers

  /* FPX2 --> FPX3 Sync Stage */
  logic                  [1:0][WIDTH-1:0] operands_fpx3;  // 2 operands
  logic                  [1:0]            is_boxed_fpx3;  // 2 operands
  fpnew_pkg::roundmode_e                  rnd_mode_fpx3;
  fpnew_pkg::operation_e                  op_fpx3;
  logic                                   op_mod_fpx3;
  TagType                                 tag_fpx3;
  AuxType                                 aux_fpx3;
  logic                                   in_valid_fpx3;
  fp_t operand_a_fpx3, operand_b_fpx3;
  fpnew_pkg::fp_info_t info_a_fpx3, info_b_fpx3;
  logic any_operand_inf_fpx3;
  logic any_operand_nan_fpx3;
  logic signalling_nan_fpx3;
  logic operands_equal_fpx3, operand_a_smaller_fpx3;
  fp_t                sgnj_result_fpx3;
  fpnew_pkg::status_t sgnj_status_fpx3;
  logic               sgnj_extension_bit_fpx3;
  fp_t                minmax_result_fpx3;
  fpnew_pkg::status_t minmax_status_fpx3;
  logic               minmax_extension_bit_fpx3;
  fp_t                cmp_result_fpx3;
  fpnew_pkg::status_t cmp_status_fpx3;
  logic               cmp_extension_bit_fpx3;

  `FFNR({
        operands_fpx3,
        is_boxed_fpx3,
        rnd_mode_fpx3,
        op_fpx3,
        op_mod_fpx3,
        tag_fpx3,
        aux_fpx3,
        in_valid_fpx3,
        operand_a_fpx3,
        operand_b_fpx3,
        info_a_fpx3,
        info_b_fpx3,
        any_operand_inf_fpx3,
        any_operand_nan_fpx3,
        signalling_nan_fpx3,
        operands_equal_fpx3,
        operand_a_smaller_fpx3,
        sgnj_result_fpx3,
        sgnj_status_fpx3,
        sgnj_extension_bit_fpx3,
        minmax_result_fpx3,
        minmax_status_fpx3,
        minmax_extension_bit_fpx3,
        cmp_result_fpx3,
        cmp_status_fpx3,
        cmp_extension_bit_fpx3
        }, {
        operands_fpx2,
        is_boxed_fpx2,
        rnd_mode_fpx2,
        op_fpx2,
        op_mod_fpx2,
        tag_fpx2,
        aux_fpx2,
        in_valid_fpx2,
        operand_a_fpx2,
        operand_b_fpx2,
        info_a_fpx2,
        info_b_fpx2,
        any_operand_inf_fpx2,
        any_operand_nan_fpx2,
        signalling_nan_fpx2,
        operands_equal_fpx2,
        operand_a_smaller_fpx2,
        sgnj_result_fpx2,
        sgnj_status_fpx2,
        sgnj_extension_bit_fpx2,
        minmax_result_fpx2,
        minmax_status_fpx2,
        minmax_extension_bit_fpx2,
        cmp_result_fpx2,
        cmp_status_fpx2,
        cmp_extension_bit_fpx2
        }, clk_i)

  // ---------------
  // Classification
  // ---------------
  fpnew_pkg::status_t    class_status_fpx3;
  logic                  class_extension_bit_fpx3;
  fpnew_pkg::classmask_e class_mask_d_fpx3;  // the result is actually here

  // Classification - always return the classification mask on the dedicated port
  always_comb begin : classify
    if (info_a_fpx3.is_normal) begin
      class_mask_d_fpx3 = operand_a_fpx3.sign ? fpnew_pkg::NEGNORM : fpnew_pkg::POSNORM;
    end else if (info_a_fpx3.is_subnormal) begin
      class_mask_d_fpx3 = operand_a_fpx3.sign ? fpnew_pkg::NEGSUBNORM : fpnew_pkg::POSSUBNORM;
    end else if (info_a_fpx3.is_zero) begin
      class_mask_d_fpx3 = operand_a_fpx3.sign ? fpnew_pkg::NEGZERO : fpnew_pkg::POSZERO;
    end else if (info_a_fpx3.is_inf) begin
      class_mask_d_fpx3 = operand_a_fpx3.sign ? fpnew_pkg::NEGINF : fpnew_pkg::POSINF;
    end else if (info_a_fpx3.is_nan) begin
      class_mask_d_fpx3 = info_a_fpx3.is_signalling ? fpnew_pkg::SNAN : fpnew_pkg::QNAN;
    end else begin
      class_mask_d_fpx3 = fpnew_pkg::QNAN;  // default value
    end
  end

  assign class_status_fpx3 = '0;  // classification does not set flags
  assign class_extension_bit_fpx3 = 1'b0;  // classification always produces results in integer registers

  /* FPX3 --> FPX4 Sync Stage */
  logic                  [1:0][WIDTH-1:0] operands_fpx4;  // 2 operands
  logic                  [1:0]            is_boxed_fpx4;  // 2 operands
  fpnew_pkg::roundmode_e                  rnd_mode_fpx4;
  fpnew_pkg::operation_e                  op_fpx4;
  logic                                   op_mod_fpx4;
  TagType                                 tag_fpx4;
  AuxType                                 aux_fpx4;
  logic                                   in_valid_fpx4;
  fp_t operand_a_fpx4, operand_b_fpx4;
  fpnew_pkg::fp_info_t info_a_fpx4, info_b_fpx4;
  logic any_operand_inf_fpx4;
  logic any_operand_nan_fpx4;
  logic signalling_nan_fpx4;
  logic operands_equal_fpx4, operand_a_smaller_fpx4;
  fp_t                   sgnj_result_fpx4;
  fpnew_pkg::status_t    sgnj_status_fpx4;
  logic                  sgnj_extension_bit_fpx4;
  fp_t                   minmax_result_fpx4;
  fpnew_pkg::status_t    minmax_status_fpx4;
  logic                  minmax_extension_bit_fpx4;
  fp_t                   cmp_result_fpx4;
  fpnew_pkg::status_t    cmp_status_fpx4;
  logic                  cmp_extension_bit_fpx4;
  fpnew_pkg::status_t    class_status_fpx4;
  logic                  class_extension_bit_fpx4;
  fpnew_pkg::classmask_e class_mask_d_fpx4;  // the result is actually here

  `FFNR({
        operands_fpx4,  // 2 operands
        is_boxed_fpx4,  // 2 operands
        rnd_mode_fpx4,
        op_fpx4,
        op_mod_fpx4,
        tag_fpx4,
        aux_fpx4,
        in_valid_fpx4,
        operand_a_fpx4,
        operand_b_fpx4,
        info_a_fpx4,
        info_b_fpx4,
        any_operand_inf_fpx4,
        any_operand_nan_fpx4,
        signalling_nan_fpx4,
        operands_equal_fpx4,
        operand_a_smaller_fpx4,
        sgnj_result_fpx4,
        sgnj_status_fpx4,
        sgnj_extension_bit_fpx4,
        minmax_result_fpx4,
        minmax_status_fpx4,
        minmax_extension_bit_fpx4,
        cmp_result_fpx4,
        cmp_status_fpx4,
        cmp_extension_bit_fpx4,
        class_status_fpx4,
        class_extension_bit_fpx4,
        class_mask_d_fpx4
        },  // the result is actually here
        {
        operands_fpx3,  // 2 operands
        is_boxed_fpx3,  // 2 operands
        rnd_mode_fpx3,
        op_fpx3,
        op_mod_fpx3,
        tag_fpx3,
        aux_fpx3,
        in_valid_fpx3,
        operand_a_fpx3,
        operand_b_fpx3,
        info_a_fpx3,
        info_b_fpx3,
        any_operand_inf_fpx3,
        any_operand_nan_fpx3,
        signalling_nan_fpx3,
        operands_equal_fpx3,
        operand_a_smaller_fpx3,
        sgnj_result_fpx3,
        sgnj_status_fpx3,
        sgnj_extension_bit_fpx3,
        minmax_result_fpx3,
        minmax_status_fpx3,
        minmax_extension_bit_fpx3,
        cmp_result_fpx3,
        cmp_status_fpx3,
        cmp_extension_bit_fpx3,
        class_status_fpx3,
        class_extension_bit_fpx3,
        class_mask_d_fpx3
        },  // the result is actually here
        clk_i)

  // -----------------
  // Result selection
  // -----------------
  fp_t                result_d_fpx4;
  fpnew_pkg::status_t status_d_fpx4;
  logic               extension_bit_d_fpx4;
  logic               is_class_d_fpx4;

  // Select result
  always_comb begin : select_result
    unique case (op_i)
      fpnew_pkg::SGNJ: begin
        result_d_fpx4        = sgnj_result_fpx4;
        status_d_fpx4        = sgnj_status_fpx4;
        extension_bit_d_fpx4 = sgnj_extension_bit_fpx4;
      end
      fpnew_pkg::MINMAX: begin
        result_d_fpx4        = minmax_result_fpx4;
        status_d_fpx4        = minmax_status_fpx4;
        extension_bit_d_fpx4 = minmax_extension_bit_fpx4;
      end
      fpnew_pkg::CMP: begin
        result_d_fpx4        = cmp_result_fpx4;
        status_d_fpx4        = cmp_status_fpx4;
        extension_bit_d_fpx4 = cmp_extension_bit_fpx4;
      end
      fpnew_pkg::CLASSIFY: begin
        result_d_fpx4        = '{default: fpnew_pkg::DONT_CARE};  // unused
        status_d_fpx4        = class_status_fpx4;
        extension_bit_d_fpx4 = class_extension_bit_fpx4;
      end
      default: begin
        result_d_fpx4        = '{default: fpnew_pkg::DONT_CARE};  // dont care
        status_d_fpx4        = '{default: fpnew_pkg::DONT_CARE};  // dont care
        extension_bit_d_fpx4 = fpnew_pkg::DONT_CARE;  // dont care
      end
    endcase
  end

  assign is_class_d_fpx4      = (op_fpx4 == fpnew_pkg::CLASSIFY);


  assign in_ready_o      = 'b1;

  // Output stage: assign module outputs
  assign result_o        = result_d_fpx4;
  assign status_o        = status_d_fpx4;
  assign extension_bit_o = extension_bit_d_fpx4;
  assign class_mask_o    = class_mask_d_fpx4;
  assign is_class_o      = is_class_d_fpx4;
  assign tag_o           = tag_fpx4;
  assign aux_o           = aux_fpx4;
  assign out_valid_o     = in_valid_fpx4;
  //assign busy_o          = (| {inp_pipe_valid_q, out_pipe_valid_q});
  assign busy_o          = 'b0;
endmodule
