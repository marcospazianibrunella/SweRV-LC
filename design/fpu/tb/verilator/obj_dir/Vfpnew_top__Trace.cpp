// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfpnew_top__Syms.h"


//======================

void Vfpnew_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfpnew_top* t = (Vfpnew_top*)userthis;
    Vfpnew_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vfpnew_top::traceChgThis(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 3U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vfpnew_top::traceChgThis__2(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),8);
        vcdp->chgBus(c+9,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),8);
        vcdp->chgBus(c+17,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->chgBus(c+25,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->chgBus(c+33,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result),32);
        vcdp->chgArray(c+41,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut),306);
        vcdp->chgBus(c+121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->chgBus(c+129,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->chgArray(c+137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result),128);
        vcdp->chgArray(c+169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut),318);
        vcdp->chgArray(c+249,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut),318);
        vcdp->chgBus(c+329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->chgBus(c+337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->chgBus(c+345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->chgBus(c+353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut),15);
        vcdp->chgQuad(c+361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation),45);
        vcdp->chgArray(c+377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_lut),160);
    }
}

void Vfpnew_top::traceChgThis__3(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp895[3];
    WData/*95:0*/ __Vtemp896[3];
    WData/*95:0*/ __Vtemp897[3];
    WData/*95:0*/ __Vtemp901[3];
    // Body
    {
        vcdp->chgBus(c+417,(vlTOPp->fpnew_top__DOT__opgrp_in_ready),4);
        vcdp->chgBus(c+425,(vlTOPp->fpnew_top__DOT__opgrp_out_valid),4);
        vcdp->chgBus(c+433,(vlTOPp->fpnew_top__DOT__opgrp_out_ready),4);
        vcdp->chgBus(c+441,(vlTOPp->fpnew_top__DOT__opgrp_ext),4);
        vcdp->chgBus(c+449,(vlTOPp->fpnew_top__DOT__opgrp_busy),4);
        vcdp->chgArray(c+457,(vlTOPp->fpnew_top__DOT__opgrp_outputs),152);
        vcdp->chgBus(c+497,(vlTOPp->fpnew_top__DOT__is_boxed),15);
        vcdp->chgQuad(c+505,((VL_ULL(0x3fffffffff) 
                              & (((QData)((IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),38);
        vcdp->chgBit(c+521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
        vcdp->chgBus(c+529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed),15);
        vcdp->chgBit(c+537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid));
        vcdp->chgBus(c+545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__input_boxed),10);
        vcdp->chgBit(c+553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid));
        vcdp->chgBus(c+561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed),10);
        vcdp->chgBit(c+569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid));
        vcdp->chgBus(c+577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__input_boxed),15);
        vcdp->chgBus(c+585,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
        vcdp->chgBus(c+593,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
        vcdp->chgArray(c+601,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),114);
        vcdp->chgBus(c+633,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
        vcdp->chgBus(c+641,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
        vcdp->chgBus(c+649,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),4);
        vcdp->chgBus(c+657,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),4);
        vcdp->chgBus(c+665,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
        vcdp->chgBus(c+673,((3U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
        vcdp->chgBus(c+681,((3U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                    ? (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                    : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
        vcdp->chgBit(c+689,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBit(c+697,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+705,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+713,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBus(c+721,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
        vcdp->chgBus(c+729,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
        vcdp->chgBus(c+737,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),4);
        vcdp->chgBit(c+745,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBus(c+753,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
        vcdp->chgBus(c+761,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
        vcdp->chgBus(c+769,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),4);
        vcdp->chgBus(c+777,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                              << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 7U))),32);
        vcdp->chgBus(c+785,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                       << 0x1eU) | 
                                      (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                       >> 2U)))),5);
        vcdp->chgBit(c+793,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                   >> 1U))));
        vcdp->chgBit(c+801,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->chgBit(c+809,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->chgBit(c+817,((1U & (IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready))));
        vcdp->chgBit(c+825,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->chgBus(c+833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->chgBus(c+841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->chgBus(c+849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->chgBus(c+857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->chgArray(c+865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->chgQuad(c+921,((VL_ULL(0x7fffffffff) 
                              & (((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->chgBit(c+937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->chgBus(c+945,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->chgBus(c+953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->chgArray(c+961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->chgBus(c+1033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->chgBus(c+1041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->chgBus(c+1049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->chgBus(c+1057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->chgBus(c+1065,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->chgBus(c+1073,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->chgBus(c+1081,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                     : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->chgBit(c+1089,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBit(c+1097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+1105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+1113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBit(c+1121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+1129,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBus(c+1137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->chgBus(c+1145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->chgBus(c+1153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->chgBit(c+1161,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBus(c+1169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->chgBus(c+1177,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->chgBus(c+1185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->chgBus(c+1193,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__input_boxed))),3);
        vcdp->chgBit(c+1201,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->chgBus(c+1209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        vcdp->chgBit(c+1217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->chgBus(c+1225,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                               ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                   ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status)
                                   : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))
                               : 0U)),5);
        vcdp->chgArray(c+1233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),96);
        vcdp->chgBus(c+1257,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                               ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status)
                               : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))),5);
        vcdp->chgBus(c+1265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->chgBus(c+1273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT____Vcellout__i_class_inputs__info_o),24);
        vcdp->chgBus(c+1281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a),32);
        vcdp->chgBus(c+1289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b),32);
        vcdp->chgBus(c+1297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c),32);
        vcdp->chgBus(c+1305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a),8);
        vcdp->chgBus(c+1313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b),8);
        vcdp->chgBus(c+1321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c),8);
        vcdp->chgBit(c+1329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_inf));
        vcdp->chgBit(c+1337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__any_operand_nan));
        vcdp->chgBit(c+1345,((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                     | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                        | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_c))) 
                                    >> 2U))));
        vcdp->chgBit(c+1353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction));
        vcdp->chgBit(c+1361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__tentative_sign));
        vcdp->chgBus(c+1369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result),32);
        vcdp->chgBus(c+1377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_status),5);
        vcdp->chgBit(c+1385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special));
        vcdp->chgBus(c+1393,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                     (0xffU 
                                                      & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a 
                                                         >> 0x17U))))),10);
        vcdp->chgBus(c+1401,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                     (0xffU 
                                                      & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b 
                                                         >> 0x17U))))),10);
        vcdp->chgBus(c+1409,((0x3ffU & VL_EXTENDS_II(10,9, 
                                                     (0xffU 
                                                      & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_c 
                                                         >> 0x17U))))),10);
        vcdp->chgBus(c+1417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend),10);
        vcdp->chgBus(c+1425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product),10);
        vcdp->chgBus(c+1433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference),10);
        vcdp->chgBus(c+1441,((VL_LTS_III(1,32,32, 0U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_difference)))
                               ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_addend)
                               : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__exponent_product))),10);
        vcdp->chgBus(c+1449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_shamt),7);
        vcdp->chgBus(c+1457,(((0x800000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_a) 
                                            << 0x10U)) 
                              | (0x7fffffU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_a))),24);
        vcdp->chgBus(c+1465,(((0x800000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__info_b) 
                                            << 0x10U)) 
                              | (0x7fffffU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__operand_b))),24);
        vcdp->chgBus(c+1473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mantissa_c),24);
        vcdp->chgQuad(c+1481,((VL_ULL(0xffffffffffff) 
                               & ((QData)((IData)((
                                                   (0x800000U 
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
        VL_EXTEND_WQ(76,48, __Vtemp895, (VL_ULL(0xffffffffffff) 
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
        VL_SHIFTL_WWI(76,76,32, __Vtemp896, __Vtemp895, 2U);
        __Vtemp897[0U] = __Vtemp896[0U];
        __Vtemp897[1U] = __Vtemp896[1U];
        __Vtemp897[2U] = (0xfffU & __Vtemp896[2U]);
        vcdp->chgArray(c+1497,(__Vtemp897),76);
        vcdp->chgArray(c+1521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift),76);
        vcdp->chgBus(c+1545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits),24);
        vcdp->chgBit(c+1553,((0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits)));
        __Vtemp901[0U] = ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                           ? (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U])
                           : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[0U]);
        __Vtemp901[1U] = ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                           ? (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U])
                           : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[1U]);
        __Vtemp901[2U] = (0xfffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction)
                                     ? (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U])
                                     : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_after_shift[2U]));
        vcdp->chgArray(c+1561,(__Vtemp901),76);
        vcdp->chgBit(c+1585,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction) 
                              & (~ (IData)((0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))))));
        vcdp->chgArray(c+1593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw),77);
        vcdp->chgBit(c+1617,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_raw[2U] 
                                    >> 0xcU))));
        vcdp->chgArray(c+1625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum),76);
        vcdp->chgBit(c+1649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign));
        vcdp->chgQuad(c+1657,((VL_ULL(0x7ffffffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum[0U]))))),51);
        vcdp->chgBus(c+1673,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->chgBus(c+1681,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),7);
        vcdp->chgBit(c+1689,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBus(c+1697,((0x7fU & ((VL_GTES_III(1,32,32, 0U, 
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
        vcdp->chgBus(c+1705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__normalized_exponent),10);
        vcdp->chgArray(c+1713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_shifted),77);
        vcdp->chgBus(c+1737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa),25);
        vcdp->chgQuad(c+1745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits),51);
        vcdp->chgBit(c+1761,(((0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__sum_sticky_bits) 
                              | (0U != vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__addend_sticky_bits))));
        vcdp->chgBus(c+1769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent),10);
        vcdp->chgBus(c+1777,((VL_LTES_III(1,32,32, 0xffU, 
                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))
                               ? 0xfeU : (0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))),8);
        vcdp->chgBus(c+1785,((VL_LTES_III(1,32,32, 0xffU, 
                                          VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))
                               ? 0x7fffffU : (0x7fffffU 
                                              & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_mantissa 
                                                 >> 1U)))),23);
        vcdp->chgBus(c+1793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs),31);
        vcdp->chgBus(c+1801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits),2);
        vcdp->chgBit(c+1809,(VL_LTES_III(1,32,32, 0xffU, 
                                         VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))));
        vcdp->chgBit(c+1817,((0xffU == (0xffU & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                                 >> 0x17U)))));
        vcdp->chgBit(c+1825,((0U == VL_EXTENDS_II(32,10, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))));
        vcdp->chgBit(c+1833,((0U == (0xffU & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                              >> 0x17U)))));
        vcdp->chgBit(c+1841,(((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                              & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)))));
        vcdp->chgBus(c+1849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs),31);
        vcdp->chgBus(c+1857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status),5);
        vcdp->chgBus(c+1865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->chgBit(c+1873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->chgBit(c+1881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->chgBit(c+1889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->chgBit(c+1897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->chgBit(c+1905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->chgBit(c+1913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->chgBit(c+1921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->chgBit(c+1929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->chgBus(c+1937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__value),32);
        vcdp->chgBit(c+1945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed));
        vcdp->chgBit(c+1953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_normal));
        vcdp->chgBit(c+1961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_inf));
        vcdp->chgBit(c+1969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_nan));
        vcdp->chgBit(c+1977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling));
        vcdp->chgBit(c+1985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet));
        vcdp->chgBit(c+1993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_zero));
        vcdp->chgBit(c+2001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal));
        vcdp->chgBus(c+2009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__value),32);
        vcdp->chgBit(c+2017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_boxed));
        vcdp->chgBit(c+2025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_normal));
        vcdp->chgBit(c+2033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_inf));
        vcdp->chgBit(c+2041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_nan));
        vcdp->chgBit(c+2049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_signalling));
        vcdp->chgBit(c+2057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_quiet));
        vcdp->chgBit(c+2065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_zero));
        vcdp->chgBit(c+2073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_class_inputs__DOT__gen_num_values__BRA__2__KET____DOT__is_subnormal));
        vcdp->chgQuad(c+2081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->chgArray(c+2097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->chgQuad(c+2193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),51);
        vcdp->chgBus(c+2209,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                               << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 7U))),32);
        vcdp->chgBus(c+2217,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 2U)))),5);
        vcdp->chgBit(c+2225,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 1U))));
        vcdp->chgBit(c+2233,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->chgBit(c+2241,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->chgBit(c+2249,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                    >> 1U))));
        vcdp->chgBit(c+2257,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->chgBus(c+2265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->chgBus(c+2273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->chgBus(c+2281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->chgBus(c+2289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->chgQuad(c+2297,((VL_ULL(0x7fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->chgBit(c+2313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->chgBus(c+2321,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->chgBus(c+2329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->chgArray(c+2337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->chgBus(c+2409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->chgBus(c+2417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->chgBus(c+2425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->chgBus(c+2433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->chgBus(c+2441,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->chgBus(c+2449,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->chgBus(c+2457,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                     : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->chgBit(c+2465,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBit(c+2473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+2481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+2489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBit(c+2497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+2505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBus(c+2513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->chgBus(c+2521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->chgBus(c+2529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->chgBit(c+2537,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBus(c+2545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->chgBus(c+2553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->chgBus(c+2561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->chgBit(c+2569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready));
        vcdp->chgBus(c+2577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o),5);
        vcdp->chgBit(c+2585,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid));
        vcdp->chgBit(c+2593,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->chgBit(c+2601,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid) 
                              | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy) 
                                 | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)))));
        vcdp->chgBit(c+2609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast));
        vcdp->chgBit(c+2617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast));
        vcdp->chgArray(c+2625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result),160);
        vcdp->chgBus(c+2665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op),5);
        vcdp->chgBus(c+2673,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op),10);
        vcdp->chgQuad(c+2681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),64);
        vcdp->chgBus(c+2697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->chgBus(c+2705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt),2);
        vcdp->chgArray(c+2713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands),128);
        vcdp->chgBit(c+2745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid));
        vcdp->chgBit(c+2753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid));
        vcdp->chgBit(c+2761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__op_starting));
        vcdp->chgBit(c+2769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_result));
        vcdp->chgBit(c+2777,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held));
        vcdp->chgBit(c+2785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_busy));
        vcdp->chgBus(c+2793,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d),2);
        vcdp->chgQuad(c+2801,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[0U])))),64);
        vcdp->chgQuad(c+2817,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U])))),64);
        vcdp->chgBit(c+2833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S));
        vcdp->chgBit(c+2841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_SB));
        vcdp->chgBit(c+2849,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D))));
        vcdp->chgBit(c+2857,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D))));
        vcdp->chgBus(c+2865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D),11);
        vcdp->chgBus(c+2873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D),11);
        vcdp->chgQuad(c+2881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D),52);
        vcdp->chgQuad(c+2897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D),52);
        vcdp->chgQuad(c+2913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D),53);
        vcdp->chgQuad(c+2929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D),53);
        vcdp->chgBit(c+2945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D));
        vcdp->chgBit(c+2953,((1U & ((2U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
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
        vcdp->chgBit(c+2961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_prenorm_zero_S));
        vcdp->chgBit(c+2969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_prenorm_zero_S));
        vcdp->chgBit(c+2977,((1U & (~ (IData)((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D)))))));
        vcdp->chgBit(c+2985,((1U & (~ (IData)((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D)))))));
        vcdp->chgBit(c+2993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S));
        vcdp->chgBit(c+3001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S));
        vcdp->chgBit(c+3009,((1U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
                                             >> 0x33U)) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D))))))));
        vcdp->chgBit(c+3017,(((~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D 
                                          >> 0x33U))) 
                              & (0U != (VL_ULL(0x7ffffffffffff) 
                                        & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_NonH_D)))));
        vcdp->chgBit(c+3025,((1U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
                                             >> 0x33U)) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (VL_ULL(0x7ffffffffffff) 
                                                   & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D))))))));
        vcdp->chgBit(c+3033,(((~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D 
                                          >> 0x33U))) 
                              & (0U != (VL_ULL(0x7ffffffffffff) 
                                        & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_NonH_D)))));
        vcdp->chgBit(c+3041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SN));
        vcdp->chgBit(c+3049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SN));
        vcdp->chgBit(c+3057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SN));
        vcdp->chgBit(c+3065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SN));
        vcdp->chgBit(c+3073,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SN));
        vcdp->chgBit(c+3081,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SN));
        vcdp->chgBus(c+3089,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->chgBus(c+3097,((0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->chgBit(c+3105,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBit(c+3113,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgQuad(c+3121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->chgArray(c+3137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->chgQuad(c+3233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp),53);
        vcdp->chgQuad(c+3249,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes),64);
        vcdp->chgArray(c+3265,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes),384);
        vcdp->chgQuad(c+3361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp),53);
        vcdp->chgBit(c+3377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S));
        vcdp->chgBus(c+3385,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                    >> 3U))),2);
        vcdp->chgBus(c+3393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_0),3);
        vcdp->chgBus(c+3401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_1),5);
        vcdp->chgBus(c+3409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_2),8);
        vcdp->chgBus(c+3417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_3),11);
        vcdp->chgBus(c+3425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_4),14);
        vcdp->chgBus(c+3433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_5),17);
        vcdp->chgBus(c+3441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_6),20);
        vcdp->chgBus(c+3449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_7),23);
        vcdp->chgBus(c+3457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_8),26);
        vcdp->chgBus(c+3465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_9),29);
        vcdp->chgBus(c+3473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_10),32);
        vcdp->chgQuad(c+3481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_11),35);
        vcdp->chgQuad(c+3497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_12),38);
        vcdp->chgQuad(c+3513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_13),41);
        vcdp->chgQuad(c+3529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_14),44);
        vcdp->chgQuad(c+3545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_15),47);
        vcdp->chgQuad(c+3561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_16),50);
        vcdp->chgQuad(c+3577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_17),53);
        vcdp->chgQuad(c+3593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_18),56);
        vcdp->chgBus(c+3609,(((4U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 1U)) | (3U 
                                                & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                   >> 1U)))),4);
        vcdp->chgQuad(c+3617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q0),58);
        vcdp->chgQuad(c+3633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0),58);
        vcdp->chgQuad(c+3649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_0),58);
        vcdp->chgQuad(c+3665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q1),58);
        vcdp->chgQuad(c+3681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1),58);
        vcdp->chgQuad(c+3697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_1),58);
        vcdp->chgQuad(c+3713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q2),58);
        vcdp->chgQuad(c+3729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2),58);
        vcdp->chgQuad(c+3745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_2),58);
        vcdp->chgQuad(c+3761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[0]),58);
        vcdp->chgQuad(c+3763,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[1]),58);
        vcdp->chgQuad(c+3765,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[2]),58);
        vcdp->chgQuad(c+3767,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[3]),58);
        vcdp->chgQuad(c+3825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[0]),58);
        vcdp->chgQuad(c+3827,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[1]),58);
        vcdp->chgQuad(c+3829,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[2]),58);
        vcdp->chgQuad(c+3831,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[3]),58);
        vcdp->chgQuad(c+3889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[0]),58);
        vcdp->chgQuad(c+3891,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[1]),58);
        vcdp->chgQuad(c+3893,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[2]),58);
        vcdp->chgQuad(c+3895,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[3]),58);
        vcdp->chgBit(c+3953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[0]));
        vcdp->chgBit(c+3954,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[1]));
        vcdp->chgBit(c+3955,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[2]));
        vcdp->chgBit(c+3956,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[3]));
        vcdp->chgQuad(c+3985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[0]),58);
        vcdp->chgQuad(c+3987,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[1]),58);
        vcdp->chgQuad(c+3989,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[2]),58);
        vcdp->chgQuad(c+3991,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[3]),58);
        vcdp->chgQuad(c+4049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[0]),58);
        vcdp->chgQuad(c+4051,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[1]),58);
        vcdp->chgQuad(c+4053,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[2]),58);
        vcdp->chgQuad(c+4055,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[3]),58);
        vcdp->chgBus(c+4113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S),4);
        vcdp->chgBit(c+4121,((1U & (~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [0U] 
                                               >> 0x39U))))));
        vcdp->chgBit(c+4129,((1U & (~ (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                               [1U] 
                                               >> 0x39U))))));
        vcdp->chgQuad(c+4137,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                              [0U]),58);
        vcdp->chgQuad(c+4153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                              [0U]),58);
        vcdp->chgQuad(c+4169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                              [1U]),58);
        vcdp->chgQuad(c+4185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                              [1U]),58);
        vcdp->chgQuad(c+4201,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                              [2U]),58);
        vcdp->chgQuad(c+4217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                              [2U]),58);
        vcdp->chgBus(c+4233,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                               << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 7U))),32);
        vcdp->chgBus(c+4241,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 2U)))),5);
        vcdp->chgBit(c+4249,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 1U))));
        vcdp->chgBit(c+4257,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->chgBit(c+4265,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->chgBit(c+4273,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                    >> 2U))));
        vcdp->chgBit(c+4281,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->chgBus(c+4289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->chgBus(c+4297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->chgBus(c+4305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->chgBus(c+4313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->chgArray(c+4321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->chgQuad(c+4377,((VL_ULL(0x7fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->chgBit(c+4393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->chgBus(c+4401,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->chgBus(c+4409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->chgArray(c+4417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->chgBus(c+4489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->chgBus(c+4497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->chgBus(c+4505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->chgBus(c+4513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->chgBus(c+4521,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->chgBus(c+4529,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->chgBus(c+4537,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                     : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->chgBit(c+4545,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBit(c+4553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+4561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+4569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBit(c+4577,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+4585,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBus(c+4593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->chgBus(c+4601,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->chgBus(c+4609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->chgBit(c+4617,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBus(c+4625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->chgBus(c+4633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->chgBus(c+4641,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->chgBus(c+4649,((3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__input_boxed))),2);
        vcdp->chgBit(c+4657,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->chgBus(c+4665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o),5);
        vcdp->chgBit(c+4673,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d));
        vcdp->chgBit(c+4681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid));
        vcdp->chgBus(c+4689,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                               ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                               : VL_NEGATE_I((IData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d))))),32);
        vcdp->chgBus(c+4697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d),32);
        vcdp->chgBus(c+4705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__slice_vec_class_result),32);
        vcdp->chgBus(c+4713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d),10);
        vcdp->chgBit(c+4721,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_sign));
        vcdp->chgQuad(c+4729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),64);
        vcdp->chgBus(c+4745,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d),32);
        vcdp->chgBus(c+4753,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->chgBus(c+4761,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o),16);
        vcdp->chgBus(c+4769,((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands)),32);
        vcdp->chgBus(c+4777,((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands 
                                      >> 0x20U))),32);
        vcdp->chgBus(c+4785,((0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o))),8);
        vcdp->chgBus(c+4793,((0xffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                       >> 8U))),8);
        vcdp->chgBit(c+4801,((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                     >> 4U) | ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
                                               >> 0xcU)))));
        vcdp->chgBit(c+4809,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__any_operand_nan));
        vcdp->chgBit(c+4817,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__signalling_nan));
        vcdp->chgBit(c+4825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operands_equal));
        vcdp->chgBit(c+4833,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__operand_a_smaller));
        vcdp->chgBus(c+4841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result),32);
        vcdp->chgBus(c+4849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status),5);
        vcdp->chgBus(c+4857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_result),32);
        vcdp->chgBus(c+4865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status),5);
        vcdp->chgBit(c+4873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_a));
        vcdp->chgBit(c+4881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sign_injections__DOT__sign_b));
        vcdp->chgBus(c+4889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->chgBit(c+4897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->chgBit(c+4905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->chgBit(c+4913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->chgBit(c+4921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->chgBit(c+4929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->chgBit(c+4937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->chgBit(c+4945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->chgBit(c+4953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
        vcdp->chgBus(c+4961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__value),32);
        vcdp->chgBit(c+4969,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_boxed));
        vcdp->chgBit(c+4977,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_normal));
        vcdp->chgBit(c+4985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_inf));
        vcdp->chgBit(c+4993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_nan));
        vcdp->chgBit(c+5001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_signalling));
        vcdp->chgBit(c+5009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_quiet));
        vcdp->chgBit(c+5017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_zero));
        vcdp->chgBit(c+5025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__i_class_a__DOT__gen_num_values__BRA__1__KET____DOT__is_subnormal));
        vcdp->chgBus(c+5033,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                               << 0x19U) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 7U))),32);
        vcdp->chgBus(c+5041,((0x1fU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 2U)))),5);
        vcdp->chgBit(c+5049,((1U & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 1U))));
        vcdp->chgBit(c+5057,((1U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
        vcdp->chgBit(c+5065,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        vcdp->chgBit(c+5073,((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                    >> 3U))));
        vcdp->chgBit(c+5081,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy))));
        vcdp->chgBus(c+5089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
        vcdp->chgBus(c+5097,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_valid),5);
        vcdp->chgBus(c+5105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
        vcdp->chgBus(c+5113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_busy),5);
        vcdp->chgArray(c+5121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->chgQuad(c+5177,((VL_ULL(0x7fffffffff) 
                               & (((QData)((IData)(
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))))),39);
        vcdp->chgBit(c+5193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->chgBus(c+5201,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes)),3);
        vcdp->chgBus(c+5209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes),21);
        vcdp->chgArray(c+5217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes),273);
        vcdp->chgBus(c+5289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        vcdp->chgBus(c+5297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        vcdp->chgBus(c+5305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        vcdp->chgBus(c+5313,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),5);
        vcdp->chgBus(c+5321,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->chgBus(c+5329,((7U & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)),3);
        vcdp->chgBus(c+5337,((7U & ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                     : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        vcdp->chgBit(c+5345,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBit(c+5353,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+5361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+5369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBit(c+5377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
        vcdp->chgBit(c+5385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
        vcdp->chgBus(c+5393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->chgBus(c+5401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->chgBus(c+5409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->chgBit(c+5417,((1U & (~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
        vcdp->chgBus(c+5425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),8);
        vcdp->chgBus(c+5433,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),24);
        vcdp->chgBus(c+5441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        vcdp->chgBit(c+5449,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        vcdp->chgBus(c+5457,(((0x10U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))
                               ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                              (3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))]
                               : ((0x9fU >= (0xe0U 
                                             & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                                << 5U)))
                                   ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                  (7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))]
                                   : 0U))),32);
        vcdp->chgBus(c+5465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o),5);
        vcdp->chgBit(c+5473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__extension_bit));
        vcdp->chgBit(c+5481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid));
        vcdp->chgBus(c+5489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data),5);
        vcdp->chgBit(c+5497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
        vcdp->chgBit(c+5505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_up_cast));
        vcdp->chgBit(c+5513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_down_cast));
        vcdp->chgArray(c+5521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result),160);
        vcdp->chgArray(c+5561,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result),128);
        vcdp->chgBit(c+5593,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                    >> 3U))));
        vcdp->chgBus(c+5601,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data))),3);
        vcdp->chgBit(c+5609,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                    >> 4U))));
        vcdp->chgBit(c+5617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk));
        vcdp->chgBus(c+5625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op),5);
        vcdp->chgBus(c+5633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_2op),10);
        vcdp->chgBus(c+5641,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result),32);
        vcdp->chgArray(c+5649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands),96);
        vcdp->chgBit(c+5673,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready) 
                                    & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__aux_data) 
                                       >> 3U)))));
        vcdp->chgBus(c+5681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status),5);
        vcdp->chgBus(c+5689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__local_operands[0U]),32);
        vcdp->chgBus(c+5697,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant),32);
        vcdp->chgBus(c+5705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_sign),5);
        vcdp->chgQuad(c+5713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent),45);
        vcdp->chgArray(c+5729,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_mantissa),160);
        vcdp->chgQuad(c+5769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info),40);
        vcdp->chgArray(c+5785,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_input_val),128);
        vcdp->chgBit(c+5817,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign));
        vcdp->chgBus(c+5825,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value),32);
        vcdp->chgBus(c+5833,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_sign)
                               ? VL_NEGATE_I(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value)
                               : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_value)),32);
        vcdp->chgBus(c+5841,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias),9);
        vcdp->chgBit(c+5849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_sign));
        vcdp->chgBus(c+5857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp),9);
        vcdp->chgBus(c+5865,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
                              << (0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))),32);
        vcdp->chgBit(c+5873,((1U & (~ vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes))));
        vcdp->chgBus(c+5881,((0x1ffU & ((IData)(0x1fU) 
                                        - (0x1fU & 
                                           vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])))),9);
        vcdp->chgBus(c+5889,((0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),5);
        vcdp->chgBus(c+5897,((0x1fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])),6);
        vcdp->chgBus(c+5905,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp),9);
        vcdp->chgBus(c+5913,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        vcdp->chgBus(c+5921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q),8);
        vcdp->chgBus(c+5929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp),9);
        vcdp->chgArray(c+5937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant),65);
        vcdp->chgArray(c+5961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant),65);
        vcdp->chgBus(c+5985,((0x7fffffU & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                            << 0x17U) 
                                           | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                              >> 9U)))),23);
        vcdp->chgBus(c+5993,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                               << 0x1fU) | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
                                            >> 1U))),32);
        vcdp->chgBus(c+6001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt),6);
        vcdp->chgBus(c+6009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits),2);
        vcdp->chgBus(c+6017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits),2);
        vcdp->chgBus(c+6025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits),2);
        vcdp->chgBit(c+6033,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round));
        vcdp->chgBit(c+6041,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__uf_before_round));
        vcdp->chgBus(c+6049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs),32);
        vcdp->chgBit(c+6057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round));
        vcdp->chgArray(c+6065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_pre_round_abs),160);
        vcdp->chgBus(c+6105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round),5);
        vcdp->chgBus(c+6113,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round),5);
        vcdp->chgArray(c+6121,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs),128);
        vcdp->chgBus(c+6153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs),32);
        vcdp->chgBit(c+6161,(((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs) 
                              & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))));
        vcdp->chgBus(c+6169,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res),32);
        vcdp->chgBit(c+6177,((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res)));
        vcdp->chgArray(c+6185,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result),160);
        vcdp->chgBus(c+6225,((0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                       << 2U))),5);
        vcdp->chgBit(c+6233,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special));
        vcdp->chgArray(c+6241,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result),160);
        vcdp->chgBit(c+6281,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special));
        vcdp->chgArray(c+6289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result),128);
        vcdp->chgBus(c+6321,((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits))),5);
        vcdp->chgBus(c+6329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status),5);
        vcdp->chgBus(c+6337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result),32);
        vcdp->chgBus(c+6345,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                               ? (0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                           << 2U)) : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status))),5);
        vcdp->chgBus(c+6353,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                               ? 0x10U : (0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))),5);
        vcdp->chgBus(c+6361,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results__BRA__0__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        vcdp->chgBus(c+6369,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_special_results_int__BRA__2__KET____DOT__active_format__DOT__special_results__DOT__special_res),32);
        vcdp->chgBus(c+6377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes),32);
        vcdp->chgArray(c+6385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes),160);
        vcdp->chgBus(c+6425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__in_tmp),32);
        vcdp->chgBit(c+6433,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__is_boxed_1op))));
        vcdp->chgBus(c+6441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o),8);
        vcdp->chgBus(c+6449,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__value),32);
        vcdp->chgBit(c+6457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_boxed));
        vcdp->chgBit(c+6465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_normal));
        vcdp->chgBit(c+6473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_inf));
        vcdp->chgBit(c+6481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_nan));
        vcdp->chgBit(c+6489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_signalling));
        vcdp->chgBit(c+6497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_quiet));
        vcdp->chgBit(c+6505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_zero));
        vcdp->chgBit(c+6513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_init_inputs__BRA__0__KET____DOT__active_format__DOT__i_fpnew_classifier__DOT__gen_num_values__BRA__0__KET____DOT__is_subnormal));
    }
}

