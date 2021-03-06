module tb_div
  import swerv_types::*;
;
  localparam XLEN = 64;

  /* input */logic                clk = 0;  // Top level clock
  /* input */logic                active_clk;  // Level 1 active clock
  /* input */logic                rst_l = 0;  // Reset
  /* input */logic                scan_mode = 0;  // Scan mode

  /* input */logic                dec_tlu_fast_div_disable = 0;  // Disable small number optimization

  /* input */logic     [XLEN-1:0] dividend = 0;  // Numerator
  /* input */logic     [XLEN-1:0] divisor = 0;  // Denominator

  /* input */div_pkt_t            dp = 0;  // valid = 0; sign = 0; rem

  /* input */logic                flush_lower = 0;  // Flush pipeline


  /* output */logic                valid_ff_e1;  // Valid E1 stage
  /* output */logic                finish_early;  // Finish smallnum
  /* output */logic                finish;  // Finish smallnum or normal divide
  /* output */logic                div_stall;  // Divide is running

  /* output */logic     [XLEN-1:0] out;  // Result


  exu_div_ctl DUT_i (.*);

  /* Clock Generation */
  always #5 clk = ~clk;
  assign active_clk = clk;

  initial begin

    flush_lower = '1;
    for (integer i = 0; i < 10; i++) begin
      @(posedge clk);
    end
    flush_lower = '0;

    @(posedge clk);
    rst_l = 1;
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);

    /* Prepare Operands */
    dp.valid  = 1;
    dividend  = 'h7d0;
    divisor   = 'h3;

    @(posedge clk);
    dp.valid = 0;


  end

endmodule
;
