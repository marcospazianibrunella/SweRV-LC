module tb_cast_multi;
  localparam fpnew_pkg::fmt_logic_t FpFmtConfig = '1;
  localparam fpnew_pkg::ifmt_logic_t IntFmtConfig = '1;
  // FPU configuration
  localparam int unsigned NumPipeRegs = 0;
  localparam fpnew_pkg::pipe_config_t PipeConfig = fpnew_pkg::BEFORE;
  localparam type TagType = logic;
  localparam type AuxType = logic;
  // Do not change
  localparam int unsigned WIDTH = 32;
  localparam int unsigned NUM_FORMATS = fpnew_pkg::NUM_FP_FORMATS;

  /* input */logic                                     clk_i = 0;
  /* input */logic                                     rst_ni = 0;
  // Input signals
  /* input */logic                   [      WIDTH-1:0] operands_i = 0;  // 1 operand
  /* input */logic                   [NUM_FORMATS-1:0] is_boxed_i = 'hff;  // 1 operand
  /* input */fpnew_pkg::roundmode_e                    rnd_mode_i = fpnew_pkg::RNE;
  /* input */fpnew_pkg::operation_e                    op_i = fpnew_pkg::I2F;
  /* input */logic                                     op_mod_i = 0;
  /* input */fpnew_pkg::fp_format_e                    src_fmt_i = fpnew_pkg::FP32;
  /* input */fpnew_pkg::fp_format_e                    dst_fmt_i = fpnew_pkg::FP32;
  /* input */fpnew_pkg::int_format_e                   int_fmt_i = fpnew_pkg::INT32;
  /* input */TagType                                   tag_i = 0;
  /* input */AuxType                                   aux_i = 0;
  // Input Handshake
  /* input */logic                                     in_valid_i = 0;
  /* output */logic                                     in_ready_o;
  /* input */logic                                     flush_i = 0;
  // Output signals
  /* output */logic                   [      WIDTH-1:0] result_o;
  /* output */fpnew_pkg::status_t                       status_o;
  /* output */logic                                     extension_bit_o;
  /* output */TagType                                   tag_o;
  /* output */AuxType                                   aux_o;
  // Output handshake
  /* output */logic                                     out_valid_o;
  /* input */logic                                     out_ready_i = 1;
  // Indication of valid data in flight
  /* output */logic                                     busy_o;

  fpnew_cast_multi DUT_i (.*);

  always #5 clk_i = ~clk_i;

  initial begin
    for (int i = 0; i < 10; ++i) begin
      @(posedge clk_i);
    end
    rst_ni = 1;
    for (int i = 0; i < 5; ++i) begin
      @(posedge clk_i);
    end
    operands_i = 32'h1;
    in_valid_i = 1;
  end

endmodule
