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

module fpnew_cast_multi #(
    parameter  fpnew_pkg::fmt_logic_t   FpFmtConfig  = '1,
    parameter  fpnew_pkg::ifmt_logic_t  IntFmtConfig = '1,
    // FPU configuration
    parameter  int unsigned             NumPipeRegs  = 0,
    parameter  fpnew_pkg::pipe_config_t PipeConfig   = fpnew_pkg::BEFORE,
    parameter  type                     TagType      = logic,
    parameter  type                     AuxType      = logic,
    // Do not change
    //localparam int unsigned WIDTH = fpnew_pkg::maximum(fpnew_pkg::max_fp_width(FpFmtConfig),
    //                                                   fpnew_pkg::max_int_width(IntFmtConfig)),
    localparam int unsigned             WIDTH        = 32,
    localparam int unsigned             NUM_FORMATS  = fpnew_pkg::NUM_FP_FORMATS
) (
    input  logic                                     clk_i,
    input  logic                                     rst_ni,
    // Input signals
    input  logic                   [      WIDTH-1:0] operands_i,       // 1 operand
    input  logic                   [NUM_FORMATS-1:0] is_boxed_i,       // 1 operand
    input  fpnew_pkg::roundmode_e                    rnd_mode_i,
    input  fpnew_pkg::operation_e                    op_i,
    input  logic                                     op_mod_i,
    input  fpnew_pkg::fp_format_e                    src_fmt_i,
    input  fpnew_pkg::fp_format_e                    dst_fmt_i,
    input  fpnew_pkg::int_format_e                   int_fmt_i,
    input  TagType                                   tag_i,
    input  AuxType                                   aux_i,
    // Input Handshake
    input  logic                                     in_valid_i,
    output logic                                     in_ready_o,
    input  logic                                     flush_i,
    // Output signals
    output logic                   [      WIDTH-1:0] result_o,
    output fpnew_pkg::status_t                       status_o,
    output logic                                     extension_bit_o,
    output TagType                                   tag_o,
    output AuxType                                   aux_o,
    // Output handshake
    output logic                                     out_valid_o,
    input  logic                                     out_ready_i,
    // Indication of valid data in flight
    output logic                                     busy_o
);

  // ----------
  // Constants
  // ----------
  localparam int unsigned NUM_INT_FORMATS = fpnew_pkg::NUM_INT_FORMATS;
  localparam int unsigned MAX_INT_WIDTH = fpnew_pkg::max_int_width(IntFmtConfig);

  localparam fpnew_pkg::fp_encoding_t SUPER_FORMAT = fpnew_pkg::super_format(FpFmtConfig);

  localparam int unsigned SUPER_EXP_BITS = SUPER_FORMAT.exp_bits;
  localparam int unsigned SUPER_MAN_BITS = SUPER_FORMAT.man_bits;
  localparam int unsigned SUPER_BIAS = 2 ** (SUPER_EXP_BITS - 1) - 1;

  // The internal mantissa includes normal bit or an entire integer
  localparam int unsigned INT_MAN_WIDTH = fpnew_pkg::maximum(SUPER_MAN_BITS + 1, MAX_INT_WIDTH);
  // If needed, there will be a LZC for renormalization
  localparam int unsigned LZC_RESULT_WIDTH = $clog2(INT_MAN_WIDTH);
  // The internal exponent must be able to represent the smallest denormal input value as signed
  // or the number of bits in an integer
  localparam int unsigned INT_EXP_WIDTH = fpnew_pkg::maximum(
      $clog2(MAX_INT_WIDTH), fpnew_pkg::maximum(SUPER_EXP_BITS, $clog2(SUPER_BIAS + SUPER_MAN_BITS))
  ) + 1;

  logic                   [      WIDTH-1:0] operands_fpx1;  // 1 operand
  logic                   [NUM_FORMATS-1:0] is_boxed_fpx1;  // 1 operand
  fpnew_pkg::roundmode_e                    rnd_mode_fpx1;
  fpnew_pkg::operation_e                    op_fpx1;
  logic                                     op_mod_fpx1;
  fpnew_pkg::fp_format_e                    src_fmt_fpx1;
  fpnew_pkg::fp_format_e                    dst_fmt_fpx1;
  fpnew_pkg::int_format_e                   int_fmt_fpx1;
  TagType                                   tag_fpx1;
  AuxType                                   aux_fpx1;
  logic                                     in_valid_fpx1;

  assign in_ready_o = out_ready_i;

  `FFNR({
        operands_fpx1,
        is_boxed_fpx1,
        rnd_mode_fpx1,
        op_fpx1,
        op_mod_fpx1,
        src_fmt_fpx1,
        dst_fmt_fpx1,
        int_fmt_fpx1,
        tag_fpx1,
        aux_fpx1,
        in_valid_fpx1
        }, {
        operands_i,
        is_boxed_i,
        rnd_mode_i,
        op_i,
        op_mod_i,
        src_fmt_i,
        dst_fmt_i,
        int_fmt_i,
        tag_i,
        aux_i,
        in_valid_i
        }, clk_i)


  // -----------------
  // Input processing
  // -----------------
  logic src_is_int_fpx1, dst_is_int_fpx1;  // if 0, it's a float

  assign src_is_int_fpx1 = (op_fpx1 == fpnew_pkg::I2F);
  assign dst_is_int_fpx1 = (op_fpx1 == fpnew_pkg::F2I);

  logic [INT_MAN_WIDTH-1:0] encoded_mant_fpx1;  // input mantissa with implicit bit

  logic [NUM_FORMATS-1:0] fmt_sign_fpx1;
  logic signed [NUM_FORMATS-1:0][INT_EXP_WIDTH-1:0] fmt_exponent_fpx1;
  logic [NUM_FORMATS-1:0][INT_MAN_WIDTH-1:0] fmt_mantissa_fpx1;
  logic signed [NUM_FORMATS-1:0][INT_EXP_WIDTH-1:0] fmt_shift_compensation_fpx1;  // for LZC

  fpnew_pkg::fp_info_t [NUM_FORMATS-1:0] info_fpx1;

  logic [NUM_INT_FORMATS-1:0][INT_MAN_WIDTH-1:0] ifmt_input_val_fpx1;
  logic int_sign_fpx1;
  logic [INT_MAN_WIDTH-1:0] int_value_fpx1, int_mantissa_fpx1;

  // FP Input initialization
  for (genvar fmt = 0; fmt < int'(NUM_FORMATS); fmt++) begin : fmt_init_inputs
    // Set up some constants
    localparam int unsigned FP_WIDTH = fpnew_pkg::fp_width(fpnew_pkg::fp_format_e'(fmt));
    localparam int unsigned EXP_BITS = fpnew_pkg::exp_bits(fpnew_pkg::fp_format_e'(fmt));
    localparam int unsigned MAN_BITS = fpnew_pkg::man_bits(fpnew_pkg::fp_format_e'(fmt));

    if (FpFmtConfig[fmt]) begin : active_format
      // Classify input
      fpnew_classifier #(
          .FpFormat   (fpnew_pkg::fp_format_e'(fmt)),
          .NumOperands(1)
      ) i_fpnew_classifier (
          .operands_i(operands_fpx1[FP_WIDTH-1:0]),
          .is_boxed_i(is_boxed_fpx1[fmt]),
          .info_o    (info_fpx1[fmt])
      );

      assign fmt_sign_fpx1[fmt] = operands_fpx1[FP_WIDTH-1];
      assign fmt_exponent_fpx1[fmt] = signed'({1'b0, operands_fpx1[MAN_BITS+:EXP_BITS]});
      assign fmt_mantissa_fpx1[fmt] = {
        info_fpx1[fmt].is_normal, operands_fpx1[MAN_BITS-1:0]
      };  // zero pad
      // Compensation for the difference in mantissa widths used for leading-zero count
      assign fmt_shift_compensation_fpx1[fmt] = signed'(INT_MAN_WIDTH - 1 - MAN_BITS);
    end else begin : inactive_format
      assign info_fpx1[fmt] = '{default: fpnew_pkg::DONT_CARE};  // format disabled
      assign fmt_sign_fpx1[fmt] = fpnew_pkg::DONT_CARE;  // format disabled
      assign fmt_exponent_fpx1[fmt] = '{default: fpnew_pkg::DONT_CARE};  // format disabled
      assign fmt_mantissa_fpx1[fmt] = '{default: fpnew_pkg::DONT_CARE};  // format disabled
      assign fmt_shift_compensation_fpx1[fmt] = '{
              default: fpnew_pkg::DONT_CARE
          };  // format disabled
    end
  end

  // Sign-extend INT input
  for (genvar ifmt = 0; ifmt < int'(NUM_INT_FORMATS); ifmt++) begin : gen_sign_extend_int
    // Set up some constants
    localparam int unsigned INT_WIDTH = fpnew_pkg::int_width(fpnew_pkg::int_format_e'(ifmt));

    if (IntFmtConfig[ifmt]) begin : active_format  // only active formats
      always_comb begin : sign_ext_input
        // sign-extend value only if it's signed
        ifmt_input_val_fpx1[ifmt] = '{default: operands_fpx1[INT_WIDTH-1] & ~op_mod_fpx1};
        ifmt_input_val_fpx1[ifmt][INT_WIDTH-1:0] = operands_fpx1[INT_WIDTH-1:0];
      end
    end else begin : inactive_format
      assign ifmt_input_val_fpx1[ifmt] = '{default: fpnew_pkg::DONT_CARE};  // format disabled
    end
  end

  // Construct input mantissa from integer
  assign int_value_fpx1 = ifmt_input_val_fpx1[int_fmt_fpx1];
  assign int_sign_fpx1 = int_value_fpx1[INT_MAN_WIDTH-1] & ~op_mod_fpx1;  // only signed ints are negative
  assign int_mantissa_fpx1 = int_sign_fpx1 ? unsigned'(-int_value_fpx1) : int_value_fpx1;  // get magnitude of negative

  // select mantissa with source format
  assign encoded_mant_fpx1 = src_is_int_fpx1 ? int_mantissa_fpx1 : fmt_mantissa_fpx1[src_fmt_fpx1];

  // --------------
  // Normalization
  // --------------
  logic signed [INT_EXP_WIDTH-1:0] src_bias_fpx1;  // src format bias
  logic signed [INT_EXP_WIDTH-1:0] src_exp_fpx1;  // src format exponent (biased)
  logic signed [INT_EXP_WIDTH-1:0] src_subnormal_fpx1;  // src is subnormal
  logic signed [INT_EXP_WIDTH-1:0] src_offset_fpx1;  // src offset within mantissa

  assign src_bias_fpx1      = signed'(fpnew_pkg::bias(src_fmt_fpx1));
  assign src_exp_fpx1       = fmt_exponent_fpx1[src_fmt_fpx1];
  assign src_subnormal_fpx1 = signed'({1'b0, info_fpx1[src_fmt_fpx1].is_subnormal});
  assign src_offset_fpx1    = fmt_shift_compensation_fpx1[src_fmt_fpx1];

  logic                               input_sign_fpx1;  // input sign
  logic signed [   INT_EXP_WIDTH-1:0] input_exp_fpx1;  // unbiased true exponent
  logic        [   INT_MAN_WIDTH-1:0] input_mant_fpx1;  // normalized input mantissa
  logic                               mant_is_zero_fpx1;  // for integer zeroes

  logic signed [   INT_EXP_WIDTH-1:0] fp_input_exp_fpx1;
  logic signed [   INT_EXP_WIDTH-1:0] int_input_exp_fpx1;

  // Input mantissa needs to be normalized
  logic        [LZC_RESULT_WIDTH-1:0] renorm_shamt_fpx1;  // renormalization shift amount
  logic        [  LZC_RESULT_WIDTH:0] renorm_shamt_sgn_fpx1;  // signed form for calculations

  // Leading-zero counter is needed for renormalization
  lzc #(
      .WIDTH(INT_MAN_WIDTH),
      .MODE (1)  // MODE = 1 counts leading zeroes
  ) i_lzc (
      .in_i   (encoded_mant_fpx1),
      .cnt_o  (renorm_shamt_fpx1),
      .empty_o(mant_is_zero_fpx1)
  );
  assign renorm_shamt_sgn_fpx1 = signed'({1'b0, renorm_shamt_fpx1});

  // Get the sign from the proper source
  assign input_sign_fpx1 = src_is_int_fpx1 ? int_sign_fpx1 : fmt_sign_fpx1[src_fmt_fpx1];
  // Realign input mantissa, append zeroes if destination is wider
  assign input_mant_fpx1 = encoded_mant_fpx1 << renorm_shamt_fpx1;
  // Unbias exponent and compensate for shift
  assign fp_input_exp_fpx1  = signed'(src_exp_fpx1 + src_subnormal_fpx1 - src_bias_fpx1 -
                                 renorm_shamt_sgn_fpx1 + src_offset_fpx1); // compensate for shift
  assign int_input_exp_fpx1 = signed'(INT_MAN_WIDTH - 1 - renorm_shamt_sgn_fpx1);

  assign input_exp_fpx1 = src_is_int_fpx1 ? int_input_exp_fpx1 : fp_input_exp_fpx1;

  logic signed [INT_EXP_WIDTH-1:0] destination_exp_fpx1;  // re-biased exponent for destination

  // Rebias the exponent
  assign destination_exp_fpx1 = input_exp_fpx1 + signed'(fpnew_pkg::bias(dst_fmt_fpx1));


  // --------
  // Casting
  // --------
  logic [          INT_EXP_WIDTH-1:0] final_exp_fpx1;  // after eventual adjustments

  logic [          2*INT_MAN_WIDTH:0] preshift_mant_fpx1;  // mantissa before final shift
  logic [          2*INT_MAN_WIDTH:0] destination_mant_fpx1;  // mantissa from shifter, with rnd bit
  logic [         SUPER_MAN_BITS-1:0] final_mant_fpx1;  // mantissa after adjustments
  logic [          MAX_INT_WIDTH-1:0] final_int_fpx1;  // integer shifted in position

  logic [$clog2(INT_MAN_WIDTH+1)-1:0] denorm_shamt_fpx1;  // shift amount for denormalization

  logic [1:0] fp_round_sticky_bits_fpx1, int_round_sticky_bits_fpx1, round_sticky_bits_fpx1;
  logic of_before_round_fpx1, uf_before_round_fpx1;


  // Perform adjustments to mantissa and exponent
  always_comb begin : cast_value
    // Default assignment
    final_exp_fpx1       = unsigned'(destination_exp_fpx1);  // take exponent as is, only look at lower bits
    preshift_mant_fpx1 = '0;  // initialize mantissa container with zeroes
    denorm_shamt_fpx1 = SUPER_MAN_BITS - fpnew_pkg::man_bits(dst_fmt_fpx1);  // right of mantissa
    of_before_round_fpx1 = 1'b0;
    uf_before_round_fpx1 = 1'b0;

    // Place mantissa to the left of the shifter
    preshift_mant_fpx1 = input_mant_fpx1 << (INT_MAN_WIDTH + 1);

    // Handle INT casts
    if (dst_is_int_fpx1) begin
      // By default right shift mantissa to be an integer
      denorm_shamt_fpx1 = unsigned'(MAX_INT_WIDTH - 1 - input_exp_fpx1);
      // overflow: when converting to unsigned the range is larger by one
      if (input_exp_fpx1 >= signed'(fpnew_pkg::int_width(int_fmt_fpx1) - 1 + op_mod_fpx1)) begin
        denorm_shamt_fpx1    = '0; // prevent shifting
        of_before_round_fpx1 = 1'b1;
        // underflow
      end else if (input_exp_fpx1 < -1) begin
        denorm_shamt_fpx1    = MAX_INT_WIDTH + 1; // all bits go to the sticky
        uf_before_round_fpx1 = 1'b1;
      end
      // Handle FP over-/underflows
    end else begin
      // Overflow or infinities (for proper rounding)
      if ((destination_exp_fpx1 >= signed'(2 ** fpnew_pkg::exp_bits(
              dst_fmt_fpx1
          )) - 1) || (~src_is_int_fpx1 && info_fpx1[src_fmt_fpx1].is_inf)) begin
        final_exp_fpx1 =
            unsigned'(2 ** fpnew_pkg::exp_bits(dst_fmt_fpx1) - 2);  // largest normal value
        preshift_mant_fpx1 = '1;  // largest normal value and RS bits set
        of_before_round_fpx1 = 1'b1;
        // Denormalize underflowing values
      end else if (destination_exp_fpx1 < 1 && destination_exp_fpx1 >= -signed'(fpnew_pkg::man_bits(
              dst_fmt_fpx1
          ))) begin
        final_exp_fpx1 = '0;  // denormal result
        denorm_shamt_fpx1    = unsigned'(denorm_shamt_fpx1 + 1 - destination_exp_fpx1);  // adjust right shifting
        uf_before_round_fpx1 = 1'b1;
        // Limit the shift to retain sticky bits
      end else if (destination_exp_fpx1 < -signed'(fpnew_pkg::man_bits(dst_fmt_fpx1))) begin
        final_exp_fpx1 = '0;  // denormal result
        denorm_shamt_fpx1 =
            unsigned'(denorm_shamt_fpx1 + 2 + fpnew_pkg::man_bits(dst_fmt_fpx1));  // to sticky
        uf_before_round_fpx1 = 1'b1;
      end
    end
  end

  localparam NUM_FP_STICKY = 2 * INT_MAN_WIDTH - SUPER_MAN_BITS - 1;  // removed mantissa, 1. and R
  localparam NUM_INT_STICKY = 2 * INT_MAN_WIDTH - MAX_INT_WIDTH;  // removed int and R

  // Mantissa adjustment shift
  assign destination_mant_fpx1 = preshift_mant_fpx1 >> denorm_shamt_fpx1;
  // Extract final mantissa and round bit, discard the normal bit (for FP)
  assign {final_mant_fpx1, fp_round_sticky_bits_fpx1[1]} =
      destination_mant_fpx1[2*INT_MAN_WIDTH-1-:SUPER_MAN_BITS+1];
  assign {final_int_fpx1, int_round_sticky_bits_fpx1[1]} = destination_mant_fpx1[2*INT_MAN_WIDTH-:MAX_INT_WIDTH+1];
  // Collapse sticky bits
  assign fp_round_sticky_bits_fpx1[0] = (|{destination_mant_fpx1[NUM_FP_STICKY-1:0]});
  assign int_round_sticky_bits_fpx1[0] = (|{destination_mant_fpx1[NUM_INT_STICKY-1:0]});

  // select RS bits for destination operation
  assign round_sticky_bits_fpx1 = dst_is_int_fpx1 ? int_round_sticky_bits_fpx1 : fp_round_sticky_bits_fpx1;

  // ----------------------------
  // Rounding and classification
  // ----------------------------
  logic [WIDTH-1:0] pre_round_abs_fpx1;  // absolute value of result before rnd
  logic of_after_round_fpx1;  // overflow
  logic uf_after_round_fpx1;  // underflow

  logic [NUM_FORMATS-1:0][WIDTH-1:0] fmt_pre_round_abs_fpx1;  // per format
  logic [NUM_FORMATS-1:0] fmt_of_after_round_fpx1;
  logic [NUM_FORMATS-1:0] fmt_uf_after_round_fpx1;

  logic [NUM_INT_FORMATS-1:0][WIDTH-1:0] ifmt_pre_round_abs_fpx1;  // per format

  logic rounded_sign_fpx1;
  logic [WIDTH-1:0] rounded_abs_fpx1;  // absolute value of result after rounding
  logic result_true_zero_fpx1;

  logic [WIDTH-1:0] rounded_int_res_fpx1;  // after possible inversion
  logic rounded_int_res_zero_fpx1;  // after rounding


  // Pack exponent and mantissa into proper rounding form
  for (genvar fmt = 0; fmt < int'(NUM_FORMATS); fmt++) begin : gen_res_assemble
    // Set up some constants
    localparam int unsigned EXP_BITS = fpnew_pkg::exp_bits(fpnew_pkg::fp_format_e'(fmt));
    localparam int unsigned MAN_BITS = fpnew_pkg::man_bits(fpnew_pkg::fp_format_e'(fmt));

    if (FpFmtConfig[fmt]) begin : active_format
      always_comb begin : assemble_result
        fmt_pre_round_abs_fpx1[fmt] = {
          final_exp_fpx1[EXP_BITS-1:0], final_mant_fpx1[MAN_BITS-1:0]
        };  // 0-extend
      end
    end else begin : inactive_format
      assign fmt_pre_round_abs_fpx1[fmt] = '{default: fpnew_pkg::DONT_CARE};
    end
  end

  // Sign-extend integer result
  for (genvar ifmt = 0; ifmt < int'(NUM_INT_FORMATS); ifmt++) begin : gen_int_res_sign_ext
    // Set up some constants
    localparam int unsigned INT_WIDTH = fpnew_pkg::int_width(fpnew_pkg::int_format_e'(ifmt));

    if (IntFmtConfig[ifmt]) begin : active_format
      always_comb begin : assemble_result
        // sign-extend reusult
        ifmt_pre_round_abs_fpx1[ifmt]                = '{default: final_int_fpx1[INT_WIDTH-1]};
        ifmt_pre_round_abs_fpx1[ifmt][INT_WIDTH-1:0] = final_int_fpx1[INT_WIDTH-1:0];
      end
    end else begin : inactive_format
      assign ifmt_pre_round_abs_fpx1[ifmt] = '{default: fpnew_pkg::DONT_CARE};
    end
  end

  // Select output with destination format and operation
  assign pre_round_abs_fpx1 = dst_is_int_fpx1 ? ifmt_pre_round_abs_fpx1[int_fmt_fpx1] : fmt_pre_round_abs_fpx1[dst_fmt_fpx1];

  fpnew_rounding #(
      .AbsWidth(WIDTH)
  ) i_fpnew_rounding (
      .abs_value_i            (pre_round_abs_fpx1),
      .sign_i                 (input_sign_fpx1),  // source format
      .round_sticky_bits_i    (round_sticky_bits_fpx1),
      .rnd_mode_i             (rnd_mode_fpx1),
      .effective_subtraction_i(1'b0),  // no operation happened
      .abs_rounded_o          (rounded_abs_fpx1),
      .sign_o                 (rounded_sign_fpx1),
      .exact_zero_o           (result_true_zero_fpx1)
  );

  logic [NUM_FORMATS-1:0][WIDTH-1:0] fmt_result_fpx1;

  // Detect overflows and inject sign
  for (genvar fmt = 0; fmt < int'(NUM_FORMATS); fmt++) begin : gen_sign_inject
    // Set up some constants
    localparam int unsigned FP_WIDTH = fpnew_pkg::fp_width(fpnew_pkg::fp_format_e'(fmt));
    localparam int unsigned EXP_BITS = fpnew_pkg::exp_bits(fpnew_pkg::fp_format_e'(fmt));
    localparam int unsigned MAN_BITS = fpnew_pkg::man_bits(fpnew_pkg::fp_format_e'(fmt));

    if (FpFmtConfig[fmt]) begin : active_format
      always_comb begin : post_process
        // detect of / uf
        fmt_uf_after_round_fpx1[fmt] = rounded_abs_fpx1[EXP_BITS+MAN_BITS-1:MAN_BITS] == '0;  // denormal
        fmt_of_after_round_fpx1[fmt] = rounded_abs_fpx1[EXP_BITS+MAN_BITS-1:MAN_BITS] == '1;  // inf exp.

        // Assemble regular result, nan box short ones. Int zeroes need to be detected`
        fmt_result_fpx1[fmt] = '1;
        fmt_result_fpx1[fmt][FP_WIDTH-1:0] = src_is_int_fpx1 & mant_is_zero_fpx1 ? '0 : {
          rounded_sign_fpx1, rounded_abs_fpx1[EXP_BITS+MAN_BITS-1:0]
        };
      end
    end else begin : inactive_format
      assign fmt_uf_after_round_fpx1[fmt] = fpnew_pkg::DONT_CARE;
      assign fmt_of_after_round_fpx1[fmt] = fpnew_pkg::DONT_CARE;
      assign fmt_result_fpx1[fmt]         = '{default: fpnew_pkg::DONT_CARE};
    end
  end

  // Classification after rounding select by destination format
  assign uf_after_round_fpx1 = fmt_uf_after_round_fpx1[dst_fmt_fpx1];
  assign of_after_round_fpx1 = fmt_of_after_round_fpx1[dst_fmt_fpx1];

  // Negative integer result needs to be brought into two's complement
  assign rounded_int_res_fpx1 = rounded_sign_fpx1 ? unsigned'(-rounded_abs_fpx1) : rounded_abs_fpx1;
  assign rounded_int_res_zero_fpx1 = (rounded_int_res_fpx1 == '0);

  // -------------------------
  // FP Special case handling
  // -------------------------
  logic               [      WIDTH-1:0]            fp_special_result_fpx1;
  fpnew_pkg::status_t                              fp_special_status_fpx1;
  logic                                            fp_result_is_special_fpx1;

  logic               [NUM_FORMATS-1:0][WIDTH-1:0] fmt_special_result_fpx1;

  // Special result construction
  for (genvar fmt = 0; fmt < int'(NUM_FORMATS); fmt++) begin : gen_special_results
    // Set up some constants
    localparam int unsigned FP_WIDTH = fpnew_pkg::fp_width(fpnew_pkg::fp_format_e'(fmt));
    localparam int unsigned EXP_BITS = fpnew_pkg::exp_bits(fpnew_pkg::fp_format_e'(fmt));
    localparam int unsigned MAN_BITS = fpnew_pkg::man_bits(fpnew_pkg::fp_format_e'(fmt));

    localparam logic [EXP_BITS-1:0] QNAN_EXPONENT = '1;
    localparam logic [MAN_BITS-1:0] QNAN_MANTISSA = 2 ** (MAN_BITS - 1);

    if (FpFmtConfig[fmt]) begin : active_format
      always_comb begin : special_results
        logic [FP_WIDTH-1:0] special_res_fpx1;
        special_res_fpx1 = info_fpx1[src_fmt_fpx1].is_zero ? input_sign_fpx1 << FP_WIDTH - 1  // signed zero
        : {
          1'b0, QNAN_EXPONENT, QNAN_MANTISSA
        };  // qNaN

        // Initialize special result with ones (NaN-box)
        fmt_special_result_fpx1[fmt] = '1;
        fmt_special_result_fpx1[fmt][FP_WIDTH-1:0] = special_res_fpx1;
      end
    end else begin : inactive_format
      assign fmt_special_result_fpx1[fmt] = '{default: fpnew_pkg::DONT_CARE};
    end
  end

  // Detect special case from source format, I2F casts don't produce a special result
  assign fp_result_is_special_fpx1 = ~src_is_int_fpx1 & (info_fpx1[src_fmt_fpx1].is_zero | info_fpx1[src_fmt_fpx1].is_nan | ~info_fpx1[src_fmt_fpx1].is_boxed);

  // Signalling input NaNs raise invalid flag, otherwise no flags set
  assign fp_special_status_fpx1 = '{NV: info_fpx1[src_fmt_fpx1].is_signalling, default: 1'b0};

  // Assemble result according to destination format
  assign fp_special_result_fpx1 = fmt_special_result_fpx1[dst_fmt_fpx1];  // destination format

  // --------------------------
  // INT Special case handling
  // --------------------------
  logic               [          WIDTH-1:0]            int_special_result_fpx1;
  fpnew_pkg::status_t                                  int_special_status_fpx1;
  logic                                                int_result_is_special_fpx1;

  logic               [NUM_INT_FORMATS-1:0][WIDTH-1:0] ifmt_special_result_fpx1;

  // Special result construction
  for (genvar ifmt = 0; ifmt < int'(NUM_INT_FORMATS); ifmt++) begin : gen_special_results_int
    // Set up some constants
    localparam int unsigned INT_WIDTH = fpnew_pkg::int_width(fpnew_pkg::int_format_e'(ifmt));

    if (IntFmtConfig[ifmt]) begin : active_format
      always_comb begin : special_results_fpx1
        automatic logic [INT_WIDTH-1:0] special_res_fpx1;

        // Default is overflow to positive max, which is 2**INT_WIDTH-1 or 2**(INT_WIDTH-1)-1
        special_res_fpx1[INT_WIDTH-2:0] = '1;  // alone yields 2**(INT_WIDTH-1)-1
        special_res_fpx1[INT_WIDTH-1]   = op_mod_fpx1;  // for unsigned casts yields 2**INT_WIDTH-1

        // Negative special case (except for nans) tie to -max or 0
        if (input_sign_fpx1 && !info_fpx1[src_fmt_fpx1].is_nan)
          special_res_fpx1 = ~special_res_fpx1;

        // Initialize special result with sign-extension
        ifmt_special_result_fpx1[ifmt]                = '{default: special_res_fpx1[INT_WIDTH-1]};
        ifmt_special_result_fpx1[ifmt][INT_WIDTH-1:0] = special_res_fpx1;
      end
    end else begin : inactive_format
      assign ifmt_special_result_fpx1[ifmt] = '{default: fpnew_pkg::DONT_CARE};
    end
  end

  // Detect special case from source format (inf, nan, overflow, nan-boxing or negative unsigned)
  assign int_result_is_special_fpx1 = info_fpx1[src_fmt_fpx1].is_nan | info_fpx1[src_fmt_fpx1].is_inf |
                                 of_before_round_fpx1 | ~info_fpx1[src_fmt_fpx1].is_boxed |
                                 (input_sign_fpx1 & op_mod_fpx1 & ~rounded_int_res_zero_fpx1);

  // All integer special cases are invalid
  assign int_special_status_fpx1 = '{NV: 1'b1, default: 1'b0};

  // Assemble result according to destination format
  assign int_special_result_fpx1 = ifmt_special_result_fpx1[int_fmt_fpx1];  // destination format

  // -----------------
  // Result selection
  // -----------------
  fpnew_pkg::status_t int_regular_status_fpx1, fp_regular_status_fpx1;

  logic [WIDTH-1:0] fp_result_fpx1, int_result_fpx1;
  fpnew_pkg::status_t fp_status_fpx1, int_status_fpx1;

  assign fp_regular_status_fpx1.NV = src_is_int_fpx1 & (of_before_round_fpx1 | of_after_round_fpx1); // overflow is invalid for I2F casts
  assign fp_regular_status_fpx1.DZ = 1'b0;  // no divisions
  assign fp_regular_status_fpx1.OF = ~src_is_int_fpx1 & (~info_fpx1[src_fmt_fpx1].is_inf & (of_before_round_fpx1 | of_after_round_fpx1)); // inf casts no OF
  assign fp_regular_status_fpx1.UF = uf_after_round_fpx1 & fp_regular_status_fpx1.NX;
  assign fp_regular_status_fpx1.NX = src_is_int_fpx1 ? (| fp_round_sticky_bits_fpx1) // overflow is invalid in i2f
            : (| fp_round_sticky_bits_fpx1) | (~info_fpx1[src_fmt_fpx1].is_inf & (of_before_round_fpx1 | of_after_round_fpx1));
  assign int_regular_status_fpx1 = '{NX: (|int_round_sticky_bits_fpx1), default: 1'b0};

  assign fp_result_fpx1 = fp_result_is_special_fpx1 ? fp_special_result_fpx1 : fmt_result_fpx1[dst_fmt_fpx1];
  assign fp_status_fpx1 = fp_result_is_special_fpx1 ? fp_special_status_fpx1 : fp_regular_status_fpx1;
  assign int_result_fpx1 = int_result_is_special_fpx1 ? int_special_result_fpx1 : rounded_int_res_fpx1;
  assign int_status_fpx1 = int_result_is_special_fpx1 ? int_special_status_fpx1 : int_regular_status_fpx1;

  // Final results for output pipeline
  logic               [WIDTH-1:0] result_fpx1;
  fpnew_pkg::status_t             status_fpx1;
  logic                           extension_bit_fpx1;

  // Select output depending on special case detection
  assign result_fpx1        = dst_is_int_fpx1 ? int_result_fpx1 : fp_result_fpx1;
  assign status_fpx1        = dst_is_int_fpx1 ? int_status_fpx1 : fp_status_fpx1;

  // MSB of int result decides extension, otherwise NaN box
  assign extension_bit_fpx1 = dst_is_int_fpx1 ? int_result_fpx1[WIDTH-1] : 1'b1;

  // Output stage: assign module outputs
  assign result_o           = result_fpx1;
  assign status_o           = status_fpx1;
  assign extension_bit_o    = extension_bit_fpx1;
  assign tag_o              = tag_fpx1;
  assign aux_o              = aux_fpx1;
  assign out_valid_o        = in_valid_fpx1;
  //assign busy_o                       = (|{inp_pipe_valid_fpx1, mid_pipe_valid_fpx1, out_pipe_valid_fpx1});
  assign busy_o             = 'b0;
endmodule
