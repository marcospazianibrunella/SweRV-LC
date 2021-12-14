// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_div_ctl_32__Syms.h"


//======================

void Vexu_div_ctl_32::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vexu_div_ctl_32* t = (Vexu_div_ctl_32*)userthis;
    Vexu_div_ctl_32__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vexu_div_ctl_32::traceChgThis(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 2U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vexu_div_ctl_32::traceChgThis__2(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->exu_div_ctl_32__DOT__valid_e1));
        vcdp->chgBus(c+9,(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff),6);
    }
}

void Vexu_div_ctl_32::traceChgThis__3(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(((1U & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                    >> 1U) & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                               >> 3U) 
                                              ^ ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                 >> 2U))))
                             ? ((vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
                                 << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             : (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff))),32);
        vcdp->chgBus(c+25,(((1U & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                    >> 1U) & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                              >> 3U)))
                             ? ((vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
                                 << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             : (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff))),32);
    }
}

void Vexu_div_ctl_32::traceChgThis__4(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp22[3];
    WData/*95:0*/ __Vtemp23[3];
    WData/*95:0*/ __Vtemp26[3];
    WData/*95:0*/ __Vtemp27[3];
    // Body
    {
        VL_EXTEND_WI(65,32, __Vtemp22, vlTOPp->exu_div_ctl_32__DOT__dividend_eff);
        VL_SHIFTL_WWI(65,65,6, __Vtemp23, __Vtemp22, (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff));
        vcdp->chgQuad(c+33,((VL_ULL(0x1ffffffff) & 
                             (VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state))) 
                              & (((VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct))) 
                                   & vlTOPp->exu_div_ctl_32__DOT__a_ff) 
                                  | (VL_NEGATE_Q((QData)((IData)(
                                                                 (1U 
                                                                  & ((~ (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)) 
                                                                     & (~ 
                                                                        ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                         >> 4U))))))) 
                                     & (((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)) 
                                         << 1U) | (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 0x20U)))))))) 
                                 | (VL_NEGATE_Q((QData)((IData)(
                                                                (1U 
                                                                 & ((~ (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)) 
                                                                    & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                       >> 4U)))))) 
                                    & (((QData)((IData)(
                                                        (1U 
                                                         & __Vtemp23[2U]))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp23[1U])))))))),33);
        VL_EXTEND_WI(65,32, __Vtemp26, vlTOPp->exu_div_ctl_32__DOT__dividend_eff);
        VL_SHIFTL_WWI(65,65,6, __Vtemp27, __Vtemp26, (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff));
        vcdp->chgQuad(c+49,((VL_ULL(0x1ffffffff) & 
                             (((VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct))) 
                                & vlTOPp->exu_div_ctl_32__DOT__a_ff) 
                               | (VL_NEGATE_Q((QData)((IData)(
                                                              (1U 
                                                               & ((~ (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)) 
                                                                  & (~ 
                                                                     ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                      >> 4U))))))) 
                                  & (((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)) 
                                      << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 0x20U)))))))) 
                              | (VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & ((~ (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)) 
                                                                 & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                    >> 4U)))))) 
                                 & (((QData)((IData)(
                                                     (1U 
                                                      & __Vtemp27[2U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp27[1U]))))))),33);
    }
}

void Vexu_div_ctl_32::traceChgThis__5(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp30[3];
    WData/*95:0*/ __Vtemp31[3];
    WData/*95:0*/ __Vtemp32[3];
    // Body
    {
        VL_EXTEND_WI(65,32, __Vtemp30, vlTOPp->exu_div_ctl_32__DOT__dividend_eff);
        VL_SHIFTL_WWI(65,65,6, __Vtemp31, __Vtemp30, (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff));
        __Vtemp32[0U] = __Vtemp31[0U];
        __Vtemp32[1U] = __Vtemp31[1U];
        __Vtemp32[2U] = (1U & __Vtemp31[2U]);
        vcdp->chgArray(c+65,(__Vtemp32),65);
    }
}

void Vexu_div_ctl_32::traceChgThis__6(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+89,(((vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
                             << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))),32);
        vcdp->chgBus(c+97,(((vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
                             << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))),32);
        vcdp->chgBus(c+105,(((vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
                              << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))),32);
        vcdp->chgBus(c+113,(vlTOPp->exu_div_ctl_32__DOT__smallnum),4);
        vcdp->chgBus(c+121,(vlTOPp->exu_div_ctl_32__DOT__b_cls),5);
        vcdp->chgBus(c+129,(vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp),31);
        vcdp->chgBus(c+137,(vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp),31);
        vcdp->chgBus(c+145,(vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp),31);
    }
}

void Vexu_div_ctl_32::traceChgThis__7(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+153,((((IData)(vlTOPp->exu_div_ctl_32__DOT__smallnum_case) 
                              << 4U) | (IData)(vlTOPp->exu_div_ctl_32__DOT__smallnum))),5);
    }
}

