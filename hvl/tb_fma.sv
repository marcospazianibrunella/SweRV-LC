module tb_fma;

  localparam fpnew_pkg::fp_format_e FpFormat = fpnew_pkg::fp_format_e'(0);
  localparam int unsigned NumPipeRegs = 0;
  localparam fpnew_pkg::pipe_config_t PipeConfig = fpnew_pkg::BEFORE;
  localparam type TagType = logic;
  localparam type AuxType = logic;

  localparam int unsigned WIDTH = fpnew_pkg::fp_width(FpFormat);  // do not change

  /* input */logic                                         clk_i = 0;
  /* input */logic                                         rst_ni = 0;
  /* input */logic                  [      2:0][WIDTH-1:0] operands_i = 0;  // 3 operands
  /* input */logic                  [      2:0]            is_boxed_i = 0;  // 3 operands
  /* input */fpnew_pkg::roundmode_e                        rnd_mode_i = fpnew_pkg::RNE;
  /* input */fpnew_pkg::operation_e                        op_i = fpnew_pkg::ADD;
  /* input */logic                                         op_mod_i = 0;
  /* input */TagType                                       tag_i = 0;
  /* input */AuxType                                       aux_i = 0;
  /* input */logic                                         in_valid_i = 0;
  /* output */logic                                         in_ready_o;
  /* input */logic                                         flush_i = 0;
  /* output */logic                  [WIDTH-1:0]            result_o;
  /* output */fpnew_pkg::status_t                           status_o;
  /* output */logic                                         extension_bit_o;
  /* output */TagType                                       tag_o;
  /* output */AuxType                                       aux_o;
  /* output */logic                                         out_valid_o;
  /* input */logic                                         out_ready_i = 0;
  /* output */logic                                         busy_o;

  fpnew_fma #(
      .FpFormat(FpFormat),
      .NumPipeRegs(NumPipeRegs),
      .PipeConfig(PipeConfig),
      .TagType(TagType),
      .AuxType(AuxType)
  ) DUT_i (
      .*
  );

  always #5 clk_i = ~clk_i;

  initial begin
      for (integer i=0; i< 10; i++) begin
          @(posedge clk_i);
      end
      rst_ni = 1;
      for (integer i=0; i< 3; i++) begin
          @(posedge clk_i);
      end

      /* Operands */
      operands_i[0] = 'h3F800000;
      operands_i[1] = 'h3F800000;
      operands_i[2] = 'h3F800000;

      /* Validate Input */
      in_valid_i = 1;
  end
endmodule
