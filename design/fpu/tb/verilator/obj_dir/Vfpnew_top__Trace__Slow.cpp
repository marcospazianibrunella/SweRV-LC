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
        vcdp->declBit(c+10233,"clk_i", false,-1);
        vcdp->declBit(c+10241,"rst_ni", false,-1);
        vcdp->declArray(c+10249,"operands_i", false,-1, 95,0);
        vcdp->declBus(c+10273,"rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"op_mod_i", false,-1);
        vcdp->declBus(c+10297,"src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10321,"vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"tag_i", false,-1);
        vcdp->declBit(c+10337,"in_valid_i", false,-1);
        vcdp->declBit(c+10345,"in_ready_o", false,-1);
        vcdp->declBit(c+10353,"flush_i", false,-1);
        vcdp->declBus(c+10361,"result_o", false,-1, 31,0);
        vcdp->declBus(c+10369,"status_o", false,-1, 4,0);
        vcdp->declBit(c+10377,"tag_o", false,-1);
        vcdp->declBit(c+10385,"out_valid_o", false,-1);
        vcdp->declBit(c+10393,"out_ready_i", false,-1);
        vcdp->declBit(c+10401,"busy_o", false,-1);
        vcdp->declQuad(c+10809,"fpnew_top Features", false,-1, 42,0);
        vcdp->declArray(c+10825,"fpnew_top Implementation", false,-1, 681,0);
        vcdp->declBus(c+11001,"fpnew_top WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top rst_ni", false,-1);
        vcdp->declArray(c+10249,"fpnew_top operands_i", false,-1, 95,0);
        vcdp->declBus(c+10273,"fpnew_top rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top op_mod_i", false,-1);
        vcdp->declBus(c+10297,"fpnew_top src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"fpnew_top int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10321,"fpnew_top vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top tag_i", false,-1);
        vcdp->declBit(c+10337,"fpnew_top in_valid_i", false,-1);
        vcdp->declBit(c+10345,"fpnew_top in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top flush_i", false,-1);
        vcdp->declBus(c+10361,"fpnew_top result_o", false,-1, 31,0);
        vcdp->declBus(c+10369,"fpnew_top status_o", false,-1, 4,0);
        vcdp->declBit(c+10377,"fpnew_top tag_o", false,-1);
        vcdp->declBit(c+10385,"fpnew_top out_valid_o", false,-1);
        vcdp->declBit(c+10393,"fpnew_top out_ready_i", false,-1);
        vcdp->declBit(c+10401,"fpnew_top busy_o", false,-1);
        vcdp->declBus(c+11017,"fpnew_top NUM_OPGROUPS", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+433,"fpnew_top opgrp_in_ready", false,-1, 3,0);
        vcdp->declBus(c+441,"fpnew_top opgrp_out_valid", false,-1, 3,0);
        vcdp->declBus(c+449,"fpnew_top opgrp_out_ready", false,-1, 3,0);
        vcdp->declBus(c+457,"fpnew_top opgrp_ext", false,-1, 3,0);
        vcdp->declBus(c+465,"fpnew_top opgrp_busy", false,-1, 3,0);
        vcdp->declArray(c+473,"fpnew_top opgrp_outputs", false,-1, 151,0);
        vcdp->declBus(c+513,"fpnew_top is_boxed", false,-1, 14,0);
        vcdp->declQuad(c+521,"fpnew_top arbiter_output", false,-1, 37,0);
        vcdp->declBus(c+11001,"fpnew_top gen_nanbox_check[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_nanbox_check[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_nanbox_check[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_nanbox_check[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_nanbox_check[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+537,"fpnew_top gen_operation_groups[0] in_valid", false,-1);
        vcdp->declBus(c+545,"fpnew_top gen_operation_groups[0] input_boxed", false,-1, 14,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[1] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+553,"fpnew_top gen_operation_groups[1] in_valid", false,-1);
        vcdp->declBus(c+561,"fpnew_top gen_operation_groups[1] input_boxed", false,-1, 9,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[2] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+569,"fpnew_top gen_operation_groups[2] in_valid", false,-1);
        vcdp->declBus(c+577,"fpnew_top gen_operation_groups[2] input_boxed", false,-1, 9,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] NUM_OPS", false,-1, 31,0);
        vcdp->declBit(c+585,"fpnew_top gen_operation_groups[3] in_valid", false,-1);
        vcdp->declBus(c+593,"fpnew_top gen_operation_groups[3] input_boxed", false,-1, 14,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] slice_inputs unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+11017,"fpnew_top i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+11073,"fpnew_top i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+11065,"fpnew_top i_arbiter LockIn", false,-1);
        vcdp->declBit(c+11073,"fpnew_top i_arbiter FairArb", false,-1);
        vcdp->declBus(c+11057,"fpnew_top i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10353,"fpnew_top i_arbiter flush_i", false,-1);
        vcdp->declBus(c+11081,"fpnew_top i_arbiter rr_i", false,-1, 1,0);
        vcdp->declBus(c+441,"fpnew_top i_arbiter req_i", false,-1, 3,0);
        vcdp->declBus(c+449,"fpnew_top i_arbiter gnt_o", false,-1, 3,0);
        vcdp->declArray(c+473,"fpnew_top i_arbiter data_i", false,-1, 151,0);
        vcdp->declBit(c+10385,"fpnew_top i_arbiter req_o", false,-1);
        vcdp->declBit(c+10393,"fpnew_top i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+521,"fpnew_top i_arbiter data_o", false,-1, 37,0);
        vcdp->declBus(c+601,"fpnew_top i_arbiter idx_o", false,-1, 1,0);
        vcdp->declBus(c+11057,"fpnew_top i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+609,"fpnew_top i_arbiter gen_arbiter index_nodes", false,-1, 5,0);
        vcdp->declArray(c+617,"fpnew_top i_arbiter gen_arbiter data_nodes", false,-1, 113,0);
        vcdp->declBus(c+649,"fpnew_top i_arbiter gen_arbiter gnt_nodes", false,-1, 2,0);
        vcdp->declBus(c+657,"fpnew_top i_arbiter gen_arbiter req_nodes", false,-1, 2,0);
        vcdp->declBus(c+9065,"fpnew_top i_arbiter gen_arbiter rr_q", false,-1, 1,0);
        vcdp->declBus(c+441,"fpnew_top i_arbiter gen_arbiter req_d", false,-1, 3,0);
        vcdp->declBus(c+10409,"fpnew_top i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 1,0);
        vcdp->declBus(c+665,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 3,0);
        vcdp->declBus(c+673,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 3,0);
        vcdp->declBus(c+681,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 1,0);
        vcdp->declBus(c+689,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 1,0);
        vcdp->declBus(c+697,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 1,0);
        vcdp->declBit(c+705,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11089,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+713,"fpnew_top i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11097,"fpnew_top i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+721,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11105,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+729,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11057,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBus(c+11017,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+11057,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+665,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 3,0);
        vcdp->declBus(c+681,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 1,0);
        vcdp->declBit(c+705,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+11057,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+1,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 7,0);
        vcdp->declBus(c+737,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 3,0);
        vcdp->declBus(c+745,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 7,0);
        vcdp->declBus(c+753,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 3,0);
        vcdp->declBus(c+11017,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11017,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+11057,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+673,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 3,0);
        vcdp->declBus(c+689,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 1,0);
        vcdp->declBit(c+761,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+11057,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+9,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 7,0);
        vcdp->declBus(c+769,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 3,0);
        vcdp->declBus(c+777,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 7,0);
        vcdp->declBus(c+785,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 3,0);
        vcdp->declBus(c+11017,"fpnew_top i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11113,"fpnew_top gen_operation_groups[0] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[0] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+11129,"fpnew_top gen_operation_groups[0] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+11137,"fpnew_top gen_operation_groups[0] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+11145,"fpnew_top gen_operation_groups[0] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+11185,"fpnew_top gen_operation_groups[0] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+11193,"fpnew_top gen_operation_groups[0] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[0] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[0] i_opgroup_block rst_ni", false,-1);
        vcdp->declArray(c+10249,"fpnew_top gen_operation_groups[0] i_opgroup_block operands_i", false,-1, 95,0);
        vcdp->declBus(c+545,"fpnew_top gen_operation_groups[0] i_opgroup_block is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[0] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[0] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[0] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[0] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[0] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[0] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[0] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+537,"fpnew_top gen_operation_groups[0] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+10417,"fpnew_top gen_operation_groups[0] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[0] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+793,"fpnew_top gen_operation_groups[0] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+801,"fpnew_top gen_operation_groups[0] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+809,"fpnew_top gen_operation_groups[0] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+817,"fpnew_top gen_operation_groups[0] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+5881,"fpnew_top gen_operation_groups[0] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+825,"fpnew_top gen_operation_groups[0] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+17,"fpnew_top gen_operation_groups[0] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+833,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+7201,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+841,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+25,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+5889,"fpnew_top gen_operation_groups[0] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+849,"fpnew_top gen_operation_groups[0] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+10425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format in_valid", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+11201,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+7201,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+841,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+5889,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+5881,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+825,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+849,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+6153,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+6161,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+865,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+937,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+5945,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+9073,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+7201,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+6113,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+7465,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+7457,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+6169,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+6177,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+6185,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+6193,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11209,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+945,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+953,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+961,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+7473,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+7481,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11017,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11225,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11233,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11249,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11265,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+7465,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+6169,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+6193,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+33,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+6201,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+6209,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+7489,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+7457,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+6177,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+6217,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+41,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+6225,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+6233,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+7497,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[0] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11273,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11281,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FpFormat", false,-1, 2,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice Width", false,-1, 31,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11289,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rst_ni", false,-1);
        vcdp->declArray(c+10249,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice operands_i", false,-1, 95,0);
        vcdp->declBus(c+969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_mod_i", false,-1);
        vcdp->declBit(c+10321,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_i", false,-1);
        vcdp->declBit(c+10425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice flush_i", false,-1);
        vcdp->declBus(c+7209,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+985,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+8297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_o", false,-1);
        vcdp->declBit(c+8305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice busy_o", false,-1);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+8305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+7209,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_result", false,-1, 31,0);
        vcdp->declBus(c+7209,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_regular_result", false,-1, 31,0);
        vcdp->declBus(c+7217,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_class_result", false,-1, 31,0);
        vcdp->declBus(c+49,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_vec_class_result", false,-1, 31,0);
        vcdp->declBus(c+5953,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+11297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+11305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_class_mask", false,-1, 9,0);
        vcdp->declBus(c+8297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+8313,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_vectorial", false,-1, 0,0);
        vcdp->declBus(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBus(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_is_class", false,-1, 0,0);
        vcdp->declBit(c+8313,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_vector", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_class", false,-1);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice CLASS_VEC_BITS", false,-1, 31,0);
        vcdp->declBus(c+7209,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_sign", false,-1);
        vcdp->declBit(c+10425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+8305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declArray(c+993,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 95,0);
        vcdp->declBus(c+7225,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+5961,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+11313,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+1017,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+11321,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+11329,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma FpFormat", false,-1, 2,0);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11337,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rst_ni", false,-1);
        vcdp->declArray(c+993,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operands_i", false,-1, 95,0);
        vcdp->declBus(c+969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_mod_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_i", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_i", false,-1);
        vcdp->declBit(c+10425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma in_valid_i", false,-1);
        vcdp->declBit(c+977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma flush_i", false,-1);
        vcdp->declBus(c+7225,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_o", false,-1, 31,0);
        vcdp->declBus(c+5961,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma status_o", false,-1, 4,0);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma extension_bit_o", false,-1);
        vcdp->declBit(c+8297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_o", false,-1);
        vcdp->declBit(c+8313,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_o", false,-1);
        vcdp->declBit(c+8305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_valid_o", false,-1);
        vcdp->declBit(c+977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma out_ready_i", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma busy_o", false,-1);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma BIAS", false,-1, 31,0);
        vcdp->declBus(c+11361,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma PRECISION_BITS", false,-1, 31,0);
        vcdp->declBus(c+11369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma LOWER_SUM_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma LZC_RESULT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11377,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma EXP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma SHIFT_AMOUNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_MID_REGS", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declArray(c+993,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operands_fpx1", false,-1, 95,0);
        vcdp->declBus(c+969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma is_boxed_fpx1", false,-1, 2,0);
        vcdp->declBus(c+10433,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_fpx1", false,-1, 2,0);
        vcdp->declBus(c+10441,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_fpx1", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_mod_fpx1", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_fpx1", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_fpx1", false,-1);
        vcdp->declBit(c+10425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma valid_fpx1", false,-1);
        vcdp->declBus(c+1025,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_fpx1", false,-1, 23,0);
        vcdp->declBus(c+1033,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_a_fpx1", false,-1, 31,0);
        vcdp->declBus(c+1041,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_b_fpx1", false,-1, 31,0);
        vcdp->declBus(c+1049,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operand_c_fpx1", false,-1, 31,0);
        vcdp->declBus(c+1057,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_a_fpx1", false,-1, 7,0);
        vcdp->declBus(c+1065,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_b_fpx1", false,-1, 7,0);
        vcdp->declBus(c+1073,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma info_c_fpx1", false,-1, 7,0);
        vcdp->declBit(c+1081,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma any_operand_inf_fpx1", false,-1);
        vcdp->declBit(c+1089,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma any_operand_nan_fpx1", false,-1);
        vcdp->declBit(c+1097,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma signalling_nan_fpx1", false,-1);
        vcdp->declBit(c+1105,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma effective_subtraction_fpx1", false,-1);
        vcdp->declBit(c+1113,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_sign_fpx1", false,-1);
        vcdp->declBus(c+1121,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_result_fpx1", false,-1, 31,0);
        vcdp->declBus(c+1129,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_status_fpx1", false,-1, 4,0);
        vcdp->declBit(c+1137,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_is_special_fpx1", false,-1);
        vcdp->declBus(c+1145,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_a_fpx1", false,-1, 9,0);
        vcdp->declBus(c+1153,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_b_fpx1", false,-1, 9,0);
        vcdp->declBus(c+1161,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_c_fpx1", false,-1, 9,0);
        vcdp->declBus(c+1169,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_addend_fpx1", false,-1, 9,0);
        vcdp->declBus(c+1177,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_product_fpx1", false,-1, 9,0);
        vcdp->declBus(c+1185,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_difference_fpx1", false,-1, 9,0);
        vcdp->declBus(c+1193,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_exponent_fpx1", false,-1, 9,0);
        vcdp->declBus(c+1201,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shamt_fpx1", false,-1, 6,0);
        vcdp->declBus(c+1209,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_a_fpx1", false,-1, 23,0);
        vcdp->declBus(c+1217,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_b_fpx1", false,-1, 23,0);
        vcdp->declBus(c+1225,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_c_fpx1", false,-1, 23,0);
        vcdp->declQuad(c+1233,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma product_fpx1", false,-1, 47,0);
        vcdp->declArray(c+1249,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma product_shifted_fpx1", false,-1, 75,0);
        vcdp->declArray(c+8321,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma operands_fpx2", false,-1, 95,0);
        vcdp->declBus(c+8345,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma is_boxed_fpx2", false,-1, 2,0);
        vcdp->declBus(c+8353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_fpx2", false,-1, 2,0);
        vcdp->declBus(c+8361,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_fpx2", false,-1, 3,0);
        vcdp->declBit(c+8369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma op_mod_fpx2", false,-1);
        vcdp->declBit(c+8377,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_fpx2", false,-1);
        vcdp->declBit(c+8385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_fpx2", false,-1);
        vcdp->declBit(c+8393,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma valid_fpx2", false,-1);
        vcdp->declBit(c+8401,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma any_operand_inf_fpx2", false,-1);
        vcdp->declBit(c+8409,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma any_operand_nan_fpx2", false,-1);
        vcdp->declBit(c+8417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma signalling_nan_fpx2", false,-1);
        vcdp->declBit(c+8425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma effective_subtraction_fpx2", false,-1);
        vcdp->declBit(c+8433,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_sign_fpx2", false,-1);
        vcdp->declBus(c+8441,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_a_fpx2", false,-1, 23,0);
        vcdp->declBus(c+8449,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_b_fpx2", false,-1, 23,0);
        vcdp->declBus(c+8457,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma mantissa_c_fpx2", false,-1, 23,0);
        vcdp->declQuad(c+8465,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma product_fpx2", false,-1, 47,0);
        vcdp->declArray(c+8481,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma product_shifted_fpx2", false,-1, 75,0);
        vcdp->declBus(c+8505,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_a_fpx2", false,-1, 9,0);
        vcdp->declBus(c+8513,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_b_fpx2", false,-1, 9,0);
        vcdp->declBus(c+8521,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_c_fpx2", false,-1, 9,0);
        vcdp->declBus(c+8529,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_addend_fpx2", false,-1, 9,0);
        vcdp->declBus(c+8537,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_product_fpx2", false,-1, 9,0);
        vcdp->declBus(c+8545,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_difference_fpx2", false,-1, 9,0);
        vcdp->declBus(c+8553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_exponent_fpx2", false,-1, 9,0);
        vcdp->declBus(c+8561,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shamt_fpx2", false,-1, 6,0);
        vcdp->declBus(c+8569,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_result_fpx2", false,-1, 31,0);
        vcdp->declBus(c+8577,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_status_fpx2", false,-1, 4,0);
        vcdp->declBit(c+8585,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_is_special_fpx2", false,-1);
        vcdp->declArray(c+7233,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_after_shift_fpx2", false,-1, 75,0);
        vcdp->declBus(c+7257,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_sticky_bits_fpx2", false,-1, 23,0);
        vcdp->declBit(c+7265,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_before_add_fpx2", false,-1);
        vcdp->declArray(c+7273,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shifted_fpx2", false,-1, 75,0);
        vcdp->declBit(c+7297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inject_carry_in_fpx2", false,-1);
        vcdp->declArray(c+7305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_raw_fpx2", false,-1, 76,0);
        vcdp->declBit(c+7329,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_carry_fpx2", false,-1);
        vcdp->declArray(c+7337,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_fpx2", false,-1, 75,0);
        vcdp->declBit(c+7361,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_sign_fpx2", false,-1);
        vcdp->declArray(c+8593,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_raw_fpx3", false,-1, 76,0);
        vcdp->declBit(c+8617,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_carry_fpx3", false,-1);
        vcdp->declArray(c+8625,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_fpx3", false,-1, 75,0);
        vcdp->declBit(c+8649,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_sign_fpx3", false,-1);
        vcdp->declArray(c+8657,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_after_shift_fpx3", false,-1, 75,0);
        vcdp->declBus(c+8681,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_sticky_bits_fpx3", false,-1, 23,0);
        vcdp->declBit(c+8689,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_before_add_fpx3", false,-1);
        vcdp->declArray(c+8697,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shifted_fpx3", false,-1, 75,0);
        vcdp->declBit(c+8721,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma inject_carry_in_fpx3", false,-1);
        vcdp->declBus(c+8729,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_addend_fpx3", false,-1, 9,0);
        vcdp->declBus(c+8737,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_product_fpx3", false,-1, 9,0);
        vcdp->declBus(c+8745,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma exponent_difference_fpx3", false,-1, 9,0);
        vcdp->declBus(c+8753,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tentative_exponent_fpx3", false,-1, 9,0);
        vcdp->declBus(c+8761,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma addend_shamt_fpx3", false,-1, 6,0);
        vcdp->declBus(c+8769,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_fpx3", false,-1, 2,0);
        vcdp->declBit(c+8777,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma effective_subtraction_fpx3", false,-1);
        vcdp->declBus(c+8785,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_result_fpx3", false,-1, 31,0);
        vcdp->declBus(c+8793,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_status_fpx3", false,-1, 4,0);
        vcdp->declBit(c+8801,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_is_special_fpx3", false,-1);
        vcdp->declBit(c+8809,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_fpx3", false,-1);
        vcdp->declBit(c+8817,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_fpx3", false,-1);
        vcdp->declBit(c+8825,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma valid_fpx3", false,-1);
        vcdp->declQuad(c+8833,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_lower_fpx3", false,-1, 50,0);
        vcdp->declBus(c+5969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma leading_zero_count_fpx3", false,-1, 5,0);
        vcdp->declBus(c+5977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma leading_zero_count_sgn_fpx3", false,-1, 6,0);
        vcdp->declBit(c+5985,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma lzc_zeroes_fpx3", false,-1);
        vcdp->declBus(c+1273,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma norm_shamt_fpx3", false,-1, 6,0);
        vcdp->declBus(c+1281,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma normalized_exponent_fpx3", false,-1, 9,0);
        vcdp->declArray(c+1289,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_shifted_fpx3", false,-1, 76,0);
        vcdp->declBus(c+1313,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_mantissa_fpx3", false,-1, 24,0);
        vcdp->declQuad(c+1321,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_sticky_bits_fpx3", false,-1, 50,0);
        vcdp->declBit(c+5993,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_after_norm_fpx3", false,-1);
        vcdp->declBus(c+1337,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_exponent_fpx3", false,-1, 9,0);
        vcdp->declQuad(c+8849,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_lower_fpx4", false,-1, 50,0);
        vcdp->declBus(c+8865,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma leading_zero_count_fpx4", false,-1, 5,0);
        vcdp->declBus(c+8873,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma leading_zero_count_sgn_fpx4", false,-1, 6,0);
        vcdp->declBit(c+8881,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma lzc_zeroes_fpx4", false,-1);
        vcdp->declBus(c+8889,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma norm_shamt_fpx4", false,-1, 6,0);
        vcdp->declBus(c+8897,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma normalized_exponent_fpx4", false,-1, 9,0);
        vcdp->declArray(c+8905,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_shifted_fpx4", false,-1, 76,0);
        vcdp->declBus(c+8929,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_mantissa_fpx4", false,-1, 24,0);
        vcdp->declQuad(c+8937,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sum_sticky_bits_fpx4", false,-1, 50,0);
        vcdp->declBit(c+8953,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma sticky_after_norm_fpx4", false,-1);
        vcdp->declBus(c+8961,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_exponent_fpx4", false,-1, 9,0);
        vcdp->declBit(c+8969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma final_sign_fpx4", false,-1);
        vcdp->declBus(c+8977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rnd_mode_fpx4", false,-1, 2,0);
        vcdp->declBit(c+8985,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma effective_subtraction_fpx4", false,-1);
        vcdp->declBus(c+8993,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_result_fpx4", false,-1, 31,0);
        vcdp->declBus(c+9001,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma special_status_fpx4", false,-1, 4,0);
        vcdp->declBit(c+9009,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_is_special_fpx4", false,-1);
        vcdp->declBit(c+8297,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma tag_fpx4", false,-1);
        vcdp->declBit(c+8313,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma aux_fpx4", false,-1);
        vcdp->declBit(c+8305,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma valid_fpx4", false,-1);
        vcdp->declBit(c+8969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_sign_fpx4", false,-1);
        vcdp->declBus(c+9017,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_exponent_fpx4", false,-1, 7,0);
        vcdp->declBus(c+9025,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_mantissa_fpx4", false,-1, 22,0);
        vcdp->declBus(c+7369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma pre_round_abs_fpx4", false,-1, 30,0);
        vcdp->declBus(c+7377,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma round_sticky_bits_fpx4", false,-1, 1,0);
        vcdp->declBit(c+9033,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma of_before_round_fpx4", false,-1);
        vcdp->declBit(c+7385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma of_after_round_fpx4", false,-1);
        vcdp->declBit(c+9041,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma uf_before_round_fpx4", false,-1);
        vcdp->declBit(c+7393,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma uf_after_round_fpx4", false,-1);
        vcdp->declBit(c+7401,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_zero_fpx4", false,-1);
        vcdp->declBit(c+7409,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rounded_sign_fpx4", false,-1);
        vcdp->declBus(c+7417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma rounded_abs_fpx4", false,-1, 30,0);
        vcdp->declBus(c+7425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma regular_result_fpx4", false,-1, 31,0);
        vcdp->declBus(c+1345,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma regular_status_fpx4", false,-1, 4,0);
        vcdp->declBus(c+7225,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma result_fpx4", false,-1, 31,0);
        vcdp->declBus(c+5961,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma status_fpx4", false,-1, 4,0);
        vcdp->declBus(c+11393,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs FpFormat", false,-1, 2,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs NumOperands", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs WIDTH", false,-1, 31,0);
        vcdp->declArray(c+993,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs operands_i", false,-1, 95,0);
        vcdp->declBus(c+969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs is_boxed_i", false,-1, 2,0);
        vcdp->declBus(c+1025,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs info_o", false,-1, 23,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+1353,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+1361,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+1369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+1377,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+1385,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+1393,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+1401,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+1409,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+1417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+1425,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] value", false,-1, 31,0);
        vcdp->declBit(c+1433,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_boxed", false,-1);
        vcdp->declBit(c+1441,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_normal", false,-1);
        vcdp->declBit(c+1449,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_inf", false,-1);
        vcdp->declBit(c+1457,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_nan", false,-1);
        vcdp->declBit(c+1465,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_signalling", false,-1);
        vcdp->declBit(c+1473,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_quiet", false,-1);
        vcdp->declBit(c+1481,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_zero", false,-1);
        vcdp->declBit(c+1489,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[1] is_subnormal", false,-1);
        vcdp->declBus(c+1497,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] value", false,-1, 31,0);
        vcdp->declBit(c+1505,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_boxed", false,-1);
        vcdp->declBit(c+1513,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_normal", false,-1);
        vcdp->declBit(c+1521,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_inf", false,-1);
        vcdp->declBit(c+1529,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_nan", false,-1);
        vcdp->declBit(c+1537,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_signalling", false,-1);
        vcdp->declBit(c+1545,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_quiet", false,-1);
        vcdp->declBit(c+1553,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_zero", false,-1);
        vcdp->declBit(c+1561,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_class_inputs gen_num_values[2] is_subnormal", false,-1);
        vcdp->declBus(c+11369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc MODE", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+8833,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc in_i", false,-1, 50,0);
        vcdp->declBus(c+5969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc cnt_o", false,-1, 5,0);
        vcdp->declBit(c+5985,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc empty_o", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+57,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc index_lut", false,-1, 305,0);
        vcdp->declQuad(c+6001,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+6017,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+7433,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc in_tmp", false,-1, 50,0);
        vcdp->declBus(c+11369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_lzc gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11401,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding AbsWidth", false,-1, 31,0);
        vcdp->declBus(c+7369,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding abs_value_i", false,-1, 30,0);
        vcdp->declBit(c+8969,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding sign_i", false,-1);
        vcdp->declBus(c+7377,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding round_sticky_bits_i", false,-1, 1,0);
        vcdp->declBus(c+8977,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding rnd_mode_i", false,-1, 2,0);
        vcdp->declBit(c+8985,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding effective_subtraction_i", false,-1);
        vcdp->declBus(c+7417,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding abs_rounded_o", false,-1, 30,0);
        vcdp->declBit(c+7409,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding sign_o", false,-1);
        vcdp->declBit(c+7401,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding exact_zero_o", false,-1);
        vcdp->declBit(c+7449,"fpnew_top gen_operation_groups[0] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane lane_instance i_fma i_fpnew_rounding round_up", false,-1);
        vcdp->declBus(c+11409,"fpnew_top gen_operation_groups[1] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+11417,"fpnew_top gen_operation_groups[1] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+11425,"fpnew_top gen_operation_groups[1] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+11433,"fpnew_top gen_operation_groups[1] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+11473,"fpnew_top gen_operation_groups[1] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+11481,"fpnew_top gen_operation_groups[1] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[1] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[1] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[1] i_opgroup_block rst_ni", false,-1);
        vcdp->declQuad(c+10449,"fpnew_top gen_operation_groups[1] i_opgroup_block operands_i", false,-1, 63,0);
        vcdp->declBus(c+561,"fpnew_top gen_operation_groups[1] i_opgroup_block is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[1] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[1] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[1] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[1] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[1] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+553,"fpnew_top gen_operation_groups[1] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+10465,"fpnew_top gen_operation_groups[1] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+1569,"fpnew_top gen_operation_groups[1] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+1577,"fpnew_top gen_operation_groups[1] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+1585,"fpnew_top gen_operation_groups[1] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+1593,"fpnew_top gen_operation_groups[1] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+1601,"fpnew_top gen_operation_groups[1] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+1609,"fpnew_top gen_operation_groups[1] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+1617,"fpnew_top gen_operation_groups[1] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+1625,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+1633,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+1641,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+1649,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+6241,"fpnew_top gen_operation_groups[1] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+1657,"fpnew_top gen_operation_groups[1] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+11201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice FMT", false,-1, 2,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice REG", false,-1, 31,0);
        vcdp->declBit(c+1673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice in_valid", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+11201,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+1633,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+1641,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+6241,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+1601,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+1609,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+1657,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+1681,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+1689,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+1697,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+1769,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+1777,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+9081,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+1633,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+6297,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+1785,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+1793,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+1801,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+1809,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+1817,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+1825,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11489,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+1833,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1841,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1849,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1857,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+1865,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11017,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11225,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11497,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11505,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11265,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1785,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+1801,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+1825,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+137,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+1873,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+1881,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+1889,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+1793,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+1809,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+1897,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+145,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+1905,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+1913,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+1921,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice Width", false,-1, 31,0);
        vcdp->declBus(c+11521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+11529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice IntFmtConfig", false,-1, 0,3);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice rst_ni", false,-1);
        vcdp->declQuad(c+10449,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice operands_i", false,-1, 63,0);
        vcdp->declBus(c+561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice op_mod_i", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice tag_i", false,-1);
        vcdp->declBit(c+1673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+1929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice flush_i", false,-1);
        vcdp->declBus(c+6305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+1937,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+9089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice tag_o", false,-1);
        vcdp->declBit(c+1945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+1953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+1961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice busy_o", false,-1);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+11017,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice FMT_BITS", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice AUX_BITS", false,-1, 31,0);
        vcdp->declBus(c+1929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+1945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+10473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt", false,-1, 2,0);
        vcdp->declBus(c+10481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice aux_data", false,-1, 4,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_is_int", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_is_cpk", false,-1);
        vcdp->declBus(c+11081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice dst_vec_op", false,-1, 1,0);
        vcdp->declBus(c+11201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_d", false,-1, 2,0);
        vcdp->declBus(c+11545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_q", false,-1, 2,0);
        vcdp->declBit(c+1969,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_up_cast", false,-1);
        vcdp->declBit(c+1977,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_down_cast", false,-1);
        vcdp->declArray(c+1985,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice fmt_slice_result", false,-1, 159,0);
        vcdp->declArray(c+153,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice ifmt_slice_result", false,-1, 127,0);
        vcdp->declBus(c+11553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_slice_result", false,-1, 31,0);
        vcdp->declBus(c+11561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_d", false,-1, 31,0);
        vcdp->declBus(c+11569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_q", false,-1, 31,0);
        vcdp->declBus(c+6121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+9089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+9097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_aux", false,-1, 4,0);
        vcdp->declBus(c+1961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBit(c+9105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_vector", false,-1);
        vcdp->declBus(c+9113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt", false,-1, 2,0);
        vcdp->declBit(c+9121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt_is_int", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_cpk", false,-1);
        vcdp->declBus(c+11081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice result_vec_op", false,-1, 1,0);
        vcdp->declBus(c+2025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_1op", false,-1, 4,0);
        vcdp->declBus(c+2033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_2op", false,-1, 9,0);
        vcdp->declBus(c+11577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice boxed_2op unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE", false,-1, 31,0);
        vcdp->declBus(c+11585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] MAX_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+6129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+1673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+1945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+1953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declQuad(c+2041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 63,0);
        vcdp->declBus(c+6137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+6145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+2057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+11321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+11625,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11633,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rst_ni", false,-1);
        vcdp->declQuad(c+2041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi operands_i", false,-1, 63,0);
        vcdp->declBus(c+2033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_i", false,-1, 3,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi dst_fmt_i", false,-1, 2,0);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi tag_i", false,-1);
        vcdp->declBus(c+10481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi aux_i", false,-1, 4,0);
        vcdp->declBit(c+1673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_valid_i", false,-1);
        vcdp->declBit(c+1929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi flush_i", false,-1);
        vcdp->declBus(c+6137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_o", false,-1, 31,0);
        vcdp->declBus(c+6145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi status_o", false,-1, 4,0);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi extension_bit_o", false,-1);
        vcdp->declBit(c+9089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi tag_o", false,-1);
        vcdp->declBus(c+9097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi aux_o", false,-1, 4,0);
        vcdp->declBit(c+1945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_valid_o", false,-1);
        vcdp->declBit(c+1953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_ready_i", false,-1);
        vcdp->declBit(c+1961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi busy_o", false,-1);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declQuad(c+2041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi operands_q", false,-1, 63,0);
        vcdp->declBus(c+10489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_q", false,-1, 3,0);
        vcdp->declBus(c+10505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi dst_fmt_q", false,-1, 2,0);
        vcdp->declBit(c+1673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_valid_q", false,-1);
        vcdp->declQuad(c+2041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_operands_q", false,-1, 63,0);
        vcdp->declBus(c+10489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+10497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+10505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+10481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+1673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+1929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi inp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+2065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi divsqrt_fmt", false,-1, 1,0);
        vcdp->declArray(c+2073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi divsqrt_operands", false,-1, 127,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi input_is_fp8", false,-1);
        vcdp->declBit(c+1929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi in_ready", false,-1);
        vcdp->declBit(c+2105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi div_valid", false,-1);
        vcdp->declBit(c+2113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi sqrt_valid", false,-1);
        vcdp->declBit(c+9129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_ready", false,-1);
        vcdp->declBit(c+9137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_done", false,-1);
        vcdp->declBit(c+2121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi op_starting", false,-1);
        vcdp->declBit(c+1945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_valid", false,-1);
        vcdp->declBit(c+1953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_ready", false,-1);
        vcdp->declBit(c+2129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi hold_result", false,-1);
        vcdp->declBit(c+2137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi data_is_held", false,-1);
        vcdp->declBit(c+2145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_busy", false,-1);
        vcdp->declBus(c+9145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi state_q", false,-1, 1,0);
        vcdp->declBus(c+2153,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi state_d", false,-1, 1,0);
        vcdp->declBit(c+9153,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_is_fp8_q", false,-1);
        vcdp->declBit(c+9089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_tag_q", false,-1);
        vcdp->declBus(c+9097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_aux_q", false,-1, 4,0);
        vcdp->declQuad(c+7505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_result", false,-1, 63,0);
        vcdp->declBus(c+7521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi adjusted_result", false,-1, 31,0);
        vcdp->declBus(c+9049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi held_result_q", false,-1, 31,0);
        vcdp->declBus(c+7529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi unit_status", false,-1, 4,0);
        vcdp->declBus(c+9057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi held_status_q", false,-1, 4,0);
        vcdp->declBus(c+6137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi result_d", false,-1, 31,0);
        vcdp->declBus(c+6145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi status_d", false,-1, 4,0);
        vcdp->declBus(c+6137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+6145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+9089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+9097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+1945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+1953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi out_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Clk_CI", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Rst_RBI", false,-1);
        vcdp->declBit(c+2105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Div_start_SI", false,-1);
        vcdp->declBit(c+2113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sqrt_start_SI", false,-1);
        vcdp->declQuad(c+2161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Operand_a_DI", false,-1, 63,0);
        vcdp->declQuad(c+2177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Operand_b_DI", false,-1, 63,0);
        vcdp->declBus(c+10489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei RM_SI", false,-1, 2,0);
        vcdp->declBus(c+11641,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+2065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Format_sel_SI", false,-1, 1,0);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Kill_SI", false,-1);
        vcdp->declQuad(c+7505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Result_DO", false,-1, 63,0);
        vcdp->declBus(c+7529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Fflags_SO", false,-1, 4,0);
        vcdp->declBit(c+9129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Ready_SO", false,-1);
        vcdp->declBit(c+9137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Done_SO", false,-1);
        vcdp->declBus(c+9161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_a_D", false,-1, 11,0);
        vcdp->declBus(c+9169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_b_D", false,-1, 11,0);
        vcdp->declQuad(c+9177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_a_D", false,-1, 52,0);
        vcdp->declQuad(c+9193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_b_D", false,-1, 52,0);
        vcdp->declBus(c+9209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Exp_z_D", false,-1, 12,0);
        vcdp->declQuad(c+7537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Mant_z_D", false,-1, 56,0);
        vcdp->declBit(c+9217,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sign_z_D", false,-1);
        vcdp->declBit(c+2193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Start_S", false,-1);
        vcdp->declBus(c+9225,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei RM_dly_S", false,-1, 2,0);
        vcdp->declBit(c+9233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Div_enable_S", false,-1);
        vcdp->declBit(c+9241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Sqrt_enable_S", false,-1);
        vcdp->declBit(c+9249,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Inf_a_S", false,-1);
        vcdp->declBit(c+9257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Inf_b_S", false,-1);
        vcdp->declBit(c+9265,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Zero_a_S", false,-1);
        vcdp->declBit(c+9273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Zero_b_S", false,-1);
        vcdp->declBit(c+9281,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei NaN_a_S", false,-1);
        vcdp->declBit(c+9289,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei NaN_b_S", false,-1);
        vcdp->declBit(c+9297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei SNaN_S", false,-1);
        vcdp->declBit(c+2201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Special_case_SB", false,-1);
        vcdp->declBit(c+9305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Special_case_dly_SB", false,-1);
        vcdp->declBit(c+9313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei Full_precision_S", false,-1);
        vcdp->declBit(c+9321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP32_S", false,-1);
        vcdp->declBit(c+9329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP64_S", false,-1);
        vcdp->declBit(c+9337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP16_S", false,-1);
        vcdp->declBit(c+9345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei FP16ALT_S", false,-1);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Clk_CI", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+9129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Ready_SI", false,-1);
        vcdp->declQuad(c+2161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Operand_a_DI", false,-1, 63,0);
        vcdp->declQuad(c+2177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Operand_b_DI", false,-1, 63,0);
        vcdp->declBus(c+10489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_SI", false,-1, 2,0);
        vcdp->declBus(c+2065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declBit(c+2193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Start_SO", false,-1);
        vcdp->declBus(c+9161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_DO_norm", false,-1, 11,0);
        vcdp->declBus(c+9169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_DO_norm", false,-1, 11,0);
        vcdp->declQuad(c+9177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_DO_norm", false,-1, 52,0);
        vcdp->declQuad(c+9193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_DO_norm", false,-1, 52,0);
        vcdp->declBus(c+9225,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_dly_SO", false,-1, 2,0);
        vcdp->declBit(c+9217,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DO", false,-1);
        vcdp->declBit(c+9249,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SO", false,-1);
        vcdp->declBit(c+9257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SO", false,-1);
        vcdp->declBit(c+9265,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SO", false,-1);
        vcdp->declBit(c+9273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SO", false,-1);
        vcdp->declBit(c+9281,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SO", false,-1);
        vcdp->declBit(c+9289,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SO", false,-1);
        vcdp->declBit(c+9297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SO", false,-1);
        vcdp->declBit(c+2201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Special_case_SBO", false,-1);
        vcdp->declBit(c+9305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Special_case_dly_SBO", false,-1);
        vcdp->declBit(c+2209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Hb_a_D", false,-1);
        vcdp->declBit(c+2217,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Hb_b_D", false,-1);
        vcdp->declBus(c+2225,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_D", false,-1, 10,0);
        vcdp->declBus(c+2233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_D", false,-1, 10,0);
        vcdp->declQuad(c+2241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_NonH_D", false,-1, 51,0);
        vcdp->declQuad(c+2257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_NonH_D", false,-1, 51,0);
        vcdp->declQuad(c+2273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_D", false,-1, 52,0);
        vcdp->declQuad(c+2289,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_D", false,-1, 52,0);
        vcdp->declBit(c+2305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_a_D", false,-1);
        vcdp->declBit(c+2313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_b_D", false,-1);
        vcdp->declBit(c+2193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Start_S", false,-1);
        vcdp->declBit(c+2321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_zero_S", false,-1);
        vcdp->declBit(c+2329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_zero_S", false,-1);
        vcdp->declBit(c+2337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_prenorm_zero_S", false,-1);
        vcdp->declBit(c+2345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_prenorm_zero_S", false,-1);
        vcdp->declBit(c+2353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_prenorm_Inf_NaN_S", false,-1);
        vcdp->declBit(c+2361,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_prenorm_Inf_NaN_S", false,-1);
        vcdp->declBit(c+2369,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_QNaN_S", false,-1);
        vcdp->declBit(c+2377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_prenorm_SNaN_S", false,-1);
        vcdp->declBit(c+2385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_QNaN_S", false,-1);
        vcdp->declBit(c+2393,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_prenorm_SNaN_S", false,-1);
        vcdp->declBit(c+2401,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SN", false,-1);
        vcdp->declBit(c+9265,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_a_SP", false,-1);
        vcdp->declBit(c+2409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SN", false,-1);
        vcdp->declBit(c+9273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Zero_b_SP", false,-1);
        vcdp->declBit(c+2417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SN", false,-1);
        vcdp->declBit(c+9249,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_a_SP", false,-1);
        vcdp->declBit(c+2425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SN", false,-1);
        vcdp->declBit(c+9257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Inf_b_SP", false,-1);
        vcdp->declBit(c+2433,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SN", false,-1);
        vcdp->declBit(c+9281,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_a_SP", false,-1);
        vcdp->declBit(c+2441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SN", false,-1);
        vcdp->declBit(c+9289,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 NaN_b_SP", false,-1);
        vcdp->declBit(c+6313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SN", false,-1);
        vcdp->declBit(c+9297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 SNaN_SP", false,-1);
        vcdp->declBit(c+6321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DN", false,-1);
        vcdp->declBit(c+9217,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Sign_z_DP", false,-1);
        vcdp->declBus(c+10513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_DN", false,-1, 2,0);
        vcdp->declBus(c+9225,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 RM_DP", false,-1, 2,0);
        vcdp->declBus(c+2449,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_leadingOne_a", false,-1, 5,0);
        vcdp->declBus(c+2457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_leadingOne_b", false,-1, 5,0);
        vcdp->declBit(c+2465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_zero_S_a", false,-1);
        vcdp->declBit(c+2473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_zero_S_b", false,-1);
        vcdp->declQuad(c+6329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_norm_DN", false,-1, 52,0);
        vcdp->declQuad(c+9177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_a_norm_DP", false,-1, 52,0);
        vcdp->declBus(c+6345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_norm_DN", false,-1, 11,0);
        vcdp->declBus(c+9161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_a_norm_DP", false,-1, 11,0);
        vcdp->declQuad(c+6353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_norm_DN", false,-1, 52,0);
        vcdp->declQuad(c+9193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Mant_b_norm_DP", false,-1, 52,0);
        vcdp->declBus(c+6369,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_norm_DN", false,-1, 11,0);
        vcdp->declBus(c+9169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 Exp_b_norm_DP", false,-1, 11,0);
        vcdp->declBus(c+11649,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua MODE", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+2273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua in_i", false,-1, 52,0);
        vcdp->declBus(c+2449,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua cnt_o", false,-1, 5,0);
        vcdp->declBit(c+2465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua empty_o", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+185,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc index_lut", false,-1, 317,0);
        vcdp->declQuad(c+2481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+2497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+2593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc in_tmp", false,-1, 52,0);
        vcdp->declBus(c+11649,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ua gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11649,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub MODE", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub CNT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+2289,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub in_i", false,-1, 52,0);
        vcdp->declBus(c+2457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub cnt_o", false,-1, 5,0);
        vcdp->declBit(c+2473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub empty_o", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+265,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc index_lut", false,-1, 317,0);
        vcdp->declQuad(c+2609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc sel_nodes", false,-1, 63,0);
        vcdp->declArray(c+2625,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc index_nodes", false,-1, 383,0);
        vcdp->declQuad(c+2721,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc in_tmp", false,-1, 52,0);
        vcdp->declBus(c+11649,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei preprocess_U0 LOD_Ub gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Clk_CI", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+2193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Start_SI", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Kill_SI", false,-1);
        vcdp->declBit(c+2201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Special_case_SBI", false,-1);
        vcdp->declBit(c+9305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Special_case_dly_SBI", false,-1);
        vcdp->declBus(c+11641,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+2065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declQuad(c+9177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_a_DI", false,-1, 52,0);
        vcdp->declQuad(c+9193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_b_DI", false,-1, 52,0);
        vcdp->declBus(c+9161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_a_DI", false,-1, 11,0);
        vcdp->declBus(c+9169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_b_DI", false,-1, 11,0);
        vcdp->declBit(c+9233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_enable_SO", false,-1);
        vcdp->declBit(c+9241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_enable_SO", false,-1);
        vcdp->declBit(c+9313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Full_precision_SO", false,-1);
        vcdp->declBit(c+9321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP32_SO", false,-1);
        vcdp->declBit(c+9329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP64_SO", false,-1);
        vcdp->declBit(c+9337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP16_SO", false,-1);
        vcdp->declBit(c+9345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 FP16ALT_SO", false,-1);
        vcdp->declBit(c+9129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Ready_SO", false,-1);
        vcdp->declBit(c+9137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Done_SO", false,-1);
        vcdp->declQuad(c+7537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Mant_z_DO", false,-1, 56,0);
        vcdp->declBus(c+9209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Exp_z_DO", false,-1, 12,0);
        vcdp->declBit(c+9353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Div_start_dly_S", false,-1);
        vcdp->declBit(c+9361,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 Sqrt_start_dly_S", false,-1);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Clk_CI", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Rst_RBI", false,-1);
        vcdp->declBit(c+2105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_SI", false,-1);
        vcdp->declBit(c+2113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_SI", false,-1);
        vcdp->declBit(c+2193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Start_SI", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Kill_SI", false,-1);
        vcdp->declBit(c+2201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Special_case_SBI", false,-1);
        vcdp->declBit(c+9305,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Special_case_dly_SBI", false,-1);
        vcdp->declBus(c+11641,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Precision_ctl_SI", false,-1, 5,0);
        vcdp->declBus(c+2065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Format_sel_SI", false,-1, 1,0);
        vcdp->declQuad(c+9177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Numerator_DI", false,-1, 52,0);
        vcdp->declBus(c+9161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_num_DI", false,-1, 11,0);
        vcdp->declQuad(c+9193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_DI", false,-1, 52,0);
        vcdp->declBus(c+9169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_den_DI", false,-1, 11,0);
        vcdp->declBit(c+9353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_SO", false,-1);
        vcdp->declBit(c+9361,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_dly_SO", false,-1);
        vcdp->declBit(c+9233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_enable_SO", false,-1);
        vcdp->declBit(c+9241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_enable_SO", false,-1);
        vcdp->declBit(c+9313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Full_precision_SO", false,-1);
        vcdp->declBit(c+9321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP32_SO", false,-1);
        vcdp->declBit(c+9329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP64_SO", false,-1);
        vcdp->declBit(c+9337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP16_SO", false,-1);
        vcdp->declBit(c+9345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 FP16ALT_SO", false,-1);
        vcdp->declBit(c+9129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Ready_SO", false,-1);
        vcdp->declBit(c+9137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Done_SO", false,-1);
        vcdp->declQuad(c+7537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mant_result_prenorm_DO", false,-1, 56,0);
        vcdp->declBus(c+9209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DO", false,-1, 12,0);
        vcdp->declQuad(c+6377,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Partial_remainder_DN", false,-1, 57,0);
        vcdp->declQuad(c+9369,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Partial_remainder_DP", false,-1, 57,0);
        vcdp->declQuad(c+9385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Quotient_DP", false,-1, 56,0);
        vcdp->declQuad(c+9401,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Numerator_se_D", false,-1, 53,0);
        vcdp->declQuad(c+9417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_D", false,-1, 53,0);
        vcdp->declQuad(c+7553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_DB", false,-1, 53,0);
        vcdp->declQuad(c+7569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mant_D_sqrt_Norm", false,-1, 53,0);
        vcdp->declBus(c+9433,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Format_sel_S", false,-1, 1,0);
        vcdp->declBus(c+9441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Precision_ctl_S", false,-1, 5,0);
        vcdp->declBus(c+7585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_ctl_S", false,-1, 5,0);
        vcdp->declBus(c+9449,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_Two_iteration_unit_S", false,-1, 5,0);
        vcdp->declBus(c+9457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 State_Four_iteration_unit_S", false,-1, 5,0);
        vcdp->declBit(c+9353,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_S", false,-1);
        vcdp->declBit(c+9361,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_start_dly_S", false,-1);
        vcdp->declBus(c+9465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Crtl_cnt_S", false,-1, 5,0);
        vcdp->declBit(c+7593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Start_dly_S", false,-1);
        vcdp->declBit(c+2737,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fsm_enable_S", false,-1);
        vcdp->declBit(c+7601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Final_state_S", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_0", false,-1);
        vcdp->declBit(c+9473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_1", false,-1);
        vcdp->declBus(c+9481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_2", false,-1, 1,0);
        vcdp->declBus(c+9489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_3", false,-1, 2,0);
        vcdp->declBus(c+9497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_4", false,-1, 3,0);
        vcdp->declBus(c+9505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_5", false,-1, 4,0);
        vcdp->declBus(c+9513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_6", false,-1, 5,0);
        vcdp->declBus(c+9521,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_7", false,-1, 6,0);
        vcdp->declBus(c+9529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_8", false,-1, 7,0);
        vcdp->declBus(c+9537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_9", false,-1, 8,0);
        vcdp->declBus(c+9545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_10", false,-1, 9,0);
        vcdp->declBus(c+9553,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_11", false,-1, 10,0);
        vcdp->declBus(c+9561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_12", false,-1, 11,0);
        vcdp->declBus(c+9569,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_13", false,-1, 12,0);
        vcdp->declBus(c+9577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_14", false,-1, 13,0);
        vcdp->declBus(c+9585,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_15", false,-1, 14,0);
        vcdp->declBus(c+9593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_16", false,-1, 15,0);
        vcdp->declBus(c+9601,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_17", false,-1, 16,0);
        vcdp->declBus(c+9609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_18", false,-1, 17,0);
        vcdp->declBus(c+9617,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_19", false,-1, 18,0);
        vcdp->declBus(c+9625,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_20", false,-1, 19,0);
        vcdp->declBus(c+9633,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_21", false,-1, 20,0);
        vcdp->declBus(c+9641,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_22", false,-1, 21,0);
        vcdp->declBus(c+9649,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_23", false,-1, 22,0);
        vcdp->declBus(c+9657,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_24", false,-1, 23,0);
        vcdp->declBus(c+9665,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_25", false,-1, 24,0);
        vcdp->declBus(c+9673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_26", false,-1, 25,0);
        vcdp->declBus(c+9681,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_27", false,-1, 26,0);
        vcdp->declBus(c+9689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_28", false,-1, 27,0);
        vcdp->declBus(c+9697,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_29", false,-1, 28,0);
        vcdp->declBus(c+9705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_30", false,-1, 29,0);
        vcdp->declBus(c+9713,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_31", false,-1, 30,0);
        vcdp->declBus(c+9721,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_32", false,-1, 31,0);
        vcdp->declQuad(c+9729,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_33", false,-1, 32,0);
        vcdp->declQuad(c+9745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_34", false,-1, 33,0);
        vcdp->declQuad(c+9761,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_35", false,-1, 34,0);
        vcdp->declQuad(c+9777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_36", false,-1, 35,0);
        vcdp->declQuad(c+9793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_37", false,-1, 36,0);
        vcdp->declQuad(c+9809,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_38", false,-1, 37,0);
        vcdp->declQuad(c+9825,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_39", false,-1, 38,0);
        vcdp->declQuad(c+9841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_40", false,-1, 39,0);
        vcdp->declQuad(c+9857,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_41", false,-1, 40,0);
        vcdp->declQuad(c+9873,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_42", false,-1, 41,0);
        vcdp->declQuad(c+9889,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_43", false,-1, 42,0);
        vcdp->declQuad(c+9905,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_44", false,-1, 43,0);
        vcdp->declQuad(c+9921,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_45", false,-1, 44,0);
        vcdp->declQuad(c+9937,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_46", false,-1, 45,0);
        vcdp->declQuad(c+9953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_47", false,-1, 46,0);
        vcdp->declQuad(c+9969,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_48", false,-1, 47,0);
        vcdp->declQuad(c+9985,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_49", false,-1, 48,0);
        vcdp->declQuad(c+10001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_50", false,-1, 49,0);
        vcdp->declQuad(c+10017,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_51", false,-1, 50,0);
        vcdp->declQuad(c+10033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_52", false,-1, 51,0);
        vcdp->declQuad(c+10049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_53", false,-1, 52,0);
        vcdp->declQuad(c+10065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_54", false,-1, 53,0);
        vcdp->declQuad(c+10081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_55", false,-1, 54,0);
        vcdp->declQuad(c+10097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_56", false,-1, 55,0);
        vcdp->declQuad(c+9385,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_57", false,-1, 56,0);
        vcdp->declQuad(c+11657,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_58", false,-1, 57,0);
        vcdp->declQuad(c+11673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_59", false,-1, 58,0);
        vcdp->declQuad(c+11689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_one_60", false,-1, 59,0);
        vcdp->declBus(c+2745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_0", false,-1, 1,0);
        vcdp->declBus(c+6393,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_1", false,-1, 2,0);
        vcdp->declBus(c+6401,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_2", false,-1, 4,0);
        vcdp->declBus(c+6409,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_3", false,-1, 6,0);
        vcdp->declBus(c+6417,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_4", false,-1, 8,0);
        vcdp->declBus(c+6425,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_5", false,-1, 10,0);
        vcdp->declBus(c+6433,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_6", false,-1, 12,0);
        vcdp->declBus(c+6441,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_7", false,-1, 14,0);
        vcdp->declBus(c+6449,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_8", false,-1, 16,0);
        vcdp->declBus(c+6457,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_9", false,-1, 18,0);
        vcdp->declBus(c+6465,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_10", false,-1, 20,0);
        vcdp->declBus(c+6473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_11", false,-1, 22,0);
        vcdp->declBus(c+6481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_12", false,-1, 24,0);
        vcdp->declBus(c+6489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_13", false,-1, 26,0);
        vcdp->declBus(c+6497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_14", false,-1, 28,0);
        vcdp->declBus(c+6505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_15", false,-1, 30,0);
        vcdp->declQuad(c+6513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_16", false,-1, 32,0);
        vcdp->declQuad(c+6529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_17", false,-1, 34,0);
        vcdp->declQuad(c+6545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_18", false,-1, 36,0);
        vcdp->declQuad(c+6561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_19", false,-1, 38,0);
        vcdp->declQuad(c+6577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_20", false,-1, 40,0);
        vcdp->declQuad(c+6593,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_21", false,-1, 42,0);
        vcdp->declQuad(c+6609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_22", false,-1, 44,0);
        vcdp->declQuad(c+6625,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_23", false,-1, 46,0);
        vcdp->declQuad(c+6641,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_24", false,-1, 48,0);
        vcdp->declQuad(c+6657,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_25", false,-1, 50,0);
        vcdp->declQuad(c+6673,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_26", false,-1, 52,0);
        vcdp->declQuad(c+6689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_27", false,-1, 54,0);
        vcdp->declQuad(c+6705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_two_28", false,-1, 56,0);
        vcdp->declBus(c+2753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_0", false,-1, 2,0);
        vcdp->declBus(c+2761,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_1", false,-1, 4,0);
        vcdp->declBus(c+2769,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_2", false,-1, 7,0);
        vcdp->declBus(c+2777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_3", false,-1, 10,0);
        vcdp->declBus(c+2785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_4", false,-1, 13,0);
        vcdp->declBus(c+2793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_5", false,-1, 16,0);
        vcdp->declBus(c+2801,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_6", false,-1, 19,0);
        vcdp->declBus(c+2809,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_7", false,-1, 22,0);
        vcdp->declBus(c+2817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_8", false,-1, 25,0);
        vcdp->declBus(c+2825,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_9", false,-1, 28,0);
        vcdp->declBus(c+2833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_10", false,-1, 31,0);
        vcdp->declQuad(c+2841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_11", false,-1, 34,0);
        vcdp->declQuad(c+2857,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_12", false,-1, 37,0);
        vcdp->declQuad(c+2873,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_13", false,-1, 40,0);
        vcdp->declQuad(c+2889,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_14", false,-1, 43,0);
        vcdp->declQuad(c+2905,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_15", false,-1, 46,0);
        vcdp->declQuad(c+2921,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_16", false,-1, 49,0);
        vcdp->declQuad(c+2937,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_17", false,-1, 52,0);
        vcdp->declQuad(c+2953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_18", false,-1, 55,0);
        vcdp->declQuad(c+6721,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_19", false,-1, 58,0);
        vcdp->declQuad(c+11705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_three_20", false,-1, 61,0);
        vcdp->declBus(c+2969,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_0", false,-1, 3,0);
        vcdp->declBus(c+6737,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_1", false,-1, 6,0);
        vcdp->declBus(c+6745,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_2", false,-1, 10,0);
        vcdp->declBus(c+6753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_3", false,-1, 14,0);
        vcdp->declBus(c+6761,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_4", false,-1, 18,0);
        vcdp->declBus(c+6769,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_5", false,-1, 22,0);
        vcdp->declBus(c+6777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_6", false,-1, 26,0);
        vcdp->declBus(c+6785,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_7", false,-1, 30,0);
        vcdp->declQuad(c+6793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_8", false,-1, 34,0);
        vcdp->declQuad(c+6809,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_9", false,-1, 38,0);
        vcdp->declQuad(c+6825,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_10", false,-1, 42,0);
        vcdp->declQuad(c+6841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_11", false,-1, 46,0);
        vcdp->declQuad(c+6857,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_12", false,-1, 50,0);
        vcdp->declQuad(c+6873,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_13", false,-1, 54,0);
        vcdp->declQuad(c+6889,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Qcnt_four_14", false,-1, 58,0);
        vcdp->declQuad(c+10113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R0", false,-1, 57,0);
        vcdp->declQuad(c+2977,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q0", false,-1, 57,0);
        vcdp->declQuad(c+2993,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt0", false,-1, 57,0);
        vcdp->declQuad(c+3009,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_0", false,-1, 57,0);
        vcdp->declQuad(c+6905,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R1", false,-1, 57,0);
        vcdp->declQuad(c+3025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q1", false,-1, 57,0);
        vcdp->declQuad(c+3041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt1", false,-1, 57,0);
        vcdp->declQuad(c+3057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_1", false,-1, 57,0);
        vcdp->declQuad(c+6921,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R2", false,-1, 57,0);
        vcdp->declQuad(c+3073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q2", false,-1, 57,0);
        vcdp->declQuad(c+3089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt2", false,-1, 57,0);
        vcdp->declQuad(c+3105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_2", false,-1, 57,0);
        vcdp->declQuad(c+6937,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R3", false,-1, 57,0);
        vcdp->declQuad(c+11721,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_Q3", false,-1, 57,0);
        vcdp->declQuad(c+11737,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt3", false,-1, 57,0);
        vcdp->declQuad(c+7609,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Q_sqrt_com_3", false,-1, 57,0);
        vcdp->declQuad(c+6953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_R4", false,-1, 57,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+7625+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_DI", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+7657+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_DO", true,(i+0), 1,0);}}
        vcdp->declBit(c+11753,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_carry_DO", false,-1);
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3121+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_a_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3185+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_b_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+6969+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_a_BMASK_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3249+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_b_BMASK_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+3313+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_carry_D", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3345+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_sum_D", true,(i+0), 57,0);}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3409+i*2,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Iteration_cell_sum_AMASK_D", true,(i+0), 57,0);}}
        vcdp->declBus(c+3473,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_quotinent_S", false,-1, 3,0);
        vcdp->declQuad(c+7689,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Denominator_se_format_DB", false,-1, 57,0);
        vcdp->declQuad(c+7705,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 First_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+7721,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 First_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+10129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_first_S", false,-1);
        vcdp->declQuad(c+7033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sec_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+7049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sec_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+3481,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_sec_S", false,-1);
        vcdp->declQuad(c+7065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Thi_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+7081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Thi_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+3489,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_thi_S", false,-1);
        vcdp->declQuad(c+11761,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fou_iteration_cell_div_a_D", false,-1, 57,0);
        vcdp->declQuad(c+11777,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Fou_iteration_cell_div_b_D", false,-1, 57,0);
        vcdp->declBit(c+11793,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sel_b_for_fou_S", false,-1);
        vcdp->declQuad(c+11801,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Mask_bits_ctl_S", false,-1, 57,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+7737+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_enable_SI", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+7769+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Div_start_dly_SI", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                vcdp->declBit(c+7801+i*1,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Sqrt_enable_SI", true,(i+0));}}
        vcdp->declQuad(c+7097,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Quotient_DN", false,-1, 56,0);
        vcdp->declBus(c+7833,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DN", false,-1, 12,0);
        vcdp->declBus(c+9209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_result_prenorm_DP", false,-1, 12,0);
        vcdp->declBus(c+10137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_a_D", false,-1, 12,0);
        vcdp->declBus(c+10145,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_b_D", false,-1, 12,0);
        vcdp->declBus(c+7841,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 Exp_add_c_D", false,-1, 12,0);
        vcdp->declBus(c+7849,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 C_BIAS_AONE", false,-1, 31,0);
        vcdp->declBus(c+7857,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 C_HALF_BIAS", false,-1, 31,0);
        vcdp->declBus(c+11817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+3497,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+3513,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+7865,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+7873,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+7881,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+7889,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+7897,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+7905,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+7913,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+7921,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[0] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declBus(c+11817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+3529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+3545,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+7929,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+7937,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+7945,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+7953,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+7961,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7137,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7153,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+7969,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+7977,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+7985,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[1] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declBus(c+11817,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+3561,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt A_DI", false,-1, 57,0);
        vcdp->declQuad(c+3577,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt B_DI", false,-1, 57,0);
        vcdp->declBit(c+7993,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Div_enable_SI", false,-1);
        vcdp->declBit(c+8001,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Div_start_dly_SI", false,-1);
        vcdp->declBit(c+8009,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sqrt_enable_SI", false,-1);
        vcdp->declBus(c+8017,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_DI", false,-1, 1,0);
        vcdp->declBus(c+8025,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_DO", false,-1, 1,0);
        vcdp->declQuad(c+7161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sum_DO", false,-1, 57,0);
        vcdp->declBit(c+7177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Carry_out_DO", false,-1);
        vcdp->declBit(c+8033,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt D_carry_D", false,-1);
        vcdp->declBit(c+8041,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Sqrt_cin_D", false,-1);
        vcdp->declBit(c+8049,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei nrbd_nrsc_U0 control_U0 genblk4[2] iteration_div_sqrt Cin_D", false,-1);
        vcdp->declQuad(c+7537,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_in_DI", false,-1, 56,0);
        vcdp->declBus(c+9209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_in_DI", false,-1, 12,0);
        vcdp->declBit(c+9217,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sign_in_DI", false,-1);
        vcdp->declBit(c+9233,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Div_enable_SI", false,-1);
        vcdp->declBit(c+9241,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sqrt_enable_SI", false,-1);
        vcdp->declBit(c+9249,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Inf_a_SI", false,-1);
        vcdp->declBit(c+9257,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Inf_b_SI", false,-1);
        vcdp->declBit(c+9265,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Zero_a_SI", false,-1);
        vcdp->declBit(c+9273,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Zero_b_SI", false,-1);
        vcdp->declBit(c+9281,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NaN_a_SI", false,-1);
        vcdp->declBit(c+9289,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NaN_b_SI", false,-1);
        vcdp->declBit(c+9297,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 SNaN_SI", false,-1);
        vcdp->declBus(c+9225,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 RM_SI", false,-1, 2,0);
        vcdp->declBit(c+9313,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Full_precision_SI", false,-1);
        vcdp->declBit(c+9321,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP32_SI", false,-1);
        vcdp->declBit(c+9329,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP64_SI", false,-1);
        vcdp->declBit(c+9337,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP16_SI", false,-1);
        vcdp->declBit(c+9345,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 FP16ALT_SI", false,-1);
        vcdp->declQuad(c+7505,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Result_DO", false,-1, 63,0);
        vcdp->declBus(c+7529,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Fflags_SO", false,-1, 4,0);
        vcdp->declBit(c+8057,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Sign_res_D", false,-1);
        vcdp->declBit(c+10153,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 NV_OP_S", false,-1);
        vcdp->declBit(c+8065,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_OF_S", false,-1);
        vcdp->declBit(c+8073,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_UF_S", false,-1);
        vcdp->declBit(c+10161,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Div_Zero_S", false,-1);
        vcdp->declBit(c+8081,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 In_Exact_S", false,-1);
        vcdp->declQuad(c+8089,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_res_norm_D", false,-1, 52,0);
        vcdp->declBus(c+8105,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_res_norm_D", false,-1, 10,0);
        vcdp->declBus(c+10169,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP64_D", false,-1, 12,0);
        vcdp->declBus(c+10177,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP32_D", false,-1, 9,0);
        vcdp->declBus(c+10185,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP16_D", false,-1, 6,0);
        vcdp->declBus(c+10193,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_Max_RS_FP16ALT_D", false,-1, 9,0);
        vcdp->declBus(c+10201,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Num_RS_D", false,-1, 12,0);
        vcdp->declQuad(c+8113,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_RS_D", false,-1, 52,0);
        vcdp->declQuad(c+8129,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Mant_forsticky_D", false,-1, 56,0);
        vcdp->declBus(c+10209,"fpnew_top gen_operation_groups[1] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 lane_instance i_fpnew_divsqrt_multi i_divsqrt_lei fpu_norm_U0 Exp_subOne_D", false,-1, 12,0);
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
        vcdp->declBus(c+11825,"fpnew_top gen_operation_groups[2] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[2] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+11833,"fpnew_top gen_operation_groups[2] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+11841,"fpnew_top gen_operation_groups[2] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+11849,"fpnew_top gen_operation_groups[2] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+11889,"fpnew_top gen_operation_groups[2] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+11897,"fpnew_top gen_operation_groups[2] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[2] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[2] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[2] i_opgroup_block rst_ni", false,-1);
        vcdp->declQuad(c+10521,"fpnew_top gen_operation_groups[2] i_opgroup_block operands_i", false,-1, 63,0);
        vcdp->declBus(c+577,"fpnew_top gen_operation_groups[2] i_opgroup_block is_boxed_i", false,-1, 9,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[2] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[2] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[2] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[2] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[2] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[2] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[2] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+569,"fpnew_top gen_operation_groups[2] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+10537,"fpnew_top gen_operation_groups[2] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[2] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+3593,"fpnew_top gen_operation_groups[2] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+3601,"fpnew_top gen_operation_groups[2] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+3609,"fpnew_top gen_operation_groups[2] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+3617,"fpnew_top gen_operation_groups[2] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+3625,"fpnew_top gen_operation_groups[2] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+3633,"fpnew_top gen_operation_groups[2] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+3641,"fpnew_top gen_operation_groups[2] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+3649,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+3657,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+3665,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+3673,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+3681,"fpnew_top gen_operation_groups[2] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+3737,"fpnew_top gen_operation_groups[2] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format in_valid", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+11201,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+3657,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+3665,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+3681,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+3625,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+3633,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+3737,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+3761,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+3769,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+3777,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+3849,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+3857,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+10217,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+3657,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+7185,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+3865,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+3873,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+3881,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+3889,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+3897,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+3905,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+11905,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+3913,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+3921,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+3929,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+3937,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+3945,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11017,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11225,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11913,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+11921,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11265,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+3865,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+3881,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+3905,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+345,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+3953,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+3961,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+3969,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+3873,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+3889,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+3977,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+353,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+3985,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+3993,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+4001,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[2] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11929,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11937,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FpFormat", false,-1, 2,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice Width", false,-1, 31,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11945,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rst_ni", false,-1);
        vcdp->declQuad(c+10521,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice operands_i", false,-1, 63,0);
        vcdp->declBus(c+4009,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice op_mod_i", false,-1);
        vcdp->declBit(c+10321,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_i", false,-1);
        vcdp->declBit(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+4017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice flush_i", false,-1);
        vcdp->declBus(c+10545,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+4025,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+4033,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice tag_o", false,-1);
        vcdp->declBit(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+4017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+4041,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice busy_o", false,-1);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+4017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+4049,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_result", false,-1, 31,0);
        vcdp->declBus(c+4049,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_regular_result", false,-1, 31,0);
        vcdp->declBus(c+4057,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_class_result", false,-1, 31,0);
        vcdp->declBus(c+4065,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice slice_vec_class_result", false,-1, 31,0);
        vcdp->declBus(c+10553,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+4033,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+4073,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_class_mask", false,-1, 9,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+11953,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_vectorial", false,-1, 0,0);
        vcdp->declBus(c+4041,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBus(c+10561,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice lane_is_class", false,-1, 0,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_vector", false,-1);
        vcdp->declBit(c+10561,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice result_is_class", false,-1);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice CLASS_VEC_BITS", false,-1, 31,0);
        vcdp->declBus(c+4049,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+4081,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] local_sign", false,-1);
        vcdp->declBit(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+4017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declQuad(c+4089,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 63,0);
        vcdp->declBus(c+4105,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+10569,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+11961,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+4113,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+11321,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice output_processing unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+11969,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp FpFormat", false,-1, 2,0);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+11977,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp WIDTH", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp rst_ni", false,-1);
        vcdp->declQuad(c+4089,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operands_i", false,-1, 63,0);
        vcdp->declBus(c+4009,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp op_mod_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp tag_i", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp aux_i", false,-1);
        vcdp->declBit(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp in_valid_i", false,-1);
        vcdp->declBit(c+4017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp flush_i", false,-1);
        vcdp->declBus(c+4105,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp result_o", false,-1, 31,0);
        vcdp->declBus(c+10569,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp status_o", false,-1, 4,0);
        vcdp->declBit(c+4033,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp extension_bit_o", false,-1);
        vcdp->declBus(c+4073,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_mask_o", false,-1, 9,0);
        vcdp->declBit(c+10561,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_class_o", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp tag_o", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp aux_o", false,-1);
        vcdp->declBit(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_valid_o", false,-1);
        vcdp->declBit(c+4017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_ready_i", false,-1);
        vcdp->declBit(c+4041,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp busy_o", false,-1);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declQuad(c+4089,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_operands_q", false,-1, 63,0);
        vcdp->declBus(c+4009,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_is_boxed_q", false,-1, 1,0);
        vcdp->declBus(c+10577,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+10585,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+10289,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp inp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+4121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_q", false,-1, 15,0);
        vcdp->declBus(c+4129,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_a", false,-1, 31,0);
        vcdp->declBus(c+4137,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_b", false,-1, 31,0);
        vcdp->declBus(c+4145,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_a", false,-1, 7,0);
        vcdp->declBus(c+4153,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp info_b", false,-1, 7,0);
        vcdp->declBit(c+4161,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp any_operand_inf", false,-1);
        vcdp->declBit(c+4169,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp any_operand_nan", false,-1);
        vcdp->declBit(c+4177,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp signalling_nan", false,-1);
        vcdp->declBit(c+4185,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operands_equal", false,-1);
        vcdp->declBit(c+4193,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp operand_a_smaller", false,-1);
        vcdp->declBus(c+4201,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_result", false,-1, 31,0);
        vcdp->declBus(c+11985,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_status", false,-1, 4,0);
        vcdp->declBit(c+10593,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sgnj_extension_bit", false,-1);
        vcdp->declBus(c+10601,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_result", false,-1, 31,0);
        vcdp->declBus(c+4209,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_status", false,-1, 4,0);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp minmax_extension_bit", false,-1);
        vcdp->declBus(c+4217,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_result", false,-1, 31,0);
        vcdp->declBus(c+4225,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_status", false,-1, 4,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp cmp_extension_bit", false,-1);
        vcdp->declBus(c+11985,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_status", false,-1, 4,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_extension_bit", false,-1);
        vcdp->declBus(c+4073,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp class_mask_d", false,-1, 9,0);
        vcdp->declBus(c+4105,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp result_d", false,-1, 31,0);
        vcdp->declBus(c+10569,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp status_d", false,-1, 4,0);
        vcdp->declBit(c+4033,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp extension_bit_d", false,-1);
        vcdp->declBit(c+10561,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp is_class_d", false,-1);
        vcdp->declBus(c+4105,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+10569,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+4033,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_extension_bit_q", false,-1, 0,0);
        vcdp->declBus(c+4073,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_class_mask_q", false,-1, 9,0);
        vcdp->declBus(c+10561,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_is_class_q", false,-1, 0,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+11121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_aux_q", false,-1, 0,0);
        vcdp->declBus(c+3753,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4017,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp out_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+4233,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sign_injections sign_a", false,-1);
        vcdp->declBit(c+4241,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp sign_injections sign_b", false,-1);
        vcdp->declBus(c+11993,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a FpFormat", false,-1, 2,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a NumOperands", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+4089,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a operands_i", false,-1, 63,0);
        vcdp->declBus(c+4009,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a is_boxed_i", false,-1, 1,0);
        vcdp->declBus(c+4121,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a info_o", false,-1, 15,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+4249,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+4257,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+4265,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+4273,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+4281,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+4289,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+4297,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+4305,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+4313,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+4321,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] value", false,-1, 31,0);
        vcdp->declBit(c+4329,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_boxed", false,-1);
        vcdp->declBit(c+4337,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_normal", false,-1);
        vcdp->declBit(c+4345,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_inf", false,-1);
        vcdp->declBit(c+4353,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_nan", false,-1);
        vcdp->declBit(c+4361,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_signalling", false,-1);
        vcdp->declBit(c+4369,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_quiet", false,-1);
        vcdp->declBit(c+4377,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_zero", false,-1);
        vcdp->declBit(c+4385,"fpnew_top gen_operation_groups[2] i_opgroup_block gen_parallel_slices[0] active_format i_fmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 lane_instance i_noncomp i_class_a gen_num_values[1] is_subnormal", false,-1);
        vcdp->declBus(c+12001,"fpnew_top gen_operation_groups[3] i_opgroup_block OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block Width", false,-1, 31,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block EnableVectors", false,-1);
        vcdp->declBus(c+12009,"fpnew_top gen_operation_groups[3] i_opgroup_block FpFmtMask", false,-1, 0,4);
        vcdp->declBus(c+12017,"fpnew_top gen_operation_groups[3] i_opgroup_block IntFmtMask", false,-1, 0,3);
        vcdp->declArray(c+12025,"fpnew_top gen_operation_groups[3] i_opgroup_block FmtPipeRegs", false,-1, 159,0);
        vcdp->declBus(c+12065,"fpnew_top gen_operation_groups[3] i_opgroup_block FmtUnitTypes", false,-1, 9,0);
        vcdp->declBus(c+12073,"fpnew_top gen_operation_groups[3] i_opgroup_block PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block NUM_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[3] i_opgroup_block clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[3] i_opgroup_block rst_ni", false,-1);
        vcdp->declArray(c+10249,"fpnew_top gen_operation_groups[3] i_opgroup_block operands_i", false,-1, 95,0);
        vcdp->declBus(c+593,"fpnew_top gen_operation_groups[3] i_opgroup_block is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[3] i_opgroup_block rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[3] i_opgroup_block op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[3] i_opgroup_block op_mod_i", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[3] i_opgroup_block int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block tag_i", false,-1);
        vcdp->declBit(c+585,"fpnew_top gen_operation_groups[3] i_opgroup_block in_valid_i", false,-1);
        vcdp->declBit(c+10609,"fpnew_top gen_operation_groups[3] i_opgroup_block in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block flush_i", false,-1);
        vcdp->declBus(c+4393,"fpnew_top gen_operation_groups[3] i_opgroup_block result_o", false,-1, 31,0);
        vcdp->declBus(c+4401,"fpnew_top gen_operation_groups[3] i_opgroup_block status_o", false,-1, 4,0);
        vcdp->declBit(c+4409,"fpnew_top gen_operation_groups[3] i_opgroup_block extension_bit_o", false,-1);
        vcdp->declBit(c+4417,"fpnew_top gen_operation_groups[3] i_opgroup_block tag_o", false,-1);
        vcdp->declBit(c+4425,"fpnew_top gen_operation_groups[3] i_opgroup_block out_valid_o", false,-1);
        vcdp->declBit(c+4433,"fpnew_top gen_operation_groups[3] i_opgroup_block out_ready_i", false,-1);
        vcdp->declBit(c+4441,"fpnew_top gen_operation_groups[3] i_opgroup_block busy_o", false,-1);
        vcdp->declBus(c+4449,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_in_ready", false,-1, 4,0);
        vcdp->declBus(c+4457,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_out_valid", false,-1, 4,0);
        vcdp->declBus(c+4465,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_out_ready", false,-1, 4,0);
        vcdp->declBus(c+4473,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_busy", false,-1, 4,0);
        vcdp->declArray(c+4481,"fpnew_top gen_operation_groups[3] i_opgroup_block fmt_outputs", false,-1, 194,0);
        vcdp->declQuad(c+4537,"fpnew_top gen_operation_groups[3] i_opgroup_block arbiter_output", false,-1, 38,0);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[0] ANY_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[0] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[1] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[1] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[2] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[2] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[3] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[3] IS_FIRST_MERGED", false,-1);
        vcdp->declBit(c+11297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[4] ANY_MERGED", false,-1);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_parallel_slices[4] IS_FIRST_MERGED", false,-1);
        vcdp->declBus(c+11201,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice FMT", false,-1, 2,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice REG", false,-1, 31,0);
        vcdp->declBit(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice in_valid", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter NumIn", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter DataWidth", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter ExtPrio", false,-1);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter AxiVldRdy", false,-1);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter LockIn", false,-1);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter FairArb", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter IdxWidth", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter rst_ni", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter flush_i", false,-1);
        vcdp->declBus(c+11201,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter rr_i", false,-1, 2,0);
        vcdp->declBus(c+4457,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter req_i", false,-1, 4,0);
        vcdp->declBus(c+4465,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gnt_o", false,-1, 4,0);
        vcdp->declArray(c+4481,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter data_i", false,-1, 194,0);
        vcdp->declBit(c+4425,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter req_o", false,-1);
        vcdp->declBit(c+4433,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gnt_i", false,-1);
        vcdp->declQuad(c+4537,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter data_o", false,-1, 38,0);
        vcdp->declBus(c+4561,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter idx_o", false,-1, 2,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter NumLevels", false,-1, 31,0);
        vcdp->declBus(c+4569,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter index_nodes", false,-1, 20,0);
        vcdp->declArray(c+4577,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter data_nodes", false,-1, 272,0);
        vcdp->declBus(c+4649,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gnt_nodes", false,-1, 6,0);
        vcdp->declBus(c+4657,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter req_nodes", false,-1, 6,0);
        vcdp->declBus(c+10225,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter rr_q", false,-1, 2,0);
        vcdp->declBus(c+4457,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter req_d", false,-1, 4,0);
        vcdp->declBus(c+7193,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr rr_d", false,-1, 2,0);
        vcdp->declBus(c+4665,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_mask", false,-1, 4,0);
        vcdp->declBus(c+4673,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_mask", false,-1, 4,0);
        vcdp->declBus(c+4681,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_idx", false,-1, 2,0);
        vcdp->declBus(c+4689,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_idx", false,-1, 2,0);
        vcdp->declBus(c+4697,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb next_idx", false,-1, 2,0);
        vcdp->declBit(c+4705,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb upper_empty", false,-1);
        vcdp->declBit(c+12081,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb lower_empty", false,-1);
        vcdp->declBit(c+4713,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[0] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4721,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4729,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[1] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4737,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] sel", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[0] Idx1", false,-1, 31,0);
        vcdp->declBit(c+4745,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] sel", false,-1);
        vcdp->declBus(c+11017,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11225,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[1] Idx1", false,-1, 31,0);
        vcdp->declBit(c+12089,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] sel", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[2] Idx1", false,-1, 31,0);
        vcdp->declBit(c+12097,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] sel", false,-1);
        vcdp->declBus(c+11257,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx0", false,-1, 31,0);
        vcdp->declBus(c+11265,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_levels[2] gen_level[3] Idx1", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper MODE", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+4665,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper in_i", false,-1, 4,0);
        vcdp->declBus(c+4681,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper cnt_o", false,-1, 2,0);
        vcdp->declBit(c+4705,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper empty_o", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+361,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+4753,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+4761,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+4769,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_upper gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11065,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower MODE", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+4673,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower in_i", false,-1, 4,0);
        vcdp->declBus(c+4689,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower cnt_o", false,-1, 2,0);
        vcdp->declBit(c+4777,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower empty_o", false,-1);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declBus(c+369,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_lut", false,-1, 14,0);
        vcdp->declBus(c+4785,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc sel_nodes", false,-1, 7,0);
        vcdp->declBus(c+4793,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc index_nodes", false,-1, 23,0);
        vcdp->declBus(c+4801,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc in_tmp", false,-1, 4,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block i_arbiter gen_arbiter gen_int_rr gen_fair_arb i_lzc_lower gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+12105,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice OpGroup", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice Width", false,-1, 31,0);
        vcdp->declBus(c+12113,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+12121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice IntFmtConfig", false,-1, 0,3);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice EnableVectors", false,-1);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+12129,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_OPERANDS", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice rst_ni", false,-1);
        vcdp->declArray(c+10249,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice operands_i", false,-1, 95,0);
        vcdp->declBus(c+593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_i", false,-1, 14,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice op_mod_i", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op_i", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice tag_i", false,-1);
        vcdp->declBit(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice in_valid_i", false,-1);
        vcdp->declBit(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice flush_i", false,-1);
        vcdp->declBus(c+4817,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_o", false,-1, 31,0);
        vcdp->declBus(c+4825,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice status_o", false,-1, 4,0);
        vcdp->declBit(c+4833,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extension_bit_o", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice tag_o", false,-1);
        vcdp->declBit(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice out_valid_o", false,-1);
        vcdp->declBit(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice out_ready_i", false,-1);
        vcdp->declBit(c+4841,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice busy_o", false,-1);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_LANES", false,-1, 31,0);
        vcdp->declBus(c+11017,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice FMT_BITS", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice AUX_BITS", false,-1, 31,0);
        vcdp->declBus(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_in_ready", false,-1, 0,0);
        vcdp->declBus(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_out_valid", false,-1, 0,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice vectorial_op", false,-1);
        vcdp->declBus(c+10617,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt", false,-1, 2,0);
        vcdp->declBus(c+4849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice aux_data", false,-1, 4,0);
        vcdp->declBit(c+10625,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_fmt_is_int", false,-1);
        vcdp->declBit(c+4857,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_is_cpk", false,-1);
        vcdp->declBus(c+10633,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice dst_vec_op", false,-1, 1,0);
        vcdp->declBus(c+10641,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_d", false,-1, 2,0);
        vcdp->declBus(c+12137,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_aux_q", false,-1, 2,0);
        vcdp->declBit(c+4865,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_up_cast", false,-1);
        vcdp->declBit(c+4873,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_down_cast", false,-1);
        vcdp->declArray(c+4881,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice fmt_slice_result", false,-1, 159,0);
        vcdp->declArray(c+4921,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice ifmt_slice_result", false,-1, 127,0);
        vcdp->declBus(c+12145,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_slice_result", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_d", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice conv_target_q", false,-1, 31,0);
        vcdp->declBus(c+10657,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_status", false,-1, 4,0);
        vcdp->declBus(c+4833,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_ext_bit", false,-1, 0,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_tags", false,-1, 0,0);
        vcdp->declBus(c+4849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_aux", false,-1, 4,0);
        vcdp->declBus(c+4841,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice lane_busy", false,-1, 0,0);
        vcdp->declBit(c+4953,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_vector", false,-1);
        vcdp->declBus(c+4961,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt", false,-1, 2,0);
        vcdp->declBit(c+4969,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_fmt_is_int", false,-1);
        vcdp->declBit(c+4977,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_is_cpk", false,-1);
        vcdp->declBus(c+10633,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice result_vec_op", false,-1, 1,0);
        vcdp->declBus(c+4985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_1op", false,-1, 4,0);
        vcdp->declBus(c+4993,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice is_boxed_2op", false,-1, 9,0);
        vcdp->declBus(c+11577,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice boxed_2op unnamedblk1 fmt", false,-1, 31,0);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE", false,-1, 31,0);
        vcdp->declBus(c+12153,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+12161,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] ACTIVE_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] MAX_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+12169,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+12177,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_INT_FORMATS", false,-1, 0,3);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] CONV_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+12185,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] LANE_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] local_result", false,-1, 31,0);
        vcdp->declBit(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane in_valid", false,-1);
        vcdp->declBit(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_valid", false,-1);
        vcdp->declBit(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane out_ready", false,-1);
        vcdp->declArray(c+5009,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane local_operands", false,-1, 95,0);
        vcdp->declBus(c+10665,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_result", false,-1, 31,0);
        vcdp->declBus(c+10673,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane op_status", false,-1, 4,0);
        vcdp->declBus(c+11009,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane prepare_input unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] pack_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] int_results_enabled pack_int_result[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice extend_fp_result[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+10649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_target_q", false,-1, 31,0);
        vcdp->declBus(c+10641,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_aux_q", false,-1, 2,0);
        vcdp->declBus(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+5033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice target_regs byp_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+5041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing temp_status", false,-1, 4,0);
        vcdp->declBus(c+11321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice output_processing unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+12193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi FpFmtConfig", false,-1, 0,4);
        vcdp->declBus(c+12201,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi IntFmtConfig", false,-1, 0,3);
        vcdp->declBus(c+11097,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NumPipeRegs", false,-1, 31,0);
        vcdp->declBus(c+12209,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi PipeConfig", false,-1, 1,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_FORMATS", false,-1, 31,0);
        vcdp->declBit(c+10233,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi clk_i", false,-1);
        vcdp->declBit(c+10241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rst_ni", false,-1);
        vcdp->declBus(c+5049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi operands_i", false,-1, 31,0);
        vcdp->declBus(c+4985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi is_boxed_i", false,-1, 4,0);
        vcdp->declBus(c+10273,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rnd_mode_i", false,-1, 2,0);
        vcdp->declBus(c+10281,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_i", false,-1, 3,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_i", false,-1);
        vcdp->declBus(c+10297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10305,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_i", false,-1, 2,0);
        vcdp->declBus(c+10313,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_i", false,-1, 1,0);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi tag_i", false,-1);
        vcdp->declBus(c+4849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi aux_i", false,-1, 4,0);
        vcdp->declBit(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi in_valid_i", false,-1);
        vcdp->declBit(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi in_ready_o", false,-1);
        vcdp->declBit(c+10353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi flush_i", false,-1);
        vcdp->declBus(c+10665,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_o", false,-1, 31,0);
        vcdp->declBus(c+10673,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi status_o", false,-1, 4,0);
        vcdp->declBit(c+4833,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi extension_bit_o", false,-1);
        vcdp->declBit(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi tag_o", false,-1);
        vcdp->declBus(c+4849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi aux_o", false,-1, 4,0);
        vcdp->declBit(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_valid_o", false,-1);
        vcdp->declBit(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_ready_i", false,-1);
        vcdp->declBit(c+4841,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi busy_o", false,-1);
        vcdp->declBus(c+11017,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi MAX_INT_WIDTH", false,-1, 31,0);
        vcdp->declQuad(c+12217,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_FORMAT", false,-1, 63,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi SUPER_BIAS", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi INT_MAN_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi LZC_RESULT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11225,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi INT_EXP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INP_REGS", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_MID_REGS", false,-1, 31,0);
        vcdp->declBus(c+11385,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_OUT_REGS", false,-1, 31,0);
        vcdp->declBus(c+5049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi operands_q", false,-1, 31,0);
        vcdp->declBus(c+4985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi is_boxed_q", false,-1, 4,0);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_q", false,-1);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10697,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+5049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_operands_q", false,-1, 31,0);
        vcdp->declBus(c+4985,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_is_boxed_q", false,-1, 4,0);
        vcdp->declBus(c+10705,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+10713,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_op_q", false,-1, 3,0);
        vcdp->declBus(c+10289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10697,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+4849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi inp_pipe_ready", false,-1, 0,0);
        vcdp->declBit(c+10721,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_is_int", false,-1);
        vcdp->declBit(c+10729,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_is_int", false,-1);
        vcdp->declBus(c+5057,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi encoded_mant", false,-1, 31,0);
        vcdp->declBus(c+5065,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_sign", false,-1, 4,0);
        vcdp->declQuad(c+5073,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_exponent", false,-1, 44,0);
        vcdp->declArray(c+5089,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_mantissa", false,-1, 159,0);
        vcdp->declQuad(c+377,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_shift_compensation", false,-1, 44,0);
        vcdp->declQuad(c+5129,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi info", false,-1, 39,0);
        vcdp->declArray(c+5145,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_input_val", false,-1, 127,0);
        vcdp->declBit(c+5177,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_sign", false,-1);
        vcdp->declBus(c+5185,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_value", false,-1, 31,0);
        vcdp->declBus(c+5193,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_mantissa", false,-1, 31,0);
        vcdp->declBus(c+5201,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_bias", false,-1, 8,0);
        vcdp->declBus(c+10737,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_exp", false,-1, 8,0);
        vcdp->declBus(c+10745,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_subnormal", false,-1, 8,0);
        vcdp->declBus(c+10753,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_offset", false,-1, 8,0);
        vcdp->declBit(c+5209,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_sign", false,-1);
        vcdp->declBus(c+5217,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_exp", false,-1, 8,0);
        vcdp->declBus(c+5225,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_mant", false,-1, 31,0);
        vcdp->declBit(c+5233,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mant_is_zero", false,-1);
        vcdp->declBus(c+10761,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_input_exp", false,-1, 8,0);
        vcdp->declBus(c+5241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_input_exp", false,-1, 8,0);
        vcdp->declBus(c+5249,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi renorm_shamt", false,-1, 4,0);
        vcdp->declBus(c+5257,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi renorm_shamt_sgn", false,-1, 5,0);
        vcdp->declBus(c+5265,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_exp", false,-1, 8,0);
        vcdp->declBit(c+5209,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_sign_q", false,-1);
        vcdp->declBus(c+5217,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_exp_q", false,-1, 8,0);
        vcdp->declBus(c+5225,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi input_mant_q", false,-1, 31,0);
        vcdp->declBus(c+5265,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_exp_q", false,-1, 8,0);
        vcdp->declBit(c+10721,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_is_int_q", false,-1);
        vcdp->declBit(c+10729,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_is_int_q", false,-1);
        vcdp->declBus(c+5273,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi info_q", false,-1, 7,0);
        vcdp->declBit(c+5233,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mant_is_zero_q", false,-1);
        vcdp->declBit(c+10289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi op_mod_q2", false,-1);
        vcdp->declBus(c+10705,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi src_fmt_q2", false,-1, 2,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi dst_fmt_q2", false,-1, 2,0);
        vcdp->declBus(c+10697,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_fmt_q2", false,-1, 1,0);
        vcdp->declBus(c+5209,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_sign_q", false,-1, 0,0);
        vcdp->declBus(c+5217,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_exp_q", false,-1, 8,0);
        vcdp->declBus(c+5225,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_input_mant_q", false,-1, 31,0);
        vcdp->declBus(c+5265,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dest_exp_q", false,-1, 8,0);
        vcdp->declBus(c+10721,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_src_is_int_q", false,-1, 0,0);
        vcdp->declBus(c+10729,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dst_is_int_q", false,-1, 0,0);
        vcdp->declBus(c+5281,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_info_q", false,-1, 7,0);
        vcdp->declBus(c+5233,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_mant_zero_q", false,-1, 0,0);
        vcdp->declBus(c+10289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_op_mod_q", false,-1, 0,0);
        vcdp->declBus(c+10705,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_rnd_mode_q", false,-1, 2,0);
        vcdp->declBus(c+10681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_src_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_dst_fmt_q", false,-1, 2,0);
        vcdp->declBus(c+10697,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_int_fmt_q", false,-1, 1,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+4849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi mid_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+5289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_exp", false,-1, 8,0);
        vcdp->declArray(c+5297,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi preshift_mant", false,-1, 64,0);
        vcdp->declArray(c+5321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi destination_mant", false,-1, 64,0);
        vcdp->declBus(c+5345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_mant", false,-1, 22,0);
        vcdp->declBus(c+5353,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi final_int", false,-1, 31,0);
        vcdp->declBus(c+5361,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi denorm_shamt", false,-1, 5,0);
        vcdp->declBus(c+5369,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_round_sticky_bits", false,-1, 1,0);
        vcdp->declBus(c+5377,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_round_sticky_bits", false,-1, 1,0);
        vcdp->declBus(c+5385,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi round_sticky_bits", false,-1, 1,0);
        vcdp->declBit(c+5393,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi of_before_round", false,-1);
        vcdp->declBit(c+5401,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi uf_before_round", false,-1);
        vcdp->declBus(c+12233,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_FP_STICKY", false,-1, 31,0);
        vcdp->declBus(c+12241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi NUM_INT_STICKY", false,-1, 31,0);
        vcdp->declBus(c+5409,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi pre_round_abs", false,-1, 31,0);
        vcdp->declBit(c+5417,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi of_after_round", false,-1);
        vcdp->declBit(c+10769,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi uf_after_round", false,-1);
        vcdp->declArray(c+5425,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_pre_round_abs", false,-1, 159,0);
        vcdp->declBus(c+5465,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_of_after_round", false,-1, 4,0);
        vcdp->declBus(c+5473,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_uf_after_round", false,-1, 4,0);
        vcdp->declArray(c+5481,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_pre_round_abs", false,-1, 127,0);
        vcdp->declBit(c+5209,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_sign", false,-1);
        vcdp->declBus(c+5513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_abs", false,-1, 31,0);
        vcdp->declBit(c+5521,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_true_zero", false,-1);
        vcdp->declBus(c+5529,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_int_res", false,-1, 31,0);
        vcdp->declBit(c+5537,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi rounded_int_res_zero", false,-1);
        vcdp->declArray(c+5545,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_result", false,-1, 159,0);
        vcdp->declBus(c+10777,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_special_result", false,-1, 31,0);
        vcdp->declBus(c+5585,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_special_status", false,-1, 4,0);
        vcdp->declBit(c+5593,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_result_is_special", false,-1);
        vcdp->declArray(c+5601,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_special_result", false,-1, 159,0);
        vcdp->declBus(c+10785,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_special_result", false,-1, 31,0);
        vcdp->declBus(c+12249,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_special_status", false,-1, 4,0);
        vcdp->declBit(c+5641,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_result_is_special", false,-1);
        vcdp->declArray(c+5649,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi ifmt_special_result", false,-1, 127,0);
        vcdp->declBus(c+5681,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_regular_status", false,-1, 4,0);
        vcdp->declBus(c+5689,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_regular_status", false,-1, 4,0);
        vcdp->declBus(c+10793,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_result", false,-1, 31,0);
        vcdp->declBus(c+5697,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_result", false,-1, 31,0);
        vcdp->declBus(c+5705,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fp_status", false,-1, 4,0);
        vcdp->declBus(c+5713,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi int_status", false,-1, 4,0);
        vcdp->declBus(c+10665,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi result_d", false,-1, 31,0);
        vcdp->declBus(c+10673,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi status_d", false,-1, 4,0);
        vcdp->declBit(c+4833,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi extension_bit", false,-1);
        vcdp->declBus(c+10665,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_result_q", false,-1, 31,0);
        vcdp->declBus(c+10673,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_status_q", false,-1, 4,0);
        vcdp->declBus(c+4833,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_ext_bit_q", false,-1, 0,0);
        vcdp->declBus(c+10329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_tag_q", false,-1, 0,0);
        vcdp->declBus(c+4849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_aux_q", false,-1, 4,0);
        vcdp->declBus(c+4553,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_valid_q", false,-1, 0,0);
        vcdp->declBus(c+4809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi out_pipe_ready", false,-1, 0,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+12257,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11377,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_extend_int[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+12257,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11377,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_res_assemble[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_int_res_sign_ext[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+12257,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11377,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_sign_inject[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+12265,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] QNAN_EXPONENT", false,-1, 7,0);
        vcdp->declBus(c+12273,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] QNAN_MANTISSA", false,-1, 22,0);
        vcdp->declBus(c+5721,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[0] active_format special_results special_res", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11241,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+12257,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+12281,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] QNAN_EXPONENT", false,-1, 10,0);
        vcdp->declQuad(c+12289,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[1] QNAN_MANTISSA", false,-1, 51,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11377,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+12305,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] QNAN_EXPONENT", false,-1, 4,0);
        vcdp->declBus(c+12313,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[2] QNAN_MANTISSA", false,-1, 9,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+12305,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] QNAN_EXPONENT", false,-1, 4,0);
        vcdp->declBus(c+12321,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[3] QNAN_MANTISSA", false,-1, 1,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] FP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11217,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+12265,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] QNAN_EXPONENT", false,-1, 7,0);
        vcdp->declBus(c+12329,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results[4] QNAN_MANTISSA", false,-1, 6,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[0] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11041,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[1] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[2] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5729,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[2] active_format special_results special_res", false,-1, 31,0);
        vcdp->declBus(c+11033,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi gen_special_results_int[3] INT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc WIDTH", false,-1, 31,0);
        vcdp->declBit(c+11073,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc MODE", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc CNT_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5057,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc in_i", false,-1, 31,0);
        vcdp->declBus(c+5249,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc cnt_o", false,-1, 4,0);
        vcdp->declBit(c+5233,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc empty_o", false,-1);
        vcdp->declBus(c+11025,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc NumLevels", false,-1, 31,0);
        vcdp->declArray(c+393,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc index_lut", false,-1, 159,0);
        vcdp->declBus(c+5737,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc sel_nodes", false,-1, 31,0);
        vcdp->declArray(c+5745,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc index_nodes", false,-1, 159,0);
        vcdp->declBus(c+5785,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc in_tmp", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_lzc gen_lzc flip_vector unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding AbsWidth", false,-1, 31,0);
        vcdp->declBus(c+5409,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding abs_value_i", false,-1, 31,0);
        vcdp->declBit(c+5209,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding sign_i", false,-1);
        vcdp->declBus(c+5385,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding round_sticky_bits_i", false,-1, 1,0);
        vcdp->declBus(c+10705,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding rnd_mode_i", false,-1, 2,0);
        vcdp->declBit(c+11121,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding effective_subtraction_i", false,-1);
        vcdp->declBus(c+5513,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding abs_rounded_o", false,-1, 31,0);
        vcdp->declBit(c+5209,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding sign_o", false,-1);
        vcdp->declBit(c+5521,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding exact_zero_o", false,-1);
        vcdp->declBit(c+10801,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi i_fpnew_rounding round_up", false,-1);
        vcdp->declBus(c+12337,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier FpFormat", false,-1, 2,0);
        vcdp->declBus(c+11105,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier NumOperands", false,-1, 31,0);
        vcdp->declBus(c+11001,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier operands_i", false,-1, 31,0);
        vcdp->declBus(c+5793,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier is_boxed_i", false,-1, 0,0);
        vcdp->declBus(c+5801,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier info_o", false,-1, 7,0);
        vcdp->declBus(c+11049,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier EXP_BITS", false,-1, 31,0);
        vcdp->declBus(c+11345,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier MAN_BITS", false,-1, 31,0);
        vcdp->declBus(c+5809,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] value", false,-1, 31,0);
        vcdp->declBit(c+5817,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_boxed", false,-1);
        vcdp->declBit(c+5825,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_normal", false,-1);
        vcdp->declBit(c+5833,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_inf", false,-1);
        vcdp->declBit(c+5841,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_nan", false,-1);
        vcdp->declBit(c+5849,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_signalling", false,-1);
        vcdp->declBit(c+5857,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_quiet", false,-1);
        vcdp->declBit(c+5865,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_zero", false,-1);
        vcdp->declBit(c+5873,"fpnew_top gen_operation_groups[3] i_opgroup_block gen_merged_slice i_multifmt_slice gen_num_lanes[0] active_lane genblk1 genblk1 genblk1 lane_instance i_fpnew_cast_multi fmt_init_inputs[0] active_format i_fpnew_classifier gen_num_values[0] is_subnormal", false,-1);
        vcdp->declBus(c+11025,"fpnew_pkg NUM_FP_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11009,"fpnew_pkg FP_FORMAT_BITS", false,-1, 31,0);
        vcdp->declArray(c+12345,"fpnew_pkg FP_ENCODINGS", false,-1, 319,0);
        vcdp->declBus(c+12425,"fpnew_pkg CPK_FORMATS", false,-1, 0,4);
        vcdp->declBus(c+11017,"fpnew_pkg NUM_INT_FORMATS", false,-1, 31,0);
        vcdp->declBus(c+11057,"fpnew_pkg INT_FORMAT_BITS", false,-1, 31,0);
        vcdp->declBus(c+11017,"fpnew_pkg NUM_OPGROUPS", false,-1, 31,0);
        vcdp->declBus(c+11017,"fpnew_pkg OP_BITS", false,-1, 31,0);
        vcdp->declQuad(c+12433,"fpnew_pkg RV64D", false,-1, 42,0);
        vcdp->declQuad(c+12449,"fpnew_pkg RV32D", false,-1, 42,0);
        vcdp->declQuad(c+12465,"fpnew_pkg RV32F", false,-1, 42,0);
        vcdp->declQuad(c+12481,"fpnew_pkg RV64D_Xsflt", false,-1, 42,0);
        vcdp->declQuad(c+12497,"fpnew_pkg RV32F_Xsflt", false,-1, 42,0);
        vcdp->declQuad(c+12513,"fpnew_pkg RV32F_Xf16alt_Xfvec", false,-1, 42,0);
        vcdp->declArray(c+12529,"fpnew_pkg DEFAULT_NOREGS", false,-1, 681,0);
        vcdp->declArray(c+12705,"fpnew_pkg DEFAULT_SNITCH", false,-1, 681,0);
        vcdp->declBit(c+11297,"fpnew_pkg DONT_CARE", false,-1);
        vcdp->declBus(c+12881,"defs_div_sqrt_mvp C_RM", false,-1, 31,0);
        vcdp->declBus(c+11201,"defs_div_sqrt_mvp C_RM_NEAREST", false,-1, 2,0);
        vcdp->declBus(c+12889,"defs_div_sqrt_mvp C_RM_TRUNC", false,-1, 2,0);
        vcdp->declBus(c+12897,"defs_div_sqrt_mvp C_RM_PLUSINF", false,-1, 2,0);
        vcdp->declBus(c+12905,"defs_div_sqrt_mvp C_RM_MINUSINF", false,-1, 2,0);
        vcdp->declBus(c+12913,"defs_div_sqrt_mvp C_PC", false,-1, 31,0);
        vcdp->declBus(c+12921,"defs_div_sqrt_mvp C_FS", false,-1, 31,0);
        vcdp->declBus(c+12921,"defs_div_sqrt_mvp C_IUNC", false,-1, 31,0);
        vcdp->declBus(c+12321,"defs_div_sqrt_mvp Iteration_unit_num_S", false,-1, 1,0);
        vcdp->declBus(c+12929,"defs_div_sqrt_mvp C_OP_FP64", false,-1, 31,0);
        vcdp->declBus(c+12937,"defs_div_sqrt_mvp C_MANT_FP64", false,-1, 31,0);
        vcdp->declBus(c+12945,"defs_div_sqrt_mvp C_EXP_FP64", false,-1, 31,0);
        vcdp->declBus(c+12953,"defs_div_sqrt_mvp C_BIAS_FP64", false,-1, 31,0);
        vcdp->declBus(c+12961,"defs_div_sqrt_mvp C_BIAS_AONE_FP64", false,-1, 10,0);
        vcdp->declBus(c+12969,"defs_div_sqrt_mvp C_HALF_BIAS_FP64", false,-1, 31,0);
        vcdp->declBus(c+12977,"defs_div_sqrt_mvp C_EXP_ZERO_FP64", false,-1, 10,0);
        vcdp->declBus(c+12985,"defs_div_sqrt_mvp C_EXP_ONE_FP64", false,-1, 12,0);
        vcdp->declBus(c+12281,"defs_div_sqrt_mvp C_EXP_INF_FP64", false,-1, 10,0);
        vcdp->declQuad(c+12993,"defs_div_sqrt_mvp C_MANT_ZERO_FP64", false,-1, 51,0);
        vcdp->declQuad(c+12289,"defs_div_sqrt_mvp C_MANT_NAN_FP64", false,-1, 51,0);
        vcdp->declQuad(c+13009,"defs_div_sqrt_mvp C_PZERO_FP64", false,-1, 63,0);
        vcdp->declQuad(c+13025,"defs_div_sqrt_mvp C_MZERO_FP64", false,-1, 63,0);
        vcdp->declQuad(c+13041,"defs_div_sqrt_mvp C_QNAN_FP64", false,-1, 63,0);
        vcdp->declBus(c+13057,"defs_div_sqrt_mvp C_OP_FP32", false,-1, 31,0);
        vcdp->declBus(c+13065,"defs_div_sqrt_mvp C_MANT_FP32", false,-1, 31,0);
        vcdp->declBus(c+13073,"defs_div_sqrt_mvp C_EXP_FP32", false,-1, 31,0);
        vcdp->declBus(c+13081,"defs_div_sqrt_mvp C_BIAS_FP32", false,-1, 31,0);
        vcdp->declBus(c+13089,"defs_div_sqrt_mvp C_BIAS_AONE_FP32", false,-1, 7,0);
        vcdp->declBus(c+13097,"defs_div_sqrt_mvp C_HALF_BIAS_FP32", false,-1, 31,0);
        vcdp->declBus(c+13105,"defs_div_sqrt_mvp C_EXP_ZERO_FP32", false,-1, 7,0);
        vcdp->declBus(c+12265,"defs_div_sqrt_mvp C_EXP_INF_FP32", false,-1, 7,0);
        vcdp->declBus(c+13113,"defs_div_sqrt_mvp C_MANT_ZERO_FP32", false,-1, 22,0);
        vcdp->declBus(c+11385,"defs_div_sqrt_mvp C_PZERO_FP32", false,-1, 31,0);
        vcdp->declBus(c+13121,"defs_div_sqrt_mvp C_MZERO_FP32", false,-1, 31,0);
        vcdp->declBus(c+13129,"defs_div_sqrt_mvp C_QNAN_FP32", false,-1, 31,0);
        vcdp->declBus(c+13137,"defs_div_sqrt_mvp C_OP_FP16", false,-1, 31,0);
        vcdp->declBus(c+13145,"defs_div_sqrt_mvp C_MANT_FP16", false,-1, 31,0);
        vcdp->declBus(c+13153,"defs_div_sqrt_mvp C_EXP_FP16", false,-1, 31,0);
        vcdp->declBus(c+13161,"defs_div_sqrt_mvp C_BIAS_FP16", false,-1, 31,0);
        vcdp->declBus(c+12249,"defs_div_sqrt_mvp C_BIAS_AONE_FP16", false,-1, 4,0);
        vcdp->declBus(c+13169,"defs_div_sqrt_mvp C_HALF_BIAS_FP16", false,-1, 31,0);
        vcdp->declBus(c+11985,"defs_div_sqrt_mvp C_EXP_ZERO_FP16", false,-1, 4,0);
        vcdp->declBus(c+12305,"defs_div_sqrt_mvp C_EXP_INF_FP16", false,-1, 4,0);
        vcdp->declBus(c+13177,"defs_div_sqrt_mvp C_MANT_ZERO_FP16", false,-1, 9,0);
        vcdp->declBus(c+13185,"defs_div_sqrt_mvp C_PZERO_FP16", false,-1, 15,0);
        vcdp->declBus(c+13193,"defs_div_sqrt_mvp C_MZERO_FP16", false,-1, 15,0);
        vcdp->declBus(c+13201,"defs_div_sqrt_mvp C_QNAN_FP16", false,-1, 15,0);
        vcdp->declBus(c+13137,"defs_div_sqrt_mvp C_OP_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+13169,"defs_div_sqrt_mvp C_MANT_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+13073,"defs_div_sqrt_mvp C_EXP_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+13081,"defs_div_sqrt_mvp C_BIAS_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+13089,"defs_div_sqrt_mvp C_BIAS_AONE_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+13097,"defs_div_sqrt_mvp C_HALF_BIAS_FP16ALT", false,-1, 31,0);
        vcdp->declBus(c+13105,"defs_div_sqrt_mvp C_EXP_ZERO_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+12265,"defs_div_sqrt_mvp C_EXP_INF_FP16ALT", false,-1, 7,0);
        vcdp->declBus(c+13209,"defs_div_sqrt_mvp C_MANT_ZERO_FP16ALT", false,-1, 6,0);
        vcdp->declBus(c+13217,"defs_div_sqrt_mvp C_QNAN_FP16ALT", false,-1, 15,0);
    }
}

void Vfpnew_top::traceFullThis__1(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp859[3];
    WData/*95:0*/ __Vtemp860[3];
    WData/*95:0*/ __Vtemp861[3];
    WData/*95:0*/ __Vtemp864[3];
    WData/*95:0*/ __Vtemp869[3];
    WData/*127:0*/ __Vtemp871[4];
    WData/*127:0*/ __Vtemp872[4];
    WData/*127:0*/ __Vtemp875[4];
    WData/*127:0*/ __Vtemp876[4];
    WData/*703:0*/ __Vtemp878[22];
    WData/*159:0*/ __Vtemp879[5];
    WData/*159:0*/ __Vtemp880[5];
    WData/*159:0*/ __Vtemp881[5];
    WData/*159:0*/ __Vtemp882[5];
    WData/*703:0*/ __Vtemp884[22];
    WData/*703:0*/ __Vtemp885[22];
    WData/*319:0*/ __Vtemp883[10];
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),8);
        vcdp->fullBus(c+9,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),8);
        vcdp->fullBit(c+17,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+25,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullBus(c+33,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+41,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+49,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result),32);
        vcdp->fullArray(c+57,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut),306);
        vcdp->fullBus(c+137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullArray(c+153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result),128);
        vcdp->fullArray(c+185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut),318);
        vcdp->fullArray(c+265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut),318);
        vcdp->fullBus(c+345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullBus(c+369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->fullQuad(c+377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation),45);
        vcdp->fullArray(c+393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut),160);
        vcdp->fullBus(c+433,(vlTOPp->fpnew_top__DOT__opgrp_in_ready),4);
        vcdp->fullBus(c+441,(vlTOPp->fpnew_top__DOT__opgrp_out_valid),4);
        vcdp->fullBus(c+449,(vlTOPp->fpnew_top__DOT__opgrp_out_ready),4);
        vcdp->fullBus(c+457,(vlTOPp->fpnew_top__DOT__opgrp_ext),4);
        vcdp->fullBus(c+465,(vlTOPp->fpnew_top__DOT__opgrp_busy),4);
        vcdp->fullArray(c+473,(vlTOPp->fpnew_top__DOT__opgrp_outputs),152);
        vcdp->fullBus(c+513,(vlTOPp->fpnew_top__DOT__is_boxed),15);
        vcdp->fullQuad(c+521,((VL_ULL(0x3fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),38);
        vcdp->fullBit(c+537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
        vcdp->fullBus(c+545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed),15);
        vcdp->fullBit(c+553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid));
        vcdp->fullBus(c+561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__input_boxed),10);
        vcdp->fullBit(c+569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid));
        vcdp->fullBus(c+577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed),10);
        vcdp->fullBit(c+585,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid));
        vcdp->fullBus(c+593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__input_boxed),15);
        vcdp->fullBus(c+601,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
        vcdp->fullBus(c+609,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
        vcdp->fullArray(c+617,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),114);
        vcdp->fullBus(c+649,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
        vcdp->fullBus(c+657,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
        vcdp->fullBus(c+665,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),4);
        vcdp->fullBus(c+673,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),4);
        vcdp->fullBus(c+681,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
        vcdp->fullBus(c+689,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
        vcdp->fullBus(c+697,((3U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
        vcdp->fullBit(c+705,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+713,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+721,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+729,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+737,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
        vcdp->fullBus(c+745,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
        vcdp->fullBus(c+753,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),4);
        vcdp->fullBit(c+761,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+769,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
        vcdp->fullBus(c+777,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
        vcdp->fullBus(c+785,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),4);
        vcdp->fullBus(c+793,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                               << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 7U))),32);
        vcdp->fullBus(c+801,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 2U)))),5);
        vcdp->fullBit(c+809,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 1U))));
        vcdp->fullBit(c+817,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+825,((1U & (IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready))));
        vcdp->fullBus(c+833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullQuad(c+849,((VL_ULL(0x7fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullArray(c+865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBit(c+945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+969,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed))),3);
        vcdp->fullBit(c+977,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        vcdp->fullArray(c+993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),96);
        vcdp->fullBus(c+1017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+1025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o),24);
        vcdp->fullBus(c+1033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a_fpx1),32);
        vcdp->fullBus(c+1041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b_fpx1),32);
        vcdp->fullBus(c+1049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c_fpx1),32);
        vcdp->fullBus(c+1057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a_fpx1),8);
        vcdp->fullBus(c+1065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b_fpx1),8);
        vcdp->fullBus(c+1073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c_fpx1),8);
        vcdp->fullBit(c+1081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf_fpx1));
        vcdp->fullBit(c+1089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan_fpx1));
        vcdp->fullBit(c+1097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__signalling_nan_fpx1));
        vcdp->fullBit(c+1105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx1));
        vcdp->fullBit(c+1113,((1U & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a_fpx1 
                                      ^ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b_fpx1) 
                                     >> 0x1fU))));
        vcdp->fullBus(c+1121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result_fpx1),32);
        vcdp->fullBus(c+1129,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status_fpx1),5);
        vcdp->fullBit(c+1137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special_fpx1));
        vcdp->fullBus(c+1145,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a_fpx1 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1153,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b_fpx1 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1161,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                      (0xffU 
                                                       & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c_fpx1 
                                                          >> 0x17U))))),10);
        vcdp->fullBus(c+1169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend_fpx1),10);
        vcdp->fullBus(c+1177,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product_fpx1),10);
        vcdp->fullBus(c+1185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference_fpx1),10);
        vcdp->fullBus(c+1193,((VL_LTS_III(1,32,32, 0U, 
                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference_fpx1)))
                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend_fpx1)
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product_fpx1))),10);
        vcdp->fullBus(c+1201,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt_fpx1),7);
        vcdp->fullBus(c+1209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_a_fpx1),24);
        vcdp->fullBus(c+1217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_b_fpx1),24);
        vcdp->fullBus(c+1225,(((0x800000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c_fpx1) 
                                             << 0x10U)) 
                               | (0x7fffffU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c_fpx1))),24);
        vcdp->fullQuad(c+1233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__product_fpx1),48);
        VL_EXTEND_WQ(76,48, __Vtemp859, vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__product_fpx1);
        VL_SHIFTL_WWI(76,76,32, __Vtemp860, __Vtemp859, 2U);
        __Vtemp861[0U] = __Vtemp860[0U];
        __Vtemp861[1U] = __Vtemp860[1U];
        __Vtemp861[2U] = (0xfffU & __Vtemp860[2U]);
        vcdp->fullArray(c+1249,(__Vtemp861),76);
        vcdp->fullBus(c+1273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__norm_shamt_fpx3),7);
        vcdp->fullBus(c+1281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__normalized_exponent_fpx3),10);
        vcdp->fullArray(c+1289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_shifted_fpx3),77);
        vcdp->fullBus(c+1313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa_fpx3),25);
        vcdp->fullQuad(c+1321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits_fpx3),51);
        vcdp->fullBus(c+1337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent_fpx3),10);
        vcdp->fullBus(c+1345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status_fpx4),5);
        vcdp->fullBus(c+1353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+1361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+1369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+1377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+1385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+1393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+1401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+1409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+1417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBus(c+1425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value),32);
        vcdp->fullBit(c+1433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed));
        vcdp->fullBit(c+1441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal));
        vcdp->fullBit(c+1449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf));
        vcdp->fullBit(c+1457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan));
        vcdp->fullBit(c+1465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling));
        vcdp->fullBit(c+1473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet));
        vcdp->fullBit(c+1481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero));
        vcdp->fullBit(c+1489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal));
        vcdp->fullBus(c+1497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value),32);
        vcdp->fullBit(c+1505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed));
        vcdp->fullBit(c+1513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal));
        vcdp->fullBit(c+1521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf));
        vcdp->fullBit(c+1529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan));
        vcdp->fullBit(c+1537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling));
        vcdp->fullBit(c+1545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet));
        vcdp->fullBit(c+1553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero));
        vcdp->fullBit(c+1561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal));
        vcdp->fullBus(c+1569,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+1577,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+1585,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+1593,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+1601,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+1609,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                     >> 1U))));
        vcdp->fullBit(c+1617,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+1625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+1633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+1641,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+1649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullQuad(c+1657,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBit(c+1673,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->fullBus(c+1681,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+1689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+1697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+1769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+1777,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+1785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+1793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+1801,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+1809,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+1817,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+1825,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+1833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+1857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+1865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+1873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+1881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+1889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+1897,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+1905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+1913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+1921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+1929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready));
        vcdp->fullBus(c+1937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o),5);
        vcdp->fullBit(c+1945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid));
        vcdp->fullBit(c+1953,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBit(c+1961,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid) 
                               | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy) 
                                  | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)))));
        vcdp->fullBit(c+1969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast));
        vcdp->fullBit(c+1977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast));
        vcdp->fullArray(c+1985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result),160);
        vcdp->fullBus(c+2025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op),5);
        vcdp->fullBus(c+2033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op),10);
        vcdp->fullQuad(c+2041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),64);
        vcdp->fullBus(c+2057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+2065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt),2);
        vcdp->fullArray(c+2073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands),128);
        vcdp->fullBit(c+2105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid));
        vcdp->fullBit(c+2113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid));
        vcdp->fullBit(c+2121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__op_starting));
        vcdp->fullBit(c+2129,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_result));
        vcdp->fullBit(c+2137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held));
        vcdp->fullBit(c+2145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy));
        vcdp->fullBus(c+2153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d),2);
        vcdp->fullQuad(c+2161,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))),64);
        vcdp->fullQuad(c+2177,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))),64);
        vcdp->fullBit(c+2193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S));
        vcdp->fullBit(c+2201,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB));
        vcdp->fullBit(c+2209,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D))));
        vcdp->fullBit(c+2217,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D))));
        vcdp->fullBus(c+2225,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D),11);
        vcdp->fullBus(c+2233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D),11);
        vcdp->fullQuad(c+2241,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D),52);
        vcdp->fullQuad(c+2257,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D),52);
        vcdp->fullQuad(c+2273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D),53);
        vcdp->fullQuad(c+2289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D),53);
        vcdp->fullBit(c+2305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D));
        vcdp->fullBit(c+2313,((1U & ((2U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
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
        vcdp->fullBit(c+2321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_prenorm_zero_S));
        vcdp->fullBit(c+2329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_prenorm_zero_S));
        vcdp->fullBit(c+2337,((1U & (~ (IData)((0U 
                                                != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D)))))));
        vcdp->fullBit(c+2345,((1U & (~ (IData)((0U 
                                                != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D)))))));
        vcdp->fullBit(c+2353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S));
        vcdp->fullBit(c+2361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S));
        vcdp->fullBit(c+2369,((1U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
                                              >> 0x33U)) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D))))))));
        vcdp->fullBit(c+2377,(((~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
                                           >> 0x33U))) 
                               & (0U != (VL_ULL(0x7ffffffffffff) 
                                         & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D)))));
        vcdp->fullBit(c+2385,((1U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
                                              >> 0x33U)) 
                                     & (~ (IData)((0U 
                                                   != 
                                                   (VL_ULL(0x7ffffffffffff) 
                                                    & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D))))))));
        vcdp->fullBit(c+2393,(((~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
                                           >> 0x33U))) 
                               & (0U != (VL_ULL(0x7ffffffffffff) 
                                         & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D)))));
        vcdp->fullBit(c+2401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SN));
        vcdp->fullBit(c+2409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SN));
        vcdp->fullBit(c+2417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SN));
        vcdp->fullBit(c+2425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SN));
        vcdp->fullBit(c+2433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN));
        vcdp->fullBit(c+2441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN));
        vcdp->fullBus(c+2449,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+2457,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBit(c+2465,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+2473,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullQuad(c+2481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+2497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullQuad(c+2593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp),53);
        vcdp->fullQuad(c+2609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+2625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullQuad(c+2721,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp),53);
        vcdp->fullBit(c+2737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S));
        vcdp->fullBus(c+2745,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 3U))),2);
        vcdp->fullBus(c+2753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_0),3);
        vcdp->fullBus(c+2761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_1),5);
        vcdp->fullBus(c+2769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_2),8);
        vcdp->fullBus(c+2777,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_3),11);
        vcdp->fullBus(c+2785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_4),14);
        vcdp->fullBus(c+2793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_5),17);
        vcdp->fullBus(c+2801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_6),20);
        vcdp->fullBus(c+2809,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_7),23);
        vcdp->fullBus(c+2817,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_8),26);
        vcdp->fullBus(c+2825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_9),29);
        vcdp->fullBus(c+2833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_10),32);
        vcdp->fullQuad(c+2841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_11),35);
        vcdp->fullQuad(c+2857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_12),38);
        vcdp->fullQuad(c+2873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_13),41);
        vcdp->fullQuad(c+2889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_14),44);
        vcdp->fullQuad(c+2905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_15),47);
        vcdp->fullQuad(c+2921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_16),50);
        vcdp->fullQuad(c+2937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_17),53);
        vcdp->fullQuad(c+2953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_18),56);
        vcdp->fullBus(c+2969,(((4U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)) | (3U 
                                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                    >> 1U)))),4);
        vcdp->fullQuad(c+2977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q0),58);
        vcdp->fullQuad(c+2993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0),58);
        vcdp->fullQuad(c+3009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_0),58);
        vcdp->fullQuad(c+3025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q1),58);
        vcdp->fullQuad(c+3041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1),58);
        vcdp->fullQuad(c+3057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_1),58);
        vcdp->fullQuad(c+3073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q2),58);
        vcdp->fullQuad(c+3089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2),58);
        vcdp->fullQuad(c+3105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_2),58);
        vcdp->fullQuad(c+3121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[0]),58);
        vcdp->fullQuad(c+3123,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[1]),58);
        vcdp->fullQuad(c+3125,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[2]),58);
        vcdp->fullQuad(c+3127,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[3]),58);
        vcdp->fullQuad(c+3185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[0]),58);
        vcdp->fullQuad(c+3187,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[1]),58);
        vcdp->fullQuad(c+3189,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[2]),58);
        vcdp->fullQuad(c+3191,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[3]),58);
        vcdp->fullQuad(c+3249,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[0]),58);
        vcdp->fullQuad(c+3251,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[1]),58);
        vcdp->fullQuad(c+3253,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[2]),58);
        vcdp->fullQuad(c+3255,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[3]),58);
        vcdp->fullBit(c+3313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[0]));
        vcdp->fullBit(c+3314,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[1]));
        vcdp->fullBit(c+3315,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[2]));
        vcdp->fullBit(c+3316,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[3]));
        vcdp->fullQuad(c+3345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[0]),58);
        vcdp->fullQuad(c+3347,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[1]),58);
        vcdp->fullQuad(c+3349,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[2]),58);
        vcdp->fullQuad(c+3351,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[3]),58);
        vcdp->fullQuad(c+3409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[0]),58);
        vcdp->fullQuad(c+3411,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[1]),58);
        vcdp->fullQuad(c+3413,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[2]),58);
        vcdp->fullQuad(c+3415,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[3]),58);
        vcdp->fullBus(c+3473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S),4);
        vcdp->fullBit(c+3481,((1U & (~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                [0U] 
                                                >> 0x39U))))));
        vcdp->fullBit(c+3489,((1U & (~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                [1U] 
                                                >> 0x39U))))));
        vcdp->fullQuad(c+3497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [0U]),58);
        vcdp->fullQuad(c+3513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [0U]),58);
        vcdp->fullQuad(c+3529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [1U]),58);
        vcdp->fullQuad(c+3545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [1U]),58);
        vcdp->fullQuad(c+3561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                               [2U]),58);
        vcdp->fullQuad(c+3577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                               [2U]),58);
        vcdp->fullBus(c+3593,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+3601,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+3609,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+3617,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+3625,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+3633,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                     >> 2U))));
        vcdp->fullBit(c+3641,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+3649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+3657,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+3665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+3673,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullArray(c+3681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullQuad(c+3737,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBit(c+3753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->fullBus(c+3761,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+3769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+3777,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+3849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+3857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+3865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+3873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+3881,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+3889,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+3897,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+3905,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+3913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+3921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+3929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+3937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+3945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+3953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+3961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+3969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+3977,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+3985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+3993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+4001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBus(c+4009,((3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed))),2);
        vcdp->fullBit(c+4017,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+4025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        vcdp->fullBit(c+4033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d));
        vcdp->fullBit(c+4041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->fullBus(c+4049,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                : VL_NEGATE_I((IData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d))))),32);
        vcdp->fullBus(c+4057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d),32);
        vcdp->fullBus(c+4065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result),32);
        vcdp->fullBus(c+4073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d),10);
        vcdp->fullBit(c+4081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_sign));
        vcdp->fullQuad(c+4089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),64);
        vcdp->fullBus(c+4105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),32);
        vcdp->fullBus(c+4113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+4121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o),16);
        vcdp->fullBus(c+4129,((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)),32);
        vcdp->fullBus(c+4137,((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                       >> 0x20U))),32);
        vcdp->fullBus(c+4145,((0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))),8);
        vcdp->fullBus(c+4153,((0xffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                        >> 8U))),8);
        vcdp->fullBit(c+4161,((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                      >> 4U) | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                                >> 0xcU)))));
        vcdp->fullBit(c+4169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__any_operand_nan));
        vcdp->fullBit(c+4177,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__signalling_nan));
        vcdp->fullBit(c+4185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operands_equal));
        vcdp->fullBit(c+4193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller));
        vcdp->fullBus(c+4201,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result),32);
        vcdp->fullBus(c+4209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status),5);
        vcdp->fullBus(c+4217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),32);
        vcdp->fullBus(c+4225,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status),5);
        vcdp->fullBit(c+4233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_a));
        vcdp->fullBit(c+4241,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_b));
        vcdp->fullBus(c+4249,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+4257,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+4265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+4273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+4281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+4289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+4297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+4305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+4313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBus(c+4321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__value),32);
        vcdp->fullBit(c+4329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed));
        vcdp->fullBit(c+4337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_normal));
        vcdp->fullBit(c+4345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_inf));
        vcdp->fullBit(c+4353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_nan));
        vcdp->fullBit(c+4361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling));
        vcdp->fullBit(c+4369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet));
        vcdp->fullBit(c+4377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_zero));
        vcdp->fullBit(c+4385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal));
        vcdp->fullBus(c+4393,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 7U))),32);
        vcdp->fullBus(c+4401,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1eU) 
                                        | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 2U)))),5);
        vcdp->fullBit(c+4409,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                     >> 1U))));
        vcdp->fullBit(c+4417,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->fullBit(c+4425,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullBit(c+4433,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                     >> 3U))));
        vcdp->fullBit(c+4441,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->fullBus(c+4449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->fullBus(c+4457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+4465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->fullBus(c+4473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->fullArray(c+4481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullQuad(c+4537,((VL_ULL(0x7fffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->fullBit(c+4553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->fullBus(c+4561,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+4569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullArray(c+4577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->fullBus(c+4649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->fullBus(c+4657,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+4665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBus(c+4673,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+4681,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+4689,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+4697,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+4705,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+4713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4721,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBit(c+4737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+4745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+4753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+4761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+4769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+4777,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+4785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+4793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBus(c+4801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBit(c+4809,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->fullBus(c+4817,(((0x10U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                               (3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))]
                                : ((0x9fU >= (0xe0U 
                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                                 << 5U)))
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                   (7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))]
                                    : 0U))),32);
        vcdp->fullBus(c+4825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o),5);
        vcdp->fullBit(c+4833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__extension_bit));
        vcdp->fullBit(c+4841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->fullBus(c+4849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data),5);
        vcdp->fullBit(c+4857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
        vcdp->fullBit(c+4865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast));
        vcdp->fullBit(c+4873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast));
        vcdp->fullArray(c+4881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result),160);
        vcdp->fullArray(c+4921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result),128);
        vcdp->fullBit(c+4953,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                     >> 3U))));
        vcdp->fullBus(c+4961,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))),3);
        vcdp->fullBit(c+4969,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                     >> 4U))));
        vcdp->fullBit(c+4977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
        vcdp->fullBus(c+4985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op),5);
        vcdp->fullBus(c+4993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op),10);
        vcdp->fullBus(c+5001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result),32);
        vcdp->fullArray(c+5009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),96);
        vcdp->fullBit(c+5033,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready) 
                                     & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                        >> 3U)))));
        vcdp->fullBus(c+5041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->fullBus(c+5049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U]),32);
        vcdp->fullBus(c+5057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant),32);
        vcdp->fullBus(c+5065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign),5);
        vcdp->fullQuad(c+5073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent),45);
        vcdp->fullArray(c+5089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa),160);
        vcdp->fullQuad(c+5129,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info),40);
        vcdp->fullArray(c+5145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val),128);
        vcdp->fullBit(c+5177,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign));
        vcdp->fullBus(c+5185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value),32);
        vcdp->fullBus(c+5193,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign)
                                ? VL_NEGATE_I(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value)
                                : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value)),32);
        vcdp->fullBus(c+5201,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias),9);
        vcdp->fullBit(c+5209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign));
        vcdp->fullBus(c+5217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp),9);
        vcdp->fullBus(c+5225,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
                               << (0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))),32);
        vcdp->fullBit(c+5233,((1U & (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))));
        vcdp->fullBus(c+5241,((0x1ffU & ((IData)(0x1fU) 
                                         - (0x1fU & 
                                            vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])))),9);
        vcdp->fullBus(c+5249,((0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        vcdp->fullBus(c+5257,((0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+5265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp),9);
        vcdp->fullBus(c+5273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        vcdp->fullBus(c+5281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        vcdp->fullBus(c+5289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp),9);
        vcdp->fullArray(c+5297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant),65);
        vcdp->fullArray(c+5321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant),65);
        vcdp->fullBus(c+5345,((0x7fffffU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                             << 0x17U) 
                                            | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                               >> 9U)))),23);
        vcdp->fullBus(c+5353,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                << 0x1fU) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                             >> 1U))),32);
        vcdp->fullBus(c+5361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt),6);
        vcdp->fullBus(c+5369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits),2);
        vcdp->fullBus(c+5377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits),2);
        vcdp->fullBus(c+5385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits),2);
        vcdp->fullBit(c+5393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round));
        vcdp->fullBit(c+5401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round));
        vcdp->fullBus(c+5409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs),32);
        vcdp->fullBit(c+5417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round));
        vcdp->fullArray(c+5425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_pre_round_abs),160);
        vcdp->fullBus(c+5465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round),5);
        vcdp->fullBus(c+5473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round),5);
        vcdp->fullArray(c+5481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs),128);
        vcdp->fullBus(c+5513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs),32);
        vcdp->fullBit(c+5521,(((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs) 
                               & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))));
        vcdp->fullBus(c+5529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res),32);
        vcdp->fullBit(c+5537,((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res)));
        vcdp->fullArray(c+5545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result),160);
        vcdp->fullBus(c+5585,((0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                        << 2U))),5);
        vcdp->fullBit(c+5593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special));
        vcdp->fullArray(c+5601,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result),160);
        vcdp->fullBit(c+5641,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special));
        vcdp->fullArray(c+5649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result),128);
        vcdp->fullBus(c+5681,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits))),5);
        vcdp->fullBus(c+5689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status),5);
        vcdp->fullBus(c+5697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result),32);
        vcdp->fullBus(c+5705,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                ? (0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                            << 2U))
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status))),5);
        vcdp->fullBus(c+5713,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                ? 0x10U : (0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))),5);
        vcdp->fullBus(c+5721,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        vcdp->fullBus(c+5729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        vcdp->fullBus(c+5737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes),32);
        vcdp->fullArray(c+5745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes),160);
        vcdp->fullBus(c+5785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),32);
        vcdp->fullBit(c+5793,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op))));
        vcdp->fullBus(c+5801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
        vcdp->fullBus(c+5809,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->fullBit(c+5817,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->fullBit(c+5825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->fullBit(c+5833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->fullBit(c+5841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->fullBit(c+5849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->fullBit(c+5857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->fullBit(c+5865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->fullBit(c+5873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->fullBit(c+5881,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->fullArray(c+5889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullBus(c+5945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->fullBus(c+5953,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__valid_fpx4)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special_fpx4)
                                    ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status_fpx4)
                                    : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status_fpx4))
                                : 0U)),5);
        vcdp->fullBus(c+5961,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special_fpx4)
                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status_fpx4)
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status_fpx4))),5);
        vcdp->fullBus(c+5969,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->fullBus(c+5977,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),7);
        vcdp->fullBit(c+5985,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBit(c+5993,(((0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits_fpx3) 
                               | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sticky_before_add_fpx3))));
        vcdp->fullQuad(c+6001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->fullArray(c+6017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->fullBus(c+6113,((7U & ((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+6121,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                    ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                                    : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO))
                                : 0U)),5);
        vcdp->fullBus(c+6129,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                                    : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result)
                                : 0xffffffffU)),32);
        vcdp->fullBus(c+6137,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                                : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result)),32);
        vcdp->fullBus(c+6145,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO))),5);
        vcdp->fullBus(c+6153,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->fullBus(c+6161,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->fullBus(c+6169,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+6177,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->fullBus(c+6185,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                      : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->fullBit(c+6193,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+6201,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+6209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullBit(c+6217,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->fullBus(c+6225,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->fullBus(c+6233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->fullArray(c+6241,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->fullBus(c+6297,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                             >> 1U) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+6305,(((0x10U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                               (3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))]
                                : ((0x9fU >= (0xe0U 
                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                                 << 5U)))
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                   (7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))]
                                    : 0U))),32);
        vcdp->fullBit(c+6313,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
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
        vcdp->fullBit(c+6321,((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
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
        vcdp->fullQuad(c+6329,((VL_ULL(0x1fffffffffffff) 
                                & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                    & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                    ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D 
                                       << (0x3fU & 
                                           vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))
                                    : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP))),53);
        vcdp->fullBus(c+6345,((0xfffU & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                          & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                          ? (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D) 
                                              - (0x3fU 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                             + (0U 
                                                != 
                                                (0x3fU 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])))
                                          : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))),12);
        vcdp->fullQuad(c+6353,((VL_ULL(0x1fffffffffffff) 
                                & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                    & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                    ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D 
                                       << (0x3fU & 
                                           vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))
                                    : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP))),53);
        vcdp->fullBus(c+6369,((0xfffU & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                          & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                          ? (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D) 
                                              - (0x3fU 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                             + (0U 
                                                != 
                                                (0x3fU 
                                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])))
                                          : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP)))),12);
        vcdp->fullQuad(c+6377,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
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
        vcdp->fullBus(c+6393,(((6U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                    >> 3U)))),3);
        vcdp->fullBus(c+6401,(((0x1eU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 1U)) | 
                               (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),5);
        vcdp->fullBus(c+6409,(((0x7eU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 1U)) | 
                               (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),7);
        vcdp->fullBus(c+6417,(((0x1feU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 1U)) | 
                               (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),9);
        vcdp->fullBus(c+6425,(((0x7feU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 1U)) | 
                               (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 3U)))),11);
        vcdp->fullBus(c+6433,(((0x1ffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),13);
        vcdp->fullBus(c+6441,(((0x7ffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),15);
        vcdp->fullBus(c+6449,(((0x1fffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),17);
        vcdp->fullBus(c+6457,(((0x7fffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),19);
        vcdp->fullBus(c+6465,(((0x1ffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),21);
        vcdp->fullBus(c+6473,(((0x7ffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),23);
        vcdp->fullBus(c+6481,(((0x1fffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),25);
        vcdp->fullBus(c+6489,(((0x7fffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),27);
        vcdp->fullBus(c+6497,(((0x1ffffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),29);
        vcdp->fullBus(c+6505,(((0x7ffffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 1U)) 
                               | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 3U)))),31);
        vcdp->fullQuad(c+6513,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                 << 1U) | (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 3U)))))),33);
        vcdp->fullQuad(c+6529,(((VL_ULL(0x7fffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),35);
        vcdp->fullQuad(c+6545,(((VL_ULL(0x1ffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),37);
        vcdp->fullQuad(c+6561,(((VL_ULL(0x7ffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),39);
        vcdp->fullQuad(c+6577,(((VL_ULL(0x1fffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),41);
        vcdp->fullQuad(c+6593,(((VL_ULL(0x7fffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),43);
        vcdp->fullQuad(c+6609,(((VL_ULL(0x1ffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),45);
        vcdp->fullQuad(c+6625,(((VL_ULL(0x7ffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),47);
        vcdp->fullQuad(c+6641,(((VL_ULL(0x1fffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),49);
        vcdp->fullQuad(c+6657,(((VL_ULL(0x7fffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),51);
        vcdp->fullQuad(c+6673,(((VL_ULL(0x1ffffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),53);
        vcdp->fullQuad(c+6689,(((VL_ULL(0x7ffffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),55);
        vcdp->fullQuad(c+6705,(((VL_ULL(0x1fffffffffffffe) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 1U)) | (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 3U)))))),57);
        vcdp->fullQuad(c+6721,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                 << 2U) | (QData)((IData)(
                                                          (3U 
                                                           & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 2U)))))),59);
        vcdp->fullBus(c+6737,(((0x78U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 3U)) | 
                               (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)))),7);
        vcdp->fullBus(c+6745,(((0x7f8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 3U)) | 
                               (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                      >> 1U)))),11);
        vcdp->fullBus(c+6753,(((0x7ff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),15);
        vcdp->fullBus(c+6761,(((0x7fff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),19);
        vcdp->fullBus(c+6769,(((0x7ffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),23);
        vcdp->fullBus(c+6777,(((0x7fffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),27);
        vcdp->fullBus(c+6785,(((0x7ffffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                               << 3U)) 
                               | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                        >> 1U)))),31);
        vcdp->fullQuad(c+6793,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                 << 3U) | (QData)((IData)(
                                                          (7U 
                                                           & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                              >> 1U)))))),35);
        vcdp->fullQuad(c+6809,(((VL_ULL(0x7ffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),39);
        vcdp->fullQuad(c+6825,(((VL_ULL(0x7fffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),43);
        vcdp->fullQuad(c+6841,(((VL_ULL(0x7ffffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),47);
        vcdp->fullQuad(c+6857,(((VL_ULL(0x7fffffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),51);
        vcdp->fullQuad(c+6873,(((VL_ULL(0x7ffffffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),55);
        vcdp->fullQuad(c+6889,(((VL_ULL(0x7fffffffffffff8) 
                                 & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                    << 3U)) | (QData)((IData)(
                                                              (7U 
                                                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                  >> 1U)))))),59);
        vcdp->fullQuad(c+6905,((((QData)((IData)((1U 
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
        vcdp->fullQuad(c+6921,((((QData)((IData)((1U 
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
        vcdp->fullQuad(c+6937,((((QData)((IData)((1U 
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
        vcdp->fullQuad(c+6953,((((QData)((IData)((1U 
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
        vcdp->fullQuad(c+6969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[0]),58);
        vcdp->fullQuad(c+6971,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[1]),58);
        vcdp->fullQuad(c+6973,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[2]),58);
        vcdp->fullQuad(c+6975,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[3]),58);
        vcdp->fullQuad(c+7033,((((QData)((IData)((0x1ffU 
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
        vcdp->fullQuad(c+7049,(((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [0U] 
                                               >> 0x39U)))
                                 ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                    << 4U) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB)),58);
        vcdp->fullQuad(c+7065,((((QData)((IData)((0x1ffU 
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
        vcdp->fullQuad(c+7081,(((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [1U] 
                                               >> 0x39U)))
                                 ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                    << 4U) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB)),58);
        vcdp->fullQuad(c+7097,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
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
        vcdp->fullQuad(c+7113,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [0U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [0U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7129,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [0U] 
                                                  + 
                                                  vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [0U]) 
                                                 + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullQuad(c+7137,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [1U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [1U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7153,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [1U] 
                                                  + 
                                                  vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [1U]) 
                                                 + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullQuad(c+7161,((VL_ULL(0x3ffffffffffffff) 
                                & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                    [2U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                    [2U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->fullBit(c+7177,((1U & (IData)((VL_ULL(1) 
                                             & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                  [2U] 
                                                  + 
                                                  vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                  [2U]) 
                                                 + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                                >> 0x3aU))))));
        vcdp->fullBus(c+7185,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                             >> 2U) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+7193,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                             >> 3U) 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->fullBus(c+7201,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->fullBus(c+7209,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__valid_fpx4)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special_fpx4)
                                    ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result_fpx4
                                    : ((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs_fpx4) 
                                           & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4))) 
                                          & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx4))
                                          ? (2U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4))
                                          : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign_fpx4)) 
                                        << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs_fpx4))
                                : 0xffffffffU)),32);
        vcdp->fullBus(c+7217,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__aux_fpx4)
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result
                                : 1U)),32);
        vcdp->fullBus(c+7225,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special_fpx4)
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result_fpx4
                                : ((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs_fpx4) 
                                       & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4))) 
                                      & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx4))
                                      ? (2U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4))
                                      : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign_fpx4)) 
                                    << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs_fpx4))),32);
        vcdp->fullArray(c+7233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift_fpx2),76);
        vcdp->fullBus(c+7257,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits_fpx2),24);
        vcdp->fullBit(c+7265,((0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits_fpx2)));
        vcdp->fullArray(c+7273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shifted_fpx2),76);
        vcdp->fullBit(c+7297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inject_carry_in_fpx2));
        vcdp->fullArray(c+7305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2),77);
        vcdp->fullBit(c+7329,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2[2U] 
                                     >> 0xcU))));
        VL_NEGATE_W(3, __Vtemp864, vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2);
        __Vtemp869[0U] = (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx2) 
                           & (~ (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2[2U] 
                                 >> 0xcU))) ? __Vtemp864[0U]
                           : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2[0U]);
        __Vtemp869[1U] = (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx2) 
                           & (~ (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2[2U] 
                                 >> 0xcU))) ? __Vtemp864[1U]
                           : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2[1U]);
        __Vtemp869[2U] = (0xfffU & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx2) 
                                     & (~ (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2[2U] 
                                           >> 0xcU)))
                                     ? __Vtemp864[2U]
                                     : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2[2U]));
        vcdp->fullArray(c+7337,(__Vtemp869),76);
        vcdp->fullBit(c+7361,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx2) 
                                & ((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx2[2U] 
                                          >> 0xcU)) 
                                   == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign_fpx2))) 
                               | ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx2)) 
                                  & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign_fpx2)))));
        vcdp->fullBus(c+7369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs_fpx4),31);
        vcdp->fullBus(c+7377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4),2);
        vcdp->fullBit(c+7385,((0xffU == (0xffU & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs_fpx4 
                                                  >> 0x17U)))));
        vcdp->fullBit(c+7393,((0U == (0xffU & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs_fpx4 
                                               >> 0x17U)))));
        vcdp->fullBit(c+7401,(((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs_fpx4) 
                               & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4)))));
        vcdp->fullBit(c+7409,(((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs_fpx4) 
                                 & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4))) 
                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx4))
                                ? (2U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4))
                                : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign_fpx4))));
        vcdp->fullBus(c+7417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs_fpx4),31);
        vcdp->fullBus(c+7425,(((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs_fpx4) 
                                   & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4))) 
                                  & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx4))
                                  ? (2U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4))
                                  : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign_fpx4)) 
                                << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs_fpx4)),32);
        vcdp->fullQuad(c+7433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),51);
        vcdp->fullBit(c+7449,((1U & ((4U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4))
                                      ? (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4) 
                                          | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4) 
                                             >> 1U)))
                                      : ((2U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4))
                                          ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4))
                                              ? ((0U 
                                                  != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4)) 
                                                 & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign_fpx4)))
                                              : ((0U 
                                                  != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4)) 
                                                 & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign_fpx4)))
                                          : ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4)) 
                                             & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits_fpx4) 
                                                   | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs_fpx4))))))));
        vcdp->fullBus(c+7457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->fullBus(c+7465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->fullBit(c+7473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->fullBit(c+7481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->fullBus(c+7489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullBus(c+7497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->fullQuad(c+7505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_result),64);
        vcdp->fullBus(c+7521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result),32);
        vcdp->fullBus(c+7529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO),5);
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
        __Vtemp871[0U] = 0U;
        __Vtemp871[1U] = (0xffe00000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                         << 0x15U));
        __Vtemp871[2U] = ((0x1fffffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                        >> 0xbU)) | 
                          (0xffe00000U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        __Vtemp871[3U] = (0x1fffffU & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                >> 0x20U)) 
                                       >> 0xbU));
        VL_SHIFTR_WWI(110,110,13, __Vtemp872, __Vtemp871, 
                      (0x1fffU & ((IData)(2U) + (~ 
                                                 VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
        vcdp->fullQuad(c+8113,((VL_ULL(0x1fffffffffffff) 
                                & (((QData)((IData)(
                                                    (0x3fffU 
                                                     & __Vtemp872[3U]))) 
                                    << 0x27U) | (((QData)((IData)(
                                                                  __Vtemp872[2U])) 
                                                  << 7U) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp872[1U])) 
                                                    >> 0x19U))))),53);
        __Vtemp875[0U] = 0U;
        __Vtemp875[1U] = (0xffe00000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                         << 0x15U));
        __Vtemp875[2U] = ((0x1fffffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                        >> 0xbU)) | 
                          (0xffe00000U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        __Vtemp875[3U] = (0x1fffffU & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                >> 0x20U)) 
                                       >> 0xbU));
        VL_SHIFTR_WWI(110,110,13, __Vtemp876, __Vtemp875, 
                      (0x1fffU & ((IData)(2U) + (~ 
                                                 VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
        vcdp->fullQuad(c+8129,((VL_ULL(0x1ffffffffffffff) 
                                & (((QData)((IData)(
                                                    __Vtemp876[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp876[0U]))))),57);
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
        vcdp->fullBit(c+8297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tag_fpx4));
        vcdp->fullBit(c+8305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__valid_fpx4));
        vcdp->fullBit(c+8313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__aux_fpx4));
        vcdp->fullArray(c+8321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operands_fpx2),96);
        vcdp->fullBus(c+8345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__is_boxed_fpx2),3);
        vcdp->fullBus(c+8353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx2),3);
        vcdp->fullBus(c+8361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__op_fpx2),4);
        vcdp->fullBit(c+8369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__op_mod_fpx2));
        vcdp->fullBit(c+8377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tag_fpx2));
        vcdp->fullBit(c+8385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__aux_fpx2));
        vcdp->fullBit(c+8393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__valid_fpx2));
        vcdp->fullBit(c+8401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf_fpx2));
        vcdp->fullBit(c+8409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan_fpx2));
        vcdp->fullBit(c+8417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__signalling_nan_fpx2));
        vcdp->fullBit(c+8425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx2));
        vcdp->fullBit(c+8433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign_fpx2));
        vcdp->fullBus(c+8441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_a_fpx2),24);
        vcdp->fullBus(c+8449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_b_fpx2),24);
        vcdp->fullBus(c+8457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c_fpx2),24);
        vcdp->fullQuad(c+8465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__product_fpx2),48);
        vcdp->fullArray(c+8481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__product_shifted_fpx2),76);
        vcdp->fullBus(c+8505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_a_fpx2),10);
        vcdp->fullBus(c+8513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_b_fpx2),10);
        vcdp->fullBus(c+8521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_c_fpx2),10);
        vcdp->fullBus(c+8529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend_fpx2),10);
        vcdp->fullBus(c+8537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product_fpx2),10);
        vcdp->fullBus(c+8545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference_fpx2),10);
        vcdp->fullBus(c+8553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_exponent_fpx2),10);
        vcdp->fullBus(c+8561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt_fpx2),7);
        vcdp->fullBus(c+8569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result_fpx2),32);
        vcdp->fullBus(c+8577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status_fpx2),5);
        vcdp->fullBit(c+8585,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special_fpx2));
        vcdp->fullArray(c+8593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw_fpx3),77);
        vcdp->fullBit(c+8617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_carry_fpx3));
        vcdp->fullArray(c+8625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_fpx3),76);
        vcdp->fullBit(c+8649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign_fpx3));
        vcdp->fullArray(c+8657,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift_fpx3),76);
        vcdp->fullBus(c+8681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits_fpx3),24);
        vcdp->fullBit(c+8689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sticky_before_add_fpx3));
        vcdp->fullArray(c+8697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shifted_fpx3),76);
        vcdp->fullBit(c+8721,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inject_carry_in_fpx3));
        vcdp->fullBus(c+8729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend_fpx3),10);
        vcdp->fullBus(c+8737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product_fpx3),10);
        vcdp->fullBus(c+8745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference_fpx3),10);
        vcdp->fullBus(c+8753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_exponent_fpx3),10);
        vcdp->fullBus(c+8761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt_fpx3),7);
        vcdp->fullBus(c+8769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx3),3);
        vcdp->fullBit(c+8777,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx3));
        vcdp->fullBus(c+8785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result_fpx3),32);
        vcdp->fullBus(c+8793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status_fpx3),5);
        vcdp->fullBit(c+8801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special_fpx3));
        vcdp->fullBit(c+8809,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tag_fpx3));
        vcdp->fullBit(c+8817,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__aux_fpx3));
        vcdp->fullBit(c+8825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__valid_fpx3));
        vcdp->fullQuad(c+8833,((VL_ULL(0x7ffffffffffff) 
                                & (((QData)((IData)(
                                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_fpx3[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_fpx3[0U]))))),51);
        vcdp->fullQuad(c+8849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_lower_fpx4),51);
        vcdp->fullBus(c+8865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__leading_zero_count_fpx4),6);
        vcdp->fullBus(c+8873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__leading_zero_count_sgn_fpx4),7);
        vcdp->fullBit(c+8881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__lzc_zeroes_fpx4));
        vcdp->fullBus(c+8889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__norm_shamt_fpx4),7);
        vcdp->fullBus(c+8897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__normalized_exponent_fpx4),10);
        vcdp->fullArray(c+8905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_shifted_fpx4),77);
        vcdp->fullBus(c+8929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa_fpx4),25);
        vcdp->fullQuad(c+8937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits_fpx4),51);
        vcdp->fullBit(c+8953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sticky_after_norm_fpx4));
        vcdp->fullBus(c+8961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent_fpx4),10);
        vcdp->fullBit(c+8969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign_fpx4));
        vcdp->fullBus(c+8977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rnd_mode_fpx4),3);
        vcdp->fullBit(c+8985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction_fpx4));
        vcdp->fullBus(c+8993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result_fpx4),32);
        vcdp->fullBus(c+9001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status_fpx4),5);
        vcdp->fullBit(c+9009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special_fpx4));
        vcdp->fullBus(c+9017,((VL_LTES_III(1,32,32, 0xffU, 
                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent_fpx4)))
                                ? 0xfeU : (0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent_fpx4)))),8);
        vcdp->fullBus(c+9025,((VL_LTES_III(1,32,32, 0xffU, 
                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent_fpx4)))
                                ? 0x7fffffU : (0x7fffffU 
                                               & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa_fpx4 
                                                  >> 1U)))),23);
        vcdp->fullBit(c+9033,(VL_LTES_III(1,32,32, 0xffU, 
                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent_fpx4)))));
        vcdp->fullBit(c+9041,((0U == VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent_fpx4)))));
        vcdp->fullBus(c+9049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q),32);
        vcdp->fullBus(c+9057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q),5);
        vcdp->fullBus(c+9065,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),2);
        vcdp->fullBus(c+9073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBus(c+9081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBit(c+9089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q));
        vcdp->fullBus(c+9097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q),5);
        vcdp->fullBit(c+9105,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                     >> 3U))));
        vcdp->fullBus(c+9113,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))),3);
        vcdp->fullBit(c+9121,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                     >> 4U))));
        vcdp->fullBit(c+9129,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
        vcdp->fullBit(c+9137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done));
        vcdp->fullBus(c+9145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q),2);
        vcdp->fullBit(c+9153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_is_fp8_q));
        vcdp->fullBus(c+9161,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP),12);
        vcdp->fullBus(c+9169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP),12);
        vcdp->fullQuad(c+9177,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP),53);
        vcdp->fullQuad(c+9193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP),53);
        vcdp->fullBus(c+9209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP),13);
        vcdp->fullBit(c+9217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP));
        vcdp->fullBus(c+9225,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP),3);
        vcdp->fullBit(c+9233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S));
        vcdp->fullBit(c+9241,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S));
        vcdp->fullBit(c+9249,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP));
        vcdp->fullBit(c+9257,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP));
        vcdp->fullBit(c+9265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP));
        vcdp->fullBit(c+9273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP));
        vcdp->fullBit(c+9281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP));
        vcdp->fullBit(c+9289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP));
        vcdp->fullBit(c+9297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP));
        vcdp->fullBit(c+9305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_dly_SB));
        vcdp->fullBit(c+9313,((0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))));
        vcdp->fullBit(c+9321,((0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+9329,((1U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+9337,((2U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+9345,((3U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->fullBit(c+9353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S));
        vcdp->fullBit(c+9361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S));
        vcdp->fullQuad(c+9369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP),58);
        vcdp->fullQuad(c+9385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP),57);
        vcdp->fullQuad(c+9401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP),54);
        vcdp->fullQuad(c+9417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP),54);
        vcdp->fullBus(c+9433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S),2);
        vcdp->fullBus(c+9441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S),6);
        vcdp->fullBus(c+9449,((0x1fU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                                        >> 1U))),6);
        vcdp->fullBus(c+9457,((0xfU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                                       >> 2U))),6);
        vcdp->fullBus(c+9465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S),6);
        vcdp->fullBit(c+9473,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))));
        vcdp->fullBus(c+9481,((3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),2);
        vcdp->fullBus(c+9489,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),3);
        vcdp->fullBus(c+9497,((0xfU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),4);
        vcdp->fullBus(c+9505,((0x1fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),5);
        vcdp->fullBus(c+9513,((0x3fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),6);
        vcdp->fullBus(c+9521,((0x7fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),7);
        vcdp->fullBus(c+9529,((0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),8);
        vcdp->fullBus(c+9537,((0x1ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),9);
        vcdp->fullBus(c+9545,((0x3ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),10);
        vcdp->fullBus(c+9553,((0x7ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),11);
        vcdp->fullBus(c+9561,((0xfffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),12);
        vcdp->fullBus(c+9569,((0x1fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),13);
        vcdp->fullBus(c+9577,((0x3fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),14);
        vcdp->fullBus(c+9585,((0x7fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),15);
        vcdp->fullBus(c+9593,((0xffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),16);
        vcdp->fullBus(c+9601,((0x1ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),17);
        vcdp->fullBus(c+9609,((0x3ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),18);
        vcdp->fullBus(c+9617,((0x7ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),19);
        vcdp->fullBus(c+9625,((0xfffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),20);
        vcdp->fullBus(c+9633,((0x1fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),21);
        vcdp->fullBus(c+9641,((0x3fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),22);
        vcdp->fullBus(c+9649,((0x7fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),23);
        vcdp->fullBus(c+9657,((0xffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),24);
        vcdp->fullBus(c+9665,((0x1ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),25);
        vcdp->fullBus(c+9673,((0x3ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),26);
        vcdp->fullBus(c+9681,((0x7ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),27);
        vcdp->fullBus(c+9689,((0xfffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),28);
        vcdp->fullBus(c+9697,((0x1fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),29);
        vcdp->fullBus(c+9705,((0x3fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),30);
        vcdp->fullBus(c+9713,((0x7fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),31);
        vcdp->fullBus(c+9721,((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),32);
        vcdp->fullQuad(c+9729,((VL_ULL(0x1ffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),33);
        vcdp->fullQuad(c+9745,((VL_ULL(0x3ffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),34);
        vcdp->fullQuad(c+9761,((VL_ULL(0x7ffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),35);
        vcdp->fullQuad(c+9777,((VL_ULL(0xfffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),36);
        vcdp->fullQuad(c+9793,((VL_ULL(0x1fffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),37);
        vcdp->fullQuad(c+9809,((VL_ULL(0x3fffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),38);
        vcdp->fullQuad(c+9825,((VL_ULL(0x7fffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),39);
        vcdp->fullQuad(c+9841,((VL_ULL(0xffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),40);
        vcdp->fullQuad(c+9857,((VL_ULL(0x1ffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),41);
        vcdp->fullQuad(c+9873,((VL_ULL(0x3ffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),42);
        vcdp->fullQuad(c+9889,((VL_ULL(0x7ffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),43);
        vcdp->fullQuad(c+9905,((VL_ULL(0xfffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),44);
        vcdp->fullQuad(c+9921,((VL_ULL(0x1fffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),45);
        vcdp->fullQuad(c+9937,((VL_ULL(0x3fffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),46);
        vcdp->fullQuad(c+9953,((VL_ULL(0x7fffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),47);
        vcdp->fullQuad(c+9969,((VL_ULL(0xffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),48);
        vcdp->fullQuad(c+9985,((VL_ULL(0x1ffffffffffff) 
                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),49);
        vcdp->fullQuad(c+10001,((VL_ULL(0x3ffffffffffff) 
                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),50);
        vcdp->fullQuad(c+10017,((VL_ULL(0x7ffffffffffff) 
                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),51);
        vcdp->fullQuad(c+10033,((VL_ULL(0xfffffffffffff) 
                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),52);
        vcdp->fullQuad(c+10049,((VL_ULL(0x1fffffffffffff) 
                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),53);
        vcdp->fullQuad(c+10065,((VL_ULL(0x3fffffffffffff) 
                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),54);
        vcdp->fullQuad(c+10081,((VL_ULL(0x7fffffffffffff) 
                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),55);
        vcdp->fullQuad(c+10097,((VL_ULL(0xffffffffffffff) 
                                 & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),56);
        vcdp->fullQuad(c+10113,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                  ? VL_ULL(0) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)),58);
        vcdp->fullBit(c+10129,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                 ? 1U : (1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))));
        vcdp->fullBus(c+10137,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
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
        vcdp->fullBus(c+10145,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
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
        vcdp->fullBit(c+10153,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)
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
                                                : (
                                                   (~ 
                                                    ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                     & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))) 
                                                   & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP) 
                                                      & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S))))))))));
        vcdp->fullBit(c+10161,(((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                                & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                                   & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)) 
                                      & ((~ ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                             & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                         & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                             ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                             : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP)))))))));
        vcdp->fullBus(c+10169,((0x1fffU & ((IData)(0x35U) 
                                           + (0xfffU 
                                              & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),13);
        vcdp->fullBus(c+10177,((0x3ffU & ((IData)(0x18U) 
                                          + (0x1ffU 
                                             & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),10);
        vcdp->fullBus(c+10185,((0x7fU & ((IData)(0xbU) 
                                         + (0x3fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),7);
        vcdp->fullBus(c+10193,((0x3ffU & ((IData)(8U) 
                                          + (0x1ffU 
                                             & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),10);
        vcdp->fullBus(c+10201,((0x1fffU & ((IData)(2U) 
                                           + (~ VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))))),13);
        vcdp->fullBus(c+10209,((0x1fffU & (VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)) 
                                           - (IData)(1U)))),13);
        vcdp->fullBus(c+10217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBus(c+10225,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->fullBit(c+10233,(vlTOPp->clk_i));
        vcdp->fullBit(c+10241,(vlTOPp->rst_ni));
        vcdp->fullArray(c+10249,(vlTOPp->operands_i),96);
        vcdp->fullBus(c+10273,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+10281,(vlTOPp->op_i),4);
        vcdp->fullBit(c+10289,(vlTOPp->op_mod_i));
        vcdp->fullBus(c+10297,(vlTOPp->src_fmt_i),3);
        vcdp->fullBus(c+10305,(vlTOPp->dst_fmt_i),3);
        vcdp->fullBus(c+10313,(vlTOPp->int_fmt_i),2);
        vcdp->fullBit(c+10321,(vlTOPp->vectorial_op_i));
        vcdp->fullBit(c+10329,(vlTOPp->tag_i));
        vcdp->fullBit(c+10337,(vlTOPp->in_valid_i));
        vcdp->fullBit(c+10345,(vlTOPp->in_ready_o));
        vcdp->fullBit(c+10353,(vlTOPp->flush_i));
        vcdp->fullBus(c+10361,(vlTOPp->result_o),32);
        vcdp->fullBus(c+10369,(vlTOPp->status_o),5);
        vcdp->fullBit(c+10377,(vlTOPp->tag_o));
        vcdp->fullBit(c+10385,(vlTOPp->out_valid_o));
        vcdp->fullBit(c+10393,(vlTOPp->out_ready_i));
        vcdp->fullBit(c+10401,(vlTOPp->busy_o));
        vcdp->fullBus(c+10409,((3U & (((IData)(vlTOPp->out_ready_i) 
                                       & (IData)(vlTOPp->out_valid_o))
                                       ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                           ? (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                           : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                       : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
        vcdp->fullBit(c+10417,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                   & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                      >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->fullBit(c+10425,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                & (0U == (IData)(vlTOPp->dst_fmt_i)))));
        vcdp->fullBus(c+10433,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+10441,(vlTOPp->op_i),4);
        vcdp->fullQuad(c+10449,((((QData)((IData)(vlTOPp->operands_i[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->operands_i[0U])))),64);
        vcdp->fullBit(c+10465,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                                & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                   & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                      >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->fullBus(c+10473,(vlTOPp->dst_fmt_i),3);
        vcdp->fullBus(c+10481,(vlTOPp->dst_fmt_i),5);
        vcdp->fullBus(c+10489,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+10497,(vlTOPp->op_i),4);
        vcdp->fullBus(c+10505,(vlTOPp->dst_fmt_i),3);
        vcdp->fullBus(c+10513,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                 & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                 ? (IData)(vlTOPp->rnd_mode_i)
                                 : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP))),3);
        vcdp->fullQuad(c+10521,((((QData)((IData)(vlTOPp->operands_i[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->operands_i[0U])))),64);
        vcdp->fullBit(c+10537,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                                & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                   & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                      >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->fullBus(c+10545,(((9U == (IData)(vlTOPp->op_i))
                                 ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d)
                                 : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                     ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                     : VL_NEGATE_I((IData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d)))))),32);
        vcdp->fullBus(c+10553,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                 ? ((8U & (IData)(vlTOPp->op_i))
                                     ? ((4U & (IData)(vlTOPp->op_i))
                                         ? 0x1fU : 
                                        ((2U & (IData)(vlTOPp->op_i))
                                          ? 0x1fU : 
                                         ((1U & (IData)(vlTOPp->op_i))
                                           ? 0U : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                     : ((4U & (IData)(vlTOPp->op_i))
                                         ? ((2U & (IData)(vlTOPp->op_i))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->op_i))
                                                 ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                                 : 0U)
                                             : 0x1fU)
                                         : 0x1fU)) : 0U)),5);
        vcdp->fullBit(c+10561,((9U == (IData)(vlTOPp->op_i))));
        vcdp->fullBus(c+10569,(((8U & (IData)(vlTOPp->op_i))
                                 ? ((4U & (IData)(vlTOPp->op_i))
                                     ? 0x1fU : ((2U 
                                                 & (IData)(vlTOPp->op_i))
                                                 ? 0x1fU
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->op_i))
                                                  ? 0U
                                                  : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                                 : ((4U & (IData)(vlTOPp->op_i))
                                     ? ((2U & (IData)(vlTOPp->op_i))
                                         ? ((1U & (IData)(vlTOPp->op_i))
                                             ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                             : 0U) : 0x1fU)
                                     : 0x1fU))),5);
        vcdp->fullBus(c+10577,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+10585,(vlTOPp->op_i),4);
        vcdp->fullBit(c+10593,((1U & ((~ (IData)(vlTOPp->op_mod_i)) 
                                      | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                         >> 0x1fU)))));
        vcdp->fullBus(c+10601,(((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
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
        vcdp->fullBit(c+10609,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                                & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                   & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                      >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->fullBus(c+10617,(((0xbU == (IData)(vlTOPp->op_i))
                                 ? (IData)(vlTOPp->int_fmt_i)
                                 : (IData)(vlTOPp->dst_fmt_i))),3);
        vcdp->fullBit(c+10625,((0xbU == (IData)(vlTOPp->op_i))));
        vcdp->fullBus(c+10633,((1U & (((0xeU == (IData)(vlTOPp->op_i)) 
                                       << 1U) | (IData)(vlTOPp->op_mod_i)))),2);
        vcdp->fullBus(c+10641,(((2U & (((0xeU == (IData)(vlTOPp->op_i)) 
                                        << 2U) | ((IData)(vlTOPp->op_mod_i) 
                                                  << 1U))) 
                                | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk))),3);
        vcdp->fullBus(c+10649,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk)
                                 ? vlTOPp->operands_i[2U]
                                 : vlTOPp->operands_i[1U])),32);
        vcdp->fullBus(c+10657,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid)
                                 ? ((0xbU == (IData)(vlTOPp->op_i))
                                     ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                         ? 0x10U : 
                                        (0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                     : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                         ? (0x10U & 
                                            ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                             << 2U))
                                         : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
                                 : 0U)),5);
        vcdp->fullBus(c+10665,(((0xbU == (IData)(vlTOPp->op_i))
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
                                               (7U 
                                                & (IData)(vlTOPp->dst_fmt_i))] 
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
        vcdp->fullBus(c+10673,(((0xbU == (IData)(vlTOPp->op_i))
                                 ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                     ? 0x10U : (0U 
                                                != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                 : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                     ? (0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                 << 2U))
                                     : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))),5);
        vcdp->fullBus(c+10681,(vlTOPp->src_fmt_i),3);
        vcdp->fullBus(c+10689,(vlTOPp->dst_fmt_i),3);
        vcdp->fullBus(c+10697,(vlTOPp->int_fmt_i),2);
        vcdp->fullBus(c+10705,(vlTOPp->rnd_mode_i),3);
        vcdp->fullBus(c+10713,(vlTOPp->op_i),4);
        vcdp->fullBit(c+10721,((0xcU == (IData)(vlTOPp->op_i))));
        vcdp->fullBit(c+10729,((0xbU == (IData)(vlTOPp->op_i))));
        vcdp->fullBus(c+10737,(((0x2cU >= (0x3fU & 
                                           ((IData)(9U) 
                                            * (IData)(vlTOPp->src_fmt_i))))
                                 ? (0x1ffU & (IData)(
                                                     (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                      >> 
                                                      (0x3fU 
                                                       & ((IData)(9U) 
                                                          * (IData)(vlTOPp->src_fmt_i))))))
                                 : 0U)),9);
        vcdp->fullBus(c+10745,((0x1ffU & VL_EXTENDS_II(9,2, 
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
        vcdp->fullBus(c+10753,(((0x2cU >= (0x3fU & 
                                           ((IData)(9U) 
                                            * (IData)(vlTOPp->src_fmt_i))))
                                 ? (0x1ffU & (IData)(
                                                     (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation 
                                                      >> 
                                                      (0x3fU 
                                                       & ((IData)(9U) 
                                                          * (IData)(vlTOPp->src_fmt_i))))))
                                 : 0U)),9);
        vcdp->fullBus(c+10761,((0x1ffU & ((((((0x2cU 
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
        vcdp->fullBit(c+10769,(((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round) 
                                   >> (IData)(vlTOPp->dst_fmt_i)))));
        vcdp->fullBus(c+10777,(((0x9fU >= (0xffU & 
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
        vcdp->fullBus(c+10785,((((0U == (0x1fU & ((IData)(vlTOPp->int_fmt_i) 
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
        vcdp->fullBus(c+10793,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
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
        vcdp->fullBit(c+10801,((1U & ((4U & (IData)(vlTOPp->rnd_mode_i))
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
        vcdp->fullQuad(c+10809,(VL_ULL(0x10302)),43);
        __Vtemp878[0U] = 0x556aa554U;
        __Vtemp878[1U] = 0x2aaU;
        __Vtemp878[2U] = 0U;
        __Vtemp878[3U] = 0U;
        __Vtemp878[4U] = 0U;
        __Vtemp878[5U] = 0U;
        __Vtemp878[6U] = 0U;
        __Vtemp878[7U] = 0U;
        __Vtemp878[8U] = 0U;
        __Vtemp878[9U] = 0U;
        __Vtemp878[0xaU] = 0U;
        __Vtemp878[0xbU] = 0U;
        __Vtemp878[0xcU] = 0U;
        __Vtemp878[0xdU] = 0U;
        __Vtemp878[0xeU] = 0U;
        __Vtemp878[0xfU] = 0U;
        __Vtemp878[0x10U] = 0U;
        __Vtemp878[0x11U] = 0U;
        __Vtemp878[0x12U] = 0U;
        __Vtemp878[0x13U] = 0U;
        __Vtemp878[0x14U] = 0U;
        __Vtemp878[0x15U] = 0U;
        vcdp->fullArray(c+10825,(__Vtemp878),682);
        vcdp->fullBus(c+11001,(0x20U),32);
        vcdp->fullBus(c+11009,(3U),32);
        vcdp->fullBus(c+11017,(4U),32);
        vcdp->fullBus(c+11025,(5U),32);
        vcdp->fullBus(c+11033,(0x40U),32);
        vcdp->fullBus(c+11041,(0x10U),32);
        vcdp->fullBus(c+11049,(8U),32);
        vcdp->fullBus(c+11057,(2U),32);
        vcdp->fullBit(c+11065,(0U));
        vcdp->fullBit(c+11073,(1U));
        vcdp->fullBus(c+11081,(0U),2);
        vcdp->fullBit(c+11089,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBus(c+11097,(0U),32);
        vcdp->fullBus(c+11105,(1U),32);
        vcdp->fullBus(c+11113,(0U),2);
        vcdp->fullBit(c+11121,(0U));
        vcdp->fullBus(c+11129,(0x10U),5);
        vcdp->fullBus(c+11137,(2U),4);
        __Vtemp879[0U] = 0U;
        __Vtemp879[1U] = 0U;
        __Vtemp879[2U] = 0U;
        __Vtemp879[3U] = 0U;
        __Vtemp879[4U] = 0U;
        vcdp->fullArray(c+11145,(__Vtemp879),160);
        vcdp->fullBus(c+11185,(0x155U),10);
        vcdp->fullBus(c+11193,(0U),2);
        vcdp->fullBus(c+11201,(0U),3);
        vcdp->fullBit(c+11209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBus(c+11217,(7U),32);
        vcdp->fullBus(c+11225,(9U),32);
        vcdp->fullBit(c+11233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBus(c+11241,(0xbU),32);
        vcdp->fullBit(c+11249,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+11257,(6U),32);
        vcdp->fullBus(c+11265,(0xdU),32);
        vcdp->fullBus(c+11273,(0U),2);
        vcdp->fullBus(c+11281,(0U),3);
        vcdp->fullBus(c+11289,(0U),2);
        vcdp->fullBit(c+11297,(1U));
        vcdp->fullBus(c+11305,(1U),10);
        vcdp->fullBus(c+11313,(3U),32);
        vcdp->fullBus(c+11321,(1U),32);
        vcdp->fullBus(c+11329,(0U),3);
        vcdp->fullBus(c+11337,(0U),2);
        vcdp->fullBus(c+11345,(0x17U),32);
        vcdp->fullBus(c+11353,(0x7fU),32);
        vcdp->fullBus(c+11361,(0x18U),32);
        vcdp->fullBus(c+11369,(0x33U),32);
        vcdp->fullBus(c+11377,(0xaU),32);
        vcdp->fullBus(c+11385,(0U),32);
        vcdp->fullBus(c+11393,(0U),3);
        vcdp->fullBus(c+11401,(0x1fU),32);
        vcdp->fullBus(c+11409,(1U),2);
        vcdp->fullBus(c+11417,(0x10U),5);
        vcdp->fullBus(c+11425,(2U),4);
        __Vtemp880[0U] = 0U;
        __Vtemp880[1U] = 0U;
        __Vtemp880[2U] = 0U;
        __Vtemp880[3U] = 0U;
        __Vtemp880[4U] = 0U;
        vcdp->fullArray(c+11433,(__Vtemp880),160);
        vcdp->fullBus(c+11473,(0x2aaU),10);
        vcdp->fullBus(c+11481,(0U),2);
        vcdp->fullBit(c+11489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+11497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+11505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+11513,(1U),2);
        vcdp->fullBus(c+11521,(0x10U),5);
        vcdp->fullBus(c+11529,(2U),4);
        vcdp->fullBus(c+11537,(0U),2);
        vcdp->fullBus(c+11545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        vcdp->fullBus(c+11553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        vcdp->fullBus(c+11561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_d),32);
        vcdp->fullBus(c+11569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_target_q),32);
        vcdp->fullBus(c+11577,(5U),32);
        vcdp->fullBus(c+11585,(0x10U),5);
        vcdp->fullBus(c+11593,(2U),4);
        vcdp->fullBus(c+11601,(0x10U),5);
        vcdp->fullBus(c+11609,(2U),4);
        vcdp->fullBus(c+11617,(0x10U),5);
        vcdp->fullBus(c+11625,(0x10U),5);
        vcdp->fullBus(c+11633,(0U),2);
        vcdp->fullBus(c+11641,(0U),6);
        vcdp->fullBus(c+11649,(0x35U),32);
        vcdp->fullQuad(c+11657,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_58),58);
        vcdp->fullQuad(c+11673,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_59),59);
        vcdp->fullQuad(c+11689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_60),60);
        vcdp->fullQuad(c+11705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_20),62);
        vcdp->fullQuad(c+11721,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q3),58);
        vcdp->fullQuad(c+11737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3),58);
        vcdp->fullBit(c+11753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_carry_DO));
        vcdp->fullQuad(c+11761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_a_D),58);
        vcdp->fullQuad(c+11777,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_b_D),58);
        vcdp->fullBit(c+11793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sel_b_for_fou_S));
        vcdp->fullQuad(c+11801,(VL_ULL(0x3ffffffffffffff)),58);
        vcdp->fullBus(c+11817,(0x3aU),32);
        vcdp->fullBus(c+11825,(2U),2);
        vcdp->fullBus(c+11833,(0x10U),5);
        vcdp->fullBus(c+11841,(2U),4);
        __Vtemp881[0U] = 0U;
        __Vtemp881[1U] = 0U;
        __Vtemp881[2U] = 0U;
        __Vtemp881[3U] = 0U;
        __Vtemp881[4U] = 0U;
        vcdp->fullArray(c+11849,(__Vtemp881),160);
        vcdp->fullBus(c+11889,(0x155U),10);
        vcdp->fullBus(c+11897,(0U),2);
        vcdp->fullBit(c+11905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+11913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+11921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+11929,(2U),2);
        vcdp->fullBus(c+11937,(0U),3);
        vcdp->fullBus(c+11945,(0U),2);
        vcdp->fullBit(c+11953,(0U));
        vcdp->fullBus(c+11961,(2U),32);
        vcdp->fullBus(c+11969,(0U),3);
        vcdp->fullBus(c+11977,(0U),2);
        vcdp->fullBus(c+11985,(0U),5);
        vcdp->fullBus(c+11993,(0U),3);
        vcdp->fullBus(c+12001,(3U),2);
        vcdp->fullBus(c+12009,(0x10U),5);
        vcdp->fullBus(c+12017,(2U),4);
        __Vtemp882[0U] = 0U;
        __Vtemp882[1U] = 0U;
        __Vtemp882[2U] = 0U;
        __Vtemp882[3U] = 0U;
        __Vtemp882[4U] = 0U;
        vcdp->fullArray(c+12025,(__Vtemp882),160);
        vcdp->fullBus(c+12065,(0x2aaU),10);
        vcdp->fullBus(c+12073,(0U),2);
        vcdp->fullBit(c+12081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
        vcdp->fullBit(c+12089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel));
        vcdp->fullBit(c+12097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel));
        vcdp->fullBus(c+12105,(3U),2);
        vcdp->fullBus(c+12113,(0x10U),5);
        vcdp->fullBus(c+12121,(2U),4);
        vcdp->fullBus(c+12129,(0U),2);
        vcdp->fullBus(c+12137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__target_aux_q),3);
        vcdp->fullBus(c+12145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__conv_slice_result),32);
        vcdp->fullBus(c+12153,(0x10U),5);
        vcdp->fullBus(c+12161,(2U),4);
        vcdp->fullBus(c+12169,(0x10U),5);
        vcdp->fullBus(c+12177,(2U),4);
        vcdp->fullBus(c+12185,(0x10U),5);
        vcdp->fullBus(c+12193,(0x10U),5);
        vcdp->fullBus(c+12201,(2U),4);
        vcdp->fullBus(c+12209,(0U),2);
        vcdp->fullQuad(c+12217,(VL_ULL(0x800000017)),64);
        vcdp->fullBus(c+12233,(0x28U),32);
        vcdp->fullBus(c+12241,(0x20U),32);
        vcdp->fullBus(c+12249,(0x10U),5);
        vcdp->fullBus(c+12257,(0x34U),32);
        vcdp->fullBus(c+12265,(0xffU),8);
        vcdp->fullBus(c+12273,(0x400000U),23);
        vcdp->fullBus(c+12281,(0x7ffU),11);
        vcdp->fullQuad(c+12289,(VL_ULL(0x8000000000000)),52);
        vcdp->fullBus(c+12305,(0x1fU),5);
        vcdp->fullBus(c+12313,(0x200U),10);
        vcdp->fullBus(c+12321,(2U),2);
        vcdp->fullBus(c+12329,(0x40U),7);
        vcdp->fullBus(c+12337,(0U),3);
        __Vtemp883[0U] = 0x17U;
        __Vtemp883[1U] = 8U;
        __Vtemp883[2U] = 0x34U;
        __Vtemp883[3U] = 0xbU;
        __Vtemp883[4U] = 0xaU;
        __Vtemp883[5U] = 5U;
        __Vtemp883[6U] = 2U;
        __Vtemp883[7U] = 5U;
        __Vtemp883[8U] = 7U;
        __Vtemp883[9U] = 8U;
        vcdp->fullArray(c+12345,(__Vtemp883),320);
        vcdp->fullBus(c+12425,(0x18U),5);
        vcdp->fullQuad(c+12433,(VL_ULL(0x20383)),43);
        vcdp->fullQuad(c+12449,(VL_ULL(0x20782)),43);
        vcdp->fullQuad(c+12465,(VL_ULL(0x10302)),43);
        vcdp->fullQuad(c+12481,(VL_ULL(0x207ff)),43);
        vcdp->fullQuad(c+12497,(VL_ULL(0x1077e)),43);
        vcdp->fullQuad(c+12513,(VL_ULL(0x10716)),43);
        __Vtemp884[0U] = 0x556aa554U;
        __Vtemp884[1U] = 0x2aaU;
        __Vtemp884[2U] = 0U;
        __Vtemp884[3U] = 0U;
        __Vtemp884[4U] = 0U;
        __Vtemp884[5U] = 0U;
        __Vtemp884[6U] = 0U;
        __Vtemp884[7U] = 0U;
        __Vtemp884[8U] = 0U;
        __Vtemp884[9U] = 0U;
        __Vtemp884[0xaU] = 0U;
        __Vtemp884[0xbU] = 0U;
        __Vtemp884[0xcU] = 0U;
        __Vtemp884[0xdU] = 0U;
        __Vtemp884[0xeU] = 0U;
        __Vtemp884[0xfU] = 0U;
        __Vtemp884[0x10U] = 0U;
        __Vtemp884[0x11U] = 0U;
        __Vtemp884[0x12U] = 0U;
        __Vtemp884[0x13U] = 0U;
        __Vtemp884[0x14U] = 0U;
        __Vtemp884[0x15U] = 0U;
        vcdp->fullArray(c+12529,(__Vtemp884),682);
        __Vtemp885[0U] = 0x55400554U;
        __Vtemp885[1U] = 0x6aaU;
        __Vtemp885[2U] = 0U;
        __Vtemp885[3U] = 0U;
        __Vtemp885[4U] = 0U;
        __Vtemp885[5U] = 0U;
        __Vtemp885[6U] = 0x400U;
        __Vtemp885[7U] = 0U;
        __Vtemp885[8U] = 0U;
        __Vtemp885[9U] = 0U;
        __Vtemp885[0xaU] = 0U;
        __Vtemp885[0xbU] = 0x400U;
        __Vtemp885[0xcU] = 0U;
        __Vtemp885[0xdU] = 0U;
        __Vtemp885[0xeU] = 0U;
        __Vtemp885[0xfU] = 0U;
        __Vtemp885[0x10U] = 0x400U;
        __Vtemp885[0x11U] = 0U;
        __Vtemp885[0x12U] = 0U;
        __Vtemp885[0x13U] = 0U;
        __Vtemp885[0x14U] = 0U;
        __Vtemp885[0x15U] = 0U;
        vcdp->fullArray(c+12705,(__Vtemp885),682);
        vcdp->fullBus(c+12881,(3U),32);
        vcdp->fullBus(c+12889,(1U),3);
        vcdp->fullBus(c+12897,(2U),3);
        vcdp->fullBus(c+12905,(3U),3);
        vcdp->fullBus(c+12913,(6U),32);
        vcdp->fullBus(c+12921,(2U),32);
        vcdp->fullBus(c+12929,(0x40U),32);
        vcdp->fullBus(c+12937,(0x34U),32);
        vcdp->fullBus(c+12945,(0xbU),32);
        vcdp->fullBus(c+12953,(0x3ffU),32);
        vcdp->fullBus(c+12961,(0x400U),11);
        vcdp->fullBus(c+12969,(0x1ffU),32);
        vcdp->fullBus(c+12977,(0U),11);
        vcdp->fullBus(c+12985,(1U),13);
        vcdp->fullQuad(c+12993,(VL_ULL(0)),52);
        vcdp->fullQuad(c+13009,(VL_ULL(0)),64);
        vcdp->fullQuad(c+13025,(VL_ULL(0x8000000000000000)),64);
        vcdp->fullQuad(c+13041,(VL_ULL(0x7ff8000000000000)),64);
        vcdp->fullBus(c+13057,(0x20U),32);
        vcdp->fullBus(c+13065,(0x17U),32);
        vcdp->fullBus(c+13073,(8U),32);
        vcdp->fullBus(c+13081,(0x7fU),32);
        vcdp->fullBus(c+13089,(0x80U),8);
        vcdp->fullBus(c+13097,(0x3fU),32);
        vcdp->fullBus(c+13105,(0U),8);
        vcdp->fullBus(c+13113,(0U),23);
        vcdp->fullBus(c+13121,(0x80000000U),32);
        vcdp->fullBus(c+13129,(0x7fc00000U),32);
        vcdp->fullBus(c+13137,(0x10U),32);
        vcdp->fullBus(c+13145,(0xaU),32);
        vcdp->fullBus(c+13153,(5U),32);
        vcdp->fullBus(c+13161,(0xfU),32);
        vcdp->fullBus(c+13169,(7U),32);
        vcdp->fullBus(c+13177,(0U),10);
        vcdp->fullBus(c+13185,(0U),16);
        vcdp->fullBus(c+13193,(0x8000U),16);
        vcdp->fullBus(c+13201,(0x7e00U),16);
        vcdp->fullBus(c+13209,(0U),7);
        vcdp->fullBus(c+13217,(0x7fc0U),16);
    }
}