void Vfpnew_top::traceChgThis__4(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+6521,((7U & ((1U & ((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                           & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                     ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                         : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->chgArray(c+6529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_outputs),195);
        vcdp->chgBus(c+6585,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                     ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                         : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->chgBus(c+6593,(((0x10U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))
                               ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                              (3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))]
                               : ((0x9fU >= (0xe0U 
                                             & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                                << 5U)))
                                   ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                  (7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))]
                                   : 0U))),32);
        vcdp->chgBit(c+6601,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
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
        vcdp->chgBit(c+6609,((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
                                     & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                     ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D) 
                                        ^ ((2U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                            ? ((1U 
                                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                ? (
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                   >> 0xfU)
                                                : (
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                   >> 0xfU))
                                            : ((1U 
                                                & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_fmt))
                                                ? (
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[3U] 
                                                   >> 0x1fU)
                                                : (
                                                   vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__divsqrt_operands[2U] 
                                                   >> 0x1fU))))
                                     : (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid) 
                                         & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                         ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_a_D)
                                         : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP))))));
        vcdp->chgQuad(c+6617,((VL_ULL(0x1fffffffffffff) 
                               & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                   & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                   ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D 
                                      << (0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))
                                   : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP))),53);
        vcdp->chgBus(c+6633,((0xfffU & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                         & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                         ? (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D) 
                                             - (0x3fU 
                                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                            + (0U != 
                                               (0x3fU 
                                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])))
                                         : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP)))),12);
        vcdp->chgQuad(c+6641,((VL_ULL(0x1fffffffffffff) 
                               & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                   & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                   ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D 
                                      << (0x3fU & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))
                                   : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP))),53);
        vcdp->chgBus(c+6657,((0xfffU & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                                         & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                                         ? (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D) 
                                             - (0x3fU 
                                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                            + (0U != 
                                               (0x3fU 
                                                & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])))
                                         : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP)))),12);
        vcdp->chgQuad(c+6665,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
                                ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                                    [2U] 
                                                                    >> 0x39U))))) 
                                        << 0x39U) | 
                                       ((VL_ULL(0x1fffffffffffffc) 
                                         & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                            [2U] << 2U)) 
                                        | (QData)((IData)(
                                                          vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO
                                                          [2U]))))
                                    : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                   [2U]) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)),58);
        vcdp->chgBus(c+6681,(((6U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                     << 1U)) | (1U 
                                                & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                   >> 3U)))),3);
        vcdp->chgBus(c+6689,(((0x1eU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                      >> 3U)))),5);
        vcdp->chgBus(c+6697,(((0x7eU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                      >> 3U)))),7);
        vcdp->chgBus(c+6705,(((0x1feU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 1U)) | 
                              (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 3U)))),9);
        vcdp->chgBus(c+6713,(((0x7feU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 1U)) | 
                              (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 3U)))),11);
        vcdp->chgBus(c+6721,(((0x1ffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 1U)) | 
                              (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 3U)))),13);
        vcdp->chgBus(c+6729,(((0x7ffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 1U)) | 
                              (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 3U)))),15);
        vcdp->chgBus(c+6737,(((0x1fffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 1U)) 
                              | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 3U)))),17);
        vcdp->chgBus(c+6745,(((0x7fffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 1U)) 
                              | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 3U)))),19);
        vcdp->chgBus(c+6753,(((0x1ffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 1U)) 
                              | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 3U)))),21);
        vcdp->chgBus(c+6761,(((0x7ffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 1U)) 
                              | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 3U)))),23);
        vcdp->chgBus(c+6769,(((0x1fffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 1U)) 
                              | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 3U)))),25);
        vcdp->chgBus(c+6777,(((0x7fffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 1U)) 
                              | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 3U)))),27);
        vcdp->chgBus(c+6785,(((0x1ffffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 1U)) 
                              | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 3U)))),29);
        vcdp->chgBus(c+6793,(((0x7ffffffeU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 1U)) 
                              | (1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 3U)))),31);
        vcdp->chgQuad(c+6801,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                << 1U) | (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                             >> 3U)))))),33);
        vcdp->chgQuad(c+6817,(((VL_ULL(0x7fffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),35);
        vcdp->chgQuad(c+6833,(((VL_ULL(0x1ffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),37);
        vcdp->chgQuad(c+6849,(((VL_ULL(0x7ffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),39);
        vcdp->chgQuad(c+6865,(((VL_ULL(0x1fffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),41);
        vcdp->chgQuad(c+6881,(((VL_ULL(0x7fffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),43);
        vcdp->chgQuad(c+6897,(((VL_ULL(0x1ffffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),45);
        vcdp->chgQuad(c+6913,(((VL_ULL(0x7ffffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),47);
        vcdp->chgQuad(c+6929,(((VL_ULL(0x1fffffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),49);
        vcdp->chgQuad(c+6945,(((VL_ULL(0x7fffffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),51);
        vcdp->chgQuad(c+6961,(((VL_ULL(0x1ffffffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),53);
        vcdp->chgQuad(c+6977,(((VL_ULL(0x7ffffffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),55);
        vcdp->chgQuad(c+6993,(((VL_ULL(0x1fffffffffffffe) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 1U)) | (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 3U)))))),57);
        vcdp->chgQuad(c+7009,(((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                << 2U) | (QData)((IData)(
                                                         (3U 
                                                          & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                             >> 2U)))))),59);
        vcdp->chgBus(c+7025,(((0x78U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                        << 3U)) | (7U 
                                                   & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                      >> 1U)))),7);
        vcdp->chgBus(c+7033,(((0x7f8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                         << 3U)) | 
                              (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 1U)))),11);
        vcdp->chgBus(c+7041,(((0x7ff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                          << 3U)) | 
                              (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                     >> 1U)))),15);
        vcdp->chgBus(c+7049,(((0x7fff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                           << 3U)) 
                              | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 1U)))),19);
        vcdp->chgBus(c+7057,(((0x7ffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                            << 3U)) 
                              | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 1U)))),23);
        vcdp->chgBus(c+7065,(((0x7fffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                             << 3U)) 
                              | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 1U)))),27);
        vcdp->chgBus(c+7073,(((0x7ffffff8U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP) 
                                              << 3U)) 
                              | (7U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                       >> 1U)))),31);
        vcdp->chgQuad(c+7081,((((QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)) 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                             >> 1U)))))),35);
        vcdp->chgQuad(c+7097,(((VL_ULL(0x7ffffffff8) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 3U)) | (QData)((IData)(
                                                             (7U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 1U)))))),39);
        vcdp->chgQuad(c+7113,(((VL_ULL(0x7fffffffff8) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 3U)) | (QData)((IData)(
                                                             (7U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 1U)))))),43);
        vcdp->chgQuad(c+7129,(((VL_ULL(0x7ffffffffff8) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 3U)) | (QData)((IData)(
                                                             (7U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 1U)))))),47);
        vcdp->chgQuad(c+7145,(((VL_ULL(0x7fffffffffff8) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 3U)) | (QData)((IData)(
                                                             (7U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 1U)))))),51);
        vcdp->chgQuad(c+7161,(((VL_ULL(0x7ffffffffffff8) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 3U)) | (QData)((IData)(
                                                             (7U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 1U)))))),55);
        vcdp->chgQuad(c+7177,(((VL_ULL(0x7fffffffffffff8) 
                                & (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP 
                                   << 3U)) | (QData)((IData)(
                                                             (7U 
                                                              & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S) 
                                                                 >> 1U)))))),59);
        vcdp->chgQuad(c+7193,((((QData)((IData)((1U 
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
        vcdp->chgQuad(c+7209,((((QData)((IData)((1U 
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
        vcdp->chgQuad(c+7225,((((QData)((IData)((1U 
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
        vcdp->chgQuad(c+7241,((((QData)((IData)((1U 
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
        vcdp->chgQuad(c+7257,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[0]),58);
        vcdp->chgQuad(c+7259,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[1]),58);
        vcdp->chgQuad(c+7261,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[2]),58);
        vcdp->chgQuad(c+7263,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[3]),58);
        vcdp->chgQuad(c+7321,((((QData)((IData)((0x1ffU 
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
        vcdp->chgQuad(c+7337,(((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                              [0U] 
                                              >> 0x39U)))
                                ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                   << 4U) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB)),58);
        vcdp->chgQuad(c+7353,((((QData)((IData)((0x1ffU 
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
        vcdp->chgQuad(c+7369,(((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                              [1U] 
                                              >> 0x39U)))
                                ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                   << 4U) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB)),58);
        vcdp->chgQuad(c+7385,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
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
        vcdp->chgQuad(c+7401,((VL_ULL(0x3ffffffffffffff) 
                               & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                   [0U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                   [0U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->chgBit(c+7417,((1U & (IData)((VL_ULL(1) 
                                            & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                 [0U] 
                                                 + 
                                                 vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                 [0U]) 
                                                + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                               >> 0x3aU))))));
        vcdp->chgQuad(c+7425,((VL_ULL(0x3ffffffffffffff) 
                               & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                   [1U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                   [1U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->chgBit(c+7441,((1U & (IData)((VL_ULL(1) 
                                            & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                 [1U] 
                                                 + 
                                                 vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                 [1U]) 
                                                + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                               >> 0x3aU))))));
        vcdp->chgQuad(c+7449,((VL_ULL(0x3ffffffffffffff) 
                               & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                   [2U] + vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                   [2U]) + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D))))),58);
        vcdp->chgBit(c+7465,((1U & (IData)((VL_ULL(1) 
                                            & (((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D
                                                 [2U] 
                                                 + 
                                                 vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D
                                                 [2U]) 
                                                + (QData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D))) 
                                               >> 0x3aU))))));
        vcdp->chgBus(c+7473,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                            >> 2U) 
                                           & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                     ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                         : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        vcdp->chgBus(c+7481,((7U & ((1U & (((IData)(vlTOPp->fpnew_top__DOT__opgrp_out_ready) 
                                            >> 3U) 
                                           & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                     ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                         : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
    }
}

void Vfpnew_top::traceChgThis__5(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+7489,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)
                               ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                   ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                                   : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO))
                               : 0U)),5);
        vcdp->chgBus(c+7497,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid)
                               ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                                   ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                                   : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result)
                               : 0xffffffffU)),32);
        vcdp->chgBus(c+7505,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                               ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                               : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result)),32);
        vcdp->chgBus(c+7513,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__data_is_held)
                               ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                               : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO))),5);
    }
}

void Vfpnew_top::traceChgThis__6(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp903[4];
    WData/*127:0*/ __Vtemp904[4];
    WData/*127:0*/ __Vtemp907[4];
    WData/*127:0*/ __Vtemp908[4];
    // Body
    {
        vcdp->chgQuad(c+7521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_result),64);
        vcdp->chgQuad(c+7537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D),57);
        vcdp->chgQuad(c+7553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB),54);
        vcdp->chgQuad(c+7569,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm),54);
        vcdp->chgBus(c+7585,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S),6);
        vcdp->chgBit(c+7593,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S));
        vcdp->chgBit(c+7601,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S));
        vcdp->chgQuad(c+7609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_3),58);
        vcdp->chgBus(c+7625,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[0]),2);
        vcdp->chgBus(c+7626,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[1]),2);
        vcdp->chgBus(c+7627,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[2]),2);
        vcdp->chgBus(c+7628,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[3]),2);
        vcdp->chgBus(c+7657,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[0]),2);
        vcdp->chgBus(c+7658,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[1]),2);
        vcdp->chgBus(c+7659,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[2]),2);
        vcdp->chgBus(c+7660,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[3]),2);
        vcdp->chgQuad(c+7689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB),58);
        vcdp->chgQuad(c+7705,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D),58);
        vcdp->chgQuad(c+7721,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                 ? 1U : (1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))
                                ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB
                                : (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP 
                                   << 4U))),58);
        vcdp->chgBit(c+7737,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[0]));
        vcdp->chgBit(c+7738,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[1]));
        vcdp->chgBit(c+7739,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[2]));
        vcdp->chgBit(c+7740,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[3]));
        vcdp->chgBit(c+7769,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[0]));
        vcdp->chgBit(c+7770,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[1]));
        vcdp->chgBit(c+7771,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[2]));
        vcdp->chgBit(c+7772,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[3]));
        vcdp->chgBit(c+7801,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[0]));
        vcdp->chgBit(c+7802,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[1]));
        vcdp->chgBit(c+7803,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[2]));
        vcdp->chgBit(c+7804,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[3]));
        vcdp->chgBus(c+7833,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S)
                                          ? ((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                                ? (
                                                   (0x2000U 
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
                                                : (
                                                   (0x2000U 
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
        vcdp->chgBus(c+7841,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                                          ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE
                                          : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS))),13);
        vcdp->chgBus(c+7849,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE),32);
        vcdp->chgBus(c+7857,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS),32);
        vcdp->chgBit(c+7865,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                             [0U]));
        vcdp->chgBit(c+7873,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                             [0U]));
        vcdp->chgBit(c+7881,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                             [0U]));
        vcdp->chgBus(c+7889,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [0U]),2);
        vcdp->chgBus(c+7897,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->chgBit(c+7905,((1U & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [0U] >> 1U) | 
                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                    [0U]))));
        vcdp->chgBit(c+7913,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [0U] & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [0U] >> 1U) 
                                      | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [0U]))));
        vcdp->chgBit(c+7921,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->chgBit(c+7929,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                             [1U]));
        vcdp->chgBit(c+7937,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                             [1U]));
        vcdp->chgBit(c+7945,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                             [1U]));
        vcdp->chgBus(c+7953,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [1U]),2);
        vcdp->chgBus(c+7961,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->chgBit(c+7969,((1U & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [1U] >> 1U) | 
                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                    [1U]))));
        vcdp->chgBit(c+7977,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [1U] & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [1U] >> 1U) 
                                      | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [1U]))));
        vcdp->chgBit(c+7985,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->chgBit(c+7993,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI
                             [2U]));
        vcdp->chgBit(c+8001,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI
                             [2U]));
        vcdp->chgBit(c+8009,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                             [2U]));
        vcdp->chgBus(c+8017,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                             [2U]),2);
        vcdp->chgBus(c+8025,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO),2);
        vcdp->chgBit(c+8033,((1U & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                     [2U] >> 1U) | 
                                    vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                    [2U]))));
        vcdp->chgBit(c+8041,((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI
                              [2U] & ((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                       [2U] >> 1U) 
                                      | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                      [2U]))));
        vcdp->chgBit(c+8049,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D));
        vcdp->chgBit(c+8057,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Sign_res_D));
        vcdp->chgBit(c+8065,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_OF_S));
        vcdp->chgBit(c+8073,((1U & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
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
        vcdp->chgBit(c+8081,(((0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S)) 
                              | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S))));
        vcdp->chgQuad(c+8089,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_res_norm_D),53);
        vcdp->chgBus(c+8105,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_res_norm_D),11);
        __Vtemp903[0U] = 0U;
        __Vtemp903[1U] = (0xffe00000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                         << 0x15U));
        __Vtemp903[2U] = ((0x1fffffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                        >> 0xbU)) | 
                          (0xffe00000U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        __Vtemp903[3U] = (0x1fffffU & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                >> 0x20U)) 
                                       >> 0xbU));
        VL_SHIFTR_WWI(110,110,13, __Vtemp904, __Vtemp903, 
                      (0x1fffU & ((IData)(2U) + (~ 
                                                 VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
        vcdp->chgQuad(c+8113,((VL_ULL(0x1fffffffffffff) 
                               & (((QData)((IData)(
                                                   (0x3fffU 
                                                    & __Vtemp904[3U]))) 
                                   << 0x27U) | (((QData)((IData)(
                                                                 __Vtemp904[2U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   __Vtemp904[1U])) 
                                                   >> 0x19U))))),53);
        __Vtemp907[0U] = 0U;
        __Vtemp907[1U] = (0xffe00000U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                         << 0x15U));
        __Vtemp907[2U] = ((0x1fffffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D) 
                                        >> 0xbU)) | 
                          (0xffe00000U & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                   >> 0x20U)) 
                                          << 0x15U)));
        __Vtemp907[3U] = (0x1fffffU & ((IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Mant_z_D 
                                                >> 0x20U)) 
                                       >> 0xbU));
        VL_SHIFTR_WWI(110,110,13, __Vtemp908, __Vtemp907, 
                      (0x1fffU & ((IData)(2U) + (~ 
                                                 VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))));
        vcdp->chgQuad(c+8129,((VL_ULL(0x1ffffffffffffff) 
                               & (((QData)((IData)(
                                                   __Vtemp908[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               __Vtemp908[0U]))))),57);
        vcdp->chgBus(c+8145,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_lower_D),2);
        vcdp->chgBit(c+8153,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_sticky_bit_D));
        vcdp->chgQuad(c+8161,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_forround_D),57);
        vcdp->chgQuad(c+8177,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upper_D),53);
        vcdp->chgQuad(c+8193,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D),54);
        vcdp->chgBit(c+8209,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_roundUp_S));
        vcdp->chgBit(c+8217,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_rounded_S));
        vcdp->chgBit(c+8225,((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                            >> 0x35U)))));
        vcdp->chgQuad(c+8233,((((QData)((IData)(((3U 
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
        vcdp->chgQuad(c+8249,((VL_ULL(0xfffffffffffff) 
                               & ((1U & (IData)((vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                                 >> 0x35U)))
                                   ? (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                      >> 1U) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D))),52);
        vcdp->chgBus(c+8265,((0x7ffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_res_norm_D) 
                                        + (1U & (IData)(
                                                        (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_upperRounded_D 
                                                         >> 0x35U)))))),11);
        vcdp->chgQuad(c+8273,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Mant_before_format_ctl_D),52);
        vcdp->chgBus(c+8289,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__fpu_norm_U0__DOT__Exp_before_format_ctl_D),11);
    }
}

void Vfpnew_top::traceChgThis__7(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+8297,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result),32);
        vcdp->chgBus(c+8305,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO),5);
    }
}

