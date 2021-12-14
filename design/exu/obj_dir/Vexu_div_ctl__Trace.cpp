// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_div_ctl__Syms.h"


//======================

void Vexu_div_ctl::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vexu_div_ctl* t = (Vexu_div_ctl*)userthis;
    Vexu_div_ctl__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vexu_div_ctl::traceChgThis(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vexu_div_ctl::traceChgThis__2(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->exu_div_ctl__DOT__valid_e1));
        vcdp->chgBus(c+9,(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff),8);
    }
}

void Vexu_div_ctl::traceChgThis__3(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+17,(((1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                     >> 1U) & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                                >> 3U) 
                                               ^ ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                                  >> 2U))))
                              ? ((vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
                                  << 1U) | (QData)((IData)(
                                                           (1U 
                                                            & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))))
                              : (((QData)((IData)(vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->exu_div_ctl__DOT__q_ff[0U]))))),64);
        vcdp->chgQuad(c+33,(((1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                     >> 1U) & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                               >> 3U)))
                              ? ((vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
                                  << 1U) | (QData)((IData)(
                                                           (1U 
                                                            & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))))
                              : (((QData)((IData)(vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->exu_div_ctl__DOT__a_ff[0U]))))),64);
    }
}

void Vexu_div_ctl::traceChgThis__4(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp187[5];
    WData/*159:0*/ __Vtemp188[5];
    WData/*95:0*/ __Vtemp192[3];
    WData/*95:0*/ __Vtemp194[3];
    WData/*159:0*/ __Vtemp204[5];
    WData/*159:0*/ __Vtemp205[5];
    WData/*95:0*/ __Vtemp209[3];
    WData/*95:0*/ __Vtemp210[3];
    // Body
    {
        VL_EXTEND_WQ(129,64, __Vtemp187, vlTOPp->exu_div_ctl__DOT__dividend_eff);
        VL_SHIFTL_WWI(129,129,8, __Vtemp188, __Vtemp187, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
        __Vtemp192[1U] = (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                            & vlTOPp->exu_div_ctl__DOT__a_ff[1U]) 
                           | (VL_NEGATE_I((IData)((1U 
                                                   & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                          >> 4U)))))) 
                              & ((1U & ((IData)((((QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->exu_div_ctl__DOT__a_ff[0U])))) 
                                        >> 0x1fU)) 
                                 | (0xfffffffeU & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->exu_div_ctl__DOT__a_ff[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U))))) 
                          | (VL_NEGATE_I((IData)((1U 
                                                  & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                     & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                        >> 4U))))) 
                             & __Vtemp188[3U]));
        __Vtemp194[0U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                          & (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                               & vlTOPp->exu_div_ctl__DOT__a_ff[0U]) 
                              | (VL_NEGATE_I((IData)(
                                                     (1U 
                                                      & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                             >> 4U)))))) 
                                 & ((0xfffffffeU & 
                                     ((IData)((((QData)((IData)(
                                                                vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[0U])))) 
                                      << 1U)) | (1U 
                                                 & vlTOPp->exu_div_ctl__DOT__q_ff[2U])))) 
                             | (VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                        & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                           >> 4U))))) 
                                & __Vtemp188[2U])));
        __Vtemp194[1U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                          & __Vtemp192[1U]);
        __Vtemp194[2U] = (1U & (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                                & (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                                     & vlTOPp->exu_div_ctl__DOT__a_ff[2U]) 
                                    | (1U & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                                     & (~ 
                                                                        ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                         >> 4U)))))) 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->exu_div_ctl__DOT__a_ff[0U]))) 
                                                         >> 0x20U)) 
                                                >> 0x1fU)))) 
                                   | (1U & (VL_NEGATE_I((IData)(
                                                                (1U 
                                                                 & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                                    & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                       >> 4U))))) 
                                            & __Vtemp188[4U])))));
        vcdp->chgArray(c+49,(__Vtemp194),65);
        VL_EXTEND_WQ(129,64, __Vtemp204, vlTOPp->exu_div_ctl__DOT__dividend_eff);
        VL_SHIFTL_WWI(129,129,8, __Vtemp205, __Vtemp204, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
        __Vtemp209[1U] = (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                            & vlTOPp->exu_div_ctl__DOT__a_ff[1U]) 
                           | (VL_NEGATE_I((IData)((1U 
                                                   & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                          >> 4U)))))) 
                              & ((1U & ((IData)((((QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->exu_div_ctl__DOT__a_ff[0U])))) 
                                        >> 0x1fU)) 
                                 | (0xfffffffeU & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->exu_div_ctl__DOT__a_ff[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U))))) 
                          | (VL_NEGATE_I((IData)((1U 
                                                  & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                     & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                        >> 4U))))) 
                             & __Vtemp205[3U]));
        __Vtemp210[0U] = (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                            & vlTOPp->exu_div_ctl__DOT__a_ff[0U]) 
                           | (VL_NEGATE_I((IData)((1U 
                                                   & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                          >> 4U)))))) 
                              & ((0xfffffffeU & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->exu_div_ctl__DOT__a_ff[0U])))) 
                                                 << 1U)) 
                                 | (1U & vlTOPp->exu_div_ctl__DOT__q_ff[2U])))) 
                          | (VL_NEGATE_I((IData)((1U 
                                                  & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                     & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                        >> 4U))))) 
                             & __Vtemp205[2U]));
        __Vtemp210[1U] = __Vtemp209[1U];
        __Vtemp210[2U] = (1U & (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                                  & vlTOPp->exu_div_ctl__DOT__a_ff[2U]) 
                                 | (1U & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                                  & (~ 
                                                                     ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                      >> 4U)))))) 
                                          & ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->exu_div_ctl__DOT__a_ff[0U]))) 
                                                      >> 0x20U)) 
                                             >> 0x1fU)))) 
                                | (1U & (VL_NEGATE_I((IData)(
                                                             (1U 
                                                              & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                                 & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                    >> 4U))))) 
                                         & __Vtemp205[4U]))));
        vcdp->chgArray(c+73,(__Vtemp210),65);
    }
}

