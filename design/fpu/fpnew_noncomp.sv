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
    parameter fpnew_pkg::fp_format_e FpFormat = fpnew_pkg::fp_format_e'(0),
    parameter type                   TagType  = logic,
    parameter type                   AuxType  = logic,

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


  `FFNR({
        operands_fpx1,
        is_boxed_fpx1,
        rnd_mode_fpx1,
        op_fpx1,
        op_mod_fpx1,
        tag_fpx1,
        aux_fpx1,
        in_valid_fpx1
        }, {operands_i, is_boxed_i, rnd_mode_i, op_i, op_mod_i, tag_i, aux_i, in_valid_i}, clk_i)
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


  // ---------------
  // Sign Injection
  // ---------------
  fp_t                sgnj_result_fpx1;
  fpnew_pkg::status_t sgnj_status_fpx1;
  logic               sgnj_extension_bit_fpx1;

  // Sign Injection - operation is encoded in rnd_mode_q:
  // RNE = SGNJ, RTZ = SGNJN, RDN = SGNJX, RUP = Passthrough (no NaN-box check)
  always_comb begin : sign_injections
    logic sign_a_fpx1, sign_b_fpx1;  // internal signs
    // Default assignment
    sgnj_result_fpx1 = operand_a_fpx1;  // result based on operand a

    // NaN-boxing check will treat invalid inputs as canonical NaNs
    if (!info_a_fpx1.is_boxed)
      sgnj_result_fpx1 = '{sign: 1'b0, exponent: '1, mantissa: 2 ** (MAN_BITS - 1)};

    // Internal signs are treated as positive in case of non-NaN-boxed values
    sign_a_fpx1 = operand_a_fpx1.sign & info_a_fpx1.is_boxed;
    sign_b_fpx1 = operand_b_fpx1.sign & info_b_fpx1.is_boxed;

    // Do the sign injection based on rm field
    unique case (rnd_mode_fpx1)
      fpnew_pkg::RNE: sgnj_result_fpx1.sign = sign_b_fpx1;  // SGNJ
      fpnew_pkg::RTZ: sgnj_result_fpx1.sign = ~sign_b_fpx1;  // SGNJN
      fpnew_pkg::RDN: sgnj_result_fpx1.sign = sign_a_fpx1 ^ sign_b_fpx1;  // SGNJX
      fpnew_pkg::RUP: sgnj_result_fpx1 = operand_a_fpx1;  // passthrough
      default:        sgnj_result_fpx1 = '{default: fpnew_pkg::DONT_CARE};  // don't care
    endcase
  end

  assign sgnj_status_fpx1        = '0;  // sign injections never raise exceptions

  // op_mod_q enables integer sign-extension of result (for storing to integer regfile)
  assign sgnj_extension_bit_fpx1 = op_mod_fpx1 ? sgnj_result_fpx1.sign : 1'b1;

  // ------------------
  // Minimum / Maximum
  // ------------------
  fp_t                minmax_result_fpx1;
  fpnew_pkg::status_t minmax_status_fpx1;
  logic               minmax_extension_bit_fpx1;

  // Minimum/Maximum - operation is encoded in rnd_mode_q:
  // RNE = MIN, RTZ = MAX
  always_comb begin : min_max
    // Default assignment
    minmax_status_fpx1 = '0;

    // Min/Max use quiet comparisons - only sNaN are invalid
    minmax_status_fpx1.NV = signalling_nan_fpx1;

    // Both NaN inputs cause a NaN output
    if (info_a_fpx1.is_nan && info_b_fpx1.is_nan)
      minmax_result_fpx1 = '{
          sign: 1'b0,
          exponent: '1,
          mantissa: 2 ** (MAN_BITS - 1)
      };  // canonical qNaN
    // If one operand is NaN, the non-NaN operand is returned    else
    if (info_a_fpx1.is_nan) minmax_result_fpx1 = operand_b_fpx1;
    else if (info_b_fpx1.is_nan) minmax_result_fpx1 = operand_a_fpx1;
    // Otherwise decide according to the operation    else
    begin
      unique case (rnd_mode_fpx1)
        fpnew_pkg::RNE:
        minmax_result_fpx1 = operand_a_smaller_fpx1 ? operand_a_fpx1 : operand_b_fpx1;  // MIN
        fpnew_pkg::RTZ:
        minmax_result_fpx1 = operand_a_smaller_fpx1 ? operand_b_fpx1 : operand_a_fpx1;  // MAX
        default: minmax_result_fpx1 = '{default: fpnew_pkg::DONT_CARE};  // don't care
      endcase
    end
  end

  assign minmax_extension_bit_fpx1 = 1'b1;  // NaN-box as result is always a float value

  // ------------
  // Comparisons
  // ------------
  fp_t                cmp_result_fpx1;
  fpnew_pkg::status_t cmp_status_fpx1;
  logic               cmp_extension_bit_fpx1;

  // Comparisons - operation is encoded in rnd_mode_q:
  // RNE = LE, RTZ = LT, RDN = EQ
  // op_mod_q inverts boolean outputs
  always_comb begin : comparisons
    // Default assignment
    cmp_result_fpx1 = '0;  // false
    cmp_status_fpx1 = '0;  // no flags

    // Signalling NaNs always compare as false and are illegal
    if (signalling_nan_fpx1) cmp_status_fpx1.NV = 1'b1;  // invalid operation
    // Otherwise do comparisons    else
    begin
      unique case (rnd_mode_fpx1)
        fpnew_pkg::RNE: begin  // Less than or equal
          if (any_operand_nan_fpx1)
            cmp_status_fpx1.NV = 1'b1;  // Signalling comparison: NaNs are invalid
          else cmp_result_fpx1 = (operand_a_smaller_fpx1 | operands_equal_fpx1) ^ op_mod_fpx1;
        end
        fpnew_pkg::RTZ: begin  // Less than
          if (any_operand_nan_fpx1)
            cmp_status_fpx1.NV = 1'b1;  // Signalling comparison: NaNs are invalid
          else cmp_result_fpx1 = (operand_a_smaller_fpx1 & ~operands_equal_fpx1) ^ op_mod_fpx1;
        end
        fpnew_pkg::RDN: begin  // Equal
          if (any_operand_nan_fpx1) cmp_result_fpx1 = op_mod_fpx1;  // NaN always not equal
          else cmp_result_fpx1 = operands_equal_fpx1 ^ op_mod_fpx1;
        end
        default: cmp_result_fpx1 = '{default: fpnew_pkg::DONT_CARE};  // don't care
      endcase
    end
  end

  assign cmp_extension_bit_fpx1 = 1'b0;  // Comparisons always produce booleans in integer registers

  // ---------------
  // Classification
  // ---------------
  fpnew_pkg::status_t    class_status_fpx1;
  logic                  class_extension_bit_fpx1;
  fpnew_pkg::classmask_e class_mask_d_fpx1;  // the result is actually here

  // Classification - always return the classification mask on the dedicated port
  always_comb begin : classify
    if (info_a_fpx1.is_normal) begin
      class_mask_d_fpx1 = operand_a_fpx1.sign ? fpnew_pkg::NEGNORM : fpnew_pkg::POSNORM;
    end else if (info_a_fpx1.is_subnormal) begin
      class_mask_d_fpx1 = operand_a_fpx1.sign ? fpnew_pkg::NEGSUBNORM : fpnew_pkg::POSSUBNORM;
    end else if (info_a_fpx1.is_zero) begin
      class_mask_d_fpx1 = operand_a_fpx1.sign ? fpnew_pkg::NEGZERO : fpnew_pkg::POSZERO;
    end else if (info_a_fpx1.is_inf) begin
      class_mask_d_fpx1 = operand_a_fpx1.sign ? fpnew_pkg::NEGINF : fpnew_pkg::POSINF;
    end else if (info_a_fpx1.is_nan) begin
      class_mask_d_fpx1 = info_a_fpx1.is_signalling ? fpnew_pkg::SNAN : fpnew_pkg::QNAN;
    end else begin
      class_mask_d_fpx1 = fpnew_pkg::QNAN;  // default value
    end
  end

  assign class_status_fpx1 = '0;  // classification does not set flags
  assign class_extension_bit_fpx1 = 1'b0;  // classification always produces results in integer registers

  // -----------------
  // Result selection
  // -----------------
  fp_t                result_d_fpx1;
  fpnew_pkg::status_t status_d_fpx1;
  logic               extension_bit_d_fpx1;
  logic               is_class_d_fpx1;

  // Select result
  always_comb begin : select_result
    unique case (op_i)
      fpnew_pkg::SGNJ: begin
        result_d_fpx1        = sgnj_result_fpx1;
        status_d_fpx1        = sgnj_status_fpx1;
        extension_bit_d_fpx1 = sgnj_extension_bit_fpx1;
      end
      fpnew_pkg::MINMAX: begin
        result_d_fpx1        = minmax_result_fpx1;
        status_d_fpx1        = minmax_status_fpx1;
        extension_bit_d_fpx1 = minmax_extension_bit_fpx1;
      end
      fpnew_pkg::CMP: begin
        result_d_fpx1        = cmp_result_fpx1;
        status_d_fpx1        = cmp_status_fpx1;
        extension_bit_d_fpx1 = cmp_extension_bit_fpx1;
      end
      fpnew_pkg::CLASSIFY: begin
        result_d_fpx1        = '{default: fpnew_pkg::DONT_CARE};  // unused
        status_d_fpx1        = class_status_fpx1;
        extension_bit_d_fpx1 = class_extension_bit_fpx1;
      end
      default: begin
        result_d_fpx1        = '{default: fpnew_pkg::DONT_CARE};  // dont care
        status_d_fpx1        = '{default: fpnew_pkg::DONT_CARE};  // dont care
        extension_bit_d_fpx1 = fpnew_pkg::DONT_CARE;  // dont care
      end
    endcase
  end

  assign is_class_d_fpx1 = (op_fpx1 == fpnew_pkg::CLASSIFY);


  assign in_ready_o      = 'b1;

  // Output stage: assign module outputs
  assign result_o        = result_d_fpx1;
  assign status_o        = status_d_fpx1;
  assign extension_bit_o = extension_bit_d_fpx1;
  assign class_mask_o    = class_mask_d_fpx1;
  assign is_class_o      = is_class_d_fpx1;
  assign tag_o           = tag_fpx1;
  assign aux_o           = aux_fpx1;
  assign out_valid_o     = in_valid_fpx1;
  //assign busy_o          = (| {inp_pipe_valid_q, out_pipe_valid_q});
  assign busy_o          = 'b0;
endmodule
