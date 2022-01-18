// SPDX-License-Identifier: Apache-2.0
// Copyright 2019 Western Digital Corporation or its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

module dec_fpr_ctl #(
    parameter FPR_BANKS      = 1,
              FPR_BANKS_LOG2 = 1
) (
    input logic active_clk,

    input logic [4:0] raddr0,  // i0 logical read addresses
    input logic [4:0] raddr1,
    input logic [4:0] raddr2,
    input logic [4:0] raddr3,  // i1 logical read addresses
    input logic [4:0] raddr4,
    input logic [4:0] raddr5,

    input logic rden0,  // read enables
    input logic rden1,
    input logic rden2,
    input logic rden3,
    input logic rden4,
    input logic rden5,

    input logic [4:0] waddr0,  // logical write addresses
    input logic [4:0] waddr1,

    input logic wen0,  // write enables
    input logic wen1,

    input logic [FLEN-1:0] wd0,  // write data
    input logic [FLEN-1:0] wd1,

    input logic                      wen_bank_id,  // write enable for banks
    input logic [FPR_BANKS_LOG2-1:0] wr_bank_id,   // read enable for banks

    input logic clk,
    input logic rst_l,

    output logic [FLEN-1:0] rd0,  // read data
    output logic [FLEN-1:0] rd1,
    output logic [FLEN-1:0] rd2,
    output logic [FLEN-1:0] rd3,  // read data
    output logic [FLEN-1:0] rd4,
    output logic [FLEN-1:0] rd5,

    input logic scan_mode
);

  logic [FPR_BANKS-1:0][31:1] [FLEN-1:0] fpr_out;     // FLEN-1 x 64 bit FPRs
  logic [31:1] [FLEN-1:0] fpr_in;
  logic [31:1] w0v, w1v;
  logic [31:1] fpr_wr_en;
  logic [FPR_BANKS-1:0][31:1] fpr_bank_wr_en;
  logic [FPR_BANKS_LOG2-1:0] fpr_bank_id;

  //assign fpr_bank_id[FPR_BANKS_LOG2-1:0] = '0;
  rvdffs #(FPR_BANKS_LOG2) bankid_ff (
      .*,
      .clk (active_clk),
      .en  (wen_bank_id),
      .din (wr_bank_id[FPR_BANKS_LOG2-1:0]),
      .dout(fpr_bank_id[FPR_BANKS_LOG2-1:0])
  );

  // FPR Write Enables for power savings
  assign fpr_wr_en[31:1] = (w0v[31:1] | w1v[31:1]);
  for (genvar i = 0; i < FPR_BANKS; i++) begin : fpr_banks
    assign fpr_bank_wr_en[i][31:1] = fpr_wr_en[31:1] & {31{fpr_bank_id[FPR_BANKS_LOG2-1:0] == i}};
    for (genvar j = 1; j < 32; j++) begin : fpr
      rvdffe #(FLEN) fprff (
          .*,
          .en  (fpr_bank_wr_en[i][j]),
          .din (fpr_in[j]),
          .dout(fpr_out[i][j])
      );
    end : fpr
  end : fpr_banks

  // the read out
  always_comb begin
    rd0[FLEN-1:0] = 32'b0;
    rd1[FLEN-1:0] = 32'b0;
    rd2[FLEN-1:0] = 32'b0;
    rd3[FLEN-1:0] = 32'b0;
    rd4[FLEN-1:0] = 32'b0;
    rd5[FLEN-1:0] = 32'b0;
    w0v[31:1] = 31'b0;
    w1v[31:1] = 31'b0;
    fpr_in[31:1] = '0;

    // FPR Read logic
    for (int i = 0; i < FPR_BANKS; i++) begin
      for (int j = 1; j < 32; j++) begin
        rd0 |= ({FLEN{rden0 & (raddr0[4:0]== 5'(j)) & (fpr_bank_id[FPR_BANKS_LOG2-1:0] == 1'(i))}} & fpr_out[i][j]);
        rd1 |= ({FLEN{rden1 & (raddr1[4:0]== 5'(j)) & (fpr_bank_id[FPR_BANKS_LOG2-1:0] == 1'(i))}} & fpr_out[i][j]);
        rd2 |= ({FLEN{rden2 & (raddr2[4:0]== 5'(j)) & (fpr_bank_id[FPR_BANKS_LOG2-1:0] == 1'(i))}} & fpr_out[i][j]);
        rd3 |= ({FLEN{rden3 & (raddr3[4:0]== 5'(j)) & (fpr_bank_id[FPR_BANKS_LOG2-1:0] == 1'(i))}} & fpr_out[i][j]);
        rd4 |= ({FLEN{rden4 & (raddr4[4:0]== 5'(j)) & (fpr_bank_id[FPR_BANKS_LOG2-1:0] == 1'(i))}} & fpr_out[i][j]);
        rd5 |= ({FLEN{rden5 & (raddr5[4:0]== 5'(j)) & (fpr_bank_id[FPR_BANKS_LOG2-1:0] == 1'(i))}} & fpr_out[i][j]);
      end
    end

    // FPR Write logic
    for (int j = 1; j < 32; j++) begin
      w0v[j]    = wen0 & (waddr0[4:0] == 5'(j));
      w1v[j]    = wen1 & (waddr1[4:0] == 5'(j));
      fpr_in[j] = ({FLEN{w0v[j]}} & wd0) | ({FLEN{w1v[j]}} & wd1);
    end
  end  // always_comb begin

endmodule