void Vexu_div_ctl::traceChgThis__5(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp212[5];
    WData/*159:0*/ __Vtemp213[5];
    WData/*159:0*/ __Vtemp214[5];
    // Body
    {
        VL_EXTEND_WQ(129,64, __Vtemp212, vlTOPp->exu_div_ctl__DOT__dividend_eff);
        VL_SHIFTL_WWI(129,129,8, __Vtemp213, __Vtemp212, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
        __Vtemp214[0U] = __Vtemp213[0U];
        __Vtemp214[1U] = __Vtemp213[1U];
        __Vtemp214[2U] = __Vtemp213[2U];
        __Vtemp214[3U] = __Vtemp213[3U];
        __Vtemp214[4U] = (1U & __Vtemp213[4U]);
        vcdp->chgArray(c+97,(__Vtemp214),129);
    }
}

void Vexu_div_ctl::traceChgThis__6(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+137,(((vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))))),64);
        vcdp->chgQuad(c+153,(((vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))))),64);
        vcdp->chgQuad(c+169,(((vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))))),64);
        vcdp->chgBus(c+185,(vlTOPp->exu_div_ctl__DOT__smallnum),4);
        vcdp->chgBus(c+193,(vlTOPp->exu_div_ctl__DOT__b_cls),5);
        vcdp->chgQuad(c+201,(vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp),63);
        vcdp->chgQuad(c+217,(vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp),63);
        vcdp->chgQuad(c+233,(vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp),63);
    }
}

void Vexu_div_ctl::traceChgThis__7(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+249,((((IData)(vlTOPp->exu_div_ctl__DOT__smallnum_case) 
                              << 4U) | (IData)(vlTOPp->exu_div_ctl__DOT__smallnum))),5);
    }
}

void Vexu_div_ctl::traceChgThis__8(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp218[3];
    // Body
    {
        __Vtemp218[0U] = ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                           ? vlTOPp->exu_div_ctl__DOT__m_ff[0U]
                           : (~ vlTOPp->exu_div_ctl__DOT__m_ff[0U]));
        __Vtemp218[1U] = ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                           ? vlTOPp->exu_div_ctl__DOT__m_ff[1U]
                           : (~ vlTOPp->exu_div_ctl__DOT__m_ff[1U]));
        __Vtemp218[2U] = (1U & ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                                 ? vlTOPp->exu_div_ctl__DOT__m_ff[2U]
                                 : (~ vlTOPp->exu_div_ctl__DOT__m_ff[2U])));
        vcdp->chgArray(c+257,(__Vtemp218),65);
        vcdp->chgArray(c+281,(vlTOPp->exu_div_ctl__DOT__short_dividend),65);
    }
}

