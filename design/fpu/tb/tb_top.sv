module tb_top;
  localparam fpnew_pkg::fpu_features_t Features = fpnew_pkg::RV32F;
  localparam fpnew_pkg::fpu_implementation_t Implementation = fpnew_pkg::DEFAULT_NOREGS;
  localparam int unsigned WIDTH = Features.Width;
  localparam int unsigned NUM_OPERANDS = 3;
  localparam type TagType = logic;

  /* input */logic                                                  clk_i = 0;
  /* input */logic                                                  rst_ni = 0;

  /* input */logic                    [NUM_OPERANDS-1:0][WIDTH-1:0] operands_i = 0;
  /* input */fpnew_pkg::roundmode_e                                rnd_mode_i;
  /* input */fpnew_pkg::operation_e                                op_i;
  /* input */logic                                                  op_mod_i;
  /* input */fpnew_pkg::fp_format_e                                src_fmt_i;
  /* input */fpnew_pkg::fp_format_e                                dst_fmt_i;
  /* input */fpnew_pkg::int_format_e                               int_fmt_i;
  /* input */logic                                                  vectorial_op_i = 0;
  /* input */TagType                                                tag_i;

  /* input */logic                                                  in_valid_i = 0;
  /* output */logic                                                  in_ready_o;
  /* input  */logic                                                  flush_i = 0;
  /* output */logic                    [       WIDTH-1:0]            result_o;

  /* output */fpnew_pkg::status_t                                   status_o;
  /* output */TagType                                    tag_o;
  /* output */logic                                                  out_valid_o;

  /* input */logic                                                  out_ready_i = 1;

  /* output */logic                                                  busy_o;


  fpnew_top DUT_i (.*);

  /* Clock Generation */
  always #5 clk_i = ~clk_i;

  initial begin
    rnd_mode_i = fpnew_pkg::RNE;
    op_mod_i = 1;
    op_i = fpnew_pkg::ADD;
    src_fmt_i = fpnew_pkg::FP32;
    dst_fmt_i = fpnew_pkg::FP32;
    int_fmt_i = fpnew_pkg::INT32;
    tag_i = 0;

    operands_i[0] = 'h3f800000;
    operands_i[1] = 'h3f800000;
    operands_i[2] = 'h3f800000;
    flush_i = 1;

    for (integer i = 0; i < 10; i++) begin
      @(posedge clk_i);
    end

    /* Deassert reset */
    rst_ni  = 1;
    flush_i = 0;
    @(posedge clk_i);
    @(posedge clk_i);
    @(posedge clk_i);
    @(posedge clk_i);
    in_valid_i = 1;
    @(posedge clk_i);
    @(posedge clk_i);
    in_valid_i = 0;
    for (integer i = 0; i < 10; i++) begin
      @(posedge clk_i);
    end
    $finish;
  end

endmodule
