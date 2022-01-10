module tb_compress;

  /* input  */ logic [15:0] din = 0;
  /* output */ logic [31:0] dout;
  /* output */ logic legal;

  ifu_compress_ctl DUT_i (.*);


  initial begin
    /* c.addw x11, x15
    din = 16'b100111_011_01_111_01; 
    */

    /* c.ldsp x3, rand 
    din = 16'b011_0_00011_11_101_10; 
    */

    /* c.sdsp x3, rand */
    din = 16'b111_101_111_00011_10;

  end
endmodule