void Vexu_div_ctl::traceChgThis__9(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+305,(vlTOPp->exu_div_ctl__DOT__smallnum_case));
    }
}

void Vexu_div_ctl::traceChgThis__10(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+313,(vlTOPp->exu_div_ctl__DOT__a_in),65);
        vcdp->chgQuad(c+337,(vlTOPp->exu_div_ctl__DOT__dividend_eff),64);
        vcdp->chgBit(c+353,(vlTOPp->exu_div_ctl__DOT__add));
        vcdp->chgBit(c+361,(vlTOPp->exu_div_ctl__DOT__rem_correct));
        vcdp->chgBus(c+369,(vlTOPp->exu_div_ctl__DOT__a_cls),5);
        vcdp->chgBus(c+377,(vlTOPp->exu_div_ctl__DOT__shortq_shift),8);
        vcdp->chgBit(c+385,(vlTOPp->exu_div_ctl__DOT__shortq_enable));
        vcdp->chgBus(c+393,(vlTOPp->exu_div_ctl__DOT__shortq_raw),4);
        vcdp->chgBus(c+401,((((IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable) 
                              << 4U) | (0xfU & (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift)))),5);
    }
}

void Vexu_div_ctl::traceChgThis__11(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+409,(vlTOPp->exu_div_ctl__DOT__run_state));
        vcdp->chgBus(c+417,(vlTOPp->exu_div_ctl__DOT__count),8);
        vcdp->chgBit(c+425,((1U & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                   >> 3U))));
        vcdp->chgBit(c+433,((1U & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                   >> 2U))));
        vcdp->chgBit(c+441,((1U & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                   >> 1U))));
        vcdp->chgBit(c+449,((1U & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))));
        vcdp->chgBit(c+457,(vlTOPp->exu_div_ctl__DOT__flush_lower_ff));
        vcdp->chgBit(c+465,((1U & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout) 
                                   >> 4U))));
        vcdp->chgBus(c+473,((0xfU & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout))),4);
        vcdp->chgBit(c+481,((1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                    >> 2U) & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                              >> 1U)))));
        vcdp->chgBit(c+489,((1U & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                   >> 4U))));
        vcdp->chgBus(c+497,((0xfU & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout))),4);
        vcdp->chgBus(c+505,(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout),4);
        vcdp->chgBus(c+513,(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout),5);
        vcdp->chgBus(c+521,(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout),5);
    }
}

void Vexu_div_ctl::traceChgThis__12(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+529,(vlTOPp->exu_div_ctl__DOT__m_ff),65);
        vcdp->chgArray(c+553,(vlTOPp->exu_div_ctl__DOT__q_ff),65);
        vcdp->chgArray(c+577,(vlTOPp->exu_div_ctl__DOT__a_ff),65);
        vcdp->chgQuad(c+601,((((QData)((IData)(vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->exu_div_ctl__DOT__q_ff[0U])))),64);
        vcdp->chgQuad(c+617,((((QData)((IData)(vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->exu_div_ctl__DOT__a_ff[0U])))),64);
    }
}

