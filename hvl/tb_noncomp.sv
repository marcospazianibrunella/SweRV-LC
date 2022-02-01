module tb_noncomp;
  localparam fpnew_pkg::fp_format_e FpFormat = fpnew_pkg::fp_format_e'(0);
  localparam int unsigned NumPipeRegs = 0;
  localparam fpnew_pkg::pipe_config_t PipeConfig = fpnew_pkg::BEFORE;
  localparam type TagType = logic;
  localparam type AuxType = logic;

  localparam int unsigned WIDTH = fpnew_pkg::fp_width(FpFormat);  // do not change 

  /* input */logic                                         clk_i = 0;
  /* input */logic                                         rst_ni = 0;

  /* input */logic                  [      1:0][WIDTH-1:0] operands_i = 0;  // 2 operands
  /* input */logic                  [      1:0]            is_boxed_i = 'b11;  // 2 operands
  /* input */fpnew_pkg::roundmode_e                        rnd_mode_i = fpnew_pkg::RTZ;
  /* input */fpnew_pkg::operation_e                        op_i = fpnew_pkg::MINMAX;
  /* input */logic                                         op_mod_i = 0;
  /* input */TagType                                       tag_i = 0;
  /* input */AuxType                                       aux_i = 0;

  /* input */logic                                         in_valid_i = 0;
  /* output */logic                                         in_ready_o;
  /* input */logic                                         flush_i = 0;

  /* output */logic                  [WIDTH-1:0]            result_o;
  /* output */fpnew_pkg::status_t                           status_o;
  /* output */logic                                         extension_bit_o;
  /* output */fpnew_pkg::classmask_e                        class_mask_o;
  /* output */logic                                         is_class_o;
  /* output */TagType                                       tag_o;
  /* output */AuxType                                       aux_o;

  /* output */logic                                         out_valid_o;
  /* input */logic                                         out_ready_i = 0;

  /* output */logic                                         busy_o;

  fpnew_noncomp DUT_i (.*);

  always #5 clk_i = ~clk_i;

  initial begin
    for (int i = 0; i < 10; ++i) begin
      @(posedge clk_i);
    end
    rst_ni = 1;
    out_ready_i = 1;
    for (int i = 0; i < 5; ++i) begin
      @(posedge clk_i);
    end
    operands_i[0] = 'h3F800000;
    operands_i[1] = 'h40000000;
    in_valid_i    = 'h1;
    @(posedge clk_i);
    in_valid_i = 'h0;
  end
endmodule
