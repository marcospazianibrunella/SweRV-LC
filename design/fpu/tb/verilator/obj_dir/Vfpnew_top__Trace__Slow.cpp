// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfpnew_top__Syms.h"


//======================

void Vfpnew_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vfpnew_top::traceInit, &Vfpnew_top::traceFull, &Vfpnew_top::traceChg, this);
}
void Vfpnew_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vfpnew_top* t = (Vfpnew_top*)userthis;
    Vfpnew_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vfpnew_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfpnew_top* t = (Vfpnew_top*)userthis;
    Vfpnew_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vfpnew_top::traceInitThis(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vfpnew_top::traceFullThis(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vfpnew_top::traceInitThis__1(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+9497,"clk_i", false,-1);
        vcdp->declBit(c+9505,"rst_ni", false,-1);
        vcdp->declArray(c+9513,"operands_i", false,-1, 95,0);
        vcdp->declBus(c+9537,"rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"op_mod_i", false,-1);
        vcdp->declBus(c+9561,"src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9585,"vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"tag_i", false,-1);
        vcdp->declBit(c+9601,"in_valid_i", false,-1);
        vcdp->declBit(c+9609,"in_ready_o", false,-1);
        vcdp->declBit(c+9617,"flush_i", false,-1);
        vcdp->declBus(c+9625,"result_o", false,-1, 31,0);
        vcdp->declBus(c+9633,"status_o", false,-1, 4,0);
        vcdp->declBit(c+9641,"tag_o", false,-1);
        vcdp->declBit(c+9649,"out_valid_o", false,-1);
        vcdp->declBit(c+9657,"out_ready_i", false,-1);
        vcdp->declBit(c+9665,"busy_o", false,-1);
        vcdp->declQuad(c+10105,"fpnew_top Features", false,-1, 42,0);
        vcdp->declArray(c+10121,"fpnew_top Implementation", false,-1, 681,0);
        vcdp->declBus(c+10297,"fpnew_top WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top rst_ni", false,-1);
        vcdp->declArray(c+9513,"fpnew_top operands_i", false,-1, 95,0);
        vcdp->declBus(c+9537,"fpnew_top rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top op_mod_i", false,-1);
        vcdp->declBus(c+9561,"fpnew_top src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"fpnew_top dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"fpnew_top int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9585,"fpnew_top vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top tag_i", false,-1);
        vcdp->declBit(c+9601,"fpnew_top in_valid_i", false,-1);
        vcdp->declBit(c+9609,"fpnew_top in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top flush_i", false,-1);
        vcdp->declBus(c+9625,"fpnew_top result_o", false,-1, 31,0);
        vcdp->declBus(c+9633,"fpnew_top status_o", false,-1, 4,0);
        vcdp->declBit(c+9641,"fpnew_top tag_o", false,-1);
        vcdp->declBit(c+9649,"fpnew_top out_valid_o", false,-1);
        vcdp->declBit(c+9657,"fpnew_top out_ready_i", false,-1);
        vcdp->declBit(c+9665,"fpnew_top busy_o", false,-1);
        vcdp->declBus(c+10313,"fpnew_top NUM_OPGROUPS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+417,"fpnew_top opgrp_in_ready", false,-1, 3,0);
        vcdp->declBus(c+425,"fpnew_top opgrp_out_valid", false,-1, 3,0);
        vcdp->declBus(c+433,"fpnew_top opgrp_out_ready", false,-1, 3,0);
        vcdp->declBus(c+441,"fpnew_top opgrp_ext", false,-1, 3,0);
        vcdp->declBus(c+449,"fpnew_top opgrp_busy", false,-1, 3,0);
        vcdp->declArray(c+457,"fpnew_top opgrp_outputs", false,-1, 151,0);
        vcdp->declBus(c+497,"fpnew_top is_boxed", false,-1, 14,0);
        vcdp->declQuad(c+505,"fpnew_top arbiter_output", false,-1, 37,0);
        vcdp->declBus(c+10297,"fpnew_top gen_nanbox_check[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_nanbox_check[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_nanbox_check[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_nanbox_check[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_nanbox_check[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+521,"fpnew_top gen_operation_groups[0] in_valid", false,-1);
        vcdp->declBus(c+529,"fpnew_top gen_operation_groups[0] input_boxed", false,-1, 14,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[1] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+537,"fpnew_top gen_operation_groups[1] in_valid", false,-1);
        vcdp->declBus(c+545,"fpnew_top gen_operation_groups[1] input_boxed", false,-1, 9,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[2] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+553,"fpnew_top gen_operation_groups[2] in_valid", false,-1);
        vcdp->declBus(c+561,"fpnew_top gen_operation_groups[2] input_boxed", false,-1, 9,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+569,"fpnew_top gen_operation_groups[3] in_valid", false,-1);
        vcdp->declBus(c+577,"fpnew_top gen_operation_groups[3] input_boxed", false,-1, 14,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10313,"fpnew_top i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10369,"fpnew_top i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10361,"fpnew_top i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10369,"fpnew_top i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10353,"fpnew_top i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top i_arbiter clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+9617,"fpnew_top i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10377,"fpnew_top i_arbiter rr_i", false,-1, 1,0);
        vcdp->declBus(c+425,"fpnew_top i_arbiter req_i", false,-1, 3,0);
        vcdp->declBus(c+433,"fpnew_top i_arbiter gnt_o", false,-1, 3,0);
        vcdp->declArray(c+457,"fpnew_top i_arbiter data_i", false,-1, 151,0);
        vcdp->declBit(c+9649,"fpnew_top i_arbiter req_o", false,-1);
        vcdp->declBit(c+9657,"fpnew_top i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+505,"fpnew_top i_arbiter data_o", false,-1, 37,0);
        vcdp->declBus(c+585,"fpnew_top i_arbiter idx_o", false,-1, 1,0);
        vcdp->declBus(c+10353,"fpnew_top i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+593,"fpnew_top i_arbiter gen_arbiter index_nodes", false,-1, 5,0);
        vcdp->declArray(c+601,"fpnew_top i_arbiter gen_arbiter data_nodes", false,-1, 113,0);
        vcdp->declBus(c+633,"fpnew_top i_arbiter gen_arbiter gnt_nodes", false,-1, 2,0);
        vcdp->declBus(c+641,"fpnew_top i_arbiter gen_arbiter req_nodes", false,-1, 2,0);
        vcdp->declBus(c+8313,"fpnew_top i_arbiter gen_arbiter rr_q", false,-1, 1,0);
        vcdp->declBus(c+425,"fpnew_top i_arbiter gen_arbiter req_d", false,-1, 3,0);
        vcdp->declBus(c+9673,"fpnew_top i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 1,0);
        vcdp->declBus(c+649,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 3,0);
        vcdp->declBus(c+657,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 3,0);
        vcdp->declBus(c+665,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 1,0);
        vcdp->declBus(c+673,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 1,0);
        vcdp->declBus(c+681,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 1,0);
        vcdp->declBit(c+689,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+10385,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+697,"fpnew_top i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10393,"fpnew_top i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+705,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10401,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+713,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10353,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10313,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10353,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+649,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 3,0);
        vcdp->declBus(c+665,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 1,0);
        vcdp->declBit(c+689,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10353,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+1,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 7,0);
        vcdp->declBus(c+721,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 3,0);
        vcdp->declBus(c+729,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 7,0);
        vcdp->declBus(c+737,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 3,0);
        vcdp->declBus(c+10313,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10313,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10353,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+657,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 3,0);
        vcdp->declBus(c+673,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 1,0);
        vcdp->declBit(c+745,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10353,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+9,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 7,0);
        vcdp->declBus(c+753,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 3,0);
        vcdp->declBus(c+761,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 7,0);
        vcdp->declBus(c+769,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 3,0);
        vcdp->declBus(c+10313,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10409,"fpnew_top gen_operation_groups[0] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[0] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+10425,"fpnew_top gen_operation_groups[0] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+10433,"fpnew_top gen_operation_groups[0] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+10441,"fpnew_top gen_operation_groups[0] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+10481,"fpnew_top gen_operation_groups[0] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+10489,"fpnew_top gen_operation_groups[0] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[0] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[0] i_opgroup_block rst_ni", false,-1);
        vcdp->declArray(c+9513,"fpnew_top gen_operation_groups[0] i_opgroup_block operands_i", false,-1, 95,0);
        vcdp->declBus(c+529,"fpnew_top gen_operation_groups[0] i_opgroup_block is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[0] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[0] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[0] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+9561,"fpnew_top gen_operation_groups[0] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[0] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"fpnew_top gen_operation_groups[0] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9585,"fpnew_top gen_operation_groups[0] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+521,"fpnew_top gen_operation_groups[0] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+9681,"fpnew_top gen_operation_groups[0] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[0] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+777,"fpnew_top gen_operation_groups[0] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+785,"fpnew_top gen_operation_groups[0] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+793,"fpnew_top gen_operation_groups[0] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+801,"fpnew_top gen_operation_groups[0] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+809,"fpnew_top gen_operation_groups[0] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+817,"fpnew_top gen_operation_groups[0] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+825,"fpnew_top gen_operation_groups[0] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+833,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+841,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+849,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+857,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+865,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+921,"fpnew_top gen_operation_groups[0] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format in_valid", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+841,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+849,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+865,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+809,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+817,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+921,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+945,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+953,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+961,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+1033,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+1041,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+8321,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+841,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+6521,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+1049,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+1057,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+1065,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+1073,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+1081,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+1089,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+10505,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+1097,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1105,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1113,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1121,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1129,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10521,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+10529,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10537,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+10545,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10561,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1049,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+1065,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+1089,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+17,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+1137,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+1145,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+1153,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1057,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+1073,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+1161,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+25,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+1169,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+1177,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+1185,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10569,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10577,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice Width", false,-1, 31,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+10585,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rst_ni", false,-1);
        vcdp->declArray(c+9513,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice operands_i", false,-1, 95,0);
        vcdp->declBus(c+1193,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_mod_i", false,-1);
        vcdp->declBit(c+9585,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_i", false,-1);
        vcdp->declBit(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice flush_i", false,-1);
        vcdp->declBus(c+9689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+1209,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_o", false,-1);
        vcdp->declBit(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+1217,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice busy_o", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+9689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_result", false,-1, 31,0);
        vcdp->declBus(c+9689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_regular_result", false,-1, 31,0);
        vcdp->declBus(c+10601,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_class_result", false,-1, 31,0);
        vcdp->declBus(c+33,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_vec_class_result", false,-1, 31,0);
        vcdp->declBus(c+1225,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+10593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+10609,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_class_mask", false,-1, 9,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+10617,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_vectorial", false,-1, 0,0);
        vcdp->declBus(c+1217,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBus(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_is_class", false,-1, 0,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_vector", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_class", false,-1);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice CLASS_VEC_BITS", false,-1, 31,0);
        vcdp->declBus(c+9689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_sign", false,-1);
        vcdp->declBit(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declArray(c+1233,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 95,0);
        vcdp->declBus(c+9697,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+1257,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+10625,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+1265,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+10601,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+10633,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+10641,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma WIDTH", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rst_ni", false,-1);
        vcdp->declArray(c+1233,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operands_i", false,-1, 95,0);
        vcdp->declBus(c+1193,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_mod_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_i", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_i", false,-1);
        vcdp->declBit(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma in_valid_i", false,-1);
        vcdp->declBit(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma flush_i", false,-1);
        vcdp->declBus(c+9697,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_o", false,-1, 31,0);
        vcdp->declBus(c+1257,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma status_o", false,-1, 4,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma extension_bit_o", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_o", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_o", false,-1);
        vcdp->declBit(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_valid_o", false,-1);
        vcdp->declBit(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_ready_i", false,-1);
        vcdp->declBit(c+1217,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma busy_o", false,-1);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10657,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma BIAS", false,-1, 31,0);
        vcdp->declBus(c+10665,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma PRECISION_BITS", false,-1, 31,0);
        vcdp->declBus(c+10673,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma LOWER_SUM_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma LZC_RESULT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma EXP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma SHIFT_AMOUNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_MID_REGS", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declArray(c+1233,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_operands_q", false,-1, 95,0);
        vcdp->declBus(c+1193,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_is_boxed_q", false,-1, 2,0);
        vcdp->declBus(c+9705,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+9713,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+9553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+1273,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_q", false,-1, 23,0);
        vcdp->declBus(c+1281,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_a", false,-1, 31,0);
        vcdp->declBus(c+1289,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_b", false,-1, 31,0);
        vcdp->declBus(c+1297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_c", false,-1, 31,0);
        vcdp->declBus(c+1305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_a", false,-1, 7,0);
        vcdp->declBus(c+1313,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_b", false,-1, 7,0);
        vcdp->declBus(c+1321,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_c", false,-1, 7,0);
        vcdp->declBit(c+1329,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma any_operand_inf", false,-1);
        vcdp->declBit(c+1337,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma any_operand_nan", false,-1);
        vcdp->declBit(c+1345,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma signalling_nan", false,-1);
        vcdp->declBit(c+1353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma effective_subtraction", false,-1);
        vcdp->declBit(c+1361,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_sign", false,-1);
        vcdp->declBus(c+1369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_result", false,-1, 31,0);
        vcdp->declBus(c+1377,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_status", false,-1, 4,0);
        vcdp->declBit(c+1385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_is_special", false,-1);
        vcdp->declBus(c+1393,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_a", false,-1, 9,0);
        vcdp->declBus(c+1401,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_b", false,-1, 9,0);
        vcdp->declBus(c+1409,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_c", false,-1, 9,0);
        vcdp->declBus(c+1417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_addend", false,-1, 9,0);
        vcdp->declBus(c+1425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_product", false,-1, 9,0);
        vcdp->declBus(c+1433,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_difference", false,-1, 9,0);
        vcdp->declBus(c+1441,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_exponent", false,-1, 9,0);
        vcdp->declBus(c+1449,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shamt", false,-1, 6,0);
        vcdp->declBus(c+1457,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_a", false,-1, 23,0);
        vcdp->declBus(c+1465,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_b", false,-1, 23,0);
        vcdp->declBus(c+1473,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_c", false,-1, 23,0);
        vcdp->declQuad(c+1481,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma product", false,-1, 47,0);
        vcdp->declArray(c+1497,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma product_shifted", false,-1, 75,0);
        vcdp->declArray(c+1521,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_after_shift", false,-1, 75,0);
        vcdp->declBus(c+1545,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_sticky_bits", false,-1, 23,0);
        vcdp->declBit(c+1553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_before_add", false,-1);
        vcdp->declArray(c+1561,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shifted", false,-1, 75,0);
        vcdp->declBit(c+1585,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inject_carry_in", false,-1);
        vcdp->declArray(c+1593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_raw", false,-1, 76,0);
        vcdp->declBit(c+1617,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_carry", false,-1);
        vcdp->declArray(c+1625,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum", false,-1, 75,0);
        vcdp->declBit(c+1649,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_sign", false,-1);
        vcdp->declBit(c+1353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma effective_subtraction_q", false,-1);
        vcdp->declBus(c+1425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_product_q", false,-1, 9,0);
        vcdp->declBus(c+1433,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_difference_q", false,-1, 9,0);
        vcdp->declBus(c+1441,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_exponent_q", false,-1, 9,0);
        vcdp->declBus(c+1449,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shamt_q", false,-1, 6,0);
        vcdp->declBit(c+1553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_before_add_q", false,-1);
        vcdp->declArray(c+1625,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_q", false,-1, 75,0);
        vcdp->declBit(c+1649,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_sign_q", false,-1);
        vcdp->declBus(c+9705,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_q", false,-1, 2,0);
        vcdp->declBit(c+1385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_is_special_q", false,-1);
        vcdp->declBus(c+1369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_result_q", false,-1, 31,0);
        vcdp->declBus(c+1377,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_status_q", false,-1, 4,0);
        vcdp->declBus(c+1353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_eff_sub_q", false,-1, 0,0);
        vcdp->declBus(c+1425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_exp_prod_q", false,-1, 9,0);
        vcdp->declBus(c+1433,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_exp_diff_q", false,-1, 9,0);
        vcdp->declBus(c+1441,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_tent_exp_q", false,-1, 9,0);
        vcdp->declBus(c+1449,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_add_shamt_q", false,-1, 6,0);
        vcdp->declBus(c+1553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_sticky_q", false,-1, 0,0);
        vcdp->declArray(c+1625,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_sum_q", false,-1, 75,0);
        vcdp->declBus(c+1649,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_final_sign_q", false,-1, 0,0);
        vcdp->declBus(c+9705,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+1385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_res_is_spec_q", false,-1, 0,0);
        vcdp->declBus(c+1369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_spec_res_q", false,-1, 31,0);
        vcdp->declBus(c+1377,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_spec_stat_q", false,-1, 4,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mid_pipe_ready", false,-1, 0,0);
        vcdp->declQuad(c+1657,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_lower", false,-1, 50,0);
        vcdp->declBus(c+1673,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma leading_zero_count", false,-1, 5,0);
        vcdp->declBus(c+1681,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma leading_zero_count_sgn", false,-1, 6,0);
        vcdp->declBit(c+1689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma lzc_zeroes", false,-1);
        vcdp->declBus(c+1697,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma norm_shamt", false,-1, 6,0);
        vcdp->declBus(c+1705,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma normalized_exponent", false,-1, 9,0);
        vcdp->declArray(c+1713,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_shifted", false,-1, 76,0);
        vcdp->declBus(c+1737,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_mantissa", false,-1, 24,0);
        vcdp->declQuad(c+1745,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_sticky_bits", false,-1, 50,0);
        vcdp->declBit(c+1761,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_after_norm", false,-1);
        vcdp->declBus(c+1769,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_exponent", false,-1, 9,0);
        vcdp->declBit(c+1649,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_sign", false,-1);
        vcdp->declBus(c+1777,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_exponent", false,-1, 7,0);
        vcdp->declBus(c+1785,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_mantissa", false,-1, 22,0);
        vcdp->declBus(c+1793,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_abs", false,-1, 30,0);
        vcdp->declBus(c+1801,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma round_sticky_bits", false,-1, 1,0);
        vcdp->declBit(c+1809,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma of_before_round", false,-1);
        vcdp->declBit(c+1817,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma of_after_round", false,-1);
        vcdp->declBit(c+1825,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma uf_before_round", false,-1);
        vcdp->declBit(c+1833,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma uf_after_round", false,-1);
        vcdp->declBit(c+1841,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_zero", false,-1);
        vcdp->declBit(c+9721,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rounded_sign", false,-1);
        vcdp->declBus(c+1849,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rounded_abs", false,-1, 30,0);
        vcdp->declBus(c+9729,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma regular_result", false,-1, 31,0);
        vcdp->declBus(c+1857,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma regular_status", false,-1, 4,0);
        vcdp->declBus(c+9697,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_d", false,-1, 31,0);
        vcdp->declBus(c+1257,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma status_d", false,-1, 4,0);
        vcdp->declBus(c+9697,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+1257,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+10697,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs NumOperands", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs WIDTH", false,-1, 31,0);
        vcdp->declArray(c+1233,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs operands_i", false,-1, 95,0);
        vcdp->declBus(c+1193,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+1273,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs info_o", false,-1, 23,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+1865,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+1873,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+1881,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+1889,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+1897,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+1905,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+1913,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+1921,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+1929,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+1937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] value", false,-1, 31,0);
        vcdp->declBit(c+1945,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_boxed", false,-1);
        vcdp->declBit(c+1953,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_normal", false,-1);
        vcdp->declBit(c+1961,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_inf", false,-1);
        vcdp->declBit(c+1969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_nan", false,-1);
        vcdp->declBit(c+1977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_signalling", false,-1);
        vcdp->declBit(c+1985,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_quiet", false,-1);
        vcdp->declBit(c+1993,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_zero", false,-1);
        vcdp->declBit(c+2001,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_subnormal", false,-1);
        vcdp->declBus(c+2009,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] value", false,-1, 31,0);
        vcdp->declBit(c+2017,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_boxed", false,-1);
        vcdp->declBit(c+2025,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_normal", false,-1);
        vcdp->declBit(c+2033,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_inf", false,-1);
        vcdp->declBit(c+2041,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_nan", false,-1);
        vcdp->declBit(c+2049,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_signalling", false,-1);
        vcdp->declBit(c+2057,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_quiet", false,-1);
        vcdp->declBit(c+2065,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_zero", false,-1);
        vcdp->declBit(c+2073,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_subnormal", false,-1);
        vcdp->declBus(c+10673,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc MODE", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+1657,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc in_i", false,-1, 50,0);
        vcdp->declBus(c+1673,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc cnt_o", false,-1, 5,0);
        vcdp->declBit(c+1689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc empty_o", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+41,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc index_lut", false,-1, 305,0);
        vcdp->declQuad(c+2081,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+2097,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+2193,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc in_tmp", false,-1, 50,0);
        vcdp->declBus(c+10673,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10705,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding AbsWidth", false,-1, 31,0);
        vcdp->declBus(c+1793,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding abs_value_i", false,-1, 30,0);
        vcdp->declBit(c+1649,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding sign_i", false,-1);
        vcdp->declBus(c+1801,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding round_sticky_bits_i", false,-1, 1,0);
        vcdp->declBus(c+9705,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding rnd_mode_i", false,-1, 2,0);
        vcdp->declBit(c+1353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding effective_subtraction_i", false,-1);
        vcdp->declBus(c+1849,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding abs_rounded_o", false,-1, 30,0);
        vcdp->declBit(c+9721,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding sign_o", false,-1);
        vcdp->declBit(c+1841,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding exact_zero_o", false,-1);
        vcdp->declBit(c+9737,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding round_up", false,-1);
        vcdp->declBus(c+10713,"fpnew_top gen_operation_groups[1] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+10721,"fpnew_top gen_operation_groups[1] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+10729,"fpnew_top gen_operation_groups[1] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+10737,"fpnew_top gen_operation_groups[1] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+10777,"fpnew_top gen_operation_groups[1] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+10785,"fpnew_top gen_operation_groups[1] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block rst_ni", false,-1);
        vcdp->declQuad(c+9745,"fpnew_top gen_operation_groups[1] i_opgroup_block operands_i", false,-1, 63,0);
        vcdp->declBus(c+545,"fpnew_top gen_operation_groups[1] i_opgroup_block is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[1] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[1] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[1] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+9561,"fpnew_top gen_operation_groups[1] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[1] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"fpnew_top gen_operation_groups[1] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9585,"fpnew_top gen_operation_groups[1] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[1] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+537,"fpnew_top gen_operation_groups[1] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+9761,"fpnew_top gen_operation_groups[1] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[1] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+2209,"fpnew_top gen_operation_groups[1] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+2217,"fpnew_top gen_operation_groups[1] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+2225,"fpnew_top gen_operation_groups[1] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+2233,"fpnew_top gen_operation_groups[1] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+2241,"fpnew_top gen_operation_groups[1] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+2249,"fpnew_top gen_operation_groups[1] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+2257,"fpnew_top gen_operation_groups[1] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+2265,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+2273,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+2281,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+2289,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+6529,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+2297,"fpnew_top gen_operation_groups[1] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice FMT", false,-1, 2,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice REG", false,-1, 31,0);
        vcdp->declBit(c+2313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice in_valid", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+2273,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+2281,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+6529,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+2241,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+2249,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+2297,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+2321,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+2329,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+2337,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+2409,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+2417,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+8329,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+2273,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+6585,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+2425,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+2433,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+2441,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+2449,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+2457,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+2465,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+10793,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+2473,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+2481,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+2489,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+2497,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+2505,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10521,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+10801,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10537,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+10809,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10561,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+2425,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+2441,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+2465,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+121,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+2513,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+2521,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+2529,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+2433,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+2449,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+2537,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+129,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+2545,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+2553,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+2561,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice Width", false,-1, 31,0);
        vcdp->declBus(c+10825,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+10833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice IntFmtConfig", false,-1, 0,3);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+10841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice rst_ni", false,-1);
        vcdp->declQuad(c+9745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice operands_i", false,-1, 63,0);
        vcdp->declBus(c+545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice op_mod_i", false,-1);
        vcdp->declBus(c+9561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice tag_i", false,-1);
        vcdp->declBit(c+2313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+2569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice flush_i", false,-1);
        vcdp->declBus(c+6593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+2577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+8337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice tag_o", false,-1);
        vcdp->declBit(c+2585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+2593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+2601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice busy_o", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice FMT_BITS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice AUX_BITS", false,-1, 31,0);
        vcdp->declBus(c+2569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+2585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+9769,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt", false,-1, 2,0);
        vcdp->declBus(c+9777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice aux_data", false,-1, 4,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_is_int", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_is_cpk", false,-1);
        vcdp->declBus(c+10377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_vec_op", false,-1, 1,0);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_d", false,-1, 2,0);
        vcdp->declBus(c+10849,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_q", false,-1, 2,0);
        vcdp->declBit(c+2609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_up_cast", false,-1);
        vcdp->declBit(c+2617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_down_cast", false,-1);
        vcdp->declArray(c+2625,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice fmt_slice_result", false,-1, 159,0);
        vcdp->declArray(c+137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice ifmt_slice_result", false,-1, 127,0);
        vcdp->declBus(c+10857,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_slice_result", false,-1, 31,0);
        vcdp->declBus(c+10865,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_d", false,-1, 31,0);
        vcdp->declBus(c+10873,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_q", false,-1, 31,0);
        vcdp->declBus(c+7489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+8337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+8345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_aux", false,-1, 4,0);
        vcdp->declBus(c+2601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBit(c+8353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_vector", false,-1);
        vcdp->declBus(c+8361,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt", false,-1, 2,0);
        vcdp->declBit(c+8369,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt_is_int", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_cpk", false,-1);
        vcdp->declBus(c+10377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_vec_op", false,-1, 1,0);
        vcdp->declBus(c+2665,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_1op", false,-1, 4,0);
        vcdp->declBus(c+2673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_2op", false,-1, 9,0);
        vcdp->declBus(c+10881,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice boxed_2op unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE", false,-1, 31,0);
        vcdp->declBus(c+10889,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+10897,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] MAX_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10905,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+10913,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10921,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+7497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+2313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+2585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+2593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declQuad(c+2681,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 63,0);
        vcdp->declBus(c+7505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+7513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+2697,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+10601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+10929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+10937,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rst_ni", false,-1);
        vcdp->declQuad(c+2681,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi operands_i", false,-1, 63,0);
        vcdp->declBus(c+2673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_i", false,-1, 3,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi dst_fmt_i", false,-1, 2,0);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi tag_i", false,-1);
        vcdp->declBus(c+9777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi aux_i", false,-1, 4,0);
        vcdp->declBit(c+2313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_valid_i", false,-1);
        vcdp->declBit(c+2569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi flush_i", false,-1);
        vcdp->declBus(c+7505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_o", false,-1, 31,0);
        vcdp->declBus(c+7513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi status_o", false,-1, 4,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi extension_bit_o", false,-1);
        vcdp->declBit(c+8337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi tag_o", false,-1);
        vcdp->declBus(c+8345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi aux_o", false,-1, 4,0);
        vcdp->declBit(c+2585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_valid_o", false,-1);
        vcdp->declBit(c+2593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_ready_i", false,-1);
        vcdp->declBit(c+2601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi busy_o", false,-1);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declQuad(c+2681,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi operands_q", false,-1, 63,0);
        vcdp->declBus(c+9785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+9793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_q", false,-1, 3,0);
        vcdp->declBus(c+9801,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi dst_fmt_q", false,-1, 2,0);
        vcdp->declBit(c+2313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_valid_q", false,-1);
        vcdp->declQuad(c+2681,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_operands_q", false,-1, 63,0);
        vcdp->declBus(c+9785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+9793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+9801,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+9777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+2313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+2569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+2705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi divsqrt_fmt", false,-1, 1,0);
        vcdp->declArray(c+2713,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi divsqrt_operands", false,-1, 127,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi input_is_fp8", false,-1);
        vcdp->declBit(c+2569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_ready", false,-1);
        vcdp->declBit(c+2745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi div_valid", false,-1);
        vcdp->declBit(c+2753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi sqrt_valid", false,-1);
        vcdp->declBit(c+8377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_ready", false,-1);
        vcdp->declBit(c+8385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_done", false,-1);
        vcdp->declBit(c+2761,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_starting", false,-1);
        vcdp->declBit(c+2585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_valid", false,-1);
        vcdp->declBit(c+2593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_ready", false,-1);
        vcdp->declBit(c+2769,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi hold_result", false,-1);
        vcdp->declBit(c+2777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi data_is_held", false,-1);
        vcdp->declBit(c+2785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_busy", false,-1);
        vcdp->declBus(c+8393,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi state_q", false,-1, 1,0);
        vcdp->declBus(c+2793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi state_d", false,-1, 1,0);
        vcdp->declBit(c+8401,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_is_fp8_q", false,-1);
        vcdp->declBit(c+8337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_tag_q", false,-1);
        vcdp->declBus(c+8345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_aux_q", false,-1, 4,0);
        vcdp->declQuad(c+7521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_result", false,-1, 63,0);
        vcdp->declBus(c+8297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi adjusted_result", false,-1, 31,0);
        vcdp->declBus(c+9481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi held_result_q", false,-1, 31,0);
        vcdp->declBus(c+8305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_status", false,-1, 4,0);
        vcdp->declBus(c+9489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi held_status_q", false,-1, 4,0);
        vcdp->declBus(c+7505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_d", false,-1, 31,0);
        vcdp->declBus(c+7513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi status_d", false,-1, 4,0);
        vcdp->declBus(c+7505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+7513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+8337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+8345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+2585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+2593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Clk_CI", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Rst_RBI", false,-1);
        vcdp->declBit(c+2745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Div_start_SI", false,-1);
        vcdp->declBit(c+2753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sqrt_start_SI", false,-1);
        vcdp->declQuad(c+2801,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Operand_a_DI", false,-1, 63,0);
        vcdp->declQuad(c+2817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Operand_b_DI", false,-1, 63,0);
        vcdp->declBus(c+9785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei RM_SI", false,-1, 2,0);
        vcdp->declBus(c+10945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+2705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Format_sel_SI", false,-1, 1,0);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Kill_SI", false,-1);
        vcdp->declQuad(c+7521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Result_DO", false,-1, 63,0);
        vcdp->declBus(c+8305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Fflags_SO", false,-1, 4,0);
        vcdp->declBit(c+8377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Ready_SO", false,-1);
        vcdp->declBit(c+8385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Done_SO", false,-1);
        vcdp->declBus(c+8409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_a_D", false,-1, 11,0);
        vcdp->declBus(c+8417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_b_D", false,-1, 11,0);
        vcdp->declQuad(c+8425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_a_D", false,-1, 52,0);
        vcdp->declQuad(c+8441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_b_D", false,-1, 52,0);
        vcdp->declBus(c+8457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_z_D", false,-1, 12,0);
        vcdp->declQuad(c+7537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_z_D", false,-1, 56,0);
        vcdp->declBit(c+8465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sign_z_D", false,-1);
        vcdp->declBit(c+2833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Start_S", false,-1);
        vcdp->declBus(c+8473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei RM_dly_S", false,-1, 2,0);
        vcdp->declBit(c+8481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Div_enable_S", false,-1);
        vcdp->declBit(c+8489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sqrt_enable_S", false,-1);
        vcdp->declBit(c+8497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Inf_a_S", false,-1);
        vcdp->declBit(c+8505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Inf_b_S", false,-1);
        vcdp->declBit(c+8513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Zero_a_S", false,-1);
        vcdp->declBit(c+8521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Zero_b_S", false,-1);
        vcdp->declBit(c+8529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei NaN_a_S", false,-1);
        vcdp->declBit(c+8537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei NaN_b_S", false,-1);
        vcdp->declBit(c+8545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei SNaN_S", false,-1);
        vcdp->declBit(c+2841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Special_case_SB", false,-1);
        vcdp->declBit(c+8553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Special_case_dly_SB", false,-1);
        vcdp->declBit(c+8561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Full_precision_S", false,-1);
        vcdp->declBit(c+8569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP32_S", false,-1);
        vcdp->declBit(c+8577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP64_S", false,-1);
        vcdp->declBit(c+8585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP16_S", false,-1);
        vcdp->declBit(c+8593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP16ALT_S", false,-1);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Clk_CI", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+8377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Ready_SI", false,-1);
        vcdp->declQuad(c+2801,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Operand_a_DI", false,-1, 63,0);
        vcdp->declQuad(c+2817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Operand_b_DI", false,-1, 63,0);
        vcdp->declBus(c+9785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_SI", false,-1, 2,0);
        vcdp->declBus(c+2705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declBit(c+2833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Start_SO", false,-1);
        vcdp->declBus(c+8409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_DO_norm", false,-1, 11,0);
        vcdp->declBus(c+8417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_DO_norm", false,-1, 11,0);
        vcdp->declQuad(c+8425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_DO_norm", false,-1, 52,0);
        vcdp->declQuad(c+8441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_DO_norm", false,-1, 52,0);
        vcdp->declBus(c+8473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_dly_SO", false,-1, 2,0);
        vcdp->declBit(c+8465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DO", false,-1);
        vcdp->declBit(c+8497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SO", false,-1);
        vcdp->declBit(c+8505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SO", false,-1);
        vcdp->declBit(c+8513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SO", false,-1);
        vcdp->declBit(c+8521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SO", false,-1);
        vcdp->declBit(c+8529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SO", false,-1);
        vcdp->declBit(c+8537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SO", false,-1);
        vcdp->declBit(c+8545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SO", false,-1);
        vcdp->declBit(c+2841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Special_case_SBO", false,-1);
        vcdp->declBit(c+8553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Special_case_dly_SBO", false,-1);
        vcdp->declBit(c+2849,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Hb_a_D", false,-1);
        vcdp->declBit(c+2857,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Hb_b_D", false,-1);
        vcdp->declBus(c+2865,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_D", false,-1, 10,0);
        vcdp->declBus(c+2873,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_D", false,-1, 10,0);
        vcdp->declQuad(c+2881,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_NonH_D", false,-1, 51,0);
        vcdp->declQuad(c+2897,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_NonH_D", false,-1, 51,0);
        vcdp->declQuad(c+2913,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_D", false,-1, 52,0);
        vcdp->declQuad(c+2929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_D", false,-1, 52,0);
        vcdp->declBit(c+2945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_a_D", false,-1);
        vcdp->declBit(c+2953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_b_D", false,-1);
        vcdp->declBit(c+2833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Start_S", false,-1);
        vcdp->declBit(c+2961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_zero_S", false,-1);
        vcdp->declBit(c+2969,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_zero_S", false,-1);
        vcdp->declBit(c+2977,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_prenorm_zero_S", false,-1);
        vcdp->declBit(c+2985,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_prenorm_zero_S", false,-1);
        vcdp->declBit(c+2993,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_prenorm_Inf_NaN_S", false,-1);
        vcdp->declBit(c+3001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_prenorm_Inf_NaN_S", false,-1);
        vcdp->declBit(c+3009,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_QNaN_S", false,-1);
        vcdp->declBit(c+3017,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_SNaN_S", false,-1);
        vcdp->declBit(c+3025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_QNaN_S", false,-1);
        vcdp->declBit(c+3033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_SNaN_S", false,-1);
        vcdp->declBit(c+3041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SN", false,-1);
        vcdp->declBit(c+8513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SP", false,-1);
        vcdp->declBit(c+3049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SN", false,-1);
        vcdp->declBit(c+8521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SP", false,-1);
        vcdp->declBit(c+3057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SN", false,-1);
        vcdp->declBit(c+8497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SP", false,-1);
        vcdp->declBit(c+3065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SN", false,-1);
        vcdp->declBit(c+8505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SP", false,-1);
        vcdp->declBit(c+3073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SN", false,-1);
        vcdp->declBit(c+8529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SP", false,-1);
        vcdp->declBit(c+3081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SN", false,-1);
        vcdp->declBit(c+8537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SP", false,-1);
        vcdp->declBit(c+6601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SN", false,-1);
        vcdp->declBit(c+8545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SP", false,-1);
        vcdp->declBit(c+6609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DN", false,-1);
        vcdp->declBit(c+8465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DP", false,-1);
        vcdp->declBus(c+9809,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_DN", false,-1, 2,0);
        vcdp->declBus(c+8473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_DP", false,-1, 2,0);
        vcdp->declBus(c+3089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_leadingOne_a", false,-1, 5,0);
        vcdp->declBus(c+3097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_leadingOne_b", false,-1, 5,0);
        vcdp->declBit(c+3105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_zero_S_a", false,-1);
        vcdp->declBit(c+3113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_zero_S_b", false,-1);
        vcdp->declQuad(c+6617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_norm_DN", false,-1, 52,0);
        vcdp->declQuad(c+8425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_norm_DP", false,-1, 52,0);
        vcdp->declBus(c+6633,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_norm_DN", false,-1, 11,0);
        vcdp->declBus(c+8409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_norm_DP", false,-1, 11,0);
        vcdp->declQuad(c+6641,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_norm_DN", false,-1, 52,0);
        vcdp->declQuad(c+8441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_norm_DP", false,-1, 52,0);
        vcdp->declBus(c+6657,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_norm_DN", false,-1, 11,0);
        vcdp->declBus(c+8417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_norm_DP", false,-1, 11,0);
        vcdp->declBus(c+10953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua MODE", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+2913,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua in_i", false,-1, 52,0);
        vcdp->declBus(c+3089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua cnt_o", false,-1, 5,0);
        vcdp->declBit(c+3105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua empty_o", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc index_lut", false,-1, 317,0);
        vcdp->declQuad(c+3121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+3137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+3233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc in_tmp", false,-1, 52,0);
        vcdp->declBus(c+10953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub MODE", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+2929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub in_i", false,-1, 52,0);
        vcdp->declBus(c+3097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub cnt_o", false,-1, 5,0);
        vcdp->declBit(c+3113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub empty_o", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+249,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc index_lut", false,-1, 317,0);
        vcdp->declQuad(c+3249,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+3265,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+3361,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc in_tmp", false,-1, 52,0);
        vcdp->declBus(c+10953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Clk_CI", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+2833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Start_SI", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Kill_SI", false,-1);
        vcdp->declBit(c+2841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Special_case_SBI", false,-1);
        vcdp->declBit(c+8553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Special_case_dly_SBI", false,-1);
        vcdp->declBus(c+10945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+2705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declQuad(c+8425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_a_DI", false,-1, 52,0);
        vcdp->declQuad(c+8441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_b_DI", false,-1, 52,0);
        vcdp->declBus(c+8409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_a_DI", false,-1, 11,0);
        vcdp->declBus(c+8417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_b_DI", false,-1, 11,0);
        vcdp->declBit(c+8481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_enable_SO", false,-1);
        vcdp->declBit(c+8489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_enable_SO", false,-1);
        vcdp->declBit(c+8561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Full_precision_SO", false,-1);
        vcdp->declBit(c+8569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP32_SO", false,-1);
        vcdp->declBit(c+8577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP64_SO", false,-1);
        vcdp->declBit(c+8585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP16_SO", false,-1);
        vcdp->declBit(c+8593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP16ALT_SO", false,-1);
        vcdp->declBit(c+8377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Ready_SO", false,-1);
        vcdp->declBit(c+8385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Done_SO", false,-1);
        vcdp->declQuad(c+7537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_z_DO", false,-1, 56,0);
        vcdp->declBus(c+8457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_z_DO", false,-1, 12,0);
        vcdp->declBit(c+8601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_start_dly_S", false,-1);
        vcdp->declBit(c+8609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_start_dly_S", false,-1);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Clk_CI", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+2833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Start_SI", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Kill_SI", false,-1);
        vcdp->declBit(c+2841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Special_case_SBI", false,-1);
        vcdp->declBit(c+8553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Special_case_dly_SBI", false,-1);
        vcdp->declBus(c+10945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+2705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declQuad(c+8425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Numerator_DI", false,-1, 52,0);
        vcdp->declBus(c+8409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_num_DI", false,-1, 11,0);
        vcdp->declQuad(c+8441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_DI", false,-1, 52,0);
        vcdp->declBus(c+8417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_den_DI", false,-1, 11,0);
        vcdp->declBit(c+8601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_SO", false,-1);
        vcdp->declBit(c+8609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_dly_SO", false,-1);
        vcdp->declBit(c+8481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_enable_SO", false,-1);
        vcdp->declBit(c+8489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_enable_SO", false,-1);
        vcdp->declBit(c+8561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Full_precision_SO", false,-1);
        vcdp->declBit(c+8569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP32_SO", false,-1);
        vcdp->declBit(c+8577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP64_SO", false,-1);
        vcdp->declBit(c+8585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP16_SO", false,-1);
        vcdp->declBit(c+8593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP16ALT_SO", false,-1);
        vcdp->declBit(c+8377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Ready_SO", false,-1);
        vcdp->declBit(c+8385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Done_SO", false,-1);
        vcdp->declQuad(c+7537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mant_result_prenorm_DO", false,-1, 56,0);
        vcdp->declBus(c+8457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DO", false,-1, 12,0);
        vcdp->declQuad(c+6665,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Partial_remainder_DN", false,-1, 57,0);
        vcdp->declQuad(c+8617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Partial_remainder_DP", false,-1, 57,0);
        vcdp->declQuad(c+8633,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Quotient_DP", false,-1, 56,0);
        vcdp->declQuad(c+8649,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Numerator_se_D", false,-1, 53,0);
        vcdp->declQuad(c+8665,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_D", false,-1, 53,0);
        vcdp->declQuad(c+7553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_DB", false,-1, 53,0);
        vcdp->declQuad(c+7569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mant_D_sqrt_Norm", false,-1, 53,0);
        vcdp->declBus(c+8681,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Format_sel_S", false,-1, 1,0);
        vcdp->declBus(c+8689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Precision_ctl_S", false,-1, 5,0);
        vcdp->declBus(c+7585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_ctl_S", false,-1, 5,0);
        vcdp->declBus(c+8697,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_Two_iteration_unit_S", false,-1, 5,0);
        vcdp->declBus(c+8705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_Four_iteration_unit_S", false,-1, 5,0);
        vcdp->declBit(c+8601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_S", false,-1);
        vcdp->declBit(c+8609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_dly_S", false,-1);
        vcdp->declBus(c+8713,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Crtl_cnt_S", false,-1, 5,0);
        vcdp->declBit(c+7593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Start_dly_S", false,-1);
        vcdp->declBit(c+3377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fsm_enable_S", false,-1);
        vcdp->declBit(c+7601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Final_state_S", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_0", false,-1);
        vcdp->declBit(c+8721,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_1", false,-1);
        vcdp->declBus(c+8729,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_2", false,-1, 1,0);
        vcdp->declBus(c+8737,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_3", false,-1, 2,0);
        vcdp->declBus(c+8745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_4", false,-1, 3,0);
        vcdp->declBus(c+8753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_5", false,-1, 4,0);
        vcdp->declBus(c+8761,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_6", false,-1, 5,0);
        vcdp->declBus(c+8769,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_7", false,-1, 6,0);
        vcdp->declBus(c+8777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_8", false,-1, 7,0);
        vcdp->declBus(c+8785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_9", false,-1, 8,0);
        vcdp->declBus(c+8793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_10", false,-1, 9,0);
        vcdp->declBus(c+8801,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_11", false,-1, 10,0);
        vcdp->declBus(c+8809,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_12", false,-1, 11,0);
        vcdp->declBus(c+8817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_13", false,-1, 12,0);
        vcdp->declBus(c+8825,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_14", false,-1, 13,0);
        vcdp->declBus(c+8833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_15", false,-1, 14,0);
        vcdp->declBus(c+8841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_16", false,-1, 15,0);
        vcdp->declBus(c+8849,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_17", false,-1, 16,0);
        vcdp->declBus(c+8857,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_18", false,-1, 17,0);
        vcdp->declBus(c+8865,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_19", false,-1, 18,0);
        vcdp->declBus(c+8873,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_20", false,-1, 19,0);
        vcdp->declBus(c+8881,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_21", false,-1, 20,0);
        vcdp->declBus(c+8889,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_22", false,-1, 21,0);
        vcdp->declBus(c+8897,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_23", false,-1, 22,0);
        vcdp->declBus(c+8905,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_24", false,-1, 23,0);
        vcdp->declBus(c+8913,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_25", false,-1, 24,0);
        vcdp->declBus(c+8921,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_26", false,-1, 25,0);
        vcdp->declBus(c+8929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_27", false,-1, 26,0);
        vcdp->declBus(c+8937,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_28", false,-1, 27,0);
        vcdp->declBus(c+8945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_29", false,-1, 28,0);
        vcdp->declBus(c+8953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_30", false,-1, 29,0);
        vcdp->declBus(c+8961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_31", false,-1, 30,0);
        vcdp->declBus(c+8969,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_32", false,-1, 31,0);
        vcdp->declQuad(c+8977,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_33", false,-1, 32,0);
        vcdp->declQuad(c+8993,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_34", false,-1, 33,0);
        vcdp->declQuad(c+9009,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_35", false,-1, 34,0);
        vcdp->declQuad(c+9025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_36", false,-1, 35,0);
        vcdp->declQuad(c+9041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_37", false,-1, 36,0);
        vcdp->declQuad(c+9057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_38", false,-1, 37,0);
        vcdp->declQuad(c+9073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_39", false,-1, 38,0);
        vcdp->declQuad(c+9089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_40", false,-1, 39,0);
        vcdp->declQuad(c+9105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_41", false,-1, 40,0);
        vcdp->declQuad(c+9121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_42", false,-1, 41,0);
        vcdp->declQuad(c+9137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_43", false,-1, 42,0);
        vcdp->declQuad(c+9153,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_44", false,-1, 43,0);
        vcdp->declQuad(c+9169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_45", false,-1, 44,0);
        vcdp->declQuad(c+9185,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_46", false,-1, 45,0);
        vcdp->declQuad(c+9201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_47", false,-1, 46,0);
        vcdp->declQuad(c+9217,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_48", false,-1, 47,0);
        vcdp->declQuad(c+9233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_49", false,-1, 48,0);
        vcdp->declQuad(c+9249,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_50", false,-1, 49,0);
        vcdp->declQuad(c+9265,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_51", false,-1, 50,0);
        vcdp->declQuad(c+9281,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_52", false,-1, 51,0);
        vcdp->declQuad(c+9297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_53", false,-1, 52,0);
        vcdp->declQuad(c+9313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_54", false,-1, 53,0);
        vcdp->declQuad(c+9329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_55", false,-1, 54,0);
        vcdp->declQuad(c+9345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_56", false,-1, 55,0);
        vcdp->declQuad(c+8633,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_57", false,-1, 56,0);
        vcdp->declQuad(c+10961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_58", false,-1, 57,0);
        vcdp->declQuad(c+10977,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_59", false,-1, 58,0);
        vcdp->declQuad(c+10993,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_60", false,-1, 59,0);
        vcdp->declBus(c+3385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_0", false,-1, 1,0);
        vcdp->declBus(c+6681,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_1", false,-1, 2,0);
        vcdp->declBus(c+6689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_2", false,-1, 4,0);
        vcdp->declBus(c+6697,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_3", false,-1, 6,0);
        vcdp->declBus(c+6705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_4", false,-1, 8,0);
        vcdp->declBus(c+6713,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_5", false,-1, 10,0);
        vcdp->declBus(c+6721,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_6", false,-1, 12,0);
        vcdp->declBus(c+6729,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_7", false,-1, 14,0);
        vcdp->declBus(c+6737,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_8", false,-1, 16,0);
        vcdp->declBus(c+6745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_9", false,-1, 18,0);
        vcdp->declBus(c+6753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_10", false,-1, 20,0);
        vcdp->declBus(c+6761,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_11", false,-1, 22,0);
        vcdp->declBus(c+6769,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_12", false,-1, 24,0);
        vcdp->declBus(c+6777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_13", false,-1, 26,0);
        vcdp->declBus(c+6785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_14", false,-1, 28,0);
        vcdp->declBus(c+6793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_15", false,-1, 30,0);
        vcdp->declQuad(c+6801,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_16", false,-1, 32,0);
        vcdp->declQuad(c+6817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_17", false,-1, 34,0);
        vcdp->declQuad(c+6833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_18", false,-1, 36,0);
        vcdp->declQuad(c+6849,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_19", false,-1, 38,0);
        vcdp->declQuad(c+6865,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_20", false,-1, 40,0);
        vcdp->declQuad(c+6881,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_21", false,-1, 42,0);
        vcdp->declQuad(c+6897,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_22", false,-1, 44,0);
        vcdp->declQuad(c+6913,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_23", false,-1, 46,0);
        vcdp->declQuad(c+6929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_24", false,-1, 48,0);
        vcdp->declQuad(c+6945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_25", false,-1, 50,0);
        vcdp->declQuad(c+6961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_26", false,-1, 52,0);
        vcdp->declQuad(c+6977,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_27", false,-1, 54,0);
        vcdp->declQuad(c+6993,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_28", false,-1, 56,0);
        vcdp->declBus(c+3393,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_0", false,-1, 2,0);
        vcdp->declBus(c+3401,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_1", false,-1, 4,0);
        vcdp->declBus(c+3409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_2", false,-1, 7,0);
        vcdp->declBus(c+3417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_3", false,-1, 10,0);
        vcdp->declBus(c+3425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_4", false,-1, 13,0);
        vcdp->declBus(c+3433,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_5", false,-1, 16,0);
        vcdp->declBus(c+3441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_6", false,-1, 19,0);
        vcdp->declBus(c+3449,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_7", false,-1, 22,0);
        vcdp->declBus(c+3457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_8", false,-1, 25,0);
        vcdp->declBus(c+3465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_9", false,-1, 28,0);
        vcdp->declBus(c+3473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_10", false,-1, 31,0);
        vcdp->declQuad(c+3481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_11", false,-1, 34,0);
        vcdp->declQuad(c+3497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_12", false,-1, 37,0);
        vcdp->declQuad(c+3513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_13", false,-1, 40,0);
        vcdp->declQuad(c+3529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_14", false,-1, 43,0);
        vcdp->declQuad(c+3545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_15", false,-1, 46,0);
        vcdp->declQuad(c+3561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_16", false,-1, 49,0);
        vcdp->declQuad(c+3577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_17", false,-1, 52,0);
        vcdp->declQuad(c+3593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_18", false,-1, 55,0);
        vcdp->declQuad(c+7009,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_19", false,-1, 58,0);
        vcdp->declQuad(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_20", false,-1, 61,0);
        vcdp->declBus(c+3609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_0", false,-1, 3,0);
        vcdp->declBus(c+7025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_1", false,-1, 6,0);
        vcdp->declBus(c+7033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_2", false,-1, 10,0);
        vcdp->declBus(c+7041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_3", false,-1, 14,0);
        vcdp->declBus(c+7049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_4", false,-1, 18,0);
        vcdp->declBus(c+7057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_5", false,-1, 22,0);
        vcdp->declBus(c+7065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_6", false,-1, 26,0);
        vcdp->declBus(c+7073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_7", false,-1, 30,0);
        vcdp->declQuad(c+7081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_8", false,-1, 34,0);
        vcdp->declQuad(c+7097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_9", false,-1, 38,0);
        vcdp->declQuad(c+7113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_10", false,-1, 42,0);
        vcdp->declQuad(c+7129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_11", false,-1, 46,0);
        vcdp->declQuad(c+7145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_12", false,-1, 50,0);
        vcdp->declQuad(c+7161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_13", false,-1, 54,0);
        vcdp->declQuad(c+7177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_14", false,-1, 58,0);
        vcdp->declQuad(c+9361,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R0", false,-1, 57,0);
        vcdp->declQuad(c+3617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q0", false,-1, 57,0);
        vcdp->declQuad(c+3633,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt0", false,-1, 57,0);
        vcdp->declQuad(c+3649,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_0", false,-1, 57,0);
        vcdp->declQuad(c+7193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R1", false,-1, 57,0);
        vcdp->declQuad(c+3665,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q1", false,-1, 57,0);
        vcdp->declQuad(c+3681,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt1", false,-1, 57,0);
        vcdp->declQuad(c+3697,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_1", false,-1, 57,0);
        vcdp->declQuad(c+7209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R2", false,-1, 57,0);
        vcdp->declQuad(c+3713,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q2", false,-1, 57,0);
        vcdp->declQuad(c+3729,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt2", false,-1, 57,0);
        vcdp->declQuad(c+3745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_2", false,-1, 57,0);
        vcdp->declQuad(c+7225,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R3", false,-1, 57,0);
        vcdp->declQuad(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q3", false,-1, 57,0);
        vcdp->declQuad(c+11041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt3", false,-1, 57,0);
        vcdp->declQuad(c+7609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_3", false,-1, 57,0);
        vcdp->declQuad(c+7241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R4", false,-1, 57,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+7625+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_DI", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+7657+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_DO", true,(i+0), 1,0);}}
        vcdp->declBit(c+11057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_carry_DO", false,-1);
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3761+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_a_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3825+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_b_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+7257+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_a_BMASK_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3889+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_b_BMASK_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+3953+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_carry_D", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3985+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_sum_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+4049+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_sum_AMASK_D", true,(i+0), 57,0);}}
        vcdp->declBus(c+4113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_quotinent_S", false,-1, 3,0);
        vcdp->declQuad(c+7689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_format_DB", false,-1, 57,0);
        vcdp->declQuad(c+7705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 First_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+7721,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 First_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+9377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_first_S", false,-1);
        vcdp->declQuad(c+7321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sec_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+7337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sec_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+4121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_sec_S", false,-1);
        vcdp->declQuad(c+7353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Thi_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+7369,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Thi_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+4129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_thi_S", false,-1);
        vcdp->declQuad(c+11065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fou_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+11081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fou_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+11097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_fou_S", false,-1);
        vcdp->declQuad(c+11105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mask_bits_ctl_S", false,-1, 57,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+7737+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_enable_SI", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+7769+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_SI", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+7801+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_enable_SI", true,(i+0));}}
        vcdp->declQuad(c+7385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Quotient_DN", false,-1, 56,0);
        vcdp->declBus(c+7833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DN", false,-1, 12,0);
        vcdp->declBus(c+8457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DP", false,-1, 12,0);
        vcdp->declBus(c+9385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_a_D", false,-1, 12,0);
        vcdp->declBus(c+9393,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_b_D", false,-1, 12,0);
        vcdp->declBus(c+7841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_c_D", false,-1, 12,0);
        vcdp->declBus(c+7849,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 C_BIAS_AONE", false,-1, 31,0);
        vcdp->declBus(c+7857,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 C_HALF_BIAS", false,-1, 31,0);
        vcdp->declBus(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+4153,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+7865,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+7873,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+7881,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+7889,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+7897,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7401,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+7905,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+7913,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+7921,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declBus(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+4185,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+7929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+7937,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+7945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+7953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+7961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+7969,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+7977,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+7985,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declBus(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+4217,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+7993,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+8001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+8009,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+8017,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+8025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7449,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+8033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+8041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+8049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declQuad(c+7537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_in_DI", false,-1, 56,0);
        vcdp->declBus(c+8457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_in_DI", false,-1, 12,0);
        vcdp->declBit(c+8465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sign_in_DI", false,-1);
        vcdp->declBit(c+8481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Div_enable_SI", false,-1);
        vcdp->declBit(c+8489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sqrt_enable_SI", false,-1);
        vcdp->declBit(c+8497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Inf_a_SI", false,-1);
        vcdp->declBit(c+8505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Inf_b_SI", false,-1);
        vcdp->declBit(c+8513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Zero_a_SI", false,-1);
        vcdp->declBit(c+8521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Zero_b_SI", false,-1);
        vcdp->declBit(c+8529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NaN_a_SI", false,-1);
        vcdp->declBit(c+8537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NaN_b_SI", false,-1);
        vcdp->declBit(c+8545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 SNaN_SI", false,-1);
        vcdp->declBus(c+8473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 RM_SI", false,-1, 2,0);
        vcdp->declBit(c+8561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Full_precision_SI", false,-1);
        vcdp->declBit(c+8569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP32_SI", false,-1);
        vcdp->declBit(c+8577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP64_SI", false,-1);
        vcdp->declBit(c+8585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP16_SI", false,-1);
        vcdp->declBit(c+8593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP16ALT_SI", false,-1);
        vcdp->declQuad(c+7521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Result_DO", false,-1, 63,0);
        vcdp->declBus(c+8305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Fflags_SO", false,-1, 4,0);
        vcdp->declBit(c+8057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sign_res_D", false,-1);
        vcdp->declBit(c+9401,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NV_OP_S", false,-1);
        vcdp->declBit(c+8065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_OF_S", false,-1);
        vcdp->declBit(c+8073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_UF_S", false,-1);
        vcdp->declBit(c+9409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Div_Zero_S", false,-1);
        vcdp->declBit(c+8081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 In_Exact_S", false,-1);
        vcdp->declQuad(c+8089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_res_norm_D", false,-1, 52,0);
        vcdp->declBus(c+8105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_res_norm_D", false,-1, 10,0);
        vcdp->declBus(c+9417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP64_D", false,-1, 12,0);
        vcdp->declBus(c+9425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP32_D", false,-1, 9,0);
        vcdp->declBus(c+9433,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP16_D", false,-1, 6,0);
        vcdp->declBus(c+9441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP16ALT_D", false,-1, 9,0);
        vcdp->declBus(c+9449,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Num_RS_D", false,-1, 12,0);
        vcdp->declQuad(c+8113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_RS_D", false,-1, 52,0);
        vcdp->declQuad(c+8129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_forsticky_D", false,-1, 56,0);
        vcdp->declBus(c+9457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_subOne_D", false,-1, 12,0);
        vcdp->declBus(c+8145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_lower_D", false,-1, 1,0);
        vcdp->declBit(c+8153,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_sticky_bit_D", false,-1);
        vcdp->declQuad(c+8161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_forround_D", false,-1, 56,0);
        vcdp->declQuad(c+8177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_upper_D", false,-1, 52,0);
        vcdp->declQuad(c+8193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_upperRounded_D", false,-1, 53,0);
        vcdp->declBit(c+8209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_roundUp_S", false,-1);
        vcdp->declBit(c+8217,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_rounded_S", false,-1);
        vcdp->declBit(c+8225,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_renorm_S", false,-1);
        vcdp->declQuad(c+8233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_roundUp_Vector_S", false,-1, 52,0);
        vcdp->declQuad(c+8249,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_res_round_D", false,-1, 51,0);
        vcdp->declBus(c+8265,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_res_round_D", false,-1, 10,0);
        vcdp->declQuad(c+8273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_before_format_ctl_D", false,-1, 51,0);
        vcdp->declBus(c+8289,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_before_format_ctl_D", false,-1, 10,0);
        vcdp->declBus(c+11129,"fpnew_top gen_operation_groups[2] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[2] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+11137,"fpnew_top gen_operation_groups[2] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+11145,"fpnew_top gen_operation_groups[2] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+11153,"fpnew_top gen_operation_groups[2] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+11193,"fpnew_top gen_operation_groups[2] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+11201,"fpnew_top gen_operation_groups[2] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[2] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[2] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[2] i_opgroup_block rst_ni", false,-1);
        vcdp->declQuad(c+9817,"fpnew_top gen_operation_groups[2] i_opgroup_block operands_i", false,-1, 63,0);
        vcdp->declBus(c+561,"fpnew_top gen_operation_groups[2] i_opgroup_block is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[2] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[2] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[2] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+9561,"fpnew_top gen_operation_groups[2] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[2] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"fpnew_top gen_operation_groups[2] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9585,"fpnew_top gen_operation_groups[2] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[2] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+553,"fpnew_top gen_operation_groups[2] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+9833,"fpnew_top gen_operation_groups[2] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[2] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+4233,"fpnew_top gen_operation_groups[2] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+4241,"fpnew_top gen_operation_groups[2] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+4249,"fpnew_top gen_operation_groups[2] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+4257,"fpnew_top gen_operation_groups[2] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+4265,"fpnew_top gen_operation_groups[2] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+4273,"fpnew_top gen_operation_groups[2] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+4281,"fpnew_top gen_operation_groups[2] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+4289,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+4297,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+4305,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+4313,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+4321,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+4377,"fpnew_top gen_operation_groups[2] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format in_valid", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+4297,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+4305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+4321,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+4265,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+4273,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+4377,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+4401,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+4409,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+4417,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+4489,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+4497,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+9465,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+4297,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+7473,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+4505,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+4513,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+4521,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+4529,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+4537,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+4545,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11209,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+4553,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4561,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4569,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4577,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4585,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10521,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11217,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10537,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11225,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10561,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+4505,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+4521,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+4545,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+329,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+4593,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+4601,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+4609,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+4513,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+4529,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+4617,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+337,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+4625,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+4633,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+4641,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11233,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice Width", false,-1, 31,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11249,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rst_ni", false,-1);
        vcdp->declQuad(c+9817,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice operands_i", false,-1, 63,0);
        vcdp->declBus(c+4649,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_mod_i", false,-1);
        vcdp->declBit(c+9585,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_i", false,-1);
        vcdp->declBit(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+4657,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice flush_i", false,-1);
        vcdp->declBus(c+9841,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+4665,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+4673,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_o", false,-1);
        vcdp->declBit(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+4657,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+4681,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice busy_o", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+4657,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+4689,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_result", false,-1, 31,0);
        vcdp->declBus(c+4689,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_regular_result", false,-1, 31,0);
        vcdp->declBus(c+4697,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_class_result", false,-1, 31,0);
        vcdp->declBus(c+4705,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_vec_class_result", false,-1, 31,0);
        vcdp->declBus(c+9849,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+4673,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+4713,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_class_mask", false,-1, 9,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_vectorial", false,-1, 0,0);
        vcdp->declBus(c+4681,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBus(c+9857,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_is_class", false,-1, 0,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_vector", false,-1);
        vcdp->declBit(c+9857,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_class", false,-1);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice CLASS_VEC_BITS", false,-1, 31,0);
        vcdp->declBus(c+4689,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+4721,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_sign", false,-1);
        vcdp->declBit(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+4657,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declQuad(c+4729,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 63,0);
        vcdp->declBus(c+4745,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+9865,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+11265,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+4753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+10601,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+11273,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11281,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp WIDTH", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp rst_ni", false,-1);
        vcdp->declQuad(c+4729,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operands_i", false,-1, 63,0);
        vcdp->declBus(c+4649,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp op_mod_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp tag_i", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp aux_i", false,-1);
        vcdp->declBit(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp in_valid_i", false,-1);
        vcdp->declBit(c+4657,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp flush_i", false,-1);
        vcdp->declBus(c+4745,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp result_o", false,-1, 31,0);
        vcdp->declBus(c+9865,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp status_o", false,-1, 4,0);
        vcdp->declBit(c+4673,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp extension_bit_o", false,-1);
        vcdp->declBus(c+4713,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_mask_o", false,-1, 9,0);
        vcdp->declBit(c+9857,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_class_o", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp tag_o", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp aux_o", false,-1);
        vcdp->declBit(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_valid_o", false,-1);
        vcdp->declBit(c+4657,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_ready_i", false,-1);
        vcdp->declBit(c+4681,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp busy_o", false,-1);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declQuad(c+4729,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_operands_q", false,-1, 63,0);
        vcdp->declBus(c+4649,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_is_boxed_q", false,-1, 1,0);
        vcdp->declBus(c+9873,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+9881,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+9553,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4657,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+4761,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_q", false,-1, 15,0);
        vcdp->declBus(c+4769,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_a", false,-1, 31,0);
        vcdp->declBus(c+4777,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_b", false,-1, 31,0);
        vcdp->declBus(c+4785,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_a", false,-1, 7,0);
        vcdp->declBus(c+4793,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_b", false,-1, 7,0);
        vcdp->declBit(c+4801,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp any_operand_inf", false,-1);
        vcdp->declBit(c+4809,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp any_operand_nan", false,-1);
        vcdp->declBit(c+4817,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp signalling_nan", false,-1);
        vcdp->declBit(c+4825,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operands_equal", false,-1);
        vcdp->declBit(c+4833,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_a_smaller", false,-1);
        vcdp->declBus(c+4841,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_result", false,-1, 31,0);
        vcdp->declBus(c+11289,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_status", false,-1, 4,0);
        vcdp->declBit(c+9889,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_extension_bit", false,-1);
        vcdp->declBus(c+9897,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_result", false,-1, 31,0);
        vcdp->declBus(c+4849,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_status", false,-1, 4,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_extension_bit", false,-1);
        vcdp->declBus(c+4857,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_result", false,-1, 31,0);
        vcdp->declBus(c+4865,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_status", false,-1, 4,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_extension_bit", false,-1);
        vcdp->declBus(c+11289,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_status", false,-1, 4,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_extension_bit", false,-1);
        vcdp->declBus(c+4713,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_mask_d", false,-1, 9,0);
        vcdp->declBus(c+4745,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp result_d", false,-1, 31,0);
        vcdp->declBus(c+9865,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp status_d", false,-1, 4,0);
        vcdp->declBit(c+4673,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp extension_bit_d", false,-1);
        vcdp->declBit(c+9857,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_class_d", false,-1);
        vcdp->declBus(c+4745,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+9865,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+4673,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_extension_bit_q", false,-1, 0,0);
        vcdp->declBus(c+4713,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_class_mask_q", false,-1, 9,0);
        vcdp->declBus(c+9857,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_is_class_q", false,-1, 0,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10417,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+4393,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4657,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+4873,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sign_injections sign_a", false,-1);
        vcdp->declBit(c+4881,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sign_injections sign_b", false,-1);
        vcdp->declBus(c+11297,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a NumOperands", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4729,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a operands_i", false,-1, 63,0);
        vcdp->declBus(c+4649,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+4761,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a info_o", false,-1, 15,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+4889,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+4897,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+4905,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+4913,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+4921,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+4929,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+4937,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+4945,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+4953,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+4961,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] value", false,-1, 31,0);
        vcdp->declBit(c+4969,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_boxed", false,-1);
        vcdp->declBit(c+4977,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_normal", false,-1);
        vcdp->declBit(c+4985,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_inf", false,-1);
        vcdp->declBit(c+4993,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_nan", false,-1);
        vcdp->declBit(c+5001,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_signalling", false,-1);
        vcdp->declBit(c+5009,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_quiet", false,-1);
        vcdp->declBit(c+5017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_zero", false,-1);
        vcdp->declBit(c+5025,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_subnormal", false,-1);
        vcdp->declBus(c+11305,"fpnew_top gen_operation_groups[3] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+11313,"fpnew_top gen_operation_groups[3] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+11321,"fpnew_top gen_operation_groups[3] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+11329,"fpnew_top gen_operation_groups[3] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+11369,"fpnew_top gen_operation_groups[3] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+11377,"fpnew_top gen_operation_groups[3] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[3] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[3] i_opgroup_block rst_ni", false,-1);
        vcdp->declArray(c+9513,"fpnew_top gen_operation_groups[3] i_opgroup_block operands_i", false,-1, 95,0);
        vcdp->declBus(c+577,"fpnew_top gen_operation_groups[3] i_opgroup_block is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[3] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[3] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[3] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+9561,"fpnew_top gen_operation_groups[3] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[3] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"fpnew_top gen_operation_groups[3] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9585,"fpnew_top gen_operation_groups[3] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+569,"fpnew_top gen_operation_groups[3] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+9905,"fpnew_top gen_operation_groups[3] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[3] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+5033,"fpnew_top gen_operation_groups[3] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+5041,"fpnew_top gen_operation_groups[3] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+5049,"fpnew_top gen_operation_groups[3] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+5057,"fpnew_top gen_operation_groups[3] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+5065,"fpnew_top gen_operation_groups[3] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+5073,"fpnew_top gen_operation_groups[3] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+5081,"fpnew_top gen_operation_groups[3] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+5089,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+5097,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+5105,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+5113,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+5121,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+5177,"fpnew_top gen_operation_groups[3] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice FMT", false,-1, 2,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice REG", false,-1, 31,0);
        vcdp->declBit(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice in_valid", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+5097,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+5105,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+5121,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+5065,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+5073,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+5177,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+5201,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+5209,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+5217,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+5289,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+5297,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+9473,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+5097,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+7481,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+5305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+5313,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+5321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+5329,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+5337,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+5345,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11385,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+5353,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+5361,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+5369,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+5377,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+5385,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10521,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11393,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10537,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11401,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+10561,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+5321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+5345,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+345,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+5393,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+5401,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+5409,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10361,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5313,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+5329,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+5417,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+353,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+5425,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+5433,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+5441,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11409,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice Width", false,-1, 31,0);
        vcdp->declBus(c+11417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+11425,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice IntFmtConfig", false,-1, 0,3);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11433,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice rst_ni", false,-1);
        vcdp->declArray(c+9513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice operands_i", false,-1, 95,0);
        vcdp->declBus(c+577,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice op_mod_i", false,-1);
        vcdp->declBus(c+9561,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9585,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice tag_i", false,-1);
        vcdp->declBit(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice flush_i", false,-1);
        vcdp->declBus(c+5457,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+5465,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+5473,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice tag_o", false,-1);
        vcdp->declBit(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+5481,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice busy_o", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice FMT_BITS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice AUX_BITS", false,-1, 31,0);
        vcdp->declBus(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+9913,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt", false,-1, 2,0);
        vcdp->declBus(c+5489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice aux_data", false,-1, 4,0);
        vcdp->declBit(c+9921,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_is_int", false,-1);
        vcdp->declBit(c+5497,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_is_cpk", false,-1);
        vcdp->declBus(c+9929,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_vec_op", false,-1, 1,0);
        vcdp->declBus(c+9937,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_d", false,-1, 2,0);
        vcdp->declBus(c+11441,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_q", false,-1, 2,0);
        vcdp->declBit(c+5505,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_up_cast", false,-1);
        vcdp->declBit(c+5513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_down_cast", false,-1);
        vcdp->declArray(c+5521,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice fmt_slice_result", false,-1, 159,0);
        vcdp->declArray(c+5561,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice ifmt_slice_result", false,-1, 127,0);
        vcdp->declBus(c+11449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_slice_result", false,-1, 31,0);
        vcdp->declBus(c+9945,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_d", false,-1, 31,0);
        vcdp->declBus(c+9945,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_q", false,-1, 31,0);
        vcdp->declBus(c+9953,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+5473,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+5489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_aux", false,-1, 4,0);
        vcdp->declBus(c+5481,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBit(c+5593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_vector", false,-1);
        vcdp->declBus(c+5601,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt", false,-1, 2,0);
        vcdp->declBit(c+5609,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt_is_int", false,-1);
        vcdp->declBit(c+5617,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_cpk", false,-1);
        vcdp->declBus(c+9929,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_vec_op", false,-1, 1,0);
        vcdp->declBus(c+5625,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_1op", false,-1, 4,0);
        vcdp->declBus(c+5633,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_2op", false,-1, 9,0);
        vcdp->declBus(c+10881,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice boxed_2op unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE", false,-1, 31,0);
        vcdp->declBus(c+11457,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11465,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] MAX_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11473,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11481,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5641,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declArray(c+5649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 95,0);
        vcdp->declBus(c+9961,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+9969,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+9945,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_target_q", false,-1, 31,0);
        vcdp->declBus(c+9937,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_aux_q", false,-1, 2,0);
        vcdp->declBus(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5673,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+5681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+10601,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+11497,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+11505,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi IntFmtConfig", false,-1, 0,3);
        vcdp->declBus(c+10393,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+9497,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi clk_i", false,-1);
        vcdp->declBit(c+9505,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rst_ni", false,-1);
        vcdp->declBus(c+5689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi operands_i", false,-1, 31,0);
        vcdp->declBus(c+5625,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi is_boxed_i", false,-1, 4,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_i", false,-1, 3,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_i", false,-1);
        vcdp->declBus(c+9561,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+9577,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi tag_i", false,-1);
        vcdp->declBus(c+5489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi aux_i", false,-1, 4,0);
        vcdp->declBit(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi in_valid_i", false,-1);
        vcdp->declBit(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi in_ready_o", false,-1);
        vcdp->declBit(c+9617,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi flush_i", false,-1);
        vcdp->declBus(c+9961,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_o", false,-1, 31,0);
        vcdp->declBus(c+9969,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi status_o", false,-1, 4,0);
        vcdp->declBit(c+5473,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi extension_bit_o", false,-1);
        vcdp->declBit(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi tag_o", false,-1);
        vcdp->declBus(c+5489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi aux_o", false,-1, 4,0);
        vcdp->declBit(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_valid_o", false,-1);
        vcdp->declBit(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_ready_i", false,-1);
        vcdp->declBit(c+5481,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi busy_o", false,-1);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+11521,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_FORMAT", false,-1, 63,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10657,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_BIAS", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi INT_MAN_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi LZC_RESULT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10521,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi INT_EXP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_MID_REGS", false,-1, 31,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declBus(c+5689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi operands_q", false,-1, 31,0);
        vcdp->declBus(c+5625,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi is_boxed_q", false,-1, 4,0);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_q", false,-1);
        vcdp->declBus(c+9977,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+9985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+9993,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+5689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_operands_q", false,-1, 31,0);
        vcdp->declBus(c+5625,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_is_boxed_q", false,-1, 4,0);
        vcdp->declBus(c+10001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+10009,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+9553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+9977,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+9985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+9993,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+5489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+10017,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_is_int", false,-1);
        vcdp->declBit(c+10025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_is_int", false,-1);
        vcdp->declBus(c+5697,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi encoded_mant", false,-1, 31,0);
        vcdp->declBus(c+5705,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_sign", false,-1, 4,0);
        vcdp->declQuad(c+5713,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_exponent", false,-1, 44,0);
        vcdp->declArray(c+5729,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_mantissa", false,-1, 159,0);
        vcdp->declQuad(c+361,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_shift_compensation", false,-1, 44,0);
        vcdp->declQuad(c+5769,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi info", false,-1, 39,0);
        vcdp->declArray(c+5785,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_input_val", false,-1, 127,0);
        vcdp->declBit(c+5817,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_sign", false,-1);
        vcdp->declBus(c+5825,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_value", false,-1, 31,0);
        vcdp->declBus(c+5833,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_mantissa", false,-1, 31,0);
        vcdp->declBus(c+5841,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_bias", false,-1, 8,0);
        vcdp->declBus(c+10033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_exp", false,-1, 8,0);
        vcdp->declBus(c+10041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_subnormal", false,-1, 8,0);
        vcdp->declBus(c+10049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_offset", false,-1, 8,0);
        vcdp->declBit(c+5849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_sign", false,-1);
        vcdp->declBus(c+5857,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_exp", false,-1, 8,0);
        vcdp->declBus(c+5865,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_mant", false,-1, 31,0);
        vcdp->declBit(c+5873,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mant_is_zero", false,-1);
        vcdp->declBus(c+10057,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_input_exp", false,-1, 8,0);
        vcdp->declBus(c+5881,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_input_exp", false,-1, 8,0);
        vcdp->declBus(c+5889,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi renorm_shamt", false,-1, 4,0);
        vcdp->declBus(c+5897,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi renorm_shamt_sgn", false,-1, 5,0);
        vcdp->declBus(c+5905,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_exp", false,-1, 8,0);
        vcdp->declBit(c+5849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_sign_q", false,-1);
        vcdp->declBus(c+5857,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_exp_q", false,-1, 8,0);
        vcdp->declBus(c+5865,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_mant_q", false,-1, 31,0);
        vcdp->declBus(c+5905,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_exp_q", false,-1, 8,0);
        vcdp->declBit(c+10017,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_is_int_q", false,-1);
        vcdp->declBit(c+10025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_is_int_q", false,-1);
        vcdp->declBus(c+5913,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi info_q", false,-1, 7,0);
        vcdp->declBit(c+5873,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mant_is_zero_q", false,-1);
        vcdp->declBit(c+9553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_q2", false,-1);
        vcdp->declBus(c+10001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+9977,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_q2", false,-1, 2,0);
        vcdp->declBus(c+9985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_q2", false,-1, 2,0);
        vcdp->declBus(c+9993,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_q2", false,-1, 1,0);
        vcdp->declBus(c+5849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_sign_q", false,-1, 0,0);
        vcdp->declBus(c+5857,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_exp_q", false,-1, 8,0);
        vcdp->declBus(c+5865,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_mant_q", false,-1, 31,0);
        vcdp->declBus(c+5905,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dest_exp_q", false,-1, 8,0);
        vcdp->declBus(c+10017,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_src_is_int_q", false,-1, 0,0);
        vcdp->declBus(c+10025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dst_is_int_q", false,-1, 0,0);
        vcdp->declBus(c+5921,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_info_q", false,-1, 7,0);
        vcdp->declBus(c+5873,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_mant_zero_q", false,-1, 0,0);
        vcdp->declBus(c+9553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+10001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+9977,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+9985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+9993,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+5489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+5929,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_exp", false,-1, 8,0);
        vcdp->declArray(c+5937,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi preshift_mant", false,-1, 64,0);
        vcdp->declArray(c+5961,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_mant", false,-1, 64,0);
        vcdp->declBus(c+5985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_mant", false,-1, 22,0);
        vcdp->declBus(c+5993,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_int", false,-1, 31,0);
        vcdp->declBus(c+6001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi denorm_shamt", false,-1, 5,0);
        vcdp->declBus(c+6009,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_round_sticky_bits", false,-1, 1,0);
        vcdp->declBus(c+6017,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_round_sticky_bits", false,-1, 1,0);
        vcdp->declBus(c+6025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi round_sticky_bits", false,-1, 1,0);
        vcdp->declBit(c+6033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi of_before_round", false,-1);
        vcdp->declBit(c+6041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi uf_before_round", false,-1);
        vcdp->declBus(c+11537,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_FP_STICKY", false,-1, 31,0);
        vcdp->declBus(c+11545,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INT_STICKY", false,-1, 31,0);
        vcdp->declBus(c+6049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi pre_round_abs", false,-1, 31,0);
        vcdp->declBit(c+6057,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi of_after_round", false,-1);
        vcdp->declBit(c+10065,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi uf_after_round", false,-1);
        vcdp->declArray(c+6065,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_pre_round_abs", false,-1, 159,0);
        vcdp->declBus(c+6105,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_of_after_round", false,-1, 4,0);
        vcdp->declBus(c+6113,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_uf_after_round", false,-1, 4,0);
        vcdp->declArray(c+6121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_pre_round_abs", false,-1, 127,0);
        vcdp->declBit(c+5849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_sign", false,-1);
        vcdp->declBus(c+6153,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_abs", false,-1, 31,0);
        vcdp->declBit(c+6161,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_true_zero", false,-1);
        vcdp->declBus(c+6169,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_int_res", false,-1, 31,0);
        vcdp->declBit(c+6177,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_int_res_zero", false,-1);
        vcdp->declArray(c+6185,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_result", false,-1, 159,0);
        vcdp->declBus(c+10073,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_special_result", false,-1, 31,0);
        vcdp->declBus(c+6225,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_special_status", false,-1, 4,0);
        vcdp->declBit(c+6233,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_result_is_special", false,-1);
        vcdp->declArray(c+6241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_special_result", false,-1, 159,0);
        vcdp->declBus(c+10081,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_special_result", false,-1, 31,0);
        vcdp->declBus(c+11553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_special_status", false,-1, 4,0);
        vcdp->declBit(c+6281,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_result_is_special", false,-1);
        vcdp->declArray(c+6289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_special_result", false,-1, 127,0);
        vcdp->declBus(c+6321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_regular_status", false,-1, 4,0);
        vcdp->declBus(c+6329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_regular_status", false,-1, 4,0);
        vcdp->declBus(c+10089,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_result", false,-1, 31,0);
        vcdp->declBus(c+6337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_result", false,-1, 31,0);
        vcdp->declBus(c+6345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_status", false,-1, 4,0);
        vcdp->declBus(c+6353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_status", false,-1, 4,0);
        vcdp->declBus(c+9961,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_d", false,-1, 31,0);
        vcdp->declBus(c+9969,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi status_d", false,-1, 4,0);
        vcdp->declBit(c+5473,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi extension_bit", false,-1);
        vcdp->declBus(c+9961,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+9969,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+5473,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_ext_bit_q", false,-1, 0,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+5489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10537,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11561,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10537,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11561,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10537,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11561,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11569,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] QNAN_EXPONENT", false,-1, 7,0);
        vcdp->declBus(c+11577,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] QNAN_MANTISSA", false,-1, 22,0);
        vcdp->declBus(c+6361,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] active_format special_results special_res", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10537,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11561,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11585,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] QNAN_EXPONENT", false,-1, 10,0);
        vcdp->declQuad(c+11593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] QNAN_MANTISSA", false,-1, 51,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11609,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] QNAN_EXPONENT", false,-1, 4,0);
        vcdp->declBus(c+11617,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] QNAN_MANTISSA", false,-1, 9,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11609,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] QNAN_EXPONENT", false,-1, 4,0);
        vcdp->declBus(c+11625,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] QNAN_MANTISSA", false,-1, 1,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11569,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] QNAN_EXPONENT", false,-1, 7,0);
        vcdp->declBus(c+11633,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] QNAN_MANTISSA", false,-1, 6,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+6369,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[2] active_format special_results special_res", false,-1, 31,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10369,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc MODE", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5697,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc in_i", false,-1, 31,0);
        vcdp->declBus(c+5889,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc cnt_o", false,-1, 4,0);
        vcdp->declBit(c+5873,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc empty_o", false,-1);
        vcdp->declBus(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+377,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc index_lut", false,-1, 159,0);
        vcdp->declBus(c+6377,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc sel_nodes", false,-1, 31,0);
        vcdp->declArray(c+6385,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc index_nodes", false,-1, 159,0);
        vcdp->declBus(c+6425,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc in_tmp", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding AbsWidth", false,-1, 31,0);
        vcdp->declBus(c+6049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding abs_value_i", false,-1, 31,0);
        vcdp->declBit(c+5849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding sign_i", false,-1);
        vcdp->declBus(c+6025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding round_sticky_bits_i", false,-1, 1,0);
        vcdp->declBus(c+10001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding rnd_mode_i", false,-1, 2,0);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding effective_subtraction_i", false,-1);
        vcdp->declBus(c+6153,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding abs_rounded_o", false,-1, 31,0);
        vcdp->declBit(c+5849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding sign_o", false,-1);
        vcdp->declBit(c+6161,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding exact_zero_o", false,-1);
        vcdp->declBit(c+10097,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding round_up", false,-1);
        vcdp->declBus(c+11641,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier FpFormat", false,-1, 2,0);
        vcdp->declBus(c+10401,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier NumOperands", false,-1, 31,0);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier operands_i", false,-1, 31,0);
        vcdp->declBus(c+6433,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier is_boxed_i", false,-1, 0,0);
        vcdp->declBus(c+6441,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier info_o", false,-1, 7,0);
        vcdp->declBus(c+10345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+6449,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+6457,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+6465,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+6473,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+6481,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+6489,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+6497,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+6505,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+6513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+10321,"fpnew_pkg NUM_FP_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10305,"fpnew_pkg FP_FORMAT_BITS", false,-1, 31,0);
        vcdp->declArray(c+11649,"fpnew_pkg FP_ENCODINGS", false,-1, 319,0);
        vcdp->declBus(c+11729,"fpnew_pkg CPK_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+10313,"fpnew_pkg NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+10353,"fpnew_pkg INT_FORMAT_BITS", false,-1, 31,0);
        vcdp->declBus(c+10313,"fpnew_pkg NUM_OPGROUPS", false,-1, 31,0);
        vcdp->declBus(c+10313,"fpnew_pkg OP_BITS", false,-1, 31,0);
        vcdp->declQuad(c+11737,"fpnew_pkg RV64D", false,-1, 42,0);
        vcdp->declQuad(c+11753,"fpnew_pkg RV32D", false,-1, 42,0);
        vcdp->declQuad(c+11769,"fpnew_pkg RV32F", false,-1, 42,0);
        vcdp->declQuad(c+11785,"fpnew_pkg RV64D_Xsflt", false,-1, 42,0);
        vcdp->declQuad(c+11801,"fpnew_pkg RV32F_Xsflt", false,-1, 42,0);
        vcdp->declQuad(c+11817,"fpnew_pkg RV32F_Xf16alt_Xfvec", false,-1, 42,0);
        vcdp->declArray(c+11833,"fpnew_pkg DEFAULT_NOREGS", false,-1, 681,0);
        vcdp->declArray(c+12009,"fpnew_pkg DEFAULT_SNITCH", false,-1, 681,0);
        vcdp->declBit(c+10593,"fpnew_pkg DONT_CARE", false,-1);
        vcdp->declBus(c+12185,"defs_div_sqrt_mvp C_RM", false,-1, 31,0);
        vcdp->declBus(c+10497,"defs_div_sqrt_mvp C_RM_NEAREST", false,-1, 2,0);
        vcdp->declBus(c+12193,"defs_div_sqrt_mvp C_RM_TRUNC", false,-1, 2,0);
        vcdp->declBus(c+12201,"defs_div_sqrt_mvp C_RM_PLUSINF", false,-1, 2,0);
        vcdp->declBus(c+12209,"defs_div_sqrt_mvp C_RM_MINUSINF", false,-1, 2,0);
        vcdp->declBus(c+12217,"defs_div_sqrt_mvp C_PC", false,-1, 31,0);
        vcdp->declBus(c+12225,"defs_div_sqrt_mvp C_FS", false,-1, 31,0);
        vcdp->declBus(c+12225,"defs_div_sqrt_mvp C_IUNC", false,-1, 31,0);
        vcdp->declBus(c+11625,"defs_div_sqrt_mvp Iteration_unit_num_S", false,-1, 1,0);
        vcdp->declBus(c+12233,"defs_div_sqrt_mvp C_OP_FP64", false,-1, 31,0);
        vcdp->declBus(c+12241,"defs_div_sqrt_mvp C_MANT_FP64", false,-1, 31,0);
        vcdp->declBus(c+12249,"defs_div_sqrt_mvp C_EXP_FP64", false,-1, 31,0);
        vcdp->declBus(c+12257,"defs_div_sqrt_mvp C_BIAS_FP64", false,-1, 31,0);
        vcdp->declBus(c+12265,"defs_div_sqrt_mvp C_BIAS_AONE_FP64", false,-1, 10,0);
        vcdp->declBus(c+12273,"defs_div_sqrt_mvp C_HALF_BIAS_FP64", false,-1, 31,0);
        vcdp->declBus(c+12281,"defs_div_sqrt_mvp C_EXP_ZERO_FP64", false,-1, 10,0);
        vcdp->declBus(c+12289,"defs_div_sqrt_mvp C_EXP_ONE_FP64", false,-1, 12,0);
        vcdp->declBus(c+11585,"defs_div_sqrt_mvp C_EXP_INF_FP64", false,-1, 10,0);
        vcdp->declQuad(c+12297,"defs_div_sqrt_mvp C_MANT_ZERO_FP64", false,-1, 51,0);
        vcdp->declQuad(c+11593,"defs_div_sqrt_mvp C_MANT_NAN_FP64", false,-1, 51,0);
        vcdp->declQuad(c+12313,"defs_div_sqrt_mvp C_PZERO_FP64", false,-1, 63,0);
        vcdp->declQuad(c+12329,"defs_div_sqrt_mvp C_MZERO_FP64", false,-1, 63,0);
        vcdp->declQuad(c+12345,"defs_div_sqrt_mvp C_QNAN_FP64", false,-1, 63,0);
        vcdp->declBus(c+12361,"defs_div_sqrt_mvp C_OP_FP32", false,-1, 31,0);
        vcdp->declBus(c+12369,"defs_div_sqrt_mvp C_MANT_FP32", false,-1, 31,0);
        vcdp->declBus(c+12377,"defs_div_sqrt_mvp C_EXP_FP32", false,-1, 31,0);
        vcdp->declBus(c+12385,"defs_div_sqrt_mvp C_BIAS_FP32", false,-1, 31,0);
        vcdp->declBus(c+12393,"defs_div_sqrt_mvp C_BIAS_AONE_FP32", false,-1, 7,0);
        vcdp->declBus(c+12401,"defs_div_sqrt_mvp C_HALF_BIAS_FP32", false,-1, 31,0);
        vcdp->declBus(c+12409,"defs_div_sqrt_mvp C_EXP_ZERO_FP32", false,-1, 7,0);
        vcdp->declBus(c+11569,"defs_div_sqrt_mvp C_EXP_INF_FP32", false,-1, 7,0);
        vcdp->declBus(c+12417,"defs_div_sqrt_mvp C_MANT_ZERO_FP32", false,-1, 22,0);
        vcdp->declBus(c+10689,"defs_div_sqrt_mvp C_PZERO_FP32", false,-1, 31,0);
        vcdp->declBus(c+12425,"defs_div_sqrt_mvp C_MZERO_FP32", false,-1, 31,0);
        vcdp->declBus(c+12433,"defs_div_sqrt_mvp C_QNAN_FP32", false,-1, 31,0);
        vcdp->declBus(c+12441,"defs_div_sqrt_mvp C_OP_FP16", false,-1, 31,0);
        vcdp->declBus(c+12449,"defs_div_sqrt_mvp C_MANT_FP16", false,-1, 31,0);
        vcdp->declBus(c+12457,"defs_div_sqrt_mvp C_EXP_FP16", false,-1, 31,0);
        vcdp->declBus(c+12465,"defs_div_sqrt_mvp C_BIAS_FP16", false,-1, 31,0);
        vcdp->declBus(c+11553,"defs_div_sqrt_mvp C_BIAS_AONE_FP16", false,-1, 4,0);
        vcdp->declBus(c+12473,"defs_div_sqrt_mvp C_HALF_BIAS_FP16", false,-1, 31,0);
        vcdp->declBus(c+11289,"defs_div_sqrt_mvp C_EXP_ZERO_FP16", false,-1, 4,0);
        vcdp->declBus(c+11609,"defs_div_sqrt_mvp C_EXP_INF_FP16", false,-1, 4,0);
        vcdp->declBus(c+12481,"defs_div_sqrt_mvp C_MANT_ZERO_FP16", false,-1, 9,0);
        vcdp->declBus(c+12489,"defs_div_sqrt_mvp C_PZERO_FP16", false,-1, 15,0);
        vcdp->declBus(c+12497,"defs_div_sqrt_mvp C_MZERO_FP16", false,-1, 15,0);
        vcdp->declBus(c+12505,"defs_div_sqrt_mvp C_QNAN_FP16", false,-1, 15,0);
        vcdp->declBus(c+12441,"defs_div_sqrt_mvp C_OP_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12473,"defs_div_sqrt_mvp C_MANT_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12377,"defs_div_sqrt_mvp C_EXP_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12385,"defs_div_sqrt_mvp C_BIAS_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12393,"defs_div_sqrt_mvp C_BIAS_AONE_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+12401,"defs_div_sqrt_mvp C_HALF_BIAS_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+12409,"defs_div_sqrt_mvp C_EXP_ZERO_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+11569,"defs_div_sqrt_mvp C_EXP_INF_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+12513,"defs_div_sqrt_mvp C_MANT_ZERO_FP16ALT", false,-1, 6,0);
        vcdp->declBus(c+12521,"defs_div_sqrt_mvp C_QNAN_FP16ALT", false,-1, 15,0);
    }
}

void Vfpnew_top::traceFullThis__1(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp871[3];
    WData/*95:0*/ __Vtemp872[3];
    WData/*95:0*/ __Vtemp873[3];
    WData/*95:0*/ __Vtemp877[3];
    WData/*127:0*/ __Vtemp879[4];
    WData/*127:0*/ __Vtemp880[4];
    WData/*127:0*/ __Vtemp883[4];
    WData/*127:0*/ __Vtemp884[4];
    WData/*703:0*/ __Vtemp886[22];
    WData/*159:0*/ __Vtemp887[5];
    WData/*159:0*/ __Vtemp888[5];
    WData/*159:0*/ __Vtemp889[5];
    WData/*159:0*/ __Vtemp890[5];
    WData/*703:0*/ __Vtemp892[22];
    WData/*703:0*/ __Vtemp893[22];
    WData/*319:0*/ __Vtemp891[10];
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),8);
        vcdp->fullBus(c+9,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),8);
        vcdp->fullBus(c+17,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+25,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+33,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result),32);
        vcdp->fullArray(c+41,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut),306);
        vcdp->fullBus(c+121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+129,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullArray(c+137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result),128);
        vcdp->fullArray(c+169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut),318);
        vcdp->fullArray(c+249,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut),318);
        vcdp->fullBus(c+329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullQuad(c+361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation),45);
        vcdp->fullArray(c+377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut),160);
        vcdp->fullBus(c+417,(vlTOPp->fpnew_top__DOT__opgrp_in_ready),4);
        vcdp->fullBus(c+425,(vlTOPp->fpnew_top__DOT__opgrp_out_valid),4);
        vcdp->fullBus(c+433,(vlTOPp->fpnew_top__DOT__opgrp_out_ready),4);
        vcdp->fullBus(c+441,(vlTOPp->fpnew_top__DOT__opgrp_ext),4);
        vcdp->fullBus(c+449,(vlTOPp->fpnew_top__DOT__opgrp_busy),4);
        vcdp->fullArray(c+457,(vlTOPp->fpnew_top__DOT__opgrp_outputs),152);
        vcdp->fullBus(c+497,(vlTOPp->fpnew_top__DOT__is_boxed),15);
        vcdp->fullQuad(c+505,((VL_ULL(0x3fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),38);
        vcdp->fullBit(c+521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
        vcdp->fullBus(c+529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed),15);
        vcdp->fullBit(c+537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid));
        vcdp->fullBus(c+545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__input_boxed),10);
        vcdp->fullBit(c+553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid));
        vcdp->fullBus(c+561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed),10);
        vcdp->fullBit(c+569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid));
        vcdp->fullBus(c+577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__input_boxed),15);
        vcdp->fullBus(c+585,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
        vcdp->fullBus(c+593,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
        vcdp->fullArray(c+601,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),114);
        vcdp->fullBus(c+633,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
        vcdp->fullBus(c+641,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
        vcdp->fullBus(c+649,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),4);
        vcdp->fullBus(c+657,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),4);
        vcdp->fullBus(c+665,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
        vcdp->fullBus(c+673,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
        vcdp->fullBus(c+681,((3U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
        vcdp->fullBit(c+689,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+697,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+705,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+713,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+721,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
        vcdp->fullBus(c+729,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
        vcdp->fullBus(c+737,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),4);
        vcdp->fullBit(c+745,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+753,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
        vcdp->fullBus(c+761,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
        vcdp->fullBus(c+769,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),4);
        vcdp->fullBus(c+777,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                               << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 7U))),32);
        vcdp->fullBus(c+785,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 2U)))),5);
        vcdp->fullBit(c+793,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 1U))));
        vcdp->fullBit(c+801,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+809,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+817,((1U & (IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready))));
        vcdp->fullBit(c+825,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullArray(c+865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullQuad(c+921,((VL_ULL(0x7fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBit(c+937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->fullBus(c+945,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+1033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+1041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+1049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+1057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+1065,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+1073,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+1081,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+1089,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+1097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+1121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1129,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+1137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+1145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+1153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+1161,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+1169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+1177,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+1185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBus(c+1193,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed))),3);
        vcdp->fullBit(c+1201,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+1209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        vcdp->fullBit(c+1217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->fullBus(c+1225,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                    ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status)
                                    : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))
                                : 0U)),5);
        vcdp->fullArray(c+1233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),96);
        vcdp->fullBus(c+1257,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status)
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))),5);
        vcdp->fullBus(c+1265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+1273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o),24);
        vcdp->fullBus(c+1281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),32);
        vcdp->fullBus(c+1289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),32);
        vcdp->fullBus(c+1297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),32);
        vcdp->fullBus(c+1305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
        vcdp->fullBus(c+1313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
        vcdp->fullBus(c+1321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
        vcdp->fullBit(c+1329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
        vcdp->fullBit(c+1337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
        vcdp->fullBit(c+1345,((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                      | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                         | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                     >> 2U))));
        vcdp->fullBit(c+1353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
        vcdp->fullBit(c+1361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
        vcdp->fullBus(c+1369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),32);
        vcdp->fullBus(c+1377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
        vcdp->fullBit(c+1385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
        vcdp->fullBus(c+1393,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1401,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1409,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),10);
        vcdp->fullBus(c+1425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),10);
        vcdp->fullBus(c+1433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),10);
        vcdp->fullBus(c+1441,((VL_LTS_III(1,32,32, 0U, 
                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),10);
        vcdp->fullBus(c+1449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),7);
        vcdp->fullBus(c+1457,(((0x800000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                             << 0x10U)) 
                               | (0x7fffffU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),24);
        vcdp->fullBus(c+1465,(((0x800000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                             << 0x10U)) 
                               | (0x7fffffU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),24);
        vcdp->fullBus(c+1473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),24);
        vcdp->fullQuad(c+1481,((VL_ULL(0xffffffffffff) 
                                & ((QData)((IData)(
                                                   ((0x800000U 
                                                     & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                        << 0x10U)) 
                                                    | (0x7fffffU 
                                                       & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                   * (QData)((IData)(
                                                     ((0x800000U 
                                                       & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                          << 0x10U)) 
                                                      | (0x7fffffU 
                                                         & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))))))),48);
        VL_EXTEND_WQ(76,48, __Vtemp871, (VL_ULL(0xffffffffffff) 
                                         & ((QData)((IData)(
                                                            ((0x800000U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                                                 << 0x10U)) 
                                                             | (0x7fffffU 
                                                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a)))) 
                                            * (QData)((IData)(
                                                              ((0x800000U 
                                                                & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                                                   << 0x10U)) 
                                                               | (0x7fffffU 
                                                                  & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b)))))));
        VL_SHIFTL_WWI(76,76,32, __Vtemp872, __Vtemp871, 2U);
        __Vtemp873[0U] = __Vtemp872[0U];
        __Vtemp873[1U] = __Vtemp872[1U];
        __Vtemp873[2U] = (0xfffU & __Vtemp872[2U]);
        vcdp->fullArray(c+1497,(__Vtemp873),76);
        vcdp->fullArray(c+1521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),76);
        vcdp->fullBus(c+1545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),24);
        vcdp->fullBit(c+1553,((0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
        __Vtemp877[0U] = ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                           ? (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U])
                           : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
        __Vtemp877[1U] = ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                           ? (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U])
                           : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
        __Vtemp877[2U] = (0xfffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                                     ? (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U])
                                     : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]));
        vcdp->fullArray(c+1561,(__Vtemp877),76);
        vcdp->fullBit(c+1585,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                               & (~ (IData)((0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
        vcdp->fullArray(c+1593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),77);
        vcdp->fullBit(c+1617,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
                                     >> 0xcU))));
        vcdp->fullArray(c+1625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),76);
        vcdp->fullBit(c+1649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
        vcdp->fullQuad(c+1657,((VL_ULL(0x7ffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U]))))),51);
        vcdp->fullBus(c+1673,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+1681,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),7);
        vcdp->fullBit(c+1689,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+1697,((0x7fU & ((VL_GTES_III(1,32,32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference))) 
                                         | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                                            & VL_GTES_III(1,32,32, 2U, 
                                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))))
                                         ? ((VL_LTES_III(1,32,32, 0U, 
                                                         ((IData)(1U) 
                                                          + 
                                                          (VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product)) 
                                                           - 
                                                           VL_EXTENDS_II(32,7, 
                                                                         (0x3fU 
                                                                          & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))))) 
                                             & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                             ? ((IData)(0x1aU) 
                                                + (0x3fU 
                                                   & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                                             : ((IData)(0x1aU) 
                                                + VL_EXTENDS_II(7,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))))
                                         : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt)))),7);
        vcdp->fullBus(c+1705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__normalized_exponent),10);
        vcdp->fullArray(c+1713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_shifted),77);
        vcdp->fullBus(c+1737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa),25);
        vcdp->fullQuad(c+1745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits),51);
        vcdp->fullBit(c+1761,(((0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits) 
                               | (0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))));
        vcdp->fullBus(c+1769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent),10);
        vcdp->fullBus(c+1777,((VL_LTES_III(1,32,32, 0xffU, 
                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))
                                ? 0xfeU : (0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))),8);
        vcdp->fullBus(c+1785,((VL_LTES_III(1,32,32, 0xffU, 
                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))
                                ? 0x7fffffU : (0x7fffffU 
                                               & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa 
                                                  >> 1U)))),23);
        vcdp->fullBus(c+1793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs),31);
        vcdp->fullBus(c+1801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits),2);
        vcdp->fullBit(c+1809,(VL_LTES_III(1,32,32, 0xffU, 
                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))));
        vcdp->fullBit(c+1817,((0xffU == (0xffU & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                                  >> 0x17U)))));
        vcdp->fullBit(c+1825,((0U == VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))));
        vcdp->fullBit(c+1833,((0U == (0xffU & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                               >> 0x17U)))));
        vcdp->fullBit(c+1841,(((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                               & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)))));
        vcdp->fullBus(c+1849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs),31);
        vcdp->fullBus(c+1857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status),5);
        vcdp->fullBus(c+1865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+1873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+1881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+1889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+1897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+1905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+1913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+1921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+1929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBus(c+1937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value),32);
        vcdp->fullBit(c+1945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed));
        vcdp->fullBit(c+1953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal));
        vcdp->fullBit(c+1961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf));
        vcdp->fullBit(c+1969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan));
        vcdp->fullBit(c+1977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling));
        vcdp->fullBit(c+1985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet));
        vcdp->fullBit(c+1993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero));
        vcdp->fullBit(c+2001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal));
        vcdp->fullBus(c+2009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value),32);
        vcdp->fullBit(c+2017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed));
        vcdp->fullBit(c+2025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal));
        vcdp->fullBit(c+2033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf));
        vcdp->fullBit(c+2041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan));
        vcdp->fullBit(c+2049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling));
        vcdp->fullBit(c+2057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet));
        vcdp->fullBit(c+2065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero));
        vcdp->fullBit(c+2073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal));
        vcdp->fullQuad(c+2081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+2097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullQuad(c+2193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),51);
        vcdp->fullBus(c+2209,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+2217,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+2225,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+2233,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+2241,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+2249,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                     >> 1U))));
        vcdp->fullBit(c+2257,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+2265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+2273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+2281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+2289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullQuad(c+2297,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBit(c+2313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->fullBus(c+2321,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+2329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+2337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+2409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+2417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+2425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+2433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+2441,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+2449,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+2457,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+2465,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+2473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+2481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+2489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+2497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+2505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+2513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+2521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+2529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+2537,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+2545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+2553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+2561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+2569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready));
        vcdp->fullBus(c+2577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o),5);
        vcdp->fullBit(c+2585,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid));
        vcdp->fullBit(c+2593,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBit(c+2601,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid) 
                               | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy) 
                                  | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)))));
        vcdp->fullBit(c+2609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast));
        vcdp->fullBit(c+2617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast));
        vcdp->fullArray(c+2625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result),160);
        vcdp->fullBus(c+2665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op),5);
        vcdp->fullBus(c+2673,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op),10);
        vcdp->fullQuad(c+2681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),64);
        vcdp->fullBus(c+2697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+2705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt),2);
        vcdp->fullArray(c+2713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands),128);
        vcdp->fullBit(c+2745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid));
        vcdp->fullBit(c+2753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid));
        vcdp->fullBit(c+2761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__op_starting));
        vcdp->fullBit(c+2769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_result));
        vcdp->fullBit(c+2777,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held));
        vcdp->fullBit(c+2785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy));
        vcdp->fullBus(c+2793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d),2);
        vcdp->fullQuad(c+2801,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))),64);
        vcdp->fullQuad(c+2817,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))),64);
        vcdp->fullBit(c+2833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S));
        vcdp->fullBit(c+2841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB));
        vcdp->fullBit(c+2849,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D))));
        vcdp->fullBit(c+2857,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D))));
        vcdp->fullBus(c+2865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D),11);
        vcdp->fullBus(c+2873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D),11);
        vcdp->fullQuad(c+2881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D),52);
        vcdp->fullQuad(c+2897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D),52);
        vcdp->fullQuad(c+2913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D),53);
        vcdp->fullQuad(c+2929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D),53);
        vcdp->fullBit(c+2945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D));
        vcdp->fullBit(c+2953,((1U & ((2U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                          ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                             >> 0xfU)
                                          : (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                             >> 0xfU))
                                      : ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                          ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                             >> 0x1fU)
                                          : (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                             >> 0x1fU))))));
        vcdp->fullBit(c+2961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_prenorm_zero_S));
        vcdp->fullBit(c+2969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_prenorm_zero_S));
        vcdp->fullBit(c+2977,((1U & (~ (IData)((0U 
                                                != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D)))))));
        vcdp->fullBit(c+2985,((1U & (~ (IData)((0U 
                                                != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D)))))));
        vcdp->fullBit(c+2993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S));
        vcdp->fullBit(c+3001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S));
        vcdp->fullBit(c+3009,((1U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
                                              >> 0x33U)) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D))))))));
        vcdp->fullBit(c+3017,(((~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
                                           >> 0x33U))) 
                               & (0U != (VL_ULL(0x7ffffffffffff) 
                                         & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D)))));
        vcdp->fullBit(c+3025,((1U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
                                              >> 0x33U)) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D))))))));
        vcdp->fullBit(c+3033,(((~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
                                           >> 0x33U))) 
                               & (0U != (VL_ULL(0x7ffffffffffff) 
                                         & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D)))));
        vcdp->fullBit(c+3041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SN));
        vcdp->fullBit(c+3049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SN));
        vcdp->fullBit(c+3057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SN));
        vcdp->fullBit(c+3065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SN));
        vcdp->fullBit(c+3073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN));
        vcdp->fullBit(c+3081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN));
        vcdp->fullBus(c+3089,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+3097,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBit(c+3105,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+3113,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullQuad(c+3121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+3137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullQuad(c+3233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp),53);
        vcdp->fullQuad(c+3249,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+3265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullQuad(c+3361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp),53);
        vcdp->fullBit(c+3377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S));
        vcdp->fullBus(c+3385,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 3U))),2);
        vcdp->fullBus(c+3393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_0),3);
        vcdp->fullBus(c+3401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_1),5);
        vcdp->fullBus(c+3409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_2),8);
        vcdp->fullBus(c+3417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_3),11);
        vcdp->fullBus(c+3425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_4),14);
        vcdp->fullBus(c+3433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_5),17);
        vcdp->fullBus(c+3441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_6),20);
        vcdp->fullBus(c+3449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_7),23);
        vcdp->fullBus(c+3457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_8),26);
        vcdp->fullBus(c+3465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_9),29);
        vcdp->fullBus(c+3473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_10),32);
        vcdp->fullQuad(c+3481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_11),35);
        vcdp->fullQuad(c+3497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_12),38);
        vcdp->fullQuad(c+3513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_13),41);
        vcdp->fullQuad(c+3529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_14),44);
        vcdp->fullQuad(c+3545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_15),47);
        vcdp->fullQuad(c+3561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_16),50);
        vcdp->fullQuad(c+3577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_17),53);
        vcdp->fullQuad(c+3593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_18),56);
        vcdp->fullBus(c+3609,(((4U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)) | (3U 
                                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                    >> 1U)))),4);
        vcdp->fullQuad(c+3617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q0),58);
        vcdp->fullQuad(c+3633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0),58);
        vcdp->fullQuad(c+3649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_0),58);
        vcdp->fullQuad(c+3665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q1),58);
        vcdp->fullQuad(c+3681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1),58);
        vcdp->fullQuad(c+3697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_1),58);
        vcdp->fullQuad(c+3713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q2),58);
        vcdp->fullQuad(c+3729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2),58);
        vcdp->fullQuad(c+3745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_2),58);
        vcdp->fullQuad(c+3761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[0]),58);
        vcdp->fullQuad(c+3763,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[1]),58);
        vcdp->fullQuad(c+3765,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[2]),58);
        vcdp->fullQuad(c+3767,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[3]),58);
        vcdp->fullQuad(c+3825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[0]),58);
        vcdp->fullQuad(c+3827,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[1]),58);
        vcdp->fullQuad(c+3829,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[2]),58);
        vcdp->fullQuad(c+3831,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[3]),58);
        vcdp->fullQuad(c+3889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[0]),58);
        vcdp->fullQuad(c+3891,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[1]),58);
        vcdp->fullQuad(c+3893,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[2]),58);
        vcdp->fullQuad(c+3895,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[3]),58);
        vcdp->fullBit(c+3953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[0]));
        vcdp->fullBit(c+3954,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[1]));
        vcdp->fullBit(c+3955,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[2]));
        vcdp->fullBit(c+3956,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[3]));
        vcdp->fullQuad(c+3985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[0]),58);
        vcdp->fullQuad(c+3987,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[1]),58);
        vcdp->fullQuad(c+3989,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[2]),58);
        vcdp->fullQuad(c+3991,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[3]),58);
        vcdp->fullQuad(c+4049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[0]),58);
        vcdp->fullQuad(c+4051,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[1]),58);
        vcdp->fullQuad(c+4053,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[2]),58);
        vcdp->fullQuad(c+4055,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[3]),58);
        vcdp->fullBus(c+4113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S),4);
        vcdp->fullBit(c+4121,((1U & (~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                [0U] 
                                                >> 0x39U))))));
        vcdp->fullBit(c+4129,((1U & (~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                [1U] 
                                                >> 0x39U))))));
        vcdp->fullQuad(c+4137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [0U]),58);
        vcdp->fullQuad(c+4153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [0U]),58);
        vcdp->fullQuad(c+4169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [1U]),58);
        vcdp->fullQuad(c+4185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [1U]),58);
        vcdp->fullQuad(c+4201,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [2U]),58);
        vcdp->fullQuad(c+4217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [2U]),58);
        vcdp->fullBus(c+4233,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+4241,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+4249,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+4257,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+4265,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+4273,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                     >> 2U))));
        vcdp->fullBit(c+4281,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+4289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+4297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+4305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+4313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullArray(c+4321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullQuad(c+4377,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBit(c+4393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->fullBus(c+4401,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+4409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+4417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+4489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+4497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+4505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+4513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+4521,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+4529,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+4537,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+4545,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+4553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+4577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4585,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+4593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+4601,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+4609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+4617,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+4625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+4633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+4641,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBus(c+4649,((3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed))),2);
        vcdp->fullBit(c+4657,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+4665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        vcdp->fullBit(c+4673,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d));
        vcdp->fullBit(c+4681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->fullBus(c+4689,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                : VL_NEGATE_I((IData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d))))),32);
        vcdp->fullBus(c+4697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d),32);
        vcdp->fullBus(c+4705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result),32);
        vcdp->fullBus(c+4713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d),10);
        vcdp->fullBit(c+4721,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_sign));
        vcdp->fullQuad(c+4729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),64);
        vcdp->fullBus(c+4745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),32);
        vcdp->fullBus(c+4753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+4761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o),16);
        vcdp->fullBus(c+4769,((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)),32);
        vcdp->fullBus(c+4777,((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                       >> 0x20U))),32);
        vcdp->fullBus(c+4785,((0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))),8);
        vcdp->fullBus(c+4793,((0xffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                        >> 8U))),8);
        vcdp->fullBit(c+4801,((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                      >> 4U) | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                                >> 0xcU)))));
        vcdp->fullBit(c+4809,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__any_operand_nan));
        vcdp->fullBit(c+4817,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__signalling_nan));
        vcdp->fullBit(c+4825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operands_equal));
        vcdp->fullBit(c+4833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller));
        vcdp->fullBus(c+4841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result),32);
        vcdp->fullBus(c+4849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status),5);
        vcdp->fullBus(c+4857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),32);
        vcdp->fullBus(c+4865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status),5);
        vcdp->fullBit(c+4873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_a));
        vcdp->fullBit(c+4881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_b));
        vcdp->fullBus(c+4889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+4897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+4905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+4913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+4921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+4929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+4937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+4945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+4953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBus(c+4961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__value),32);
        vcdp->fullBit(c+4969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed));
        vcdp->fullBit(c+4977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_normal));
        vcdp->fullBit(c+4985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_inf));
        vcdp->fullBit(c+4993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_nan));
        vcdp->fullBit(c+5001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling));
        vcdp->fullBit(c+5009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet));
        vcdp->fullBit(c+5017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_zero));
        vcdp->fullBit(c+5025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal));
        vcdp->fullBus(c+5033,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+5041,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+5049,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+5057,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+5065,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+5073,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                     >> 3U))));
        vcdp->fullBit(c+5081,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+5089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+5097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+5105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+5113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullArray(c+5121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullQuad(c+5177,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBit(c+5193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->fullBus(c+5201,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+5209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+5217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+5289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+5297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+5305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+5313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+5321,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+5329,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+5337,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+5345,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+5353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+5361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+5369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+5377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+5385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+5393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+5401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+5409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+5417,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+5425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+5433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+5441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+5449,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+5457,(((0x10U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                               (3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))]
                                : ((0x9fU >= (0xe0U 
                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                                 << 5U)))
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                   (7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))]
                                    : 0U))),32);
        vcdp->fullBus(c+5465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o),5);
        vcdp->fullBit(c+5473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__extension_bit));
        vcdp->fullBit(c+5481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->fullBus(c+5489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data),5);
        vcdp->fullBit(c+5497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
        vcdp->fullBit(c+5505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast));
        vcdp->fullBit(c+5513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast));
        vcdp->fullArray(c+5521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result),160);
        vcdp->fullArray(c+5561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result),128);
        vcdp->fullBit(c+5593,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                     >> 3U))));
        vcdp->fullBus(c+5601,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))),3);
        vcdp->fullBit(c+5609,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                     >> 4U))));
        vcdp->fullBit(c+5617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
        vcdp->fullBus(c+5625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op),5);
        vcdp->fullBus(c+5633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op),10);
        vcdp->fullBus(c+5641,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result),32);
        vcdp->fullArray(c+5649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),96);
        vcdp->fullBit(c+5673,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready) 
                                     & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                        >> 3U)))));
        vcdp->fullBus(c+5681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+5689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U]),32);
        vcdp->fullBus(c+5697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant),32);
        vcdp->fullBus(c+5705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign),5);
        vcdp->fullQuad(c+5713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent),45);
        vcdp->fullArray(c+5729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa),160);
        vcdp->fullQuad(c+5769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info),40);
        vcdp->fullArray(c+5785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val),128);
        vcdp->fullBit(c+5817,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign));
        vcdp->fullBus(c+5825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value),32);
        vcdp->fullBus(c+5833,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign)
                                ? VL_NEGATE_I(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value)
                                : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value)),32);
        vcdp->fullBus(c+5841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias),9);
        vcdp->fullBit(c+5849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign));
        vcdp->fullBus(c+5857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp),9);
        vcdp->fullBus(c+5865,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
                               << (0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))),32);
        vcdp->fullBit(c+5873,((1U & (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))));
        vcdp->fullBus(c+5881,((0x1ffU & ((IData)(0x1fU) 
                                         - (0x1fU & 
                                            vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])))),9);
        vcdp->fullBus(c+5889,((0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        vcdp->fullBus(c+5897,((0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+5905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp),9);
        vcdp->fullBus(c+5913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        vcdp->fullBus(c+5921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        vcdp->fullBus(c+5929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp),9);
        vcdp->fullArray(c+5937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant),65);
        vcdp->fullArray(c+5961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant),65);
        vcdp->fullBus(c+5985,((0x7fffffU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                             << 0x17U) 
                                            | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                               >> 9U)))),23);
        vcdp->fullBus(c+5993,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                << 0x1fU) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                             >> 1U))),32);
        vcdp->fullBus(c+6001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt),6);
        vcdp->fullBus(c+6009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits),2);
        vcdp->fullBus(c+6017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits),2);
        vcdp->fullBus(c+6025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits),2);
        vcdp->fullBit(c+6033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round));
        vcdp->fullBit(c+6041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round));
        vcdp->fullBus(c+6049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs),32);
        vcdp->fullBit(c+6057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round));
        vcdp->fullArray(c+6065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_pre_round_abs),160);
        vcdp->fullBus(c+6105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round),5);
        vcdp->fullBus(c+6113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round),5);
        vcdp->fullArray(c+6121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs),128);
        vcdp->fullBus(c+6153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs),32);
        vcdp->fullBit(c+6161,(((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs) 
                               & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))));
        vcdp->fullBus(c+6169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res),32);
        vcdp->fullBit(c+6177,((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res)));
        vcdp->fullArray(c+6185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result),160);
        vcdp->fullBus(c+6225,((0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                        << 2U))),5);
        vcdp->fullBit(c+6233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special));
        vcdp->fullArray(c+6241,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result),160);
        vcdp->fullBit(c+6281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special));
        vcdp->fullArray(c+6289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result),128);
        vcdp->fullBus(c+6321,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits))),5);
        vcdp->fullBus(c+6329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status),5);
        vcdp->fullBus(c+6337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result),32);
        vcdp->fullBus(c+6345,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                ? (0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                            << 2U))
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status))),5);
        vcdp->fullBus(c+6353,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                ? 0x10U : (0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))),5);
        vcdp->fullBus(c+6361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        vcdp->fullBus(c+6369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        vcdp->fullBus(c+6377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes),32);
        vcdp->fullArray(c+6385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes),160);
        vcdp->fullBus(c+6425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),32);
        vcdp->fullBit(c+6433,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op))));
        vcdp->fullBus(c+6441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
        vcdp->fullBus(c+6449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+6457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+6465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+6473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+6481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+6489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+6497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+6505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+6513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBus(c+6521,((7U & ((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullArray(c+6529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullBus(c+6585,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                             >> 1U) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+6593,(((0x10U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                               (3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))]
                                : ((0x9fU >= (0xe0U 
                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                                 << 5U)))
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                   (7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))]
                                    : 0U))),32);
        vcdp->fullBit(c+6601,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                ? ((((~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
                                                 >> 0x33U))) 
                                     & (0U != (VL_ULL(0x7ffffffffffff) 
                                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D))) 
                                    & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN)) 
                                   | (((~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
                                                   >> 0x33U))) 
                                       & (0U != (VL_ULL(0x7ffffffffffff) 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D))) 
                                      & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN)))
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP))));
        vcdp->fullBit(c+6609,((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                                      & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                      ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D) 
                                         ^ ((2U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                 ? 
                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                 >> 0xfU)
                                                 : 
                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                 >> 0xfU))
                                             : ((1U 
                                                 & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                 ? 
                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                 >> 0x1fU)
                                                 : 
                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                 >> 0x1fU))))
                                      : (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid) 
                                          & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                          ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D)
                                          : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))))));
        vcdp->fullQuad(c+6617,((VL_ULL(0x1fffffffffffff) 
                                & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                    & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                    ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D 
                                       << (0x3fU & 
                                           vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))
                                    : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP))),53);
        vcdp->fullBus(c+6633,((0xfffU & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                          & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                          ? (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D) 
                                              - (0x3fU 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                             + (0U 
                                                != 
                                                (0x3fU 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])))
                                          : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))),12);
        vcdp->fullQuad(c+6641,((VL_ULL(0x1fffffffffffff) 
                                & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                    & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                    ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D 
                                       << (0x3fU & 
                                           vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))
                                    : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP))),53);
        vcdp->fullBus(c+6657,((0xfffU & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                          & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                          ? (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D) 
                                              - (0x3fU 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                             + (0U 
                                                != 
                                                (0x3fU 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])))
                                          : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP)))),12);
        vcdp->fullQuad(c+6665,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
                                 ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)
                                     ? (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                     [2U] 
                                                                     >> 0x39U))))) 
                                         << 0x39U) 
                                        | ((VL_ULL(0x1fffffffffffffc) 
                                            & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [2U] 
                                               << 2U)) 
                                           | (QData)((IData)(
                                                             vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                             [2U]))))
                                     : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                    [2U]) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)),58);
        vcdp->fullBus(c+6681,(((6U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                    >> 3U)))),3);
        vcdp->fullBus(c+6689,(((0x1eU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 1U)) | 
                               (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),5);
        vcdp->fullBus(c+6697,(((0x7eU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 1U)) | 
                               (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),7);
        vcdp->fullBus(c+6705,(((0x1feU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 1U)) | 
                               (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),9);
        vcdp->fullBus(c+6713,(((0x7feU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 1U)) | 
                               (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),11);
        vcdp->fullBus(c+6721,(((0x1ffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),13);
        vcdp->fullBus(c+6729,(((0x7ffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),15);
        vcdp->fullBus(c+6737,(((0x1fffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),17);
        vcdp->fullBus(c+6745,(((0x7fffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),19);
        vcdp->fullBus(c+6753,(((0x1ffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),21);
        vcdp->fullBus(c+6761,(((0x7ffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),23);
        vcdp->fullBus(c+6769,(((0x1fffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),25);
        vcdp->fullBus(c+6777,(((0x7fffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),27);
        vcdp->fullBus(c+6785,(((0x1ffffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),29);
        vcdp->fullBus(c+6793,(((0x7ffffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),31);
        vcdp->fullQuad(c+6801,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                 << 1U) | (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 3U)))))),33);
        vcdp->fullQuad(c+6817,(((VL_ULL(0x7fffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),35);
        vcdp->fullQuad(c+6833,(((VL_ULL(0x1ffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),37);
        vcdp->fullQuad(c+6849,(((VL_ULL(0x7ffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),39);
        vcdp->fullQuad(c+6865,(((VL_ULL(0x1fffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),41);
        vcdp->fullQuad(c+6881,(((VL_ULL(0x7fffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),43);
        vcdp->fullQuad(c+6897,(((VL_ULL(0x1ffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),45);
        vcdp->fullQuad(c+6913,(((VL_ULL(0x7ffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),47);
        vcdp->fullQuad(c+6929,(((VL_ULL(0x1fffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),49);
        vcdp->fullQuad(c+6945,(((VL_ULL(0x7fffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),51);
        vcdp->fullQuad(c+6961,(((VL_ULL(0x1ffffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),53);
        vcdp->fullQuad(c+6977,(((VL_ULL(0x7ffffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),55);
        vcdp->fullQuad(c+6993,(((VL_ULL(0x1fffffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),57);
        vcdp->fullQuad(c+7009,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                 << 2U) | (QData)((IData)(
                                                          (3U 
                                                           & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 2U)))))),59);
        vcdp->fullBus(c+7025,(((0x78U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 3U)) | 
                               (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)))),7);
        vcdp->fullBus(c+7033,(((0x7f8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 3U)) | 
                               (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)))),11);
        vcdp->fullBus(c+7041,(((0x7ff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),15);
        vcdp->fullBus(c+7049,(((0x7fff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),19);
        vcdp->fullBus(c+7057,(((0x7ffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),23);
        vcdp->fullBus(c+7065,(((0x7fffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),27);
        vcdp->fullBus(c+7073,(((0x7ffffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),31);
        vcdp->fullQuad(c+7081,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 1U)))))),35);
        vcdp->fullQuad(c+7097,(((VL_ULL(0x7ffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),39);
        vcdp->fullQuad(c+7113,(((VL_ULL(0x7fffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),43);
        vcdp->fullQuad(c+7129,(((VL_ULL(0x7ffffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),47);
        vcdp->fullQuad(c+7145,(((VL_ULL(0x7fffffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),51);
        vcdp->fullQuad(c+7161,(((VL_ULL(0x7ffffffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),55);
        vcdp->fullQuad(c+7177,(((VL_ULL(0x7fffffffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),59);
        vcdp->fullQuad(c+7193,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [0U] 
                                                             >> 0x39U))))) 
                                 << 0x39U) | ((VL_ULL(0x1fffffffffffffc) 
                                               & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                  [0U] 
                                                  << 2U)) 
                                              | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                [0U]))))),58);
        vcdp->fullQuad(c+7209,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [1U] 
                                                             >> 0x39U))))) 
                                 << 0x39U) | ((VL_ULL(0x1fffffffffffffc) 
                                               & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                  [1U] 
                                                  << 2U)) 
                                              | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                [1U]))))),58);
        vcdp->fullQuad(c+7225,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [2U] 
                                                             >> 0x39U))))) 
                                 << 0x39U) | ((VL_ULL(0x1fffffffffffffc) 
                                               & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                  [2U] 
                                                  << 2U)) 
                                              | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                [2U]))))),58);
        vcdp->fullQuad(c+7241,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [3U] 
                                                             >> 0x39U))))) 
                                 << 0x39U) | ((VL_ULL(0x1fffffffffffffc) 
                                               & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                  [3U] 
                                                  << 2U)) 
                                              | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                                [3U]))))),58);
        vcdp->fullQuad(c+7257,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[0]),58);
        vcdp->fullQuad(c+7259,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[1]),58);
        vcdp->fullQuad(c+7261,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[2]),58);
        vcdp->fullQuad(c+7263,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[3]),58);
        vcdp->fullQuad(c+7321,((((QData)((IData)((0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [0U] 
                                                             >> 0x30U))))) 
                                 << 0x31U) | (((QData)((IData)(
                                                               (1U 
                                                                & ((3U 
                                                                    == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                               [0U] 
                                                                               >> 0x39U)))
                                                                    : (IData)(
                                                                              (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                               [0U] 
                                                                               >> 0x2fU)))))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                              [0U] 
                                                                              >> 0x2dU))))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((2U 
                                                                          == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x39U)))
                                                                          : (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x2cU)))))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x20U))))) 
                                                        << 0x21U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0U 
                                                                                == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x39U)))
                                                                                : (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x1fU)))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((0xfffffff0U 
                                                                              & ((IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                             | (((1U 
                                                                                == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [0U] 
                                                                                >> 0x39U)))) 
                                                                                << 3U))))))))))),58);
        vcdp->fullQuad(c+7337,(((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [0U] 
                                               >> 0x39U)))
                                 ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                    << 4U) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB)),58);
        vcdp->fullQuad(c+7353,((((QData)((IData)((0x1ffU 
                                                  & (IData)(
                                                            (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                             [1U] 
                                                             >> 0x30U))))) 
                                 << 0x31U) | (((QData)((IData)(
                                                               (1U 
                                                                & ((3U 
                                                                    == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                               [1U] 
                                                                               >> 0x39U)))
                                                                    : (IData)(
                                                                              (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                               [1U] 
                                                                               >> 0x2fU)))))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                              [1U] 
                                                                              >> 0x2dU))))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((2U 
                                                                          == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x39U)))
                                                                          : (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x2cU)))))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x20U))))) 
                                                        << 0x21U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0U 
                                                                                == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x39U)))
                                                                                : (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x1fU)))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((0xfffffff0U 
                                                                              & ((IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                             | (((1U 
                                                                                == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                                [1U] 
                                                                                >> 0x39U)))) 
                                                                                << 3U))))))))))),58);
        vcdp->fullQuad(c+7369,(((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [1U] 
                                               >> 0x39U)))
                                 ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                    << 4U) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB)),58);
        vcdp->fullQuad(c+7385,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
                                 ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)
                                     ? ((VL_ULL(0x1fffffffffffff8) 
                                         & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                            << 3U)) 
                                        | (QData)((IData)(
                                                          (7U 
                                                           & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 1U)))))
                                     : ((VL_ULL(0x1fffffffffffff8) 
                                         & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                            << 3U)) 
                                        | (QData)((IData)(
                                                          ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                            [0U] 
                                                            << 2U) 
                                                           | ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                               [1U] 
                                                               << 1U) 
                                                              | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                              [2U]))))))
                                 : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),57);
        vcdp->fullQuad(c+7401,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [0U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [0U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7417,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [0U] 
                                                  + 
                                                  vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [0U]) 
                                                 + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullQuad(c+7425,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [1U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [1U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7441,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [1U] 
                                                  + 
                                                  vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [1U]) 
                                                 + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullQuad(c+7449,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [2U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [2U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7465,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [2U] 
                                                  + 
                                                  vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [2U]) 
                                                 + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullBus(c+7473,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                             >> 2U) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+7481,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                             >> 3U) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+7489,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                    ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                                    : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO))
                                : 0U)),5);
        vcdp->fullBus(c+7497,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                                    : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result)
                                : 0xffffffffU)),32);
        vcdp->fullBus(c+7505,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                                : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result)),32);
        vcdp->fullBus(c+7513,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO))),5);
        vcdp->fullQuad(c+7521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_result),64);
        vcdp->fullQuad(c+7537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D),57);
        vcdp->fullQuad(c+7553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB),54);
        vcdp->fullQuad(c+7569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm),54);
        vcdp->fullBus(c+7585,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S),6);
        vcdp->fullBit(c+7593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S));
        vcdp->fullBit(c+7601,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S));
        vcdp->fullQuad(c+7609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_3),58);
        vcdp->fullBus(c+7625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0]),2);
        vcdp->fullBus(c+7626,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1]),2);
        vcdp->fullBus(c+7627,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2]),2);
        vcdp->fullBus(c+7628,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[3]),2);
        vcdp->fullBus(c+7657,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[0]),2);
        vcdp->fullBus(c+7658,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[1]),2);
        vcdp->fullBus(c+7659,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[2]),2);
        vcdp->fullBus(c+7660,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[3]),2);
        vcdp->fullQuad(c+7689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB),58);
        vcdp->fullQuad(c+7705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D),58);
        vcdp->fullQuad(c+7721,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                  ? 1U : (1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))
                                 ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB
                                 : (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                    << 4U))),58);
        vcdp->fullBit(c+7737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[0]));
        vcdp->fullBit(c+7738,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[1]));
        vcdp->fullBit(c+7739,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[2]));
        vcdp->fullBit(c+7740,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[3]));
        vcdp->fullBit(c+7769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[0]));
        vcdp->fullBit(c+7770,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[1]));
        vcdp->fullBit(c+7771,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[2]));
        vcdp->fullBit(c+7772,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[3]));
        vcdp->fullBit(c+7801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[0]));
        vcdp->fullBit(c+7802,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[1]));
        vcdp->fullBit(c+7803,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[2]));
        vcdp->fullBit(c+7804,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[3]));
        vcdp->fullBus(c+7833,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S)
                                           ? ((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                                 ? 
                                                ((0x2000U 
                                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                     << 2U)) 
                                                 | ((0x1000U 
                                                     & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                        << 1U)) 
                                                    | ((0x800U 
                                                        & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)) 
                                                       | (0x7ffU 
                                                          & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                             >> 1U)))))
                                                 : 
                                                ((0x2000U 
                                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                     << 2U)) 
                                                 | ((0x1000U 
                                                     & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                        << 1U)) 
                                                    | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))) 
                                               + ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                                   ? 
                                                  (1U 
                                                   & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP))
                                                   : 
                                                  ((0x2000U 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                         >> 0xbU)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((~ 
                                                           ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                            >> 0xbU)) 
                                                          << 0xcU)) 
                                                      | (0xfffU 
                                                         & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP))))))) 
                                              + ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                                  ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
                                                  : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS))
                                           : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))),13);
        vcdp->fullBus(c+7841,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                           ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
                                           : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS))),13);
        vcdp->fullBus(c+7849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE),32);
        vcdp->fullBus(c+7857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS),32);
        vcdp->fullBit(c+7865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                              [0U]));
        vcdp->fullBit(c+7873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                              [0U]));
        vcdp->fullBit(c+7881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [0U]));
        vcdp->fullBus(c+7889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [0U]),2);
        vcdp->fullBus(c+7897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->fullBit(c+7905,((1U & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [0U] >> 1U) | 
                                     vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [0U]))));
        vcdp->fullBit(c+7913,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                               [0U] & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                        [0U] >> 1U) 
                                       | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [0U]))));
        vcdp->fullBit(c+7921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->fullBit(c+7929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                              [1U]));
        vcdp->fullBit(c+7937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                              [1U]));
        vcdp->fullBit(c+7945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [1U]));
        vcdp->fullBus(c+7953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [1U]),2);
        vcdp->fullBus(c+7961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->fullBit(c+7969,((1U & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [1U] >> 1U) | 
                                     vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [1U]))));
        vcdp->fullBit(c+7977,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                               [1U] & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                        [1U] >> 1U) 
                                       | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [1U]))));
        vcdp->fullBit(c+7985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->fullBit(c+7993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                              [2U]));
        vcdp->fullBit(c+8001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                              [2U]));
        vcdp->fullBit(c+8009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [2U]));
        vcdp->fullBus(c+8017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                              [2U]),2);
        vcdp->fullBus(c+8025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->fullBit(c+8033,((1U & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [2U] >> 1U) | 
                                     vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [2U]))));
        vcdp->fullBit(c+8041,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                               [2U] & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                        [2U] >> 1U) 
                                       | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [2U]))));
        vcdp->fullBit(c+8049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->fullBit(c+8057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Sign_res_D));
        vcdp->fullBit(c+8065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_OF_S));
        vcdp->fullBit(c+8073,((1U & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                                     & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                                        & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)) 
                                           & ((~ ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                  & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                              & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)) 
                                                 & ((~ 
                                                     ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                      & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                         & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))) 
                                                       & ((0U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))
                                                           ? 
                                                          (VL_ULL(0) 
                                                           != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D)
                                                           : 
                                                          (((1U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))) 
                                                            & (~ (IData)(
                                                                         (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                                          >> 0x38U)))) 
                                                           | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP) 
                                                              >> 0xcU)))))))))))));
        vcdp->fullBit(c+8081,(((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)) 
                               | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S))));
        vcdp->fullQuad(c+8089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D),53);
        vcdp->fullBus(c+8105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_res_norm_D),11);
        __Vtemp879[0U] = 0U;
        __Vtemp879[1U] = (0xffe00000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                         << 0x15U));
        __Vtemp879[2U] = ((0x1fffffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                        >> 0xbU)) | 
                          (0xffe00000U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        __Vtemp879[3U] = (0x1fffffU & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                >> 0x20U)) 
                                       >> 0xbU));
        VL_SHIFTR_WWI(110,110,13, __Vtemp880, __Vtemp879, 
                      (0x1fffU & ((IData)(2U) + (~ 
                                                 VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
        vcdp->fullQuad(c+8113,((VL_ULL(0x1fffffffffffff) 
                                & (((QData)((IData)(
                                                    (0x3fffU 
                                                     & __Vtemp880[3U]))) 
                                    << 0x27U) | (((QData)((IData)(
                                                                  __Vtemp880[2U])) 
                                                  << 7U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp880[1U])) 
                                                    >> 0x19U))))),53);
        __Vtemp883[0U] = 0U;
        __Vtemp883[1U] = (0xffe00000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                         << 0x15U));
        __Vtemp883[2U] = ((0x1fffffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                        >> 0xbU)) | 
                          (0xffe00000U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        __Vtemp883[3U] = (0x1fffffU & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                >> 0x20U)) 
                                       >> 0xbU));
        VL_SHIFTR_WWI(110,110,13, __Vtemp884, __Vtemp883, 
                      (0x1fffU & ((IData)(2U) + (~ 
                                                 VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
        vcdp->fullQuad(c+8129,((VL_ULL(0x1ffffffffffffff) 
                                & (((QData)((IData)(
                                                    __Vtemp884[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp884[0U]))))),57);
        vcdp->fullBus(c+8145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D),2);
        vcdp->fullBit(c+8153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_sticky_bit_D));
        vcdp->fullQuad(c+8161,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_forround_D),57);
        vcdp->fullQuad(c+8177,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D),53);
        vcdp->fullQuad(c+8193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D),54);
        vcdp->fullBit(c+8209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S));
        vcdp->fullBit(c+8217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S));
        vcdp->fullBit(c+8225,((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                             >> 0x35U)))));
        vcdp->fullQuad(c+8233,((((QData)((IData)(((3U 
                                                   == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                  & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               ((2U 
                                                                 == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))) 
                                               << 0x2aU) 
                                              | (QData)((IData)(
                                                                ((((0U 
                                                                    == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                   & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)) 
                                                                  << 0x1dU) 
                                                                 | ((1U 
                                                                     == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S)) 
                                                                    & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S)))))))),53);
        vcdp->fullQuad(c+8249,((VL_ULL(0xfffffffffffff) 
                                & ((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                                  >> 0x35U)))
                                    ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                       >> 1U) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D))),52);
        vcdp->fullBus(c+8265,((0x7ffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_res_norm_D) 
                                         + (1U & (IData)(
                                                         (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                                          >> 0x35U)))))),11);
        vcdp->fullQuad(c+8273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_before_format_ctl_D),52);
        vcdp->fullBus(c+8289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_before_format_ctl_D),11);
        vcdp->fullBus(c+8297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result),32);
        vcdp->fullBus(c+8305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO),5);
        vcdp->fullBus(c+8313,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),2);
        vcdp->fullBus(c+8321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBus(c+8329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBit(c+8337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q));
        vcdp->fullBus(c+8345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q),5);
        vcdp->fullBit(c+8353,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                     >> 3U))));
        vcdp->fullBus(c+8361,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))),3);
        vcdp->fullBit(c+8369,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                     >> 4U))));
        vcdp->fullBit(c+8377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
        vcdp->fullBit(c+8385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done));
        vcdp->fullBus(c+8393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q),2);
        vcdp->fullBit(c+8401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_is_fp8_q));
        vcdp->fullBus(c+8409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP),12);
        vcdp->fullBus(c+8417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP),12);
        vcdp->fullQuad(c+8425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP),53);
        vcdp->fullQuad(c+8441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP),53);
        vcdp->fullBus(c+8457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP),13);
        vcdp->fullBit(c+8465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP));
        vcdp->fullBus(c+8473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP),3);
        vcdp->fullBit(c+8481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S));
        vcdp->fullBit(c+8489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S));
        vcdp->fullBit(c+8497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP));
        vcdp->fullBit(c+8505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP));
        vcdp->fullBit(c+8513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP));
        vcdp->fullBit(c+8521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP));
        vcdp->fullBit(c+8529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP));
        vcdp->fullBit(c+8537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP));
        vcdp->fullBit(c+8545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP));
        vcdp->fullBit(c+8553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_dly_SB));
        vcdp->fullBit(c+8561,((0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))));
        vcdp->fullBit(c+8569,((0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+8577,((1U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+8585,((2U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+8593,((3U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+8601,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S));
        vcdp->fullBit(c+8609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S));
        vcdp->fullQuad(c+8617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP),58);
        vcdp->fullQuad(c+8633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP),57);
        vcdp->fullQuad(c+8649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP),54);
        vcdp->fullQuad(c+8665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP),54);
        vcdp->fullBus(c+8681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S),2);
        vcdp->fullBus(c+8689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S),6);
        vcdp->fullBus(c+8697,((0x1fU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                                        >> 1U))),6);
        vcdp->fullBus(c+8705,((0xfU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                                       >> 2U))),6);
        vcdp->fullBus(c+8713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S),6);
        vcdp->fullBit(c+8721,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))));
        vcdp->fullBus(c+8729,((3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),2);
        vcdp->fullBus(c+8737,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),3);
        vcdp->fullBus(c+8745,((0xfU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),4);
        vcdp->fullBus(c+8753,((0x1fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),5);
        vcdp->fullBus(c+8761,((0x3fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),6);
        vcdp->fullBus(c+8769,((0x7fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),7);
        vcdp->fullBus(c+8777,((0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),8);
        vcdp->fullBus(c+8785,((0x1ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),9);
        vcdp->fullBus(c+8793,((0x3ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),10);
        vcdp->fullBus(c+8801,((0x7ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),11);
        vcdp->fullBus(c+8809,((0xfffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),12);
        vcdp->fullBus(c+8817,((0x1fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),13);
        vcdp->fullBus(c+8825,((0x3fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),14);
        vcdp->fullBus(c+8833,((0x7fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),15);
        vcdp->fullBus(c+8841,((0xffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),16);
        vcdp->fullBus(c+8849,((0x1ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),17);
        vcdp->fullBus(c+8857,((0x3ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),18);
        vcdp->fullBus(c+8865,((0x7ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),19);
        vcdp->fullBus(c+8873,((0xfffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),20);
        vcdp->fullBus(c+8881,((0x1fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),21);
        vcdp->fullBus(c+8889,((0x3fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),22);
        vcdp->fullBus(c+8897,((0x7fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),23);
        vcdp->fullBus(c+8905,((0xffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),24);
        vcdp->fullBus(c+8913,((0x1ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),25);
        vcdp->fullBus(c+8921,((0x3ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),26);
        vcdp->fullBus(c+8929,((0x7ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),27);
        vcdp->fullBus(c+8937,((0xfffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),28);
        vcdp->fullBus(c+8945,((0x1fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),29);
        vcdp->fullBus(c+8953,((0x3fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),30);
        vcdp->fullBus(c+8961,((0x7fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),31);
        vcdp->fullBus(c+8969,((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),32);
        vcdp->fullQuad(c+8977,((VL_ULL(0x1ffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),33);
        vcdp->fullQuad(c+8993,((VL_ULL(0x3ffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),34);
        vcdp->fullQuad(c+9009,((VL_ULL(0x7ffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),35);
        vcdp->fullQuad(c+9025,((VL_ULL(0xfffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),36);
        vcdp->fullQuad(c+9041,((VL_ULL(0x1fffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),37);
        vcdp->fullQuad(c+9057,((VL_ULL(0x3fffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),38);
        vcdp->fullQuad(c+9073,((VL_ULL(0x7fffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),39);
        vcdp->fullQuad(c+9089,((VL_ULL(0xffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),40);
        vcdp->fullQuad(c+9105,((VL_ULL(0x1ffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),41);
        vcdp->fullQuad(c+9121,((VL_ULL(0x3ffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),42);
        vcdp->fullQuad(c+9137,((VL_ULL(0x7ffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),43);
        vcdp->fullQuad(c+9153,((VL_ULL(0xfffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),44);
        vcdp->fullQuad(c+9169,((VL_ULL(0x1fffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),45);
        vcdp->fullQuad(c+9185,((VL_ULL(0x3fffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),46);
        vcdp->fullQuad(c+9201,((VL_ULL(0x7fffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),47);
        vcdp->fullQuad(c+9217,((VL_ULL(0xffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),48);
        vcdp->fullQuad(c+9233,((VL_ULL(0x1ffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),49);
        vcdp->fullQuad(c+9249,((VL_ULL(0x3ffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),50);
        vcdp->fullQuad(c+9265,((VL_ULL(0x7ffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),51);
        vcdp->fullQuad(c+9281,((VL_ULL(0xfffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),52);
        vcdp->fullQuad(c+9297,((VL_ULL(0x1fffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),53);
        vcdp->fullQuad(c+9313,((VL_ULL(0x3fffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),54);
        vcdp->fullQuad(c+9329,((VL_ULL(0x7fffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),55);
        vcdp->fullQuad(c+9345,((VL_ULL(0xffffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),56);
        vcdp->fullQuad(c+9361,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                 ? VL_ULL(0) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)),58);
        vcdp->fullBit(c+9377,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                ? 1U : (1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))));
        vcdp->fullBus(c+9385,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                           ? ((0x2000U 
                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                  << 2U)) 
                                              | ((0x1000U 
                                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                     << 1U)) 
                                                 | ((0x800U 
                                                     & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)) 
                                                    | (0x7ffU 
                                                       & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                          >> 1U)))))
                                           : ((0x2000U 
                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                  << 2U)) 
                                              | ((0x1000U 
                                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP) 
                                                     << 1U)) 
                                                 | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))))),13);
        vcdp->fullBus(c+9393,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                           ? (1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP))
                                           : ((0x2000U 
                                               & ((~ 
                                                   ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                    >> 0xbU)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ 
                                                      ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP) 
                                                       >> 0xbU)) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP)))))))),13);
        vcdp->fullBit(c+9401,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)
                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP)
                                : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)
                                    ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP)
                                    : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)
                                        ? (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP)) 
                                           | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S) 
                                              & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP)))
                                        : ((~ ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                               & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                           & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                               ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                  & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                               : ((~ 
                                                   ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                    & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                     & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))))))))));
        vcdp->fullBit(c+9409,(((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                               & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                                  & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)) 
                                     & ((~ ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                        & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                            ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                               & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                            : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                               & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP)))))))));
        vcdp->fullBus(c+9417,((0x1fffU & ((IData)(0x35U) 
                                          + (0xfffU 
                                             & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),13);
        vcdp->fullBus(c+9425,((0x3ffU & ((IData)(0x18U) 
                                         + (0x1ffU 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),10);
        vcdp->fullBus(c+9433,((0x7fU & ((IData)(0xbU) 
                                        + (0x3fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),7);
        vcdp->fullBus(c+9441,((0x3ffU & ((IData)(8U) 
                                         + (0x1ffU 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),10);
        vcdp->fullBus(c+9449,((0x1fffU & ((IData)(2U) 
                                          + (~ VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))))),13);
        vcdp->fullBus(c+9457,((0x1fffU & (VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)) 
                                          - (IData)(1U)))),13);
        vcdp->fullBus(c+9465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBus(c+9473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBus(c+9481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q),32);
        vcdp->fullBus(c+9489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q),5);
        vcdp->fullBit(c+9497,(vlTOPp->clk_i));
        vcdp->fullBit(c+9505,(vlTOPp->rst_ni));
        vcdp->fullArray(c+9513,(vlTOPp->operands_i),96);
        vcdp->fullBus(c+9537,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+9545,(vlTOPp->op_i),4);
        vcdp->fullBit(c+9553,(vlTOPp->op_mod_i));
        vcdp->fullBus(c+9561,(vlTOPp->src_fmt_i),3);
        vcdp->fullBus(c+9569,(vlTOPp->dst_fmt_i),3);
        vcdp->fullBus(c+9577,(vlTOPp->int_fmt_i),2);
        vcdp->fullBit(c+9585,(vlTOPp->vectorial_op_i));
        vcdp->fullBit(c+9593,(vlTOPp->tag_i));
        vcdp->fullBit(c+9601,(vlTOPp->in_valid_i));
        vcdp->fullBit(c+9609,(vlTOPp->in_ready_o));
        vcdp->fullBit(c+9617,(vlTOPp->flush_i));
        vcdp->fullBus(c+9625,(vlTOPp->result_o),32);
        vcdp->fullBus(c+9633,(vlTOPp->status_o),5);
        vcdp->fullBit(c+9641,(vlTOPp->tag_o));
        vcdp->fullBit(c+9649,(vlTOPp->out_valid_o));
        vcdp->fullBit(c+9657,(vlTOPp->out_ready_i));
        vcdp->fullBit(c+9665,(vlTOPp->busy_o));
        vcdp->fullBus(c+9673,((3U & (((IData)(vlTOPp->out_ready_i) 
                                      & (IData)(vlTOPp->out_valid_o))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
        vcdp->fullBit(c+9681,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                               & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                     >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->fullBus(c+9689,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result
                                    : ((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                           & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                          & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                          ? (2U == (IData)(vlTOPp->rnd_mode_i))
                                          : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                                        << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))
                                : 0xffffffffU)),32);
        vcdp->fullBus(c+9697,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result
                                : ((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                       & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                      & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                      ? (2U == (IData)(vlTOPp->rnd_mode_i))
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                                    << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))),32);
        vcdp->fullBus(c+9705,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+9713,(vlTOPp->op_i),4);
        vcdp->fullBit(c+9721,(((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                 & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                ? (2U == (IData)(vlTOPp->rnd_mode_i))
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign))));
        vcdp->fullBus(c+9729,(((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                   & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                  & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                  ? (2U == (IData)(vlTOPp->rnd_mode_i))
                                  : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                                << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs)),32);
        vcdp->fullBit(c+9737,((1U & ((4U & (IData)(vlTOPp->rnd_mode_i))
                                      ? (((IData)(vlTOPp->rnd_mode_i) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->rnd_mode_i) 
                                          | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits) 
                                             >> 1U)))
                                      : ((2U & (IData)(vlTOPp->rnd_mode_i))
                                          ? ((1U & (IData)(vlTOPp->rnd_mode_i))
                                              ? ((0U 
                                                  != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                                                 & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)))
                                              : ((0U 
                                                  != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                                                 & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)))
                                          : ((~ (IData)(vlTOPp->rnd_mode_i)) 
                                             & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits) 
                                                   | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs))))))));
        vcdp->fullQuad(c+9745,((((QData)((IData)(vlTOPp->operands_i[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->operands_i[0U])))),64);
        vcdp->fullBit(c+9761,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                               & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                     >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->fullBus(c+9769,(vlTOPp->dst_fmt_i),3);
        vcdp->fullBus(c+9777,(vlTOPp->dst_fmt_i),5);
        vcdp->fullBus(c+9785,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+9793,(vlTOPp->op_i),4);
        vcdp->fullBus(c+9801,(vlTOPp->dst_fmt_i),3);
        vcdp->fullBus(c+9809,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                ? (IData)(vlTOPp->rnd_mode_i)
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP))),3);
        vcdp->fullQuad(c+9817,((((QData)((IData)(vlTOPp->operands_i[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->operands_i[0U])))),64);
        vcdp->fullBit(c+9833,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                               & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                     >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->fullBus(c+9841,(((9U == (IData)(vlTOPp->op_i))
                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d)
                                : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                    : VL_NEGATE_I((IData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d)))))),32);
        vcdp->fullBus(c+9849,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                ? ((8U & (IData)(vlTOPp->op_i))
                                    ? ((4U & (IData)(vlTOPp->op_i))
                                        ? 0x1fU : (
                                                   (2U 
                                                    & (IData)(vlTOPp->op_i))
                                                    ? 0x1fU
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->op_i))
                                                     ? 0U
                                                     : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                    : ((4U & (IData)(vlTOPp->op_i))
                                        ? ((2U & (IData)(vlTOPp->op_i))
                                            ? ((1U 
                                                & (IData)(vlTOPp->op_i))
                                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                : 0U)
                                            : 0x1fU)
                                        : 0x1fU)) : 0U)),5);
        vcdp->fullBit(c+9857,((9U == (IData)(vlTOPp->op_i))));
        vcdp->fullBus(c+9865,(((8U & (IData)(vlTOPp->op_i))
                                ? ((4U & (IData)(vlTOPp->op_i))
                                    ? 0x1fU : ((2U 
                                                & (IData)(vlTOPp->op_i))
                                                ? 0x1fU
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->op_i))
                                                    ? 0U
                                                    : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                : ((4U & (IData)(vlTOPp->op_i))
                                    ? ((2U & (IData)(vlTOPp->op_i))
                                        ? ((1U & (IData)(vlTOPp->op_i))
                                            ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                            : 0U) : 0x1fU)
                                    : 0x1fU))),5);
        vcdp->fullBus(c+9873,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+9881,(vlTOPp->op_i),4);
        vcdp->fullBit(c+9889,((1U & ((~ (IData)(vlTOPp->op_mod_i)) 
                                     | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                        >> 0x1fU)))));
        vcdp->fullBus(c+9897,(((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                       >> 3U) & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                                 >> 0xbU)))
                                ? 0x7fc00000U : ((8U 
                                                  & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                                  ? (IData)(
                                                            (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                             >> 0x20U))
                                                  : 
                                                 ((0x800U 
                                                   & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))
                                                   ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->rnd_mode_i))
                                                    ? 
                                                   ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                     ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)
                                                     : (IData)(
                                                               (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                                >> 0x20U)))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->rnd_mode_i))
                                                     ? 
                                                    ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller)
                                                      ? (IData)(
                                                                (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                                                 >> 0x20U))
                                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands))
                                                     : 0x80800001U)))))),32);
        vcdp->fullBit(c+9905,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                               & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                  & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                     >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->fullBus(c+9913,(((0xbU == (IData)(vlTOPp->op_i))
                                ? (IData)(vlTOPp->int_fmt_i)
                                : (IData)(vlTOPp->dst_fmt_i))),3);
        vcdp->fullBit(c+9921,((0xbU == (IData)(vlTOPp->op_i))));
        vcdp->fullBus(c+9929,((1U & (((0xeU == (IData)(vlTOPp->op_i)) 
                                      << 1U) | (IData)(vlTOPp->op_mod_i)))),2);
        vcdp->fullBus(c+9937,(((2U & (((0xeU == (IData)(vlTOPp->op_i)) 
                                       << 2U) | ((IData)(vlTOPp->op_mod_i) 
                                                 << 1U))) 
                               | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk))),3);
        vcdp->fullBus(c+9945,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk)
                                ? vlTOPp->operands_i[2U]
                                : vlTOPp->operands_i[1U])),32);
        vcdp->fullBus(c+9953,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid)
                                ? ((0xbU == (IData)(vlTOPp->op_i))
                                    ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                        ? 0x10U : (0U 
                                                   != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                    : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                        ? (0x10U & 
                                           ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                            << 2U))
                                        : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
                                : 0U)),5);
        vcdp->fullBus(c+9961,(((0xbU == (IData)(vlTOPp->op_i))
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                                : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                    ? ((0x9fU >= (0xffU 
                                                  & ((IData)(vlTOPp->dst_fmt_i) 
                                                     << 5U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlTOPp->dst_fmt_i) 
                                                 << 5U)))
                                             ? 0U : 
                                            (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                             ((IData)(1U) 
                                              + (7U 
                                                 & (IData)(vlTOPp->dst_fmt_i)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->dst_fmt_i) 
                                                     << 5U))))) 
                                           | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                              (7U & (IData)(vlTOPp->dst_fmt_i))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlTOPp->dst_fmt_i) 
                                                     << 5U))))
                                        : 0U) : ((0x9fU 
                                                  >= 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->dst_fmt_i) 
                                                      << 5U)))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->dst_fmt_i) 
                                                        << 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                    ((IData)(1U) 
                                                     + 
                                                     (7U 
                                                      & (IData)(vlTOPp->dst_fmt_i)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->dst_fmt_i) 
                                                         << 5U))))) 
                                                  | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                     (7U 
                                                      & (IData)(vlTOPp->dst_fmt_i))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->dst_fmt_i) 
                                                         << 5U))))
                                                  : 0U)))),32);
        vcdp->fullBus(c+9969,(((0xbU == (IData)(vlTOPp->op_i))
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                    ? 0x10U : (0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                    ? (0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                << 2U))
                                    : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))),5);
        vcdp->fullBus(c+9977,(vlTOPp->src_fmt_i),3);
        vcdp->fullBus(c+9985,(vlTOPp->dst_fmt_i),3);
        vcdp->fullBus(c+9993,(vlTOPp->int_fmt_i),2);
        vcdp->fullBus(c+10001,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+10009,(vlTOPp->op_i),4);
        vcdp->fullBit(c+10017,((0xcU == (IData)(vlTOPp->op_i))));
        vcdp->fullBit(c+10025,((0xbU == (IData)(vlTOPp->op_i))));
        vcdp->fullBus(c+10033,(((0x2cU >= (0x3fU & 
                                           ((IData)(9U) 
                                            * (IData)(vlTOPp->src_fmt_i))))
                                 ? (0x1ffU & (IData)(
                                                     (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                      >> 
                                                      (0x3fU 
                                                       & ((IData)(9U) 
                                                          * (IData)(vlTOPp->src_fmt_i))))))
                                 : 0U)),9);
        vcdp->fullBus(c+10041,((0x1ffU & VL_EXTENDS_II(9,2, 
                                                       ((0x27U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(6U) 
                                                             + 
                                                             ((IData)(vlTOPp->src_fmt_i) 
                                                              << 3U)))) 
                                                        & (IData)(
                                                                  (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       ((IData)(vlTOPp->src_fmt_i) 
                                                                        << 3U))))))))),9);
        vcdp->fullBus(c+10049,(((0x2cU >= (0x3fU & 
                                           ((IData)(9U) 
                                            * (IData)(vlTOPp->src_fmt_i))))
                                 ? (0x1ffU & (IData)(
                                                     (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation 
                                                      >> 
                                                      (0x3fU 
                                                       & ((IData)(9U) 
                                                          * (IData)(vlTOPp->src_fmt_i))))))
                                 : 0U)),9);
        vcdp->fullBus(c+10057,((0x1ffU & ((((((0x2cU 
                                               >= (0x3fU 
                                                   & ((IData)(9U) 
                                                      * (IData)(vlTOPp->src_fmt_i))))
                                               ? (IData)(
                                                         (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(9U) 
                                                              * (IData)(vlTOPp->src_fmt_i)))))
                                               : 0U) 
                                             + VL_EXTENDS_II(9,2, 
                                                             ((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   ((IData)(vlTOPp->src_fmt_i) 
                                                                    << 3U)))) 
                                                              & (IData)(
                                                                        (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((IData)(6U) 
                                                                             + 
                                                                             ((IData)(vlTOPp->src_fmt_i) 
                                                                              << 3U)))))))) 
                                            - (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                                           - (0x1fU 
                                              & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                          + ((0x2cU 
                                              >= (0x3fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlTOPp->src_fmt_i))))
                                              ? (IData)(
                                                        (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation 
                                                         >> 
                                                         (0x3fU 
                                                          & ((IData)(9U) 
                                                             * (IData)(vlTOPp->src_fmt_i)))))
                                              : 0U)))),9);
        vcdp->fullBit(c+10065,(((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round) 
                                   >> (IData)(vlTOPp->dst_fmt_i)))));
        vcdp->fullBus(c+10073,(((0x9fU >= (0xffU & 
                                           ((IData)(vlTOPp->dst_fmt_i) 
                                            << 5U)))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(vlTOPp->dst_fmt_i) 
                                                << 5U)))
                                      ? 0U : (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                              ((IData)(1U) 
                                               + (7U 
                                                  & (IData)(vlTOPp->dst_fmt_i)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlTOPp->dst_fmt_i) 
                                                      << 5U))))) 
                                    | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                       (7U & (IData)(vlTOPp->dst_fmt_i))] 
                                       >> (0x1fU & 
                                           ((IData)(vlTOPp->dst_fmt_i) 
                                            << 5U))))
                                 : 0U)),32);
        vcdp->fullBus(c+10081,((((0U == (0x1fU & ((IData)(vlTOPp->int_fmt_i) 
                                                  << 5U)))
                                  ? 0U : (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[
                                          ((IData)(1U) 
                                           + (3U & (IData)(vlTOPp->int_fmt_i)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlTOPp->int_fmt_i) 
                                                    << 5U))))) 
                                | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[
                                   (3U & (IData)(vlTOPp->int_fmt_i))] 
                                   >> (0x1fU & ((IData)(vlTOPp->int_fmt_i) 
                                                << 5U))))),32);
        vcdp->fullBus(c+10089,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                 ? ((0x9fU >= (0xffU 
                                               & ((IData)(vlTOPp->dst_fmt_i) 
                                                  << 5U)))
                                     ? (((0U == (0x1fU 
                                                 & ((IData)(vlTOPp->dst_fmt_i) 
                                                    << 5U)))
                                          ? 0U : (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & (IData)(vlTOPp->dst_fmt_i)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->dst_fmt_i) 
                                                       << 5U))))) 
                                        | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                           (7U & (IData)(vlTOPp->dst_fmt_i))] 
                                           >> (0x1fU 
                                               & ((IData)(vlTOPp->dst_fmt_i) 
                                                  << 5U))))
                                     : 0U) : ((0x9fU 
                                               >= (0xffU 
                                                   & ((IData)(vlTOPp->dst_fmt_i) 
                                                      << 5U)))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->dst_fmt_i) 
                                                        << 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                    ((IData)(1U) 
                                                     + 
                                                     (7U 
                                                      & (IData)(vlTOPp->dst_fmt_i)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->dst_fmt_i) 
                                                         << 5U))))) 
                                                  | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                     (7U 
                                                      & (IData)(vlTOPp->dst_fmt_i))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(vlTOPp->dst_fmt_i) 
                                                         << 5U))))
                                               : 0U))),32);
        vcdp->fullBit(c+10097,((1U & ((4U & (IData)(vlTOPp->rnd_mode_i))
                                       ? (((IData)(vlTOPp->rnd_mode_i) 
                                           >> 1U) | 
                                          ((IData)(vlTOPp->rnd_mode_i) 
                                           | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                              >> 1U)))
                                       : ((2U & (IData)(vlTOPp->rnd_mode_i))
                                           ? ((1U & (IData)(vlTOPp->rnd_mode_i))
                                               ? ((0U 
                                                   != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                                  & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign)))
                                               : ((0U 
                                                   != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                                  & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign)))
                                           : ((~ (IData)(vlTOPp->rnd_mode_i)) 
                                              & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                  >> 1U) 
                                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                    | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs))))))));
        vcdp->fullQuad(c+10105,(VL_ULL(0x10302)),43);
        __Vtemp886[0U] = 0x556aa554U;
        __Vtemp886[1U] = 0x2aaU;
        __Vtemp886[2U] = 0U;
        __Vtemp886[3U] = 0U;
        __Vtemp886[4U] = 0U;
        __Vtemp886[5U] = 0U;
        __Vtemp886[6U] = 0U;
        __Vtemp886[7U] = 0U;
        __Vtemp886[8U] = 0U;
        __Vtemp886[9U] = 0U;
        __Vtemp886[0xaU] = 0U;
        __Vtemp886[0xbU] = 0U;
        __Vtemp886[0xcU] = 0U;
        __Vtemp886[0xdU] = 0U;
        __Vtemp886[0xeU] = 0U;
        __Vtemp886[0xfU] = 0U;
        __Vtemp886[0x10U] = 0U;
        __Vtemp886[0x11U] = 0U;
        __Vtemp886[0x12U] = 0U;
        __Vtemp886[0x13U] = 0U;
        __Vtemp886[0x14U] = 0U;
        __Vtemp886[0x15U] = 0U;
        vcdp->fullArray(c+10121,(__Vtemp886),682);
        vcdp->fullBus(c+10297,(0x20U),32);
        vcdp->fullBus(c+10305,(3U),32);
        vcdp->fullBus(c+10313,(4U),32);
        vcdp->fullBus(c+10321,(5U),32);
        vcdp->fullBus(c+10329,(0x40U),32);
        vcdp->fullBus(c+10337,(0x10U),32);
        vcdp->fullBus(c+10345,(8U),32);
        vcdp->fullBus(c+10353,(2U),32);
        vcdp->fullBit(c+10361,(0U));
        vcdp->fullBit(c+10369,(1U));
        vcdp->fullBus(c+10377,(0U),2);
        vcdp->fullBit(c+10385,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBus(c+10393,(0U),32);
        vcdp->fullBus(c+10401,(1U),32);
        vcdp->fullBus(c+10409,(0U),2);
        vcdp->fullBit(c+10417,(0U));
        vcdp->fullBus(c+10425,(0x10U),5);
        vcdp->fullBus(c+10433,(2U),4);
        __Vtemp887[0U] = 0U;
        __Vtemp887[1U] = 0U;
        __Vtemp887[2U] = 0U;
        __Vtemp887[3U] = 0U;
        __Vtemp887[4U] = 0U;
        vcdp->fullArray(c+10441,(__Vtemp887),160);
        vcdp->fullBus(c+10481,(0x155U),10);
        vcdp->fullBus(c+10489,(0U),2);
        vcdp->fullBus(c+10497,(0U),3);
        vcdp->fullBit(c+10505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBus(c+10513,(7U),32);
        vcdp->fullBus(c+10521,(9U),32);
        vcdp->fullBit(c+10529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBus(c+10537,(0xbU),32);
        vcdp->fullBit(c+10545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+10553,(6U),32);
        vcdp->fullBus(c+10561,(0xdU),32);
        vcdp->fullBus(c+10569,(0U),2);
        vcdp->fullBus(c+10577,(0U),3);
        vcdp->fullBus(c+10585,(0U),2);
        vcdp->fullBit(c+10593,(1U));
        vcdp->fullBus(c+10601,(1U),32);
        vcdp->fullBus(c+10609,(1U),10);
        vcdp->fullBit(c+10617,(0U));
        vcdp->fullBus(c+10625,(3U),32);
        vcdp->fullBus(c+10633,(0U),3);
        vcdp->fullBus(c+10641,(0U),2);
        vcdp->fullBus(c+10649,(0x17U),32);
        vcdp->fullBus(c+10657,(0x7fU),32);
        vcdp->fullBus(c+10665,(0x18U),32);
        vcdp->fullBus(c+10673,(0x33U),32);
        vcdp->fullBus(c+10681,(0xaU),32);
        vcdp->fullBus(c+10689,(0U),32);
        vcdp->fullBus(c+10697,(0U),3);
        vcdp->fullBus(c+10705,(0x1fU),32);
        vcdp->fullBus(c+10713,(1U),2);
        vcdp->fullBus(c+10721,(0x10U),5);
        vcdp->fullBus(c+10729,(2U),4);
        __Vtemp888[0U] = 0U;
        __Vtemp888[1U] = 0U;
        __Vtemp888[2U] = 0U;
        __Vtemp888[3U] = 0U;
        __Vtemp888[4U] = 0U;
        vcdp->fullArray(c+10737,(__Vtemp888),160);
        vcdp->fullBus(c+10777,(0x2aaU),10);
        vcdp->fullBus(c+10785,(0U),2);
        vcdp->fullBit(c+10793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+10801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+10809,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+10817,(1U),2);
        vcdp->fullBus(c+10825,(0x10U),5);
        vcdp->fullBus(c+10833,(2U),4);
        vcdp->fullBus(c+10841,(0U),2);
        vcdp->fullBus(c+10849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        vcdp->fullBus(c+10857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        vcdp->fullBus(c+10865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d),32);
        vcdp->fullBus(c+10873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q),32);
        vcdp->fullBus(c+10881,(5U),32);
        vcdp->fullBus(c+10889,(0x10U),5);
        vcdp->fullBus(c+10897,(2U),4);
        vcdp->fullBus(c+10905,(0x10U),5);
        vcdp->fullBus(c+10913,(2U),4);
        vcdp->fullBus(c+10921,(0x10U),5);
        vcdp->fullBus(c+10929,(0x10U),5);
        vcdp->fullBus(c+10937,(0U),2);
        vcdp->fullBus(c+10945,(0U),6);
        vcdp->fullBus(c+10953,(0x35U),32);
        vcdp->fullQuad(c+10961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_58),58);
        vcdp->fullQuad(c+10977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_59),59);
        vcdp->fullQuad(c+10993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_60),60);
        vcdp->fullQuad(c+11009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_20),62);
        vcdp->fullQuad(c+11025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q3),58);
        vcdp->fullQuad(c+11041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3),58);
        vcdp->fullBit(c+11057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_carry_DO));
        vcdp->fullQuad(c+11065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_a_D),58);
        vcdp->fullQuad(c+11081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_b_D),58);
        vcdp->fullBit(c+11097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sel_b_for_fou_S));
        vcdp->fullQuad(c+11105,(VL_ULL(0x3ffffffffffffff)),58);
        vcdp->fullBus(c+11121,(0x3aU),32);
        vcdp->fullBus(c+11129,(2U),2);
        vcdp->fullBus(c+11137,(0x10U),5);
        vcdp->fullBus(c+11145,(2U),4);
        __Vtemp889[0U] = 0U;
        __Vtemp889[1U] = 0U;
        __Vtemp889[2U] = 0U;
        __Vtemp889[3U] = 0U;
        __Vtemp889[4U] = 0U;
        vcdp->fullArray(c+11153,(__Vtemp889),160);
        vcdp->fullBus(c+11193,(0x155U),10);
        vcdp->fullBus(c+11201,(0U),2);
        vcdp->fullBit(c+11209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+11217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+11225,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+11233,(2U),2);
        vcdp->fullBus(c+11241,(0U),3);
        vcdp->fullBus(c+11249,(0U),2);
        vcdp->fullBit(c+11257,(0U));
        vcdp->fullBus(c+11265,(2U),32);
        vcdp->fullBus(c+11273,(0U),3);
        vcdp->fullBus(c+11281,(0U),2);
        vcdp->fullBus(c+11289,(0U),5);
        vcdp->fullBus(c+11297,(0U),3);
        vcdp->fullBus(c+11305,(3U),2);
        vcdp->fullBus(c+11313,(0x10U),5);
        vcdp->fullBus(c+11321,(2U),4);
        __Vtemp890[0U] = 0U;
        __Vtemp890[1U] = 0U;
        __Vtemp890[2U] = 0U;
        __Vtemp890[3U] = 0U;
        __Vtemp890[4U] = 0U;
        vcdp->fullArray(c+11329,(__Vtemp890),160);
        vcdp->fullBus(c+11369,(0x2aaU),10);
        vcdp->fullBus(c+11377,(0U),2);
        vcdp->fullBit(c+11385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+11393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+11401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+11409,(3U),2);
        vcdp->fullBus(c+11417,(0x10U),5);
        vcdp->fullBus(c+11425,(2U),4);
        vcdp->fullBus(c+11433,(0U),2);
        vcdp->fullBus(c+11441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        vcdp->fullBus(c+11449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        vcdp->fullBus(c+11457,(0x10U),5);
        vcdp->fullBus(c+11465,(2U),4);
        vcdp->fullBus(c+11473,(0x10U),5);
        vcdp->fullBus(c+11481,(2U),4);
        vcdp->fullBus(c+11489,(0x10U),5);
        vcdp->fullBus(c+11497,(0x10U),5);
        vcdp->fullBus(c+11505,(2U),4);
        vcdp->fullBus(c+11513,(0U),2);
        vcdp->fullQuad(c+11521,(VL_ULL(0x800000017)),64);
        vcdp->fullBus(c+11537,(0x28U),32);
        vcdp->fullBus(c+11545,(0x20U),32);
        vcdp->fullBus(c+11553,(0x10U),5);
        vcdp->fullBus(c+11561,(0x34U),32);
        vcdp->fullBus(c+11569,(0xffU),8);
        vcdp->fullBus(c+11577,(0x400000U),23);
        vcdp->fullBus(c+11585,(0x7ffU),11);
        vcdp->fullQuad(c+11593,(VL_ULL(0x8000000000000)),52);
        vcdp->fullBus(c+11609,(0x1fU),5);
        vcdp->fullBus(c+11617,(0x200U),10);
        vcdp->fullBus(c+11625,(2U),2);
        vcdp->fullBus(c+11633,(0x40U),7);
        vcdp->fullBus(c+11641,(0U),3);
        __Vtemp891[0U] = 0x17U;
        __Vtemp891[1U] = 8U;
        __Vtemp891[2U] = 0x34U;
        __Vtemp891[3U] = 0xbU;
        __Vtemp891[4U] = 0xaU;
        __Vtemp891[5U] = 5U;
        __Vtemp891[6U] = 2U;
        __Vtemp891[7U] = 5U;
        __Vtemp891[8U] = 7U;
        __Vtemp891[9U] = 8U;
        vcdp->fullArray(c+11649,(__Vtemp891),320);
        vcdp->fullBus(c+11729,(0x18U),5);
        vcdp->fullQuad(c+11737,(VL_ULL(0x20383)),43);
        vcdp->fullQuad(c+11753,(VL_ULL(0x20782)),43);
        vcdp->fullQuad(c+11769,(VL_ULL(0x10302)),43);
        vcdp->fullQuad(c+11785,(VL_ULL(0x207ff)),43);
        vcdp->fullQuad(c+11801,(VL_ULL(0x1077e)),43);
        vcdp->fullQuad(c+11817,(VL_ULL(0x10716)),43);
        __Vtemp892[0U] = 0x556aa554U;
        __Vtemp892[1U] = 0x2aaU;
        __Vtemp892[2U] = 0U;
        __Vtemp892[3U] = 0U;
        __Vtemp892[4U] = 0U;
        __Vtemp892[5U] = 0U;
        __Vtemp892[6U] = 0U;
        __Vtemp892[7U] = 0U;
        __Vtemp892[8U] = 0U;
        __Vtemp892[9U] = 0U;
        __Vtemp892[0xaU] = 0U;
        __Vtemp892[0xbU] = 0U;
        __Vtemp892[0xcU] = 0U;
        __Vtemp892[0xdU] = 0U;
        __Vtemp892[0xeU] = 0U;
        __Vtemp892[0xfU] = 0U;
        __Vtemp892[0x10U] = 0U;
        __Vtemp892[0x11U] = 0U;
        __Vtemp892[0x12U] = 0U;
        __Vtemp892[0x13U] = 0U;
        __Vtemp892[0x14U] = 0U;
        __Vtemp892[0x15U] = 0U;
        vcdp->fullArray(c+11833,(__Vtemp892),682);
        __Vtemp893[0U] = 0x55400554U;
        __Vtemp893[1U] = 0x6aaU;
        __Vtemp893[2U] = 0U;
        __Vtemp893[3U] = 0U;
        __Vtemp893[4U] = 0U;
        __Vtemp893[5U] = 0U;
        __Vtemp893[6U] = 0x400U;
        __Vtemp893[7U] = 0U;
        __Vtemp893[8U] = 0U;
        __Vtemp893[9U] = 0U;
        __Vtemp893[0xaU] = 0U;
        __Vtemp893[0xbU] = 0x400U;
        __Vtemp893[0xcU] = 0U;
        __Vtemp893[0xdU] = 0U;
        __Vtemp893[0xeU] = 0U;
        __Vtemp893[0xfU] = 0U;
        __Vtemp893[0x10U] = 0x400U;
        __Vtemp893[0x11U] = 0U;
        __Vtemp893[0x12U] = 0U;
        __Vtemp893[0x13U] = 0U;
        __Vtemp893[0x14U] = 0U;
        __Vtemp893[0x15U] = 0U;
        vcdp->fullArray(c+12009,(__Vtemp893),682);
        vcdp->fullBus(c+12185,(3U),32);
        vcdp->fullBus(c+12193,(1U),3);
        vcdp->fullBus(c+12201,(2U),3);
        vcdp->fullBus(c+12209,(3U),3);
        vcdp->fullBus(c+12217,(6U),32);
        vcdp->fullBus(c+12225,(2U),32);
        vcdp->fullBus(c+12233,(0x40U),32);
        vcdp->fullBus(c+12241,(0x34U),32);
        vcdp->fullBus(c+12249,(0xbU),32);
        vcdp->fullBus(c+12257,(0x3ffU),32);
        vcdp->fullBus(c+12265,(0x400U),11);
        vcdp->fullBus(c+12273,(0x1ffU),32);
        vcdp->fullBus(c+12281,(0U),11);
        vcdp->fullBus(c+12289,(1U),13);
        vcdp->fullQuad(c+12297,(VL_ULL(0)),52);
        vcdp->fullQuad(c+12313,(VL_ULL(0)),64);
        vcdp->fullQuad(c+12329,(VL_ULL(0x8000000000000000)),64);
        vcdp->fullQuad(c+12345,(VL_ULL(0x7ff8000000000000)),64);
        vcdp->fullBus(c+12361,(0x20U),32);
        vcdp->fullBus(c+12369,(0x17U),32);
        vcdp->fullBus(c+12377,(8U),32);
        vcdp->fullBus(c+12385,(0x7fU),32);
        vcdp->fullBus(c+12393,(0x80U),8);
        vcdp->fullBus(c+12401,(0x3fU),32);
        vcdp->fullBus(c+12409,(0U),8);
        vcdp->fullBus(c+12417,(0U),23);
        vcdp->fullBus(c+12425,(0x80000000U),32);
        vcdp->fullBus(c+12433,(0x7fc00000U),32);
        vcdp->fullBus(c+12441,(0x10U),32);
        vcdp->fullBus(c+12449,(0xaU),32);
        vcdp->fullBus(c+12457,(5U),32);
        vcdp->fullBus(c+12465,(0xfU),32);
        vcdp->fullBus(c+12473,(7U),32);
        vcdp->fullBus(c+12481,(0U),10);
        vcdp->fullBus(c+12489,(0U),16);
        vcdp->fullBus(c+12497,(0x8000U),16);
        vcdp->fullBus(c+12505,(0x7e00U),16);
        vcdp->fullBus(c+12513,(0U),7);
        vcdp->fullBus(c+12521,(0x7fc0U),16);
    }
}