void Vexu_div_ctl::traceChgThis__13(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp221[3];
    WData/*95:0*/ __Vtemp224[3];
    WData/*95:0*/ __Vtemp225[3];
    WData/*95:0*/ __Vtemp231[3];
    WData/*95:0*/ __Vtemp232[3];
    WData/*95:0*/ __Vtemp233[3];
    WData/*95:0*/ __Vtemp236[3];
    WData/*95:0*/ __Vtemp239[3];
    WData/*95:0*/ __Vtemp242[3];
    WData/*95:0*/ __Vtemp243[3];
    WData/*95:0*/ __Vtemp249[3];
    WData/*95:0*/ __Vtemp251[3];
    WData/*95:0*/ __Vtemp252[3];
    WData/*95:0*/ __Vtemp254[3];
    // Body
    {
        vcdp->chgBit(c+633,(vlTOPp->clk));
        vcdp->chgBit(c+641,(vlTOPp->active_clk));
        vcdp->chgBit(c+649,(vlTOPp->rst_l));
        vcdp->chgBit(c+657,(vlTOPp->scan_mode));
        vcdp->chgBit(c+665,(vlTOPp->dec_tlu_fast_div_disable));
        vcdp->chgQuad(c+673,(vlTOPp->dividend),64);
        vcdp->chgQuad(c+689,(vlTOPp->divisor),64);
        vcdp->chgBus(c+705,(vlTOPp->dp),3);
        vcdp->chgBit(c+713,(vlTOPp->flush_lower));
        vcdp->chgBit(c+721,(vlTOPp->valid_ff_e1));
        vcdp->chgBit(c+729,(vlTOPp->finish_early));
        vcdp->chgBit(c+737,(vlTOPp->finish));
        vcdp->chgBit(c+745,(vlTOPp->div_stall));
        vcdp->chgQuad(c+753,(vlTOPp->out),64);
        vcdp->chgBit(c+769,((1U & (((((IData)(vlTOPp->dp) 
                                      >> 2U) | (IData)(vlTOPp->exu_div_ctl__DOT__run_state)) 
                                    & (~ (IData)(vlTOPp->finish))) 
                                   & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff))))));
        vcdp->chgBus(c+777,((0xffU & (VL_NEGATE_I((IData)(
                                                          ((((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                             & (~ (IData)(vlTOPp->finish))) 
                                                            & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff))) 
                                                           & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))))) 
                                      & ((IData)(1U) 
                                         + ((IData)(vlTOPp->exu_div_ctl__DOT__count) 
                                            + (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff)))))),8);
        vcdp->chgBit(c+785,((1U & (((IData)(vlTOPp->dp) 
                                    >> 2U) | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                              & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))));
        vcdp->chgBit(c+793,((1U & ((((IData)(vlTOPp->dp) 
                                     >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                               & (0x41U 
                                                  != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                                   | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))));
        VL_EXTEND_WQ(65,64, __Vtemp221, vlTOPp->dividend);
        __Vtemp224[0U] = ((0xfffffffeU & ((IData)(vlTOPp->exu_div_ctl__DOT__dividend_eff) 
                                          << 1U)) | 
                          (1U & (~ vlTOPp->exu_div_ctl__DOT__a_in[2U])));
        __Vtemp224[1U] = ((1U & ((IData)(vlTOPp->exu_div_ctl__DOT__dividend_eff) 
                                 >> 0x1fU)) | (0xfffffffeU 
                                               & ((IData)(
                                                          (vlTOPp->exu_div_ctl__DOT__dividend_eff 
                                                           >> 0x20U)) 
                                                  << 1U)));
        __Vtemp224[2U] = (1U & ((IData)((vlTOPp->exu_div_ctl__DOT__dividend_eff 
                                         >> 0x20U)) 
                                >> 0x1fU));
        VL_SHIFTL_WWI(65,65,8, __Vtemp225, __Vtemp224, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
        __Vtemp231[1U] = (((VL_NEGATE_I((IData)((1U 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                            & __Vtemp221[1U]) | (VL_NEGATE_I((IData)(
                                                                     ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                      & ((IData)(vlTOPp->valid_ff_e1) 
                                                                         | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                            >> 4U))))) 
                                                 & __Vtemp225[1U])) 
                          | (VL_NEGATE_I((IData)(((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->valid_ff_e1) 
                                                      | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                         >> 4U)))))) 
                             & ((1U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))) 
                                       >> 0x1fU)) | 
                                (0xfffffffeU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                                         >> 0x20U)) 
                                                << 1U)))));
        __Vtemp232[0U] = (((VL_NEGATE_I((IData)((1U 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                            & __Vtemp221[0U]) | (VL_NEGATE_I((IData)(
                                                                     ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                      & ((IData)(vlTOPp->valid_ff_e1) 
                                                                         | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                            >> 4U))))) 
                                                 & __Vtemp225[0U])) 
                          | (VL_NEGATE_I((IData)(((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->valid_ff_e1) 
                                                      | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                         >> 4U)))))) 
                             & ((0xfffffffeU & ((IData)(
                                                        (((QData)((IData)(
                                                                          vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->exu_div_ctl__DOT__q_ff[0U])))) 
                                                << 1U)) 
                                | (1U & (~ vlTOPp->exu_div_ctl__DOT__a_in[2U])))));
        __Vtemp232[1U] = __Vtemp231[1U];
        __Vtemp232[2U] = (1U & (((VL_NEGATE_I((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                                  & __Vtemp221[2U]) 
                                 | (VL_NEGATE_I((IData)(
                                                        ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                         & ((IData)(vlTOPp->valid_ff_e1) 
                                                            | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                               >> 4U))))) 
                                    & __Vtemp225[2U])) 
                                | (1U & (VL_NEGATE_I((IData)(
                                                             ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                              & (~ 
                                                                 ((IData)(vlTOPp->valid_ff_e1) 
                                                                  | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                     >> 4U)))))) 
                                         & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                                     >> 0x20U)) 
                                            >> 0x1fU)))));
        vcdp->chgArray(c+801,(__Vtemp232),65);
        vcdp->chgBit(c+825,(((~ ((IData)(vlTOPp->dp) 
                                 >> 1U)) & (VL_ULL(0) 
                                            != vlTOPp->divisor))));
        vcdp->chgBit(c+833,((1U & (((IData)(vlTOPp->dp) 
                                    >> 2U) & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff))))));
        vcdp->chgBus(c+841,(((8U & ((IData)((vlTOPp->dividend 
                                             >> 0x3fU)) 
                                    << 3U)) | ((4U 
                                                & ((IData)(
                                                           (vlTOPp->divisor 
                                                            >> 0x3fU)) 
                                                   << 2U)) 
                                               | ((((~ 
                                                     ((IData)(vlTOPp->dp) 
                                                      >> 1U)) 
                                                    & (VL_ULL(0) 
                                                       != vlTOPp->divisor)) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->dp)))))),4);
        vcdp->chgBit(c+849,((1U & ((IData)(vlTOPp->dp) 
                                   >> 2U))));
        vcdp->chgBus(c+857,(((4U & (IData)(vlTOPp->dp))
                              ? ((8U & ((IData)((vlTOPp->dividend 
                                                 >> 0x3fU)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((IData)(
                                                               (vlTOPp->divisor 
                                                                >> 0x3fU)) 
                                                       << 2U)) 
                                                   | ((((~ 
                                                         ((IData)(vlTOPp->dp) 
                                                          >> 1U)) 
                                                        & (VL_ULL(0) 
                                                           != vlTOPp->divisor)) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(vlTOPp->dp)))))
                              : (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))),4);
        __Vtemp233[0U] = (IData)(vlTOPp->divisor);
        __Vtemp233[1U] = (IData)((vlTOPp->divisor >> 0x20U));
        __Vtemp233[2U] = (1U & ((~ ((IData)(vlTOPp->dp) 
                                    >> 1U)) & (IData)(
                                                      (vlTOPp->divisor 
                                                       >> 0x3fU))));
        vcdp->chgArray(c+865,(__Vtemp233),65);
        __Vtemp236[0U] = ((4U & (IData)(vlTOPp->dp))
                           ? (IData)(vlTOPp->divisor)
                           : vlTOPp->exu_div_ctl__DOT__m_ff[0U]);
        __Vtemp236[1U] = ((4U & (IData)(vlTOPp->dp))
                           ? (IData)((vlTOPp->divisor 
                                      >> 0x20U)) : 
                          vlTOPp->exu_div_ctl__DOT__m_ff[1U]);
        __Vtemp236[2U] = ((4U & (IData)(vlTOPp->dp))
                           ? (1U & ((~ ((IData)(vlTOPp->dp) 
                                        >> 1U)) & (IData)(
                                                          (vlTOPp->divisor 
                                                           >> 0x3fU))))
                           : vlTOPp->exu_div_ctl__DOT__m_ff[2U]);
        vcdp->chgArray(c+889,(__Vtemp236),65);
        VL_EXTEND_WQ(65,64, __Vtemp239, vlTOPp->dividend);
        __Vtemp242[0U] = ((0xfffffffeU & ((IData)(vlTOPp->exu_div_ctl__DOT__dividend_eff) 
                                          << 1U)) | 
                          (1U & (~ vlTOPp->exu_div_ctl__DOT__a_in[2U])));
        __Vtemp242[1U] = ((1U & ((IData)(vlTOPp->exu_div_ctl__DOT__dividend_eff) 
                                 >> 0x1fU)) | (0xfffffffeU 
                                               & ((IData)(
                                                          (vlTOPp->exu_div_ctl__DOT__dividend_eff 
                                                           >> 0x20U)) 
                                                  << 1U)));
        __Vtemp242[2U] = (1U & ((IData)((vlTOPp->exu_div_ctl__DOT__dividend_eff 
                                         >> 0x20U)) 
                                >> 0x1fU));
        VL_SHIFTL_WWI(65,65,8, __Vtemp243, __Vtemp242, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
        __Vtemp249[1U] = (((VL_NEGATE_I((IData)((1U 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                            & __Vtemp239[1U]) | (VL_NEGATE_I((IData)(
                                                                     ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                      & ((IData)(vlTOPp->valid_ff_e1) 
                                                                         | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                            >> 4U))))) 
                                                 & __Vtemp243[1U])) 
                          | (VL_NEGATE_I((IData)(((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->valid_ff_e1) 
                                                      | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                         >> 4U)))))) 
                             & ((1U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))) 
                                       >> 0x1fU)) | 
                                (0xfffffffeU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                                         >> 0x20U)) 
                                                << 1U)))));
        __Vtemp251[0U] = ((1U & (((IData)(vlTOPp->dp) 
                                  >> 2U) | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                            & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
                           ? (((VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                                & __Vtemp239[0U]) | 
                               (VL_NEGATE_I((IData)(
                                                    ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                     & ((IData)(vlTOPp->valid_ff_e1) 
                                                        | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                           >> 4U))))) 
                                & __Vtemp243[0U])) 
                              | (VL_NEGATE_I((IData)(
                                                     ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                      & (~ 
                                                         ((IData)(vlTOPp->valid_ff_e1) 
                                                          | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                             >> 4U)))))) 
                                 & ((0xfffffffeU & 
                                     ((IData)((((QData)((IData)(
                                                                vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[0U])))) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    vlTOPp->exu_div_ctl__DOT__a_in[2U])))))
                           : vlTOPp->exu_div_ctl__DOT__q_ff[0U]);
        __Vtemp251[2U] = ((1U & (((IData)(vlTOPp->dp) 
                                  >> 2U) | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                            & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
                           ? (((VL_NEGATE_I((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                                & __Vtemp239[2U]) | 
                               (VL_NEGATE_I((IData)(
                                                    ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                     & ((IData)(vlTOPp->valid_ff_e1) 
                                                        | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                           >> 4U))))) 
                                & __Vtemp243[2U])) 
                              | (1U & (VL_NEGATE_I((IData)(
                                                           ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->valid_ff_e1) 
                                                                | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                   >> 4U)))))) 
                                       & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU))))
                           : vlTOPp->exu_div_ctl__DOT__q_ff[2U]);
        __Vtemp252[0U] = __Vtemp251[0U];
        __Vtemp252[1U] = ((1U & (((IData)(vlTOPp->dp) 
                                  >> 2U) | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                            & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
                           ? __Vtemp249[1U] : vlTOPp->exu_div_ctl__DOT__q_ff[1U]);
        __Vtemp252[2U] = (1U & __Vtemp251[2U]);
        vcdp->chgArray(c+913,(__Vtemp252),65);
        __Vtemp254[0U] = ((1U & ((((IData)(vlTOPp->dp) 
                                   >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                              & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                             & (0x41U 
                                                != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                                 | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
                           ? vlTOPp->exu_div_ctl__DOT__a_in[0U]
                           : vlTOPp->exu_div_ctl__DOT__a_ff[0U]);
        __Vtemp254[1U] = ((1U & ((((IData)(vlTOPp->dp) 
                                   >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                              & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                             & (0x41U 
                                                != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                                 | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
                           ? vlTOPp->exu_div_ctl__DOT__a_in[1U]
                           : vlTOPp->exu_div_ctl__DOT__a_ff[1U]);
        __Vtemp254[2U] = ((1U & ((((IData)(vlTOPp->dp) 
                                   >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                              & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                             & (0x41U 
                                                != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                                 | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
                           ? vlTOPp->exu_div_ctl__DOT__a_in[2U]
                           : vlTOPp->exu_div_ctl__DOT__a_ff[2U]);
        vcdp->chgArray(c+937,(__Vtemp254),65);
    }
}