void Vfpnew_top::traceChgThis__8(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+8313,(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),2);
        vcdp->chgBus(c+8321,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->chgBus(c+8329,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->chgBit(c+8337,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_tag_q));
        vcdp->chgBus(c+8345,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q),5);
        vcdp->chgBit(c+8353,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                    >> 3U))));
        vcdp->chgBus(c+8361,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q))),3);
        vcdp->chgBit(c+8369,((1U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_aux_q) 
                                    >> 4U))));
        vcdp->chgBit(c+8377,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
        vcdp->chgBit(c+8385,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done));
        vcdp->chgBus(c+8393,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q),2);
        vcdp->chgBit(c+8401,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__result_is_fp8_q));
        vcdp->chgBus(c+8409,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP),12);
        vcdp->chgBus(c+8417,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP),12);
        vcdp->chgQuad(c+8425,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP),53);
        vcdp->chgQuad(c+8441,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP),53);
        vcdp->chgBus(c+8457,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP),13);
        vcdp->chgBit(c+8465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Sign_z_DP));
        vcdp->chgBus(c+8473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP),3);
        vcdp->chgBit(c+8481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S));
        vcdp->chgBit(c+8489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S));
        vcdp->chgBit(c+8497,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP));
        vcdp->chgBit(c+8505,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP));
        vcdp->chgBit(c+8513,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP));
        vcdp->chgBit(c+8521,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP));
        vcdp->chgBit(c+8529,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP));
        vcdp->chgBit(c+8537,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP));
        vcdp->chgBit(c+8545,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__SNaN_SP));
        vcdp->chgBit(c+8553,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Special_case_dly_SB));
        vcdp->chgBit(c+8561,((0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S))));
        vcdp->chgBit(c+8569,((0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->chgBit(c+8577,((1U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->chgBit(c+8585,((2U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->chgBit(c+8593,((3U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))));
        vcdp->chgBit(c+8601,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S));
        vcdp->chgBit(c+8609,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S));
        vcdp->chgQuad(c+8617,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP),58);
        vcdp->chgQuad(c+8633,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP),57);
        vcdp->chgQuad(c+8649,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP),54);
        vcdp->chgQuad(c+8665,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP),54);
        vcdp->chgBus(c+8681,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S),2);
        vcdp->chgBus(c+8689,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S),6);
        vcdp->chgBus(c+8697,((0x1fU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                                       >> 1U))),6);
        vcdp->chgBus(c+8705,((0xfU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S) 
                                      >> 2U))),6);
        vcdp->chgBus(c+8713,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S),6);
        vcdp->chgBit(c+8721,((1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))));
        vcdp->chgBus(c+8729,((3U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),2);
        vcdp->chgBus(c+8737,((7U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),3);
        vcdp->chgBus(c+8745,((0xfU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),4);
        vcdp->chgBus(c+8753,((0x1fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),5);
        vcdp->chgBus(c+8761,((0x3fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),6);
        vcdp->chgBus(c+8769,((0x7fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),7);
        vcdp->chgBus(c+8777,((0xffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),8);
        vcdp->chgBus(c+8785,((0x1ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),9);
        vcdp->chgBus(c+8793,((0x3ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),10);
        vcdp->chgBus(c+8801,((0x7ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),11);
        vcdp->chgBus(c+8809,((0xfffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),12);
        vcdp->chgBus(c+8817,((0x1fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),13);
        vcdp->chgBus(c+8825,((0x3fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),14);
        vcdp->chgBus(c+8833,((0x7fffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),15);
        vcdp->chgBus(c+8841,((0xffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),16);
        vcdp->chgBus(c+8849,((0x1ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),17);
        vcdp->chgBus(c+8857,((0x3ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),18);
        vcdp->chgBus(c+8865,((0x7ffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),19);
        vcdp->chgBus(c+8873,((0xfffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),20);
        vcdp->chgBus(c+8881,((0x1fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),21);
        vcdp->chgBus(c+8889,((0x3fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),22);
        vcdp->chgBus(c+8897,((0x7fffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),23);
        vcdp->chgBus(c+8905,((0xffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),24);
        vcdp->chgBus(c+8913,((0x1ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),25);
        vcdp->chgBus(c+8921,((0x3ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),26);
        vcdp->chgBus(c+8929,((0x7ffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),27);
        vcdp->chgBus(c+8937,((0xfffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),28);
        vcdp->chgBus(c+8945,((0x1fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),29);
        vcdp->chgBus(c+8953,((0x3fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),30);
        vcdp->chgBus(c+8961,((0x7fffffffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP))),31);
        vcdp->chgBus(c+8969,((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),32);
        vcdp->chgQuad(c+8977,((VL_ULL(0x1ffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),33);
        vcdp->chgQuad(c+8993,((VL_ULL(0x3ffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),34);
        vcdp->chgQuad(c+9009,((VL_ULL(0x7ffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),35);
        vcdp->chgQuad(c+9025,((VL_ULL(0xfffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),36);
        vcdp->chgQuad(c+9041,((VL_ULL(0x1fffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),37);
        vcdp->chgQuad(c+9057,((VL_ULL(0x3fffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),38);
        vcdp->chgQuad(c+9073,((VL_ULL(0x7fffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),39);
        vcdp->chgQuad(c+9089,((VL_ULL(0xffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),40);
        vcdp->chgQuad(c+9105,((VL_ULL(0x1ffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),41);
        vcdp->chgQuad(c+9121,((VL_ULL(0x3ffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),42);
        vcdp->chgQuad(c+9137,((VL_ULL(0x7ffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),43);
        vcdp->chgQuad(c+9153,((VL_ULL(0xfffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),44);
        vcdp->chgQuad(c+9169,((VL_ULL(0x1fffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),45);
        vcdp->chgQuad(c+9185,((VL_ULL(0x3fffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),46);
        vcdp->chgQuad(c+9201,((VL_ULL(0x7fffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),47);
        vcdp->chgQuad(c+9217,((VL_ULL(0xffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),48);
        vcdp->chgQuad(c+9233,((VL_ULL(0x1ffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),49);
        vcdp->chgQuad(c+9249,((VL_ULL(0x3ffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),50);
        vcdp->chgQuad(c+9265,((VL_ULL(0x7ffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),51);
        vcdp->chgQuad(c+9281,((VL_ULL(0xfffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),52);
        vcdp->chgQuad(c+9297,((VL_ULL(0x1fffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),53);
        vcdp->chgQuad(c+9313,((VL_ULL(0x3fffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),54);
        vcdp->chgQuad(c+9329,((VL_ULL(0x7fffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),55);
        vcdp->chgQuad(c+9345,((VL_ULL(0xffffffffffffff) 
                               & vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)),56);
        vcdp->chgQuad(c+9361,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
                                ? VL_ULL(0) : vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP)),58);
        vcdp->chgBit(c+9377,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S)
                               ? 1U : (1U & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP)))));
        vcdp->chgBus(c+9385,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
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
        vcdp->chgBus(c+9393,((0x1fffU & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S)
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
        vcdp->chgBit(c+9401,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)
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
        vcdp->chgBit(c+9409,(((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_a_SP)) 
                              & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__NaN_b_SP)) 
                                 & ((~ (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_a_SP)) 
                                    & ((~ ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                           & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Inf_b_SP))) 
                                       & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_a_SP)
                                           ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                              & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP))
                                           : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Div_enable_S) 
                                              & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Zero_b_SP)))))))));
        vcdp->chgBus(c+9417,((0x1fffU & ((IData)(0x35U) 
                                         + (0xfffU 
                                            & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),13);
        vcdp->chgBus(c+9425,((0x3ffU & ((IData)(0x18U) 
                                        + (0x1ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),10);
        vcdp->chgBus(c+9433,((0x7fU & ((IData)(0xbU) 
                                       + (0x3fU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),7);
        vcdp->chgBus(c+9441,((0x3ffU & ((IData)(8U) 
                                        + (0x1ffU & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP))))),10);
        vcdp->chgBus(c+9449,((0x1fffU & ((IData)(2U) 
                                         + (~ VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)))))),13);
        vcdp->chgBus(c+9457,((0x1fffU & (VL_EXTENDS_II(13,13, (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP)) 
                                         - (IData)(1U)))),13);
        vcdp->chgBus(c+9465,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
        vcdp->chgBus(c+9473,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q),3);
    }
}

void Vfpnew_top::traceChgThis__9(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9481,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q),32);
        vcdp->chgBus(c+9489,(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q),5);
    }
}

void Vfpnew_top::traceChgThis__10(Vfpnew_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfpnew_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9497,(vlTOPp->clk_i));
        vcdp->chgBit(c+9505,(vlTOPp->rst_ni));
        vcdp->chgArray(c+9513,(vlTOPp->operands_i),96);
        vcdp->chgBus(c+9537,(vlTOPp->rnd_mode_i),3);
        vcdp->chgBus(c+9545,(vlTOPp->op_i),4);
        vcdp->chgBit(c+9553,(vlTOPp->op_mod_i));
        vcdp->chgBus(c+9561,(vlTOPp->src_fmt_i),3);
        vcdp->chgBus(c+9569,(vlTOPp->dst_fmt_i),3);
        vcdp->chgBus(c+9577,(vlTOPp->int_fmt_i),2);
        vcdp->chgBit(c+9585,(vlTOPp->vectorial_op_i));
        vcdp->chgBit(c+9593,(vlTOPp->tag_i));
        vcdp->chgBit(c+9601,(vlTOPp->in_valid_i));
        vcdp->chgBit(c+9609,(vlTOPp->in_ready_o));
        vcdp->chgBit(c+9617,(vlTOPp->flush_i));
        vcdp->chgBus(c+9625,(vlTOPp->result_o),32);
        vcdp->chgBus(c+9633,(vlTOPp->status_o),5);
        vcdp->chgBit(c+9641,(vlTOPp->tag_o));
        vcdp->chgBit(c+9649,(vlTOPp->out_valid_o));
        vcdp->chgBit(c+9657,(vlTOPp->out_ready_i));
        vcdp->chgBit(c+9665,(vlTOPp->busy_o));
        vcdp->chgBus(c+9673,((3U & (((IData)(vlTOPp->out_ready_i) 
                                     & (IData)(vlTOPp->out_valid_o))
                                     ? ((1U & (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlTOPp->fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
        vcdp->chgBit(c+9681,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                              & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                    >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->chgBus(c+9689,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                               ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                                   ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result
                                   : ((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                          & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                         & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                         ? (2U == (IData)(vlTOPp->rnd_mode_i))
                                         : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                                       << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))
                               : 0xffffffffU)),32);
        vcdp->chgBus(c+9697,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__result_is_special)
                               ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__special_result
                               : ((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                      & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                     & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                     ? (2U == (IData)(vlTOPp->rnd_mode_i))
                                     : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                                   << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))),32);
        vcdp->chgBus(c+9705,(vlTOPp->rnd_mode_i),3);
        vcdp->chgBus(c+9713,(vlTOPp->op_i),4);
        vcdp->chgBit(c+9721,(((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                               & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                               ? (2U == (IData)(vlTOPp->rnd_mode_i))
                               : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign))));
        vcdp->chgBus(c+9729,(((((((0U == vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__pre_round_abs) 
                                  & (0U == (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits))) 
                                 & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__effective_subtraction))
                                 ? (2U == (IData)(vlTOPp->rnd_mode_i))
                                 : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_sign)) 
                               << 0x1fU) | vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs)),32);
        vcdp->chgBit(c+9737,((1U & ((4U & (IData)(vlTOPp->rnd_mode_i))
                                     ? (((IData)(vlTOPp->rnd_mode_i) 
                                         >> 1U) | ((IData)(vlTOPp->rnd_mode_i) 
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
        vcdp->chgQuad(c+9745,((((QData)((IData)(vlTOPp->operands_i[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->operands_i[0U])))),64);
        vcdp->chgBit(c+9761,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                              & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                    >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->chgBus(c+9769,(vlTOPp->dst_fmt_i),3);
        vcdp->chgBus(c+9777,(vlTOPp->dst_fmt_i),5);
        vcdp->chgBus(c+9785,(vlTOPp->rnd_mode_i),3);
        vcdp->chgBus(c+9793,(vlTOPp->op_i),4);
        vcdp->chgBus(c+9801,(vlTOPp->dst_fmt_i),3);
        vcdp->chgBus(c+9809,((((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Start_S) 
                               & (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready))
                               ? (IData)(vlTOPp->rnd_mode_i)
                               : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP))),3);
        vcdp->chgQuad(c+9817,((((QData)((IData)(vlTOPp->operands_i[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->operands_i[0U])))),64);
        vcdp->chgBit(c+9833,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                              & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                    >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->chgBus(c+9841,(((9U == (IData)(vlTOPp->op_i))
                               ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__class_mask_d)
                               : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                                   ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__result_d
                                   : VL_NEGATE_I((IData)((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__extension_bit_d)))))),32);
        vcdp->chgBus(c+9849,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__in_valid)
                               ? ((8U & (IData)(vlTOPp->op_i))
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
                                               : 0U)
                                           : 0x1fU)
                                       : 0x1fU)) : 0U)),5);
        vcdp->chgBit(c+9857,((9U == (IData)(vlTOPp->op_i))));
        vcdp->chgBus(c+9865,(((8U & (IData)(vlTOPp->op_i))
                               ? ((4U & (IData)(vlTOPp->op_i))
                                   ? 0x1fU : ((2U & (IData)(vlTOPp->op_i))
                                               ? 0x1fU
                                               : ((1U 
                                                   & (IData)(vlTOPp->op_i))
                                                   ? 0U
                                                   : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__cmp_status))))
                               : ((4U & (IData)(vlTOPp->op_i))
                                   ? ((2U & (IData)(vlTOPp->op_i))
                                       ? ((1U & (IData)(vlTOPp->op_i))
                                           ? (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__minmax_status)
                                           : 0U) : 0x1fU)
                                   : 0x1fU))),5);
        vcdp->chgBus(c+9873,(vlTOPp->rnd_mode_i),3);
        vcdp->chgBus(c+9881,(vlTOPp->op_i),4);
        vcdp->chgBit(c+9889,((1U & ((~ (IData)(vlTOPp->op_mod_i)) 
                                    | (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT__sgnj_result 
                                       >> 0x1fU)))));
        vcdp->chgBus(c+9897,(((1U & (((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_noncomp__DOT____Vcellout__i_class_a__info_o) 
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
        vcdp->chgBit(c+9905,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                              & ((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                                 & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                    >> (IData)(vlTOPp->dst_fmt_i))))));
        vcdp->chgBus(c+9913,(((0xbU == (IData)(vlTOPp->op_i))
                               ? (IData)(vlTOPp->int_fmt_i)
                               : (IData)(vlTOPp->dst_fmt_i))),3);
        vcdp->chgBit(c+9921,((0xbU == (IData)(vlTOPp->op_i))));
        vcdp->chgBus(c+9929,((1U & (((0xeU == (IData)(vlTOPp->op_i)) 
                                     << 1U) | (IData)(vlTOPp->op_mod_i)))),2);
        vcdp->chgBus(c+9937,(((2U & (((0xeU == (IData)(vlTOPp->op_i)) 
                                      << 2U) | ((IData)(vlTOPp->op_mod_i) 
                                                << 1U))) 
                              | (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk))),3);
        vcdp->chgBus(c+9945,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__dst_is_cpk)
                               ? vlTOPp->operands_i[2U]
                               : vlTOPp->operands_i[1U])),32);
        vcdp->chgBus(c+9953,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__in_valid)
                               ? ((0xbU == (IData)(vlTOPp->op_i))
                                   ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                       ? 0x10U : (0U 
                                                  != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                   : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                       ? (0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                   << 2U))
                                       : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
                               : 0U)),5);
        vcdp->chgBus(c+9961,(((0xbU == (IData)(vlTOPp->op_i))
                               ? vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                               : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                   ? ((0x9fU >= (0xffU 
                                                 & ((IData)(vlTOPp->dst_fmt_i) 
                                                    << 5U)))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(vlTOPp->dst_fmt_i) 
                                                      << 5U)))
                                            ? 0U : 
                                           (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                            ((IData)(1U) 
                                             + (7U 
                                                & (IData)(vlTOPp->dst_fmt_i)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
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
        vcdp->chgBus(c+9969,(((0xbU == (IData)(vlTOPp->op_i))
                               ? ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                   ? 0x10U : (0U != (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                               : ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                   ? (0x10U & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                               << 2U))
                                   : (IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))),5);
        vcdp->chgBus(c+9977,(vlTOPp->src_fmt_i),3);
        vcdp->chgBus(c+9985,(vlTOPp->dst_fmt_i),3);
        vcdp->chgBus(c+9993,(vlTOPp->int_fmt_i),2);
        vcdp->chgBus(c+10001,(vlTOPp->rnd_mode_i),3);
        vcdp->chgBus(c+10009,(vlTOPp->op_i),4);
        vcdp->chgBit(c+10017,((0xcU == (IData)(vlTOPp->op_i))));
        vcdp->chgBit(c+10025,((0xbU == (IData)(vlTOPp->op_i))));
        vcdp->chgBus(c+10033,(((0x2cU >= (0x3fU & ((IData)(9U) 
                                                   * (IData)(vlTOPp->src_fmt_i))))
                                ? (0x1ffU & (IData)(
                                                    (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_exponent 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(9U) 
                                                         * (IData)(vlTOPp->src_fmt_i))))))
                                : 0U)),9);
        vcdp->chgBus(c+10041,((0x1ffU & VL_EXTENDS_II(9,2, 
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
        vcdp->chgBus(c+10049,(((0x2cU >= (0x3fU & ((IData)(9U) 
                                                   * (IData)(vlTOPp->src_fmt_i))))
                                ? (0x1ffU & (IData)(
                                                    (vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_shift_compensation 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(9U) 
                                                         * (IData)(vlTOPp->src_fmt_i))))))
                                : 0U)),9);
        vcdp->chgBus(c+10057,((0x1ffU & ((((((0x2cU 
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
        vcdp->chgBit(c+10065,(((4U >= (IData)(vlTOPp->dst_fmt_i)) 
                               & ((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round) 
                                  >> (IData)(vlTOPp->dst_fmt_i)))));
        vcdp->chgBus(c+10073,(((0x9fU >= (0xffU & ((IData)(vlTOPp->dst_fmt_i) 
                                                   << 5U)))
                                ? (((0U == (0x1fU & 
                                            ((IData)(vlTOPp->dst_fmt_i) 
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
                                      >> (0x1fU & ((IData)(vlTOPp->dst_fmt_i) 
                                                   << 5U))))
                                : 0U)),32);
        vcdp->chgBus(c+10081,((((0U == (0x1fU & ((IData)(vlTOPp->int_fmt_i) 
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
        vcdp->chgBus(c+10089,(((IData)(vlTOPp->fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
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
                                              ? (((0U 
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
        vcdp->chgBit(c+10097,((1U & ((4U & (IData)(vlTOPp->rnd_mode_i))
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
    }
}