void Vexu_div_ctl_32::traceChgThis__8(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+161,((VL_ULL(0x1ffffffff) & 
                              ((IData)(vlTOPp->exu_div_ctl_32__DOT__add)
                                ? vlTOPp->exu_div_ctl_32__DOT__m_ff
                                : (~ vlTOPp->exu_div_ctl_32__DOT__m_ff)))),33);
        vcdp->chgQuad(c+177,(vlTOPp->exu_div_ctl_32__DOT__short_dividend),33);
    }
}

void Vexu_div_ctl_32::traceChgThis__9(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+193,(vlTOPp->exu_div_ctl_32__DOT__smallnum_case));
    }
}

void Vexu_div_ctl_32::traceChgThis__10(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+201,(vlTOPp->exu_div_ctl_32__DOT__a_in),33);
        vcdp->chgBus(c+217,(vlTOPp->exu_div_ctl_32__DOT__dividend_eff),32);
        vcdp->chgBit(c+225,(vlTOPp->exu_div_ctl_32__DOT__add));
        vcdp->chgBit(c+233,(vlTOPp->exu_div_ctl_32__DOT__rem_correct));
        vcdp->chgBus(c+241,(vlTOPp->exu_div_ctl_32__DOT__a_cls),5);
        vcdp->chgBus(c+249,(vlTOPp->exu_div_ctl_32__DOT__shortq_shift),6);
        vcdp->chgBit(c+257,(vlTOPp->exu_div_ctl_32__DOT__shortq_enable));
        vcdp->chgBus(c+265,(vlTOPp->exu_div_ctl_32__DOT__shortq_raw),4);
        vcdp->chgBus(c+273,((((IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable) 
                              << 4U) | (0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift)))),5);
    }
}

void Vexu_div_ctl_32::traceChgThis__11(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+281,(vlTOPp->exu_div_ctl_32__DOT__run_state));
        vcdp->chgBus(c+289,(vlTOPp->exu_div_ctl_32__DOT__count),6);
        vcdp->chgBit(c+297,((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                   >> 3U))));
        vcdp->chgBit(c+305,((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                   >> 2U))));
        vcdp->chgBit(c+313,((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                   >> 1U))));
        vcdp->chgBit(c+321,((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout))));
        vcdp->chgBit(c+329,(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff));
        vcdp->chgBit(c+337,((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout) 
                                   >> 4U))));
        vcdp->chgBus(c+345,((0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout))),4);
        vcdp->chgBit(c+353,((1U & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                    >> 2U) & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                              >> 1U)))));
        vcdp->chgBit(c+361,((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                   >> 4U))));
        vcdp->chgBus(c+369,((0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout))),4);
        vcdp->chgBus(c+377,(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout),4);
        vcdp->chgBus(c+385,(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout),5);
        vcdp->chgBus(c+393,(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout),5);
    }
}

void Vexu_div_ctl_32::traceChgThis__12(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+401,(vlTOPp->exu_div_ctl_32__DOT__m_ff),33);
        vcdp->chgQuad(c+417,(vlTOPp->exu_div_ctl_32__DOT__q_ff),33);
        vcdp->chgQuad(c+433,(vlTOPp->exu_div_ctl_32__DOT__a_ff),33);
        vcdp->chgBus(c+449,((IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)),32);
        vcdp->chgBus(c+457,((IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)),32);
    }
}

