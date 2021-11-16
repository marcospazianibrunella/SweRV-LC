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


module exu_alu_ctl
  import swerv_types::*;
(
    input logic clk,         // Top level clock
    input logic active_clk,  // Level 1 free clock
    input logic rst_l,       // Reset
    input logic scan_mode,   // Scan control

    input predict_pkt_t predict_p,  // Predicted branch structure

    input logic freeze,  // Clock enable for valid

    input logic [XLEN-1:0] a,  // A operand
    input logic [XLEN-1:0] b,  // B operand
    input logic [    31:1] pc, // for pc=pc+2,4 calculations

    input logic valid,  // Valid
    input logic flush,  // Flush pipeline

    input logic [12:1] brimm,  // Branch offset

    input alu_pkt_t ap,  // {valid,predecodes}

    input logic enable,  // Clock enable


    output logic [XLEN-1:0] out,  // final result

    output logic        flush_upper,  // Branch flush
    output logic [31:1] flush_path,   // Branch flush PC

    output logic [31:1] pc_ff,  // flopped PC

    output logic         pred_correct,  // NPC control
    output predict_pkt_t predict_p_ff   // Predicted branch structure

);




  logic [XLEN-1:0] aout, bm;
  logic cout, ov, neg;

  logic [3:1] logic_sel;

  logic [XLEN-1:0] lout;
  logic [XLEN-1:0] sout;
  logic sel_logic, sel_shift, sel_adder;

  logic                   slt_one;

  logic                   actual_taken;

  logic signed [XLEN-1:0] a_ff;

  logic        [XLEN-1:0] b_ff;

  logic        [    12:1] brimm_ff;

  logic        [    31:1] pcout;

  logic                   valid_ff;

  logic        [XLEN-1:0] ashift;
  logic                   cond_mispredict;
  logic                   target_mispredict;

  logic eq, ne, lt, ge;


  rvdffs #(1) validff (
      .*,
      .clk (active_clk),
      .en  (~freeze),
      .din (valid & ~flush),
      .dout(valid_ff)
  );

  rvdffe #(XLEN) aff (
      .*,
      .en  (enable & valid),
      .din (a),
      .dout(a_ff)
  );

  rvdffe #(XLEN) bff (
      .*,
      .en  (enable & valid),
      .din (b),
      .dout(b_ff)
  );

  // any PC is run through here - doesn't have to be alu
  rvdffe #(31) pcff (
      .*,
      .en  (enable),
      .din (pc[31:1]),
      .dout(pc_ff[31:1])
  );

  rvdffe #(12) brimmff (
      .*,
      .en  (enable),
      .din (brimm[12:1]),
      .dout(brimm_ff[12:1])
  );

  predict_pkt_t pp_ff;

  rvdffe #($bits(
      predict_pkt_t
  )) predictpacketff (
      .*,
      .en  (enable),
      .din (predict_p),
      .dout(pp_ff)
  );


  // immediates are just muxed into rs2

  // add => add=1;
  // sub => add=1; sub=1;

  // and => lctl=3
  // or  => lctl=2
  // xor => lctl=1

  // sll => sctl=3
  // srl => sctl=2
  // sra => sctl=1

  // slt => slt

  // lui   => lctl=2; or x0, imm20 previously << 12
  // auipc => add;  add pc, imm20 previously << 12

  // beq  => bctl=4; add; add x0, pc, sext(offset[12:1])
  // bne  => bctl=3; add; add x0, pc, sext(offset[12:1])
  // blt  => bctl=2; add; add x0, pc, sext(offset[12:1])
  // bge  => bctl=1; add; add x0, pc, sext(offset[12:1])

  // jal  => rs1=pc {pc[31:1],1'b0},  rs2=sext(offset20:1]);    rd=pc+[2,4]
  // jalr => rs1=rs1, rs2=sext(offset20:1]);                    rd=pc+[2,4]


  assign bm = (ap.sub) ? ~b_ff : b_ff;


  assign {cout, aout} = {1'b0, a_ff} + {1'b0, bm} + {{XLEN{'0}}, ap.sub};

  assign ov = (~a_ff[XLEN-1] & ~bm[XLEN-1] & aout[XLEN-1]) | (a_ff[XLEN-1] & bm[XLEN-1] & ~aout[XLEN-1]);

  assign neg = aout[XLEN-1];

  assign eq = (a_ff == b_ff);

  assign ne = ~eq;

  assign logic_sel[3] = ap.land | ap.lor;
  assign logic_sel[2] = ap.lor | ap.lxor;
  assign logic_sel[1] = ap.lor | ap.lxor;



  assign lout =  (  a_ff &  b_ff & {XLEN{logic_sel[3]}} ) |
                        (  a_ff & ~b_ff & {XLEN{logic_sel[2]}} ) |
                        ( ~a_ff &  b_ff & {XLEN{logic_sel[1]}} );



  assign ashift = a_ff >>> b_ff[4:0];

  assign sout = ( {XLEN{ap.sll}} & (a_ff <<  b_ff[4:0]) ) |
                       ( {XLEN{ap.srl}} & (a_ff >>  b_ff[4:0]) ) |
                       ( {XLEN{ap.sra}} &  ashift              );


  assign sel_logic = |{ap.land, ap.lor, ap.lxor};

  assign sel_shift = |{ap.sll, ap.srl, ap.sra};

  assign sel_adder = (ap.add | ap.sub) & ~ap.slt;




  assign lt = (~ap.unsign & (neg ^ ov)) | (ap.unsign & ~cout);

  assign ge = ~lt;


  assign slt_one = (ap.slt & lt);

  assign out = ({XLEN{sel_logic}} & lout) |
                      ({XLEN{sel_shift}} & sout) |
                      ({XLEN{sel_adder}} & aout) |
                      ({XLEN{ap.jal | pp_ff.pcall | pp_ff.pja | pp_ff.pret}} & {
    {XLEN - 32{'0}}, pcout[31:1], 1'b0
  }) |
      ({XLEN{ap.csr_write}} & ((ap.csr_imm) ? b_ff : a_ff)) |  // csr_write: if csr_imm rs2 else rs1
  ({
    {XLEN - 1{'0}}, slt_one
  });

  // branch handling

  logic any_jal;

  assign any_jal      = ap.jal | pp_ff.pcall | pp_ff.pja | pp_ff.pret;


  assign actual_taken = (ap.beq & eq) | (ap.bne & ne) | (ap.blt & lt) | (ap.bge & ge) | (any_jal);

  // for a conditional br pcout[] will be the opposite of the branch prediction
  // for jal or pcall, it will be the link address pc+2 or pc+4

  rvbradder ibradder (
      .pc(pc_ff[31:1]),
      .offset(brimm_ff[12:1]),
      .dout(pcout[31:1])
  );

  // pred_correct is for the npc logic
  // pred_correct indicates not to use the flush_path
  // for any_jal pred_correct==0

  assign pred_correct = ((ap.predict_nt & ~actual_taken) |
                          (ap.predict_t  &  actual_taken)) & ~any_jal;


  // for any_jal adder output is the flush path
  assign flush_path[31:1] = (any_jal) ? aout[31:1] : pcout[31:1];


  // pcall and pret are included here
  assign cond_mispredict = (ap.predict_t & ~actual_taken) | (ap.predict_nt & actual_taken);

  // target mispredicts on ret's

  assign target_mispredict = pp_ff.pret & (pp_ff.prett[31:1] != aout[31:1]);

  assign flush_upper = (ap.jal | cond_mispredict | target_mispredict) & valid_ff & ~flush & ~freeze;


  // .i 3
  // .o 2
  // .ilb hist[1] hist[0] taken
  // .ob newhist[1] newhist[0]
  // .type fd
  //
  // 00 0 01
  // 01 0 01
  // 10 0 00
  // 11 0 10
  // 00 1 10
  // 01 1 00
  // 10 1 11
  // 11 1 11

  logic [1:0] newhist;

  assign newhist[1] = (pp_ff.hist[1] & pp_ff.hist[0]) | (!pp_ff.hist[0] & actual_taken);

  assign newhist[0] = (!pp_ff.hist[1] & !actual_taken) | (pp_ff.hist[1] & actual_taken);



  always_comb begin
    predict_p_ff = pp_ff;

    predict_p_ff.misp    = (valid_ff) ? (cond_mispredict | target_mispredict) & ~flush : pp_ff.misp;
    predict_p_ff.ataken  = (valid_ff) ? actual_taken : pp_ff.ataken;
    predict_p_ff.hist[1] = (valid_ff) ? newhist[1] : pp_ff.hist[1];
    predict_p_ff.hist[0] = (valid_ff) ? newhist[0] : pp_ff.hist[0];

  end



endmodule  // exu_alu_ctl
