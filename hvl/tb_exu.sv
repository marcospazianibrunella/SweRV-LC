`timescale 1ns / 1ps

module tb_exu
  import swerv_types::*;
;

  `include "global.svh"

  /* input */ logic clk = 0;  // Top level clock
  /* input */ logic active_clk;  // Level 1 active clock
  /* input */ logic clk_override = 0;  // Override multiply clock enables
  /* input */ logic rst_l = 0;  // Reset
  /* input */ logic scan_mode = 0;  // Scan control
  /* input */ logic lsu_freeze_dc3 = 0;  // Freeze pipe from D to DC3

  /* input */ logic dec_tlu_fast_div_disable = 0;  // Disable divide small number optimization

  /* input */ logic [4:2] dec_i0_data_en = 0;  // Slot I0 clock enable {e1 = 0; e2 = 0; e3    } = 0; one cycle pulse
  /* input */ logic [4:1] dec_i0_ctl_en = 0;  // Slot I0 clock enable {e1 = 0; e2 = 0; e3 = 0; e4} = 0; two cycle pulse
  /* input */ logic [4:2] dec_i1_data_en = 0;  // Slot I1 clock enable {e1 = 0; e2 = 0; e3    } = 0; one cycle pulse
  /* input */ logic [4:1] dec_i1_ctl_en = 0;  // Slot I1 clock enable {e1 = 0; e2 = 0; e3 = 0; e4} = 0; two cycle pulse

  /* input */ logic dec_debug_wdata_rs1_d = 0;  // Debug select to primary I0 RS1

  /* input */ logic [31:0] dbg_cmd_wrdata = 0;  // Debug data   to primary I0 RS1

  /* input */ logic [XLEN-1:0] lsu_result_dc3 = 0;  // Load result

  /* input */ predict_pkt_t i0_predict_p_d = 0;  // DEC branch predict packet
  /* input */ predict_pkt_t i1_predict_p_d = 0;  // DEC branch predict packet

  /* input */ logic dec_i0_rs1_bypass_en_e2 = 0;  // DEC bypass bus select for E2 stage
  /* input */ logic dec_i0_rs2_bypass_en_e2 = 0;  // DEC bypass bus select for E2 stage
  /* input */ logic dec_i1_rs1_bypass_en_e2 = 0;  // DEC bypass bus select for E2 stage
  /* input */ logic dec_i1_rs2_bypass_en_e2 = 0;  // DEC bypass bus select for E2 stage
  /* input */ logic [XLEN-1:0] i0_rs1_bypass_data_e2 = 0;  // DEC bypass bus
  /* input */ logic [XLEN-1:0] i0_rs2_bypass_data_e2 = 0;  // DEC bypass bus
  /* input */ logic [XLEN-1:0] i1_rs1_bypass_data_e2 = 0;  // DEC bypass bus
  /* input */ logic [XLEN-1:0] i1_rs2_bypass_data_e2 = 0;  // DEC bypass bus

  /* input */ logic dec_i0_rs1_bypass_en_e3 = 0;  // DEC bypass bus select for E3 stage
  /* input */ logic dec_i0_rs2_bypass_en_e3 = 0;  // DEC bypass bus select for E3 stage
  /* input */ logic dec_i1_rs1_bypass_en_e3 = 0;  // DEC bypass bus select for E3 stage
  /* input */ logic dec_i1_rs2_bypass_en_e3 = 0;  // DEC bypass bus select for E3 stage
  /* input */ logic [XLEN-1:0] i0_rs1_bypass_data_e3 = 0;  // DEC bypass bus
  /* input */ logic [XLEN-1:0] i0_rs2_bypass_data_e3 = 0;  // DEC bypass bus
  /* input */ logic [XLEN-1:0] i1_rs1_bypass_data_e3 = 0;  // DEC bypass bus
  /* input */ logic [XLEN-1:0] i1_rs2_bypass_data_e3 = 0;  // DEC bypass bus

  /* input */ logic dec_i0_sec_decode_e3 = 0;  // Secondary ALU valid
  /* input */ logic dec_i1_sec_decode_e3 = 0;  // Secondary ALU valid
  /* input */ logic [31:1] dec_i0_pc_e3 = 0;  // Secondary ALU PC
  /* input */ logic [31:1] dec_i1_pc_e3 = 0;  // Secondary ALU PC

  /* input */ logic [31:1] pred_correct_npc_e2 = 0;  // DEC NPC for correctly predicted branch

  /* input */ logic dec_i1_valid_e1 = 0;  // I1 valid E1

  /* input */ logic dec_i0_mul_d = 0;  // Select for Multiply GPR value
  /* input */ logic dec_i1_mul_d = 0;  // Select for Multiply GPR value

  /* input */ logic dec_i0_div_d = 0;  // Select for Divide GPR value
  /* input */ logic dec_i1_div_d = 0;  // Select for Divide GPR value

  /* input */ logic [XLEN-1:0] gpr_i0_rs1_d = 0;  // DEC data gpr
  /* input */ logic [XLEN-1:0] gpr_i0_rs2_d = 0;  // DEC data gpr
  /* input */ logic [XLEN-1:0] dec_i0_immed_d = 0;  // DEC data immediate

  /* input */ logic [XLEN-1:0] gpr_i1_rs1_d = 0;  // DEC data gpr
  /* input */ logic [XLEN-1:0] gpr_i1_rs2_d = 0;  // DEC data gpr
  /* input */ logic [XLEN-1:0] dec_i1_immed_d = 0;  // DEC data immediate

  /* input */ logic [XLEN-1:0] i0_rs1_bypass_data_d = 0;  // DEC bypass data
  /* input */ logic [XLEN-1:0] i0_rs2_bypass_data_d = 0;  // DEC bypass data
  /* input */ logic [XLEN-1:0] i1_rs1_bypass_data_d = 0;  // DEC bypass data
  /* input */ logic [XLEN-1:0] i1_rs2_bypass_data_d = 0;  // DEC bypass data

  /* input */ logic [12:1] dec_i0_br_immed_d = 0;  // Branch immediate
  /* input */ logic [12:1] dec_i1_br_immed_d = 0;  // Branch immediate

  /* input */ alu_pkt_t i0_ap = 0;  // DEC alu {valid = 0;predecodes}
  /* input */ alu_pkt_t i1_ap = 0;  // DEC alu {valid = 0;predecodes}

  /* input */ logic dec_i0_alu_decode_d = 0;  // Valid to Primary ALU
  /* input */ logic dec_i1_alu_decode_d = 0;  // Valid to Primary ALU

  /* input */ logic dec_i0_select_pc_d = 0;  // PC select to RS1
  /* input */ logic dec_i1_select_pc_d = 0;  // PC select to RS1

  /* input */ logic [31:1] dec_i0_pc_d = 0;  // Instruction PC
  /* input */ logic [31:1] dec_i1_pc_d = 0;  // Instruction PC

  /* input */ logic dec_i0_rs1_bypass_en_d = 0;  // DEC bypass select
  /* input */ logic dec_i0_rs2_bypass_en_d = 0;  // DEC bypass select
  /* input */ logic dec_i1_rs1_bypass_en_d = 0;  // DEC bypass select
  /* input */ logic dec_i1_rs2_bypass_en_d = 0;  // DEC bypass select

  /* input */ logic dec_tlu_flush_lower_wb = 0;  // Flush divide and secondary ALUs
  /* input */ logic [31:1] dec_tlu_flush_path_wb = 0;  // Redirect target

  /* input */ logic dec_tlu_i0_valid_e4 = 0;  // Valid for GHR
  /* input */ logic dec_tlu_i1_valid_e4 = 0;  // Valid for GHR

  /* output */ logic [XLEN-1:0] exu_i0_result_e1;  // Primary ALU result to DEC
  /* output */ logic [XLEN-1:0] exu_i1_result_e1;  // Primary ALU result to DEC
  /* output */ logic [31:1] exu_i0_pc_e1;  // Primary PC  result to DEC
  /* output */ logic [31:1] exu_i1_pc_e1;  // Primary PC  result to DEC


  /* output */ logic [XLEN-1:0] exu_i0_result_e4;  // Secondary ALU result
  /* output */ logic [XLEN-1:0] exu_i1_result_e4;  // Secondary ALU result


  /* output */ logic exu_i0_flush_final;  // I0 flush to DEC
  /* output */ logic exu_i1_flush_final;  // I1 flush to DEC

  /* input */ mul_pkt_t mul_p = 0;  // DEC {valid = 0; operand signs = 0; low = 0; operand bypass}

  /* input */ div_pkt_t div_p = 0;  // DEC {valid = 0; unsigned = 0; rem}

  /* input */ logic dec_i0_lsu_d = 0;  // Bypass control for LSU operand bus
  /* input */ logic dec_i1_lsu_d = 0;  // Bypass control for LSU operand bus

  /* input */ logic dec_csr_ren_d = 0;  // Clear I0 RS1 primary

  /* output */ logic [XLEN-1:0] exu_lsu_rs1_d;  // LSU operand
  /* output */ logic [XLEN-1:0] exu_lsu_rs2_d;  // LSU operand

  /* output */ logic [XLEN-1:0] exu_csr_rs1_e1;  // RS1 source for a CSR instruction

  /* output */ logic exu_flush_final;  // Pipe is being flushed this cycle
  /* output */ logic [31:1] exu_flush_path_final;  // Target for the oldest flush source

  /* output */ logic [XLEN-1:0] exu_mul_result_e3;  // Multiply result

  /* output */ logic [XLEN-1:0] exu_div_result;  // Divide result
  /* output */ logic exu_div_finish;  // Divide is finished
  /* output */ logic exu_div_stall;  // Divide is running
  /* output */ logic [31:1] exu_npc_e4;  // Divide NPC

  /* output */ logic exu_i0_flush_lower_e4;  // to TLU - lower branch flush
  /* output */ logic exu_i1_flush_lower_e4;  // to TLU - lower branch flush
  /* output */ logic [31:1] exu_i0_flush_path_e4;  // to TLU - lower branch flush path
  /* output */ logic [31:1] exu_i1_flush_path_e4;  // to TLU - lower branch flush path

  /* output */ predict_pkt_t exu_mp_pkt;  // Mispredict branch packet

  /* output */ logic [`RV_BHT_GHR_RANGE] exu_mp_eghr;  // Mispredict global history

  /* output */ logic [1:0] exu_i0_br_hist_e4;  // to DEC  I0 branch history
  /* output */ logic [1:0] exu_i0_br_bank_e4;  // to DEC  I0 branch bank
  /* output */ logic exu_i0_br_error_e4;  // to DEC  I0 branch error
  /* output */ logic exu_i0_br_start_error_e4;  // to DEC  I0 branch start error
  /* output */ logic [`RV_BTB_ADDR_HI:`RV_BTB_ADDR_LO] exu_i0_br_index_e4;  // to DEC  I0 branch index
  /* output */ logic exu_i0_br_valid_e4;  // to DEC  I0 branch valid
  /* output */ logic exu_i0_br_mp_e4;  // to DEC  I0 branch mispredict
  /* output */ logic exu_i0_br_way_e4;  // to DEC  I0 branch way
  /* output */ logic exu_i0_br_middle_e4;  // to DEC  I0 branch middle
  /* output */ logic [`RV_BHT_GHR_RANGE] exu_i0_br_fghr_e4;  // to DEC  I0 branch fghr
  /* output */ logic exu_i0_br_ret_e4;  // to DEC  I0 branch return
  /* output */ logic exu_i0_br_call_e4;  // to DEC  I0 branch call

  /* output */ logic [1:0] exu_i1_br_hist_e4;  // to DEC  I1 branch history
  /* output */ logic [1:0] exu_i1_br_bank_e4;  // to DEC  I1 branch bank
  /* output */ logic exu_i1_br_error_e4;  // to DEC  I1 branch error
  /* output */ logic exu_i1_br_start_error_e4;  // to DEC  I1 branch start error
  /* output */ logic [`RV_BTB_ADDR_HI:`RV_BTB_ADDR_LO] exu_i1_br_index_e4;  // to DEC  I1 branch index
  /* output */ logic exu_i1_br_valid_e4;  // to DEC  I1 branch valid
  /* output */ logic exu_i1_br_mp_e4;  // to DEC  I1 branch mispredict
  /* output */ logic exu_i1_br_way_e4;  // to DEC  I1 branch way
  /* output */ logic exu_i1_br_middle_e4;  // to DEC  I1 branch middle
  /* output */ logic [`RV_BHT_GHR_RANGE] exu_i1_br_fghr_e4;  // to DEC  I1 branch fghr
  /* output */ logic exu_i1_br_ret_e4;  // to DEC  I1 branch return
  /* output */ logic exu_i1_br_call_e4;  // to DEC  I1 branch call
  /* output */ logic exu_flush_upper_e2;  // flush upper; either i0 or i1

  /* output */ rets_pkt_t exu_rets_e1_pkt;  // to IFU - I0+I1 {call; return; pc}
  /* output */ rets_pkt_t exu_rets_e4_pkt;  // to IFU - I0+I1 {call; return; pc}

  /* output */ logic exu_pmu_i0_br_misp;  // to PMU - I0 E4 branch mispredict
  /* output */ logic exu_pmu_i0_br_ataken;  // to PMU - I0 E4 taken
  /* output */ logic exu_pmu_i0_pc4;  // to PMU - I0 E4 PC
  /* output */ logic exu_pmu_i1_br_misp;  // to PMU - I1 E4 branch mispredict
  /* output */ logic exu_pmu_i1_br_ataken;  // to PMU - I1 E4 taken
  /* output */ logic exu_pmu_i1_pc4;  // to PMU - I1 E4 PC

  exu DUT_i (.*);

  /* Clock Generation */
  always #5 clk = ~clk;
  assign active_clk = clk;

  initial begin

    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    /* Deassert Reset */
    rst_l = 1;
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    dec_i0_div_d = '1;
    div_p.valid  = '1;
    div_p.unsign  = '1;
    gpr_i0_rs1_d = 'h100;
    gpr_i0_rs2_d = 'h2;

    @(posedge clk);
    dec_i0_div_d = '0;
    div_p.valid  = '0;
    gpr_i0_rs1_d = '0;
    gpr_i0_rs2_d = '0;

    /* Simulation Trailer */
    for (integer i = 0; i < 40; i++) @(posedge clk);
    $finish;
  end

  always @(*) begin
    $monitor("Div: %h, Vld: %b", exu_div_result, exu_div_finish);
  end

endmodule