void Vexu_div_ctl_32::traceChgThis__13(Vexu_div_ctl_32__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+465,(vlTOPp->clk));
        vcdp->chgBit(c+473,(vlTOPp->active_clk));
        vcdp->chgBit(c+481,(vlTOPp->rst_l));
        vcdp->chgBit(c+489,(vlTOPp->scan_mode));
        vcdp->chgBit(c+497,(vlTOPp->dec_tlu_fast_div_disable));
        vcdp->chgBus(c+505,(vlTOPp->dividend),32);
        vcdp->chgBus(c+513,(vlTOPp->divisor),32);
        vcdp->chgBus(c+521,(vlTOPp->dp),3);
        vcdp->chgBit(c+529,(vlTOPp->flush_lower));
        vcdp->chgBit(c+537,(vlTOPp->valid_ff_e1));
        vcdp->chgBit(c+545,(vlTOPp->finish_early));
        vcdp->chgBit(c+553,(vlTOPp->finish));
        vcdp->chgBit(c+561,(vlTOPp->div_stall));
        vcdp->chgBus(c+569,(vlTOPp->out),32);
        vcdp->chgBit(c+577,((1U & (((((IData)(vlTOPp->dp) 
                                      >> 2U) | (IData)(vlTOPp->exu_div_ctl_32__DOT__run_state)) 
                                    & (~ (IData)(vlTOPp->finish))) 
                                   & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff))))));
        vcdp->chgBus(c+585,((0x3fU & (VL_NEGATE_I((IData)(
                                                          ((((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                             & (~ (IData)(vlTOPp->finish))) 
                                                            & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff))) 
                                                           & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))))) 
                                      & ((IData)(1U) 
                                         + ((IData)(vlTOPp->exu_div_ctl_32__DOT__count) 
                                            + (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff)))))),6);
        vcdp->chgBit(c+593,((1U & (((IData)(vlTOPp->dp) 
                                    >> 2U) | ((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                              & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable)))))));
        vcdp->chgBit(c+601,((1U & ((((IData)(vlTOPp->dp) 
                                     >> 2U) | (((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))) 
                                               & (0x21U 
                                                  != (IData)(vlTOPp->exu_div_ctl_32__DOT__count)))) 
                                   | (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)))));
        vcdp->chgQuad(c+609,((VL_ULL(0x1ffffffff) & 
                              (((VL_NEGATE_Q((QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__run_state)))))) 
                                 & (QData)((IData)(vlTOPp->dividend))) 
                                | (VL_NEGATE_Q((QData)((IData)(
                                                               ((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                                & ((IData)(vlTOPp->valid_ff_e1) 
                                                                   | ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                      >> 4U)))))) 
                                   & ((((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__dividend_eff)) 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__a_in 
                                                                                >> 0x20U))))))) 
                                      << (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff)))) 
                               | (VL_NEGATE_Q((QData)((IData)(
                                                              ((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->valid_ff_e1) 
                                                                   | ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                      >> 4U))))))) 
                                  & (((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                      << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__a_in 
                                                                              >> 0x20U))))))))))),33);
        vcdp->chgBit(c+625,(((~ ((IData)(vlTOPp->dp) 
                                 >> 1U)) & (0U != vlTOPp->divisor))));
        vcdp->chgBit(c+633,((1U & (((IData)(vlTOPp->dp) 
                                    >> 2U) & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff))))));
        vcdp->chgBus(c+641,(((8U & (vlTOPp->dividend 
                                    >> 0x1cU)) | ((4U 
                                                   & (vlTOPp->divisor 
                                                      >> 0x1dU)) 
                                                  | ((((~ 
                                                        ((IData)(vlTOPp->dp) 
                                                         >> 1U)) 
                                                       & (0U 
                                                          != vlTOPp->divisor)) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(vlTOPp->dp)))))),4);
        vcdp->chgBit(c+649,((1U & ((IData)(vlTOPp->dp) 
                                   >> 2U))));
        vcdp->chgBus(c+657,(((4U & (IData)(vlTOPp->dp))
                              ? ((8U & (vlTOPp->dividend 
                                        >> 0x1cU)) 
                                 | ((4U & (vlTOPp->divisor 
                                           >> 0x1dU)) 
                                    | ((((~ ((IData)(vlTOPp->dp) 
                                             >> 1U)) 
                                         & (0U != vlTOPp->divisor)) 
                                        << 1U) | (1U 
                                                  & (IData)(vlTOPp->dp)))))
                              : (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout))),4);
        vcdp->chgQuad(c+665,((((QData)((IData)((1U 
                                                & ((~ 
                                                    ((IData)(vlTOPp->dp) 
                                                     >> 1U)) 
                                                   & (vlTOPp->divisor 
                                                      >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlTOPp->divisor)))),33);
        vcdp->chgQuad(c+681,(((4U & (IData)(vlTOPp->dp))
                               ? (((QData)((IData)(
                                                   (1U 
                                                    & ((~ 
                                                        ((IData)(vlTOPp->dp) 
                                                         >> 1U)) 
                                                       & (vlTOPp->divisor 
                                                          >> 0x1fU))))) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->divisor)))
                               : vlTOPp->exu_div_ctl_32__DOT__m_ff)),33);
        vcdp->chgQuad(c+697,((VL_ULL(0x1ffffffff) & 
                              ((1U & (((IData)(vlTOPp->dp) 
                                       >> 2U) | ((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable)))))
                                ? (((VL_NEGATE_Q((QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__run_state)))))) 
                                     & (QData)((IData)(vlTOPp->dividend))) 
                                    | (VL_NEGATE_Q((QData)((IData)(
                                                                   ((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                                    & ((IData)(vlTOPp->valid_ff_e1) 
                                                                       | ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                          >> 4U)))))) 
                                       & ((((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__dividend_eff)) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__a_in 
                                                                            >> 0x20U))))))) 
                                          << (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff)))) 
                                   | (VL_NEGATE_Q((QData)((IData)(
                                                                  ((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                                   & (~ 
                                                                      ((IData)(vlTOPp->valid_ff_e1) 
                                                                       | ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                          >> 4U))))))) 
                                      & (((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__a_in 
                                                                                >> 0x20U)))))))))
                                : vlTOPp->exu_div_ctl_32__DOT__q_ff))),33);
        vcdp->chgQuad(c+713,(((1U & ((((IData)(vlTOPp->dp) 
                                       >> 2U) | (((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                  & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))) 
                                                 & (0x21U 
                                                    != (IData)(vlTOPp->exu_div_ctl_32__DOT__count)))) 
                                     | (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)))
                               ? vlTOPp->exu_div_ctl_32__DOT__a_in
                               : vlTOPp->exu_div_ctl_32__DOT__a_ff)),33);
    }
}
