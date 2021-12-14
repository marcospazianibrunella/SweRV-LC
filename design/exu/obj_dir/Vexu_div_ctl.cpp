// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_div_ctl.h for the primary calling header

#include "Vexu_div_ctl.h"
#include "Vexu_div_ctl__Syms.h"

//==========

VL_CTOR_IMP(Vexu_div_ctl) {
    Vexu_div_ctl__Syms* __restrict vlSymsp = __VlSymsp = new Vexu_div_ctl__Syms(this, name());
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vexu_div_ctl::__Vconfigure(Vexu_div_ctl__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vexu_div_ctl::~Vexu_div_ctl() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vexu_div_ctl::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexu_div_ctl::eval\n"); );
    Vexu_div_ctl__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("exu_div_ctl.sv", 16, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vexu_div_ctl::_eval_initial_loop(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("exu_div_ctl.sv", 16, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vexu_div_ctl::_sequent__TOP__1(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_sequent__TOP__1\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout 
        = ((IData)(vlTOPp->rst_l) ? (((IData)(vlTOPp->exu_div_ctl__DOT__smallnum_case) 
                                      << 4U) | (IData)(vlTOPp->exu_div_ctl__DOT__smallnum))
            : 0U);
    vlTOPp->exu_div_ctl__DOT__run_state = ((IData)(vlTOPp->rst_l) 
                                           & (IData)(vlTOPp->exu_div_ctl__DOT__run_in));
    vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout 
        = ((IData)(vlTOPp->rst_l) ? (((IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable) 
                                      << 4U) | (0xfU 
                                                & (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift)))
            : 0U);
    vlTOPp->exu_div_ctl__DOT__count = ((IData)(vlTOPp->rst_l)
                                        ? (IData)(vlTOPp->exu_div_ctl__DOT__count_in)
                                        : 0U);
    vlTOPp->valid_ff_e1 = ((IData)(vlTOPp->rst_l) & 
                           (((IData)(vlTOPp->dp) >> 2U) 
                            & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff))));
    vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout 
        = ((IData)(vlTOPp->rst_l) ? (IData)(vlTOPp->exu_div_ctl__DOT__miscf__DOT____Vcellinp__dffs__din)
            : 0U);
    vlTOPp->div_stall = vlTOPp->exu_div_ctl__DOT__run_state;
    vlTOPp->exu_div_ctl__DOT__shortq_shift_ff = ((0xc0U 
                                                  & (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff)) 
                                                 | ((((0x1fU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                                >> 3U))))) 
                                                      | (0x18U 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                                >> 2U)))))) 
                                                     | (0x10U 
                                                        & VL_NEGATE_I((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                                >> 1U)))))) 
                                                    | (8U 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout)))))));
    vlTOPp->exu_div_ctl__DOT__flush_lower_ff = ((IData)(vlTOPp->rst_l) 
                                                & (IData)(vlTOPp->flush_lower));
    vlTOPp->exu_div_ctl__DOT__valid_e1 = ((IData)(vlTOPp->valid_ff_e1) 
                                          & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff)));
}

VL_INLINE_OPT void Vexu_div_ctl::_sequent__TOP__2(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_sequent__TOP__2\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->exu_div_ctl__DOT__m_ff[0U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__m_ff[1U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__m_ff[2U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__a_ff[0U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__a_ff[1U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__a_ff[2U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__q_ff[0U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__q_ff[1U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__q_ff[2U] = ((IData)(vlTOPp->rst_l)
                                           ? vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U]
                                           : 0U);
    vlTOPp->exu_div_ctl__DOT__b_cls = (((((~ vlTOPp->exu_div_ctl__DOT__m_ff[1U]) 
                                          & (0U != 
                                             (0xffU 
                                              & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                    >> 0x18U))))) 
                                         | (vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                            & (0xffU 
                                               != (0xffU 
                                                   & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                       << 8U) 
                                                      | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                         >> 0x18U)))))) 
                                        << 2U) | ((
                                                   (((~ 
                                                      vlTOPp->exu_div_ctl__DOT__m_ff[1U]) 
                                                     & (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                               >> 0x10U))))) 
                                                    | (vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                       & (0xffU 
                                                          != 
                                                          (0xffU 
                                                           & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 0x10U)))))) 
                                                   << 1U) 
                                                  | (((~ 
                                                       vlTOPp->exu_div_ctl__DOT__m_ff[1U]) 
                                                      & (0U 
                                                         != 
                                                         (0xffU 
                                                          & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 8U))))) 
                                                     | (vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                        & (0xffU 
                                                           != 
                                                           (0xffU 
                                                            & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                  >> 8U))))))));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffe) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | (IData)((IData)((1U & ((1U & vlTOPp->exu_div_ctl__DOT__a_ff[0U])
                                     ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                           >> 1U)) : 
                                    (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                     >> 1U))))));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffd) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (3U & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 2U))))) 
              << 1U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffb) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (7U & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 3U))))) 
              << 2U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffff7) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfU & 
                                             vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 4U))))) 
              << 3U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffef) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 5U))))) 
              << 4U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffdf) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 6U))))) 
              << 5U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffbf) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 7U))))) 
              << 6U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffff7f) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 8U))))) 
              << 7U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffeff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 9U))))) 
              << 8U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffdff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xaU))))) 
              << 9U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffbff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xbU))))) 
              << 0xaU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffff7ff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xcU))))) 
              << 0xbU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffefff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xdU))))) 
              << 0xcU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffdfff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xeU))))) 
              << 0xdU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffbfff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xfU))))) 
              << 0xeU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffff7fff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x10U))))) 
              << 0xfU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffeffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x11U))))) 
              << 0x10U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffdffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x12U))))) 
              << 0x11U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffbffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x13U))))) 
              << 0x12U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffff7ffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x14U))))) 
              << 0x13U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffefffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x15U))))) 
              << 0x14U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffdfffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x16U))))) 
              << 0x15U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffbfffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x17U))))) 
              << 0x16U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffff7fffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x18U))))) 
              << 0x17U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffeffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x19U))))) 
              << 0x18U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffdffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1aU))))) 
              << 0x19U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffbffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffff7ffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1cU))))) 
              << 0x1bU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffefffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1dU))))) 
              << 0x1cU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffdfffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1eU))))) 
              << 0x1dU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffbfffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1fU))))) 
              << 0x1eU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffff7fffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != vlTOPp->exu_div_ctl__DOT__a_ff[0U])
                                      ? (~ vlTOPp->exu_div_ctl__DOT__a_ff[1U])
                                      : vlTOPp->exu_div_ctl__DOT__a_ff[1U])))) 
              << 0x1fU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffeffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 1U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 1U))))) 
              << 0x20U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffdffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 2U))))) 
              << 0x21U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffbffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 3U))))) 
              << 0x22U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffff7ffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 4U))))) 
              << 0x23U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffefffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 5U))))) 
              << 0x24U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffdfffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 6U))))) 
              << 0x25U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffbfffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 7U))))) 
              << 0x26U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffff7fffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 8U))))) 
              << 0x27U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffeffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 9U))))) 
              << 0x28U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffdffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xaU))))) 
              << 0x29U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffbffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffff7ffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xcU))))) 
              << 0x2bU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffefffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xdU))))) 
              << 0x2cU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffdfffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xeU))))) 
              << 0x2dU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffbfffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xfU))))) 
              << 0x2eU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fff7fffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x10U))))) 
              << 0x2fU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffeffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x11U))))) 
              << 0x30U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffdffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x12U))))) 
              << 0x31U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffbffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x13U))))) 
              << 0x32U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ff7ffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x14U))))) 
              << 0x33U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fefffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x15U))))) 
              << 0x34U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fdfffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x16U))))) 
              << 0x35U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fbfffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x17U))))) 
              << 0x36U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7f7fffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x18U))))) 
              << 0x37U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7effffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x19U))))) 
              << 0x38U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7dffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1aU))))) 
              << 0x39U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7bffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1bU))))) 
              << 0x3aU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x77ffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1cU))))) 
              << 0x3bU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x6fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1dU))))) 
              << 0x3cU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x5fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1eU))))) 
              << 0x3dU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x3fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1fU))))) 
              << 0x3eU));
    vlTOPp->exu_div_ctl__DOT__smallnum = ((8U & (((
                                                   vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                   & ((~ 
                                                       (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                        >> 3U)) 
                                                      << 3U)) 
                                                  & ((~ 
                                                      (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                       >> 2U)) 
                                                     << 3U)) 
                                                 & ((~ 
                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                      >> 1U)) 
                                                    << 3U))) 
                                          | ((4U & 
                                              (((0x7ffffffcU 
                                                 & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                       >> 1U) 
                                                      & ((~ 
                                                          (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                           >> 3U)) 
                                                         << 2U)) 
                                                     & ((~ 
                                                         (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                          >> 2U)) 
                                                        << 2U)) 
                                                    & ((~ 
                                                        vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                       << 2U))) 
                                                | (0xfffffffcU 
                                                   & (((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                        & ((~ 
                                                            (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                             >> 3U)) 
                                                           << 2U)) 
                                                       & ((~ 
                                                           (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                            >> 2U)) 
                                                          << 2U)) 
                                                      & ((~ 
                                                          (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                           >> 1U)) 
                                                         << 2U)))) 
                                               | (0x7ffffffcU 
                                                  & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                        >> 1U) 
                                                       & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                      & ((~ 
                                                          (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                           >> 3U)) 
                                                         << 2U)) 
                                                     & ((~ 
                                                         (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                          >> 2U)) 
                                                        << 2U))))) 
                                             | ((2U 
                                                 & (((((((((0x7ffffffeU 
                                                            & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 1U) 
                                                                 & ((~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 3U)) 
                                                                    << 1U)) 
                                                                & ((~ 
                                                                    (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                     >> 2U)) 
                                                                   << 1U)) 
                                                               & ((~ 
                                                                   vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                                  << 1U))) 
                                                           | (0xfffffffeU 
                                                              & (((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   & ((~ 
                                                                       (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                        >> 3U)) 
                                                                      << 1U)) 
                                                                  & ((~ 
                                                                      (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                       >> 2U)) 
                                                                     << 1U)) 
                                                                 & ((~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 1U)) 
                                                                    << 1U)))) 
                                                          | (0x3ffffffeU 
                                                             & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   >> 2U) 
                                                                  & ((~ 
                                                                      (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                       >> 3U)) 
                                                                     << 1U)) 
                                                                 & ((~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 1U)) 
                                                                    << 1U)) 
                                                                & ((~ 
                                                                    vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                                   << 1U)))) 
                                                         | (0x3ffffffeU 
                                                            & ((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 2U) 
                                                                   & ((~ 
                                                                       (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                        >> 2U)) 
                                                                      << 1U)) 
                                                                  & ((~ 
                                                                      (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                       >> 3U)) 
                                                                     << 1U)) 
                                                                 & ((~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 2U)) 
                                                                    << 1U)) 
                                                                & vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                               & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                  << 1U)))) 
                                                        | (0x7ffffffeU 
                                                           & ((((((~ 
                                                                   (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 3U)) 
                                                                  << 1U) 
                                                                 & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 1U)) 
                                                                & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                               & ((~ 
                                                                   (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                    >> 3U)) 
                                                                  << 1U)) 
                                                              & ((~ 
                                                                  (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                   >> 2U)) 
                                                                 << 1U)))) 
                                                       | (0x3ffffffeU 
                                                          & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 2U) 
                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 1U)) 
                                                              & ((~ 
                                                                  (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                   >> 3U)) 
                                                                 << 1U)) 
                                                             & ((~ 
                                                                 vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                                << 1U)))) 
                                                      | (0x3ffffffeU 
                                                         & (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 2U) 
                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 1U)) 
                                                              & ((~ 
                                                                  (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                   >> 3U)) 
                                                                 << 1U)) 
                                                             & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 1U)) 
                                                            & ((~ 
                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 1U)) 
                                                               << 1U)))) 
                                                     | (0x3ffffffeU 
                                                        & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                              >> 2U) 
                                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                            & ((~ 
                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 3U)) 
                                                               << 1U)) 
                                                           & ((~ 
                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 1U)) 
                                                              << 1U)))) 
                                                    | (0x3ffffffeU 
                                                       & (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                              >> 2U) 
                                                             & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 1U)) 
                                                            & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                           & ((~ 
                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                             >> 1U))))) 
                                                | (1U 
                                                   & ((((((((((((((((((((((((((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U) 
                                                                                & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 1U)) 
                                                                                & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                               & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U))) 
                                                                              | ((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 3U) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U))) 
                                                                                & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                                & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U)) 
                                                                                & vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                                             | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U))) 
                                                                                & (~ 
                                                                                vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                            | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 1U) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 2U))) 
                                                                               & (~ 
                                                                                vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                           | (((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                               & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 2U))) 
                                                                              & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U)))) 
                                                                          | (((((((~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 3U)) 
                                                                                & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U)) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 1U))) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                               & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 2U))) 
                                                                              & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U)) 
                                                                             & vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                                         | (((((~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 3U)) 
                                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U)) 
                                                                              & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 1U)) 
                                                                             & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                            & (~ 
                                                                               vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                        | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                              >> 3U) 
                                                                             & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 2U))) 
                                                                            & (~ 
                                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U))) 
                                                                           & (~ 
                                                                              vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                       | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                              >> 3U) 
                                                                             & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U))) 
                                                                            & (~ 
                                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                           & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                              >> 2U)) 
                                                                          & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 1U))) 
                                                                      | ((((((~ 
                                                                              (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                               >> 3U)) 
                                                                             & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U)) 
                                                                            & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                               >> 1U)) 
                                                                           & (~ 
                                                                              (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                               >> 3U))) 
                                                                          & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 2U)) 
                                                                         & (~ 
                                                                            (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 1U)))) 
                                                                     | (((((~ 
                                                                            (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                             >> 3U)) 
                                                                           & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                              >> 2U)) 
                                                                          & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                         & (~ 
                                                                            (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 3U))) 
                                                                        & (~ 
                                                                           (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                            >> 1U)))) 
                                                                    | ((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                            >> 3U) 
                                                                           & (~ 
                                                                              (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                               >> 2U))) 
                                                                          & (~ 
                                                                             (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                              >> 1U))) 
                                                                         & (~ 
                                                                            (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 3U))) 
                                                                        & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                           >> 2U)) 
                                                                       & vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                                   | (((((~ 
                                                                          (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                           >> 2U)) 
                                                                         & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                            >> 1U)) 
                                                                        & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                       & (~ 
                                                                          (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                           >> 3U))) 
                                                                      & (~ 
                                                                         (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                          >> 2U)))) 
                                                                  | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                        >> 3U) 
                                                                       & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                          >> 2U)) 
                                                                      & (~ 
                                                                         (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                          >> 1U))) 
                                                                     & (~ 
                                                                        vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                 | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                       >> 3U) 
                                                                      & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                         >> 1U)) 
                                                                     & (~ 
                                                                        (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                         >> 2U))) 
                                                                    & (~ 
                                                                       vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                | ((((((~ 
                                                                        (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                         >> 3U)) 
                                                                       & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                          >> 2U)) 
                                                                      & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                         >> 1U)) 
                                                                     & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                    & (~ 
                                                                       (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                        >> 3U))) 
                                                                   & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 2U))) 
                                                               | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                     >> 3U) 
                                                                    & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                       >> 2U)) 
                                                                   & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 3U)) 
                                                                  & (~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 2U)))) 
                                                              | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                     >> 3U) 
                                                                    & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                       >> 1U)) 
                                                                   & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 3U)) 
                                                                  & (~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 2U))) 
                                                                 & (~ 
                                                                    (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                     >> 1U)))) 
                                                             | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   >> 3U) 
                                                                  & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                 & (~ 
                                                                    (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                     >> 2U))) 
                                                                & (~ 
                                                                   (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                    >> 1U)))) 
                                                            | ((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 3U) 
                                                                   & (~ 
                                                                      (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                       >> 1U))) 
                                                                  & (~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 3U))) 
                                                                 & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                    >> 2U)) 
                                                                & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                   >> 1U)) 
                                                               & vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                           | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 3U) 
                                                                 & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 2U)) 
                                                                & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   >> 1U)) 
                                                               & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                  >> 3U)) 
                                                              & (~ 
                                                                 vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                          | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                 >> 3U) 
                                                                & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   >> 2U)) 
                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 1U)) 
                                                              & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 3U)) 
                                                             & (~ 
                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 1U)))) 
                                                         | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 3U) 
                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 2U)) 
                                                              & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                             & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 3U)) 
                                                            & (~ 
                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 1U)))) 
                                                        | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                               >> 3U) 
                                                              & (~ 
                                                                 (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 2U))) 
                                                             & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 1U)) 
                                                            & (~ 
                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 3U))) 
                                                           & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                              >> 1U))) 
                                                       | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                             >> 3U) 
                                                            & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                               >> 1U)) 
                                                           & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                          & (~ 
                                                             (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                              >> 2U)))) 
                                                      | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                             >> 3U) 
                                                            & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                               >> 2U)) 
                                                           & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                              >> 1U)) 
                                                          & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                         & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                            >> 3U)))))));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffe) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | (IData)((IData)((1U & ((1U & vlTOPp->exu_div_ctl__DOT__q_ff[0U])
                                     ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                           >> 1U)) : 
                                    (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                     >> 1U))))));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffd) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (3U & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 2U))))) 
              << 1U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffb) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (7U & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 3U))))) 
              << 2U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffff7) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfU & 
                                             vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 4U))))) 
              << 3U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffef) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 5U))))) 
              << 4U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffdf) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 6U))))) 
              << 5U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffbf) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 7U))))) 
              << 6U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffff7f) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 8U))))) 
              << 7U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffeff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 9U))))) 
              << 8U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffdff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xaU))))) 
              << 9U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffbff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xbU))))) 
              << 0xaU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffff7ff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xcU))))) 
              << 0xbU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffefff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xdU))))) 
              << 0xcU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffdfff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xeU))))) 
              << 0xdU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffbfff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xfU))))) 
              << 0xeU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffff7fff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x10U))))) 
              << 0xfU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffeffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x11U))))) 
              << 0x10U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffdffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x12U))))) 
              << 0x11U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffbffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x13U))))) 
              << 0x12U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffff7ffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x14U))))) 
              << 0x13U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffefffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x15U))))) 
              << 0x14U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffdfffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x16U))))) 
              << 0x15U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffbfffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x17U))))) 
              << 0x16U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffff7fffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x18U))))) 
              << 0x17U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffeffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x19U))))) 
              << 0x18U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffdffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1aU))))) 
              << 0x19U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffbffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffff7ffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1cU))))) 
              << 0x1bU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffefffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1dU))))) 
              << 0x1cU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffdfffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1eU))))) 
              << 0x1dU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffbfffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1fU))))) 
              << 0x1eU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffff7fffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != vlTOPp->exu_div_ctl__DOT__q_ff[0U])
                                      ? (~ vlTOPp->exu_div_ctl__DOT__q_ff[1U])
                                      : vlTOPp->exu_div_ctl__DOT__q_ff[1U])))) 
              << 0x1fU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffeffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 1U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 1U))))) 
              << 0x20U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffdffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 2U))))) 
              << 0x21U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffbffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 3U))))) 
              << 0x22U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffff7ffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 4U))))) 
              << 0x23U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffefffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 5U))))) 
              << 0x24U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffdfffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 6U))))) 
              << 0x25U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffbfffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 7U))))) 
              << 0x26U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffff7fffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 8U))))) 
              << 0x27U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffeffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 9U))))) 
              << 0x28U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffdffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xaU))))) 
              << 0x29U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffbffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffff7ffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xcU))))) 
              << 0x2bU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffefffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xdU))))) 
              << 0x2cU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffdfffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xeU))))) 
              << 0x2dU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffbfffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xfU))))) 
              << 0x2eU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fff7fffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x10U))))) 
              << 0x2fU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffeffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x11U))))) 
              << 0x30U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffdffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x12U))))) 
              << 0x31U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffbffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x13U))))) 
              << 0x32U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ff7ffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x14U))))) 
              << 0x33U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fefffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x15U))))) 
              << 0x34U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fdfffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x16U))))) 
              << 0x35U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fbfffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x17U))))) 
              << 0x36U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7f7fffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x18U))))) 
              << 0x37U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7effffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x19U))))) 
              << 0x38U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7dffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1aU))))) 
              << 0x39U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7bffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1bU))))) 
              << 0x3aU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x77ffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1cU))))) 
              << 0x3bU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x6fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1dU))))) 
              << 0x3cU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x5fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1eU))))) 
              << 0x3dU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x3fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1fU))))) 
              << 0x3eU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffe) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | (IData)((IData)((1U & ((1U & vlTOPp->exu_div_ctl__DOT__q_ff[0U])
                                     ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                           >> 1U)) : 
                                    (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                     >> 1U))))));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffd) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (3U & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 2U))))) 
              << 1U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffb) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (7U & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 3U))))) 
              << 2U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffff7) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfU & 
                                             vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 4U))))) 
              << 3U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffef) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 5U))))) 
              << 4U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffdf) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 6U))))) 
              << 5U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffbf) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 7U))))) 
              << 6U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffff7f) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 8U))))) 
              << 7U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffeff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 9U))))) 
              << 8U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffdff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xaU))))) 
              << 9U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffbff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xbU))))) 
              << 0xaU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffff7ff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xcU))))) 
              << 0xbU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffefff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xdU))))) 
              << 0xcU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffdfff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xeU))))) 
              << 0xdU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffbfff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xfU))))) 
              << 0xeU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffff7fff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x10U))))) 
              << 0xfU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffeffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x11U))))) 
              << 0x10U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffdffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x12U))))) 
              << 0x11U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffbffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x13U))))) 
              << 0x12U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffff7ffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x14U))))) 
              << 0x13U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffefffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x15U))))) 
              << 0x14U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffdfffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x16U))))) 
              << 0x15U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffbfffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x17U))))) 
              << 0x16U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffff7fffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x18U))))) 
              << 0x17U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffeffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x19U))))) 
              << 0x18U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffdffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1aU))))) 
              << 0x19U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffbffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffff7ffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1cU))))) 
              << 0x1bU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffefffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1dU))))) 
              << 0x1cU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffdfffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1eU))))) 
              << 0x1dU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffbfffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1fU))))) 
              << 0x1eU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffff7fffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != vlTOPp->exu_div_ctl__DOT__q_ff[0U])
                                      ? (~ vlTOPp->exu_div_ctl__DOT__q_ff[1U])
                                      : vlTOPp->exu_div_ctl__DOT__q_ff[1U])))) 
              << 0x1fU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffeffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 1U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 1U))))) 
              << 0x20U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffdffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 2U))))) 
              << 0x21U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffbffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 3U))))) 
              << 0x22U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffff7ffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 4U))))) 
              << 0x23U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffefffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 5U))))) 
              << 0x24U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffdfffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 6U))))) 
              << 0x25U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffbfffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 7U))))) 
              << 0x26U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffff7fffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 8U))))) 
              << 0x27U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffeffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 9U))))) 
              << 0x28U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffdffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xaU))))) 
              << 0x29U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffbffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffff7ffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xcU))))) 
              << 0x2bU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffefffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xdU))))) 
              << 0x2cU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffdfffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xeU))))) 
              << 0x2dU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffbfffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xfU))))) 
              << 0x2eU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fff7fffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x10U))))) 
              << 0x2fU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffeffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x11U))))) 
              << 0x30U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffdffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x12U))))) 
              << 0x31U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffbffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x13U))))) 
              << 0x32U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ff7ffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x14U))))) 
              << 0x33U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fefffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x15U))))) 
              << 0x34U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fdfffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x16U))))) 
              << 0x35U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fbfffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x17U))))) 
              << 0x36U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7f7fffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x18U))))) 
              << 0x37U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7effffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x19U))))) 
              << 0x38U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7dffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1aU))))) 
              << 0x39U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7bffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1bU))))) 
              << 0x3aU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x77ffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1cU))))) 
              << 0x3bU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x6fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1dU))))) 
              << 0x3cU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x5fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1eU))))) 
              << 0x3dU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x3fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1fU))))) 
              << 0x3eU));
    vlTOPp->exu_div_ctl__DOT__short_dividend[0U] = (IData)(
                                                           (((QData)((IData)(
                                                                             vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlTOPp->exu_div_ctl__DOT__q_ff[0U]))));
    vlTOPp->exu_div_ctl__DOT__short_dividend[1U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                                            >> 0x20U));
}

void Vexu_div_ctl::_settle__TOP__3(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_settle__TOP__3\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp21[5];
    WData/*159:0*/ __Vtemp22[5];
    WData/*95:0*/ __Vtemp26[3];
    WData/*95:0*/ __Vtemp27[3];
    WData/*95:0*/ __Vtemp29[3];
    WData/*95:0*/ __Vtemp30[3];
    WData/*95:0*/ __Vtemp31[3];
    WData/*95:0*/ __Vtemp32[3];
    WData/*95:0*/ __Vtemp39[3];
    WData/*95:0*/ __Vtemp42[3];
    WData/*95:0*/ __Vtemp43[3];
    WData/*95:0*/ __Vtemp49[3];
    WData/*95:0*/ __Vtemp51[3];
    // Body
    vlTOPp->div_stall = vlTOPp->exu_div_ctl__DOT__run_state;
    vlTOPp->exu_div_ctl__DOT__smallnum = ((8U & (((
                                                   vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                   & ((~ 
                                                       (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                        >> 3U)) 
                                                      << 3U)) 
                                                  & ((~ 
                                                      (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                       >> 2U)) 
                                                     << 3U)) 
                                                 & ((~ 
                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                      >> 1U)) 
                                                    << 3U))) 
                                          | ((4U & 
                                              (((0x7ffffffcU 
                                                 & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                       >> 1U) 
                                                      & ((~ 
                                                          (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                           >> 3U)) 
                                                         << 2U)) 
                                                     & ((~ 
                                                         (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                          >> 2U)) 
                                                        << 2U)) 
                                                    & ((~ 
                                                        vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                       << 2U))) 
                                                | (0xfffffffcU 
                                                   & (((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                        & ((~ 
                                                            (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                             >> 3U)) 
                                                           << 2U)) 
                                                       & ((~ 
                                                           (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                            >> 2U)) 
                                                          << 2U)) 
                                                      & ((~ 
                                                          (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                           >> 1U)) 
                                                         << 2U)))) 
                                               | (0x7ffffffcU 
                                                  & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                        >> 1U) 
                                                       & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                      & ((~ 
                                                          (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                           >> 3U)) 
                                                         << 2U)) 
                                                     & ((~ 
                                                         (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                          >> 2U)) 
                                                        << 2U))))) 
                                             | ((2U 
                                                 & (((((((((0x7ffffffeU 
                                                            & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 1U) 
                                                                 & ((~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 3U)) 
                                                                    << 1U)) 
                                                                & ((~ 
                                                                    (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                     >> 2U)) 
                                                                   << 1U)) 
                                                               & ((~ 
                                                                   vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                                  << 1U))) 
                                                           | (0xfffffffeU 
                                                              & (((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   & ((~ 
                                                                       (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                        >> 3U)) 
                                                                      << 1U)) 
                                                                  & ((~ 
                                                                      (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                       >> 2U)) 
                                                                     << 1U)) 
                                                                 & ((~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 1U)) 
                                                                    << 1U)))) 
                                                          | (0x3ffffffeU 
                                                             & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   >> 2U) 
                                                                  & ((~ 
                                                                      (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                       >> 3U)) 
                                                                     << 1U)) 
                                                                 & ((~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 1U)) 
                                                                    << 1U)) 
                                                                & ((~ 
                                                                    vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                                   << 1U)))) 
                                                         | (0x3ffffffeU 
                                                            & ((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 2U) 
                                                                   & ((~ 
                                                                       (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                        >> 2U)) 
                                                                      << 1U)) 
                                                                  & ((~ 
                                                                      (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                       >> 3U)) 
                                                                     << 1U)) 
                                                                 & ((~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 2U)) 
                                                                    << 1U)) 
                                                                & vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                               & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                  << 1U)))) 
                                                        | (0x7ffffffeU 
                                                           & ((((((~ 
                                                                   (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 3U)) 
                                                                  << 1U) 
                                                                 & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 1U)) 
                                                                & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                               & ((~ 
                                                                   (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                    >> 3U)) 
                                                                  << 1U)) 
                                                              & ((~ 
                                                                  (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                   >> 2U)) 
                                                                 << 1U)))) 
                                                       | (0x3ffffffeU 
                                                          & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 2U) 
                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 1U)) 
                                                              & ((~ 
                                                                  (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                   >> 3U)) 
                                                                 << 1U)) 
                                                             & ((~ 
                                                                 vlTOPp->exu_div_ctl__DOT__m_ff[0U]) 
                                                                << 1U)))) 
                                                      | (0x3ffffffeU 
                                                         & (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 2U) 
                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 1U)) 
                                                              & ((~ 
                                                                  (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                   >> 3U)) 
                                                                 << 1U)) 
                                                             & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 1U)) 
                                                            & ((~ 
                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 1U)) 
                                                               << 1U)))) 
                                                     | (0x3ffffffeU 
                                                        & ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                              >> 2U) 
                                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                            & ((~ 
                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 3U)) 
                                                               << 1U)) 
                                                           & ((~ 
                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 1U)) 
                                                              << 1U)))) 
                                                    | (0x3ffffffeU 
                                                       & (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                              >> 2U) 
                                                             & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 1U)) 
                                                            & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                           & ((~ 
                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                             >> 1U))))) 
                                                | (1U 
                                                   & ((((((((((((((((((((((((((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U) 
                                                                                & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 1U)) 
                                                                                & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                               & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U))) 
                                                                              | ((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 3U) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U))) 
                                                                                & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                                & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U)) 
                                                                                & vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                                             | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U))) 
                                                                                & (~ 
                                                                                vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                            | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 1U) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 2U))) 
                                                                               & (~ 
                                                                                vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                           | (((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                               & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 2U))) 
                                                                              & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U)))) 
                                                                          | (((((((~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 3U)) 
                                                                                & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U)) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 1U))) 
                                                                                & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                               & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 2U))) 
                                                                              & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U)) 
                                                                             & vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                                         | (((((~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 3U)) 
                                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U)) 
                                                                              & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 1U)) 
                                                                             & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                            & (~ 
                                                                               vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                        | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                              >> 3U) 
                                                                             & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 2U))) 
                                                                            & (~ 
                                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 1U))) 
                                                                           & (~ 
                                                                              vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                       | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                              >> 3U) 
                                                                             & (~ 
                                                                                (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U))) 
                                                                            & (~ 
                                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                                >> 3U))) 
                                                                           & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                              >> 2U)) 
                                                                          & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 1U))) 
                                                                      | ((((((~ 
                                                                              (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                               >> 3U)) 
                                                                             & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                                >> 2U)) 
                                                                            & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                               >> 1U)) 
                                                                           & (~ 
                                                                              (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                               >> 3U))) 
                                                                          & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 2U)) 
                                                                         & (~ 
                                                                            (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 1U)))) 
                                                                     | (((((~ 
                                                                            (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                             >> 3U)) 
                                                                           & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                              >> 2U)) 
                                                                          & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                         & (~ 
                                                                            (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 3U))) 
                                                                        & (~ 
                                                                           (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                            >> 1U)))) 
                                                                    | ((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                            >> 3U) 
                                                                           & (~ 
                                                                              (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                               >> 2U))) 
                                                                          & (~ 
                                                                             (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                              >> 1U))) 
                                                                         & (~ 
                                                                            (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                             >> 3U))) 
                                                                        & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                           >> 2U)) 
                                                                       & vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                                   | (((((~ 
                                                                          (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                           >> 2U)) 
                                                                         & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                            >> 1U)) 
                                                                        & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                       & (~ 
                                                                          (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                           >> 3U))) 
                                                                      & (~ 
                                                                         (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                          >> 2U)))) 
                                                                  | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                        >> 3U) 
                                                                       & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                          >> 2U)) 
                                                                      & (~ 
                                                                         (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                          >> 1U))) 
                                                                     & (~ 
                                                                        vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                 | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                       >> 3U) 
                                                                      & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                         >> 1U)) 
                                                                     & (~ 
                                                                        (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                         >> 2U))) 
                                                                    & (~ 
                                                                       vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                                | ((((((~ 
                                                                        (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                         >> 3U)) 
                                                                       & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                          >> 2U)) 
                                                                      & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                         >> 1U)) 
                                                                     & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                    & (~ 
                                                                       (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                        >> 3U))) 
                                                                   & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 2U))) 
                                                               | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                     >> 3U) 
                                                                    & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                       >> 2U)) 
                                                                   & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 3U)) 
                                                                  & (~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 2U)))) 
                                                              | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                     >> 3U) 
                                                                    & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                       >> 1U)) 
                                                                   & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 3U)) 
                                                                  & (~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 2U))) 
                                                                 & (~ 
                                                                    (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                     >> 1U)))) 
                                                             | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   >> 3U) 
                                                                  & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                                 & (~ 
                                                                    (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                     >> 2U))) 
                                                                & (~ 
                                                                   (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                    >> 1U)))) 
                                                            | ((((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 3U) 
                                                                   & (~ 
                                                                      (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                       >> 1U))) 
                                                                  & (~ 
                                                                     (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                      >> 3U))) 
                                                                 & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                    >> 2U)) 
                                                                & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                   >> 1U)) 
                                                               & vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                           | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 3U) 
                                                                 & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                    >> 2U)) 
                                                                & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   >> 1U)) 
                                                               & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                  >> 3U)) 
                                                              & (~ 
                                                                 vlTOPp->exu_div_ctl__DOT__m_ff[0U]))) 
                                                          | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                 >> 3U) 
                                                                & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                   >> 2U)) 
                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 1U)) 
                                                              & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 3U)) 
                                                             & (~ 
                                                                (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 1U)))) 
                                                         | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 3U) 
                                                               & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 2U)) 
                                                              & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                             & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 3U)) 
                                                            & (~ 
                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 1U)))) 
                                                        | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                               >> 3U) 
                                                              & (~ 
                                                                 (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                  >> 2U))) 
                                                             & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                                >> 1U)) 
                                                            & (~ 
                                                               (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 3U))) 
                                                           & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                              >> 1U))) 
                                                       | ((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                             >> 3U) 
                                                            & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                               >> 1U)) 
                                                           & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                          & (~ 
                                                             (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                              >> 2U)))) 
                                                      | (((((vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                             >> 3U) 
                                                            & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                               >> 2U)) 
                                                           & (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                              >> 1U)) 
                                                          & vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                         & (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                            >> 3U)))))));
    vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
        = ((4U & (IData)(vlTOPp->dp)) ? (IData)(vlTOPp->divisor)
            : vlTOPp->exu_div_ctl__DOT__m_ff[0U]);
    vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
        = ((4U & (IData)(vlTOPp->dp)) ? (IData)((vlTOPp->divisor 
                                                 >> 0x20U))
            : vlTOPp->exu_div_ctl__DOT__m_ff[1U]);
    vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
        = ((4U & (IData)(vlTOPp->dp)) ? (1U & ((~ ((IData)(vlTOPp->dp) 
                                                   >> 1U)) 
                                               & (IData)(
                                                         (vlTOPp->divisor 
                                                          >> 0x3fU))))
            : vlTOPp->exu_div_ctl__DOT__m_ff[2U]);
    vlTOPp->exu_div_ctl__DOT__miscf__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlTOPp->dp)) ? ((8U & ((IData)(
                                                        (vlTOPp->dividend 
                                                         >> 0x3fU)) 
                                                << 3U)) 
                                         | ((4U & ((IData)(
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
            : (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffe) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | (IData)((IData)((1U & ((1U & vlTOPp->exu_div_ctl__DOT__q_ff[0U])
                                     ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                           >> 1U)) : 
                                    (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                     >> 1U))))));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffd) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (3U & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 2U))))) 
              << 1U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffb) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (7U & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 3U))))) 
              << 2U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffff7) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfU & 
                                             vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 4U))))) 
              << 3U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffef) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 5U))))) 
              << 4U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffdf) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 6U))))) 
              << 5U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffbf) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 7U))))) 
              << 6U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffff7f) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 8U))))) 
              << 7U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffeff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 9U))))) 
              << 8U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffdff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xaU))))) 
              << 9U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffbff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xbU))))) 
              << 0xaU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffff7ff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xcU))))) 
              << 0xbU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffefff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xdU))))) 
              << 0xcU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffdfff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xeU))))) 
              << 0xdU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffbfff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xfU))))) 
              << 0xeU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffff7fff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x10U))))) 
              << 0xfU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffeffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x11U))))) 
              << 0x10U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffdffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x12U))))) 
              << 0x11U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffbffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x13U))))) 
              << 0x12U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffff7ffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x14U))))) 
              << 0x13U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffefffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x15U))))) 
              << 0x14U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffdfffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x16U))))) 
              << 0x15U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffbfffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x17U))))) 
              << 0x16U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffff7fffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x18U))))) 
              << 0x17U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffeffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x19U))))) 
              << 0x18U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffdffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1aU))))) 
              << 0x19U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffbffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffff7ffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1cU))))) 
              << 0x1bU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffefffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1dU))))) 
              << 0x1cU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffdfffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1eU))))) 
              << 0x1dU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffbfffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1fU))))) 
              << 0x1eU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffff7fffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != vlTOPp->exu_div_ctl__DOT__q_ff[0U])
                                      ? (~ vlTOPp->exu_div_ctl__DOT__q_ff[1U])
                                      : vlTOPp->exu_div_ctl__DOT__q_ff[1U])))) 
              << 0x1fU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffeffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 1U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 1U))))) 
              << 0x20U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffdffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 2U))))) 
              << 0x21U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffbffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 3U))))) 
              << 0x22U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffff7ffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 4U))))) 
              << 0x23U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffefffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 5U))))) 
              << 0x24U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffdfffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 6U))))) 
              << 0x25U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffbfffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 7U))))) 
              << 0x26U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffff7fffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 8U))))) 
              << 0x27U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffeffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 9U))))) 
              << 0x28U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffdffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xaU))))) 
              << 0x29U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffbffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffff7ffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xcU))))) 
              << 0x2bU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffefffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xdU))))) 
              << 0x2cU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffdfffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xeU))))) 
              << 0x2dU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffbfffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xfU))))) 
              << 0x2eU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fff7fffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x10U))))) 
              << 0x2fU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffeffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x11U))))) 
              << 0x30U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffdffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x12U))))) 
              << 0x31U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffbffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x13U))))) 
              << 0x32U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ff7ffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x14U))))) 
              << 0x33U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fefffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x15U))))) 
              << 0x34U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fdfffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x16U))))) 
              << 0x35U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fbfffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x17U))))) 
              << 0x36U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7f7fffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x18U))))) 
              << 0x37U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7effffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x19U))))) 
              << 0x38U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7dffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1aU))))) 
              << 0x39U));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7bffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1bU))))) 
              << 0x3aU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x77ffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1cU))))) 
              << 0x3bU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x6fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1dU))))) 
              << 0x3cU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x5fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1eU))))) 
              << 0x3dU));
    vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x3fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__q_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1fU))))) 
              << 0x3eU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffe) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | (IData)((IData)((1U & ((1U & vlTOPp->exu_div_ctl__DOT__a_ff[0U])
                                     ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                           >> 1U)) : 
                                    (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                     >> 1U))))));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffd) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (3U & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 2U))))) 
              << 1U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffb) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (7U & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 3U))))) 
              << 2U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffff7) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfU & 
                                             vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 4U))))) 
              << 3U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffef) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 5U))))) 
              << 4U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffdf) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 6U))))) 
              << 5U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffbf) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 7U))))) 
              << 6U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffff7f) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 8U))))) 
              << 7U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffeff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 9U))))) 
              << 8U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffdff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xaU))))) 
              << 9U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffbff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xbU))))) 
              << 0xaU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffff7ff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xcU))))) 
              << 0xbU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffefff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xdU))))) 
              << 0xcU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffdfff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xeU))))) 
              << 0xdU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffbfff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0xfU))))) 
              << 0xeU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffff7fff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x10U))))) 
              << 0xfU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffeffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x11U))))) 
              << 0x10U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffdffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x12U))))) 
              << 0x11U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffbffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x13U))))) 
              << 0x12U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffff7ffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x14U))))) 
              << 0x13U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffefffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x15U))))) 
              << 0x14U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffdfffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x16U))))) 
              << 0x15U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffbfffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x17U))))) 
              << 0x16U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffff7fffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x18U))))) 
              << 0x17U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffeffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x19U))))) 
              << 0x18U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffdffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1aU))))) 
              << 0x19U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffbffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffff7ffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1cU))))) 
              << 0x1bU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffefffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1dU))))) 
              << 0x1cU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffdfffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1eU))))) 
              << 0x1dU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffbfffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[0U] 
                                         >> 0x1fU))))) 
              << 0x1eU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffff7fffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != vlTOPp->exu_div_ctl__DOT__a_ff[0U])
                                      ? (~ vlTOPp->exu_div_ctl__DOT__a_ff[1U])
                                      : vlTOPp->exu_div_ctl__DOT__a_ff[1U])))) 
              << 0x1fU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffeffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 1U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 1U))))) 
              << 0x20U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffdffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 2U))))) 
              << 0x21U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffbffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 3U))))) 
              << 0x22U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffff7ffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 4U))))) 
              << 0x23U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffefffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 5U))))) 
              << 0x24U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffdfffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 6U))))) 
              << 0x25U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffbfffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 7U))))) 
              << 0x26U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffff7fffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 8U))))) 
              << 0x27U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffeffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 9U))))) 
              << 0x28U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffdffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xaU))))) 
              << 0x29U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffbffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffff7ffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xcU))))) 
              << 0x2bU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffefffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xdU))))) 
              << 0x2cU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffdfffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xeU))))) 
              << 0x2dU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffbfffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0xfU))))) 
              << 0x2eU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fff7fffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x10U))))) 
              << 0x2fU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffeffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x11U))))) 
              << 0x30U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffdffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x12U))))) 
              << 0x31U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffbffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x13U))))) 
              << 0x32U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7ff7ffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x14U))))) 
              << 0x33U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fefffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x15U))))) 
              << 0x34U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fdfffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x16U))))) 
              << 0x35U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7fbfffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x17U))))) 
              << 0x36U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7f7fffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x18U))))) 
              << 0x37U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7effffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x19U))))) 
              << 0x38U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7dffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1aU))))) 
              << 0x39U));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x7bffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1bU))))) 
              << 0x3aU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x77ffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1cU))))) 
              << 0x3bU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x6fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1dU))))) 
              << 0x3cU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x5fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1eU))))) 
              << 0x3dU));
    vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
        = ((VL_ULL(0x3fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__a_ff[1U] 
                                         >> 0x1fU))))) 
              << 0x3eU));
    vlTOPp->exu_div_ctl__DOT__shortq_shift_ff = ((0xc0U 
                                                  & (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff)) 
                                                 | ((((0x1fU 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                                >> 3U))))) 
                                                      | (0x18U 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                                >> 2U)))))) 
                                                     | (0x10U 
                                                        & VL_NEGATE_I((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                                >> 1U)))))) 
                                                    | (8U 
                                                       & VL_NEGATE_I((IData)(
                                                                             (1U 
                                                                              & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout)))))));
    vlTOPp->exu_div_ctl__DOT__b_cls = (((((~ vlTOPp->exu_div_ctl__DOT__m_ff[1U]) 
                                          & (0U != 
                                             (0xffU 
                                              & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                    >> 0x18U))))) 
                                         | (vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                            & (0xffU 
                                               != (0xffU 
                                                   & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                       << 8U) 
                                                      | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                         >> 0x18U)))))) 
                                        << 2U) | ((
                                                   (((~ 
                                                      vlTOPp->exu_div_ctl__DOT__m_ff[1U]) 
                                                     & (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                               >> 0x10U))))) 
                                                    | (vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                       & (0xffU 
                                                          != 
                                                          (0xffU 
                                                           & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                 >> 0x10U)))))) 
                                                   << 1U) 
                                                  | (((~ 
                                                       vlTOPp->exu_div_ctl__DOT__m_ff[1U]) 
                                                      & (0U 
                                                         != 
                                                         (0xffU 
                                                          & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                >> 8U))))) 
                                                     | (vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                        & (0xffU 
                                                           != 
                                                           (0xffU 
                                                            & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                                  >> 8U))))))));
    vlTOPp->exu_div_ctl__DOT__rem_correct = (((0x41U 
                                               == (IData)(vlTOPp->exu_div_ctl__DOT__count)) 
                                              & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout)) 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[2U]);
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffe) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | (IData)((IData)((1U & ((1U & vlTOPp->exu_div_ctl__DOT__q_ff[0U])
                                     ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                           >> 1U)) : 
                                    (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                     >> 1U))))));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffd) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (3U & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 2U))))) 
              << 1U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffffb) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (7U & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 3U))))) 
              << 2U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffff7) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfU & 
                                             vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 4U))))) 
              << 3U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffef) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 5U))))) 
              << 4U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffdf) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 6U))))) 
              << 5U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffffbf) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 7U))))) 
              << 6U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffff7f) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 8U))))) 
              << 7U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffeff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 9U))))) 
              << 8U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffdff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xaU))))) 
              << 9U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffffbff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xbU))))) 
              << 0xaU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffff7ff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xcU))))) 
              << 0xbU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffefff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xdU))))) 
              << 0xcU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffdfff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xeU))))) 
              << 0xdU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffffbfff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0xfU))))) 
              << 0xeU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffff7fff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x10U))))) 
              << 0xfU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffeffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x11U))))) 
              << 0x10U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffdffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x12U))))) 
              << 0x11U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffffbffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x13U))))) 
              << 0x12U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffff7ffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x14U))))) 
              << 0x13U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffefffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x15U))))) 
              << 0x14U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffdfffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x16U))))) 
              << 0x15U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffffbfffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x17U))))) 
              << 0x16U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffff7fffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x18U))))) 
              << 0x17U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffeffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x19U))))) 
              << 0x18U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffdffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1aU))))) 
              << 0x19U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffffbffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7ffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1bU))))) 
              << 0x1aU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffff7ffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0xfffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1cU))))) 
              << 0x1bU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffefffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x1fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1dU))))) 
              << 0x1cU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffdfffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x3fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1eU))))) 
              << 0x1dU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffffbfffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (0x7fffffffU 
                                             & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                         >> 0x1fU))))) 
              << 0x1eU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffff7fffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != vlTOPp->exu_div_ctl__DOT__q_ff[0U])
                                      ? (~ vlTOPp->exu_div_ctl__DOT__q_ff[1U])
                                      : vlTOPp->exu_div_ctl__DOT__q_ff[1U])))) 
              << 0x1fU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffeffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 1U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 1U))))) 
              << 0x20U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffdffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 2U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 2U))))) 
              << 0x21U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffffbffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 3U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 3U))))) 
              << 0x22U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffff7ffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 4U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 4U))))) 
              << 0x23U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffefffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 5U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 5U))))) 
              << 0x24U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffdfffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 6U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 6U))))) 
              << 0x25U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffffbfffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 7U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 7U))))) 
              << 0x26U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffff7fffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 8U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 8U))))) 
              << 0x27U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffeffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 9U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 9U))))) 
              << 0x28U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffdffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xaU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xaU))))) 
              << 0x29U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffffbffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xbU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xbU))))) 
              << 0x2aU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffff7ffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xcU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xcU))))) 
              << 0x2bU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffefffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xdU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xdU))))) 
              << 0x2cU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffdfffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xeU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xeU))))) 
              << 0x2dU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fffbfffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0xfU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0xfU))))) 
              << 0x2eU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fff7fffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x10U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x10U))))) 
              << 0x2fU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffeffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x11U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x11U))))) 
              << 0x30U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffdffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x12U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x12U))))) 
              << 0x31U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ffbffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x13U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x13U))))) 
              << 0x32U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7ff7ffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x14U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x14U))))) 
              << 0x33U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fefffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x15U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x15U))))) 
              << 0x34U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fdfffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x16U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x16U))))) 
              << 0x35U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7fbfffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x17U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x17U))))) 
              << 0x36U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7f7fffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x18U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x18U))))) 
              << 0x37U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7effffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x19U))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x19U))))) 
              << 0x38U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7dffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1aU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1aU))))) 
              << 0x39U));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x7bffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7ffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1bU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1bU))))) 
              << 0x3aU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x77ffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0xfffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1cU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1cU))))) 
              << 0x3bU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x6fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x1fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1dU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1dU))))) 
              << 0x3cU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x5fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x3fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1eU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1eU))))) 
              << 0x3dU));
    vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
        = ((VL_ULL(0x3fffffffffffffff) & vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp) 
           | ((QData)((IData)((1U & ((0U != (VL_ULL(0x7fffffffffffffff) 
                                             & (((QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->exu_div_ctl__DOT__q_ff[0U])))))
                                      ? (~ (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                            >> 0x1fU))
                                      : (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                         >> 0x1fU))))) 
              << 0x3eU));
    vlTOPp->exu_div_ctl__DOT__short_dividend[0U] = (IData)(
                                                           (((QData)((IData)(
                                                                             vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlTOPp->exu_div_ctl__DOT__q_ff[0U]))));
    vlTOPp->exu_div_ctl__DOT__short_dividend[1U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                                            >> 0x20U));
    vlTOPp->exu_div_ctl__DOT__short_dividend[2U] = 
        (1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                >> 1U) & (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                          >> 0x1fU)));
    vlTOPp->exu_div_ctl__DOT__valid_e1 = ((IData)(vlTOPp->valid_ff_e1) 
                                          & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff)));
    vlTOPp->out = (((VL_NEGATE_Q((QData)((IData)((1U 
                                                  & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout) 
                                                     >> 4U))))) 
                     & (QData)((IData)((0xfU & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout))))) 
                    | (VL_NEGATE_Q((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))))) 
                       & ((1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                  >> 1U) & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                            >> 3U)))
                           ? ((vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))))
                           : (((QData)((IData)(vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))) 
                   | (VL_NEGATE_Q((QData)((IData)((1U 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout) 
                                                        >> 4U)) 
                                                      & (~ (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))))))) 
                      & ((1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
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
                                                          vlTOPp->exu_div_ctl__DOT__q_ff[0U]))))));
    vlTOPp->exu_div_ctl__DOT__add = (1U & ((vlTOPp->exu_div_ctl__DOT__a_ff[2U] 
                                            | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                           ^ (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                                 >> 1U))));
    vlTOPp->exu_div_ctl__DOT__dividend_eff = ((1U & 
                                               (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                                   >> 3U)))
                                               ? ((vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))))
                                               : (((QData)((IData)(
                                                                   vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->exu_div_ctl__DOT__q_ff[0U]))));
    vlTOPp->exu_div_ctl__DOT__a_cls = (((((~ vlTOPp->exu_div_ctl__DOT__short_dividend[1U]) 
                                          & (0U != 
                                             (0xffU 
                                              & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                    >> 0x18U))))) 
                                         | (vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                            & (0x1ffU 
                                               != (0x1ffU 
                                                   & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                       << 9U) 
                                                      | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                         >> 0x17U)))))) 
                                        << 2U) | ((
                                                   (((~ 
                                                      vlTOPp->exu_div_ctl__DOT__short_dividend[1U]) 
                                                     & (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                               >> 0x10U))))) 
                                                    | (vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                       & (0xffU 
                                                          != 
                                                          (0xffU 
                                                           & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                               << 0x11U) 
                                                              | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                                 >> 0xfU)))))) 
                                                   << 1U) 
                                                  | (((~ 
                                                       vlTOPp->exu_div_ctl__DOT__short_dividend[1U]) 
                                                      & (0U 
                                                         != 
                                                         (0xffU 
                                                          & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                                >> 8U))))) 
                                                     | (vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                        & (0xffU 
                                                           != 
                                                           (0xffU 
                                                            & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                                << 0x19U) 
                                                               | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                                  >> 7U))))))));
    vlTOPp->exu_div_ctl__DOT__smallnum_case = (((((
                                                   ((0U 
                                                     == 
                                                     (0xfffffffU 
                                                      & ((vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                                          << 0x1cU) 
                                                         | (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                            >> 4U)))) 
                                                    & (0U 
                                                       == 
                                                       (0xfffffffU 
                                                        & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                            << 0x1cU) 
                                                           | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                              >> 4U))))) 
                                                   & (0U 
                                                      != 
                                                      vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                  & (~ (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))) 
                                                 & (IData)(vlTOPp->exu_div_ctl__DOT__valid_e1)) 
                                                & (~ (IData)(vlTOPp->dec_tlu_fast_div_disable))) 
                                               | (((((0U 
                                                      == 
                                                      vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                     & (0U 
                                                        != 
                                                        vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                    & (~ (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))) 
                                                   & (IData)(vlTOPp->exu_div_ctl__DOT__valid_e1)) 
                                                  & (~ (IData)(vlTOPp->dec_tlu_fast_div_disable))));
    VL_EXTEND_WQ(129,64, __Vtemp21, vlTOPp->exu_div_ctl__DOT__dividend_eff);
    VL_SHIFTL_WWI(129,129,8, __Vtemp22, __Vtemp21, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
    __Vtemp26[1U] = (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                       & vlTOPp->exu_div_ctl__DOT__a_ff[1U]) 
                      | (VL_NEGATE_I((IData)((1U & 
                                              ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                   >> 4U)))))) 
                         & ((1U & ((IData)((((QData)((IData)(
                                                             vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->exu_div_ctl__DOT__a_ff[0U])))) 
                                   >> 0x1fU)) | (0xfffffffeU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->exu_div_ctl__DOT__a_ff[0U]))) 
                                                             >> 0x20U)) 
                                                    << 1U))))) 
                     | (VL_NEGATE_I((IData)((1U & (
                                                   (~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                   & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                      >> 4U))))) 
                        & __Vtemp22[3U]));
    __Vtemp27[0U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                     & (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
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
                           & __Vtemp22[2U])));
    __Vtemp27[1U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                     & __Vtemp26[1U]);
    __Vtemp27[2U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                     & (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                          & vlTOPp->exu_div_ctl__DOT__a_ff[2U]) 
                         | (1U & (VL_NEGATE_I((IData)(
                                                      (1U 
                                                       & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                              >> 4U)))))) 
                                  & ((IData)(((((QData)((IData)(
                                                                vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[0U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU)))) | 
                        (1U & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                       & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                          >> 4U))))) 
                               & __Vtemp22[4U]))));
    __Vtemp29[0U] = ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                      ? vlTOPp->exu_div_ctl__DOT__m_ff[0U]
                      : (~ vlTOPp->exu_div_ctl__DOT__m_ff[0U]));
    __Vtemp29[1U] = ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                      ? vlTOPp->exu_div_ctl__DOT__m_ff[1U]
                      : (~ vlTOPp->exu_div_ctl__DOT__m_ff[1U]));
    __Vtemp29[2U] = ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                      ? vlTOPp->exu_div_ctl__DOT__m_ff[2U]
                      : (~ vlTOPp->exu_div_ctl__DOT__m_ff[2U]));
    VL_ADD_W(3, __Vtemp30, __Vtemp27, __Vtemp29);
    VL_EXTEND_WI(65,1, __Vtemp31, (1U & (~ (IData)(vlTOPp->exu_div_ctl__DOT__add))));
    VL_ADD_W(3, __Vtemp32, __Vtemp30, __Vtemp31);
    vlTOPp->exu_div_ctl__DOT__a_in[0U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                                          & __Vtemp32[0U]);
    vlTOPp->exu_div_ctl__DOT__a_in[1U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                                          & __Vtemp32[1U]);
    vlTOPp->exu_div_ctl__DOT__a_in[2U] = (1U & (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                                                & __Vtemp32[2U]));
    vlTOPp->exu_div_ctl__DOT__shortq_raw = (((((0xfffffff8U 
                                                & (((((1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                           >> 1U))) 
                                                      << 3U) 
                                                     & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                        << 1U)) 
                                                    | (((1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                        << 3U) 
                                                       & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                          << 1U))) 
                                                   | (((0U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                       << 3U) 
                                                      & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                         << 1U)))) 
                                               | (((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                   & (1U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                          >> 1U)))) 
                                                  << 3U)) 
                                              | (((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                         >> 1U)))) 
                                                 << 3U)) 
                                             | (((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                 & (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                << 3U)) 
                                            | ((4U 
                                                & ((((0xfffffffcU 
                                                      & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                         & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls))) 
                                                     | (((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                              >> 1U))) 
                                                         & (1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                                >> 1U)))) 
                                                        << 2U)) 
                                                    | (((1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                        & (1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                       << 2U)) 
                                                   | (((0U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                      << 2U))) 
                                               | ((((0x7ffffffeU 
                                                     & (((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                         >> 1U) 
                                                        & ((1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                                >> 1U))) 
                                                           << 1U))) 
                                                    | (((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                             >> 1U))) 
                                                        & (1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                       << 1U)) 
                                                   | (((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                      << 1U)) 
                                                  | ((((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                       >> 2U) 
                                                      & (1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                     | ((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                             >> 1U))) 
                                                        & (0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls))))))));
    vlTOPp->finish_early = vlTOPp->exu_div_ctl__DOT__smallnum_case;
    vlTOPp->finish = ((((IData)(vlTOPp->exu_div_ctl__DOT__smallnum_case) 
                        | ((1U & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))
                            ? (0x41U == (IData)(vlTOPp->exu_div_ctl__DOT__count))
                            : (0x40U == (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                       & (~ (IData)(vlTOPp->flush_lower))) 
                      & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff)));
    vlTOPp->exu_div_ctl__DOT__shortq_enable = (((IData)(vlTOPp->valid_ff_e1) 
                                                & (0U 
                                                   != 
                                                   vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                               & (0U 
                                                  != (IData)(vlTOPp->exu_div_ctl__DOT__shortq_raw)));
    vlTOPp->exu_div_ctl__DOT__run_in = (1U & (((((IData)(vlTOPp->dp) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->exu_div_ctl__DOT__run_state)) 
                                               & (~ (IData)(vlTOPp->finish))) 
                                              & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff))));
    vlTOPp->exu_div_ctl__DOT__shortq_shift = ((0xf0U 
                                               & (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift)) 
                                              | (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                                 & (IData)(vlTOPp->exu_div_ctl__DOT__shortq_raw)));
    vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
        = ((1U & ((((IData)(vlTOPp->dp) >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                   & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                                  & (0x41U 
                                                     != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                  | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
            ? vlTOPp->exu_div_ctl__DOT__a_in[0U] : 
           vlTOPp->exu_div_ctl__DOT__a_ff[0U]);
    vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
        = ((1U & ((((IData)(vlTOPp->dp) >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                   & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                                  & (0x41U 
                                                     != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                  | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
            ? vlTOPp->exu_div_ctl__DOT__a_in[1U] : 
           vlTOPp->exu_div_ctl__DOT__a_ff[1U]);
    vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
        = ((1U & ((((IData)(vlTOPp->dp) >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                   & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                                  & (0x41U 
                                                     != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                  | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
            ? vlTOPp->exu_div_ctl__DOT__a_in[2U] : 
           vlTOPp->exu_div_ctl__DOT__a_ff[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp39, vlTOPp->dividend);
    __Vtemp42[0U] = ((0xfffffffeU & ((IData)(vlTOPp->exu_div_ctl__DOT__dividend_eff) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   vlTOPp->exu_div_ctl__DOT__a_in[2U])));
    __Vtemp42[1U] = ((1U & ((IData)(vlTOPp->exu_div_ctl__DOT__dividend_eff) 
                            >> 0x1fU)) | (0xfffffffeU 
                                          & ((IData)(
                                                     (vlTOPp->exu_div_ctl__DOT__dividend_eff 
                                                      >> 0x20U)) 
                                             << 1U)));
    __Vtemp42[2U] = (1U & ((IData)((vlTOPp->exu_div_ctl__DOT__dividend_eff 
                                    >> 0x20U)) >> 0x1fU));
    VL_SHIFTL_WWI(65,65,8, __Vtemp43, __Vtemp42, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
    __Vtemp49[1U] = (((VL_NEGATE_I((IData)((1U & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                       & __Vtemp39[1U]) | (VL_NEGATE_I((IData)(
                                                               ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                & ((IData)(vlTOPp->valid_ff_e1) 
                                                                   | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                      >> 4U))))) 
                                           & __Vtemp43[1U])) 
                     | (VL_NEGATE_I((IData)(((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                             & (~ ((IData)(vlTOPp->valid_ff_e1) 
                                                   | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                      >> 4U)))))) 
                        & ((1U & ((IData)((((QData)((IData)(
                                                            vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->exu_div_ctl__DOT__q_ff[0U])))) 
                                  >> 0x1fU)) | (0xfffffffeU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U)))));
    __Vtemp51[0U] = ((1U & (((IData)(vlTOPp->dp) >> 2U) 
                            | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                               & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
                      ? (((VL_NEGATE_I((IData)((1U 
                                                & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                           & __Vtemp39[0U]) | (VL_NEGATE_I((IData)(
                                                                   ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                    & ((IData)(vlTOPp->valid_ff_e1) 
                                                                       | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                          >> 4U))))) 
                                               & __Vtemp43[0U])) 
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
                               | (1U & (~ vlTOPp->exu_div_ctl__DOT__a_in[2U])))))
                      : vlTOPp->exu_div_ctl__DOT__q_ff[0U]);
    __Vtemp51[2U] = ((1U & (((IData)(vlTOPp->dp) >> 2U) 
                            | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                               & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
                      ? (((VL_NEGATE_I((IData)((1U 
                                                & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                           & __Vtemp39[2U]) | (VL_NEGATE_I((IData)(
                                                                   ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                    & ((IData)(vlTOPp->valid_ff_e1) 
                                                                       | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                          >> 4U))))) 
                                               & __Vtemp43[2U])) 
                         | (1U & (VL_NEGATE_I((IData)(
                                                      ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->valid_ff_e1) 
                                                           | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                              >> 4U)))))) 
                                  & ((IData)(((((QData)((IData)(
                                                                vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU)))) : 
                     vlTOPp->exu_div_ctl__DOT__q_ff[2U]);
    vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
        = __Vtemp51[0U];
    vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
        = ((1U & (((IData)(vlTOPp->dp) >> 2U) | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
            ? __Vtemp49[1U] : vlTOPp->exu_div_ctl__DOT__q_ff[1U]);
    vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
        = (1U & __Vtemp51[2U]);
    vlTOPp->exu_div_ctl__DOT__count_in = (0xffU & (
                                                   VL_NEGATE_I((IData)(
                                                                       ((((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                          & (~ (IData)(vlTOPp->finish))) 
                                                                         & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff))) 
                                                                        & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))))) 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlTOPp->exu_div_ctl__DOT__count) 
                                                       + (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff)))));
}

VL_INLINE_OPT void Vexu_div_ctl::_combo__TOP__4(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_combo__TOP__4\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->exu_div_ctl__DOT__miscf__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlTOPp->dp)) ? ((8U & ((IData)(
                                                        (vlTOPp->dividend 
                                                         >> 0x3fU)) 
                                                << 3U)) 
                                         | ((4U & ((IData)(
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
            : (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout));
    vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
        = ((4U & (IData)(vlTOPp->dp)) ? (IData)(vlTOPp->divisor)
            : vlTOPp->exu_div_ctl__DOT__m_ff[0U]);
    vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
        = ((4U & (IData)(vlTOPp->dp)) ? (IData)((vlTOPp->divisor 
                                                 >> 0x20U))
            : vlTOPp->exu_div_ctl__DOT__m_ff[1U]);
    vlTOPp->exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
        = ((4U & (IData)(vlTOPp->dp)) ? (1U & ((~ ((IData)(vlTOPp->dp) 
                                                   >> 1U)) 
                                               & (IData)(
                                                         (vlTOPp->divisor 
                                                          >> 0x3fU))))
            : vlTOPp->exu_div_ctl__DOT__m_ff[2U]);
    vlTOPp->exu_div_ctl__DOT__smallnum_case = (((((
                                                   ((0U 
                                                     == 
                                                     (0xfffffffU 
                                                      & ((vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                                                          << 0x1cU) 
                                                         | (vlTOPp->exu_div_ctl__DOT__q_ff[0U] 
                                                            >> 4U)))) 
                                                    & (0U 
                                                       == 
                                                       (0xfffffffU 
                                                        & ((vlTOPp->exu_div_ctl__DOT__m_ff[1U] 
                                                            << 0x1cU) 
                                                           | (vlTOPp->exu_div_ctl__DOT__m_ff[0U] 
                                                              >> 4U))))) 
                                                   & (0U 
                                                      != 
                                                      vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                  & (~ (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))) 
                                                 & (IData)(vlTOPp->exu_div_ctl__DOT__valid_e1)) 
                                                & (~ (IData)(vlTOPp->dec_tlu_fast_div_disable))) 
                                               | (((((0U 
                                                      == 
                                                      vlTOPp->exu_div_ctl__DOT__q_ff[0U]) 
                                                     & (0U 
                                                        != 
                                                        vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                                    & (~ (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))) 
                                                   & (IData)(vlTOPp->exu_div_ctl__DOT__valid_e1)) 
                                                  & (~ (IData)(vlTOPp->dec_tlu_fast_div_disable))));
    vlTOPp->finish_early = vlTOPp->exu_div_ctl__DOT__smallnum_case;
    vlTOPp->finish = ((((IData)(vlTOPp->exu_div_ctl__DOT__smallnum_case) 
                        | ((1U & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))
                            ? (0x41U == (IData)(vlTOPp->exu_div_ctl__DOT__count))
                            : (0x40U == (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                       & (~ (IData)(vlTOPp->flush_lower))) 
                      & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff)));
    vlTOPp->exu_div_ctl__DOT__run_in = (1U & (((((IData)(vlTOPp->dp) 
                                                 >> 2U) 
                                                | (IData)(vlTOPp->exu_div_ctl__DOT__run_state)) 
                                               & (~ (IData)(vlTOPp->finish))) 
                                              & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff))));
}

VL_INLINE_OPT void Vexu_div_ctl::_multiclk__TOP__5(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_multiclk__TOP__5\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp67[5];
    WData/*159:0*/ __Vtemp68[5];
    WData/*95:0*/ __Vtemp72[3];
    WData/*95:0*/ __Vtemp73[3];
    WData/*95:0*/ __Vtemp75[3];
    WData/*95:0*/ __Vtemp76[3];
    WData/*95:0*/ __Vtemp77[3];
    WData/*95:0*/ __Vtemp78[3];
    // Body
    vlTOPp->exu_div_ctl__DOT__rem_correct = (((0x41U 
                                               == (IData)(vlTOPp->exu_div_ctl__DOT__count)) 
                                              & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout)) 
                                             & vlTOPp->exu_div_ctl__DOT__a_ff[2U]);
    vlTOPp->exu_div_ctl__DOT__short_dividend[2U] = 
        (1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                >> 1U) & (vlTOPp->exu_div_ctl__DOT__q_ff[1U] 
                          >> 0x1fU)));
    vlTOPp->out = (((VL_NEGATE_Q((QData)((IData)((1U 
                                                  & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout) 
                                                     >> 4U))))) 
                     & (QData)((IData)((0xfU & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout))))) 
                    | (VL_NEGATE_Q((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))))) 
                       & ((1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                  >> 1U) & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                            >> 3U)))
                           ? ((vlTOPp->exu_div_ctl__DOT__a_ff_c__DOT__dout_temp 
                               << 1U) | (QData)((IData)(
                                                        (1U 
                                                         & vlTOPp->exu_div_ctl__DOT__a_ff[0U]))))
                           : (((QData)((IData)(vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->exu_div_ctl__DOT__a_ff[0U])))))) 
                   | (VL_NEGATE_Q((QData)((IData)((1U 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__smallnumff__dout) 
                                                        >> 4U)) 
                                                      & (~ (IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout))))))) 
                      & ((1U & (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
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
                                                          vlTOPp->exu_div_ctl__DOT__q_ff[0U]))))));
    vlTOPp->exu_div_ctl__DOT__dividend_eff = ((1U & 
                                               (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                                   >> 3U)))
                                               ? ((vlTOPp->exu_div_ctl__DOT__dividend_c__DOT__dout_temp 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & vlTOPp->exu_div_ctl__DOT__q_ff[0U]))))
                                               : (((QData)((IData)(
                                                                   vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->exu_div_ctl__DOT__q_ff[0U]))));
    vlTOPp->exu_div_ctl__DOT__add = (1U & ((vlTOPp->exu_div_ctl__DOT__a_ff[2U] 
                                            | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                           ^ (((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__miscf__dout) 
                                                 >> 1U))));
    vlTOPp->exu_div_ctl__DOT__a_cls = (((((~ vlTOPp->exu_div_ctl__DOT__short_dividend[1U]) 
                                          & (0U != 
                                             (0xffU 
                                              & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                    >> 0x18U))))) 
                                         | (vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                            & (0x1ffU 
                                               != (0x1ffU 
                                                   & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                       << 9U) 
                                                      | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                         >> 0x17U)))))) 
                                        << 2U) | ((
                                                   (((~ 
                                                      vlTOPp->exu_div_ctl__DOT__short_dividend[1U]) 
                                                     & (0U 
                                                        != 
                                                        (0xffU 
                                                         & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                               >> 0x10U))))) 
                                                    | (vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                       & (0xffU 
                                                          != 
                                                          (0xffU 
                                                           & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                               << 0x11U) 
                                                              | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                                 >> 0xfU)))))) 
                                                   << 1U) 
                                                  | (((~ 
                                                       vlTOPp->exu_div_ctl__DOT__short_dividend[1U]) 
                                                      & (0U 
                                                         != 
                                                         (0xffU 
                                                          & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                                >> 8U))))) 
                                                     | (vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                        & (0xffU 
                                                           != 
                                                           (0xffU 
                                                            & ((vlTOPp->exu_div_ctl__DOT__short_dividend[1U] 
                                                                << 0x19U) 
                                                               | (vlTOPp->exu_div_ctl__DOT__short_dividend[0U] 
                                                                  >> 7U))))))));
    VL_EXTEND_WQ(129,64, __Vtemp67, vlTOPp->exu_div_ctl__DOT__dividend_eff);
    VL_SHIFTL_WWI(129,129,8, __Vtemp68, __Vtemp67, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
    __Vtemp72[1U] = (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                       & vlTOPp->exu_div_ctl__DOT__a_ff[1U]) 
                      | (VL_NEGATE_I((IData)((1U & 
                                              ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                   >> 4U)))))) 
                         & ((1U & ((IData)((((QData)((IData)(
                                                             vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->exu_div_ctl__DOT__a_ff[0U])))) 
                                   >> 0x1fU)) | (0xfffffffeU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlTOPp->exu_div_ctl__DOT__a_ff[0U]))) 
                                                             >> 0x20U)) 
                                                    << 1U))))) 
                     | (VL_NEGATE_I((IData)((1U & (
                                                   (~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                   & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                      >> 4U))))) 
                        & __Vtemp68[3U]));
    __Vtemp73[0U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                     & (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
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
                           & __Vtemp68[2U])));
    __Vtemp73[1U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                     & __Vtemp72[1U]);
    __Vtemp73[2U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                     & (((VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__rem_correct))) 
                          & vlTOPp->exu_div_ctl__DOT__a_ff[2U]) 
                         | (1U & (VL_NEGATE_I((IData)(
                                                      (1U 
                                                       & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                              >> 4U)))))) 
                                  & ((IData)(((((QData)((IData)(
                                                                vlTOPp->exu_div_ctl__DOT__a_ff[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__a_ff[0U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU)))) | 
                        (1U & (VL_NEGATE_I((IData)(
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)) 
                                                       & ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                          >> 4U))))) 
                               & __Vtemp68[4U]))));
    __Vtemp75[0U] = ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                      ? vlTOPp->exu_div_ctl__DOT__m_ff[0U]
                      : (~ vlTOPp->exu_div_ctl__DOT__m_ff[0U]));
    __Vtemp75[1U] = ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                      ? vlTOPp->exu_div_ctl__DOT__m_ff[1U]
                      : (~ vlTOPp->exu_div_ctl__DOT__m_ff[1U]));
    __Vtemp75[2U] = ((IData)(vlTOPp->exu_div_ctl__DOT__add)
                      ? vlTOPp->exu_div_ctl__DOT__m_ff[2U]
                      : (~ vlTOPp->exu_div_ctl__DOT__m_ff[2U]));
    VL_ADD_W(3, __Vtemp76, __Vtemp73, __Vtemp75);
    VL_EXTEND_WI(65,1, __Vtemp77, (1U & (~ (IData)(vlTOPp->exu_div_ctl__DOT__add))));
    VL_ADD_W(3, __Vtemp78, __Vtemp76, __Vtemp77);
    vlTOPp->exu_div_ctl__DOT__a_in[0U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                                          & __Vtemp78[0U]);
    vlTOPp->exu_div_ctl__DOT__a_in[1U] = (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                                          & __Vtemp78[1U]);
    vlTOPp->exu_div_ctl__DOT__a_in[2U] = (1U & (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__run_state))) 
                                                & __Vtemp78[2U]));
    vlTOPp->exu_div_ctl__DOT__shortq_raw = (((((0xfffffff8U 
                                                & (((((1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                           >> 1U))) 
                                                      << 3U) 
                                                     & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                        << 1U)) 
                                                    | (((1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                        << 3U) 
                                                       & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                          << 1U))) 
                                                   | (((0U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                       << 3U) 
                                                      & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                         << 1U)))) 
                                               | (((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                   & (1U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                          >> 1U)))) 
                                                  << 3U)) 
                                              | (((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                         >> 1U)))) 
                                                 << 3U)) 
                                             | (((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                 & (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                << 3U)) 
                                            | ((4U 
                                                & ((((0xfffffffcU 
                                                      & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                         & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls))) 
                                                     | (((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                              >> 1U))) 
                                                         & (1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                                >> 1U)))) 
                                                        << 2U)) 
                                                    | (((1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                        & (1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                       << 2U)) 
                                                   | (((0U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                      << 2U))) 
                                               | ((((0x7ffffffeU 
                                                     & (((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                         >> 1U) 
                                                        & ((1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlTOPp->exu_div_ctl__DOT__b_cls) 
                                                                >> 1U))) 
                                                           << 1U))) 
                                                    | (((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                             >> 1U))) 
                                                        & (1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                       << 1U)) 
                                                   | (((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlTOPp->exu_div_ctl__DOT__a_cls))) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                      << 1U)) 
                                                  | ((((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                       >> 2U) 
                                                      & (1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls)))) 
                                                     | ((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->exu_div_ctl__DOT__a_cls) 
                                                             >> 1U))) 
                                                        & (0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl__DOT__b_cls))))))));
    vlTOPp->exu_div_ctl__DOT__shortq_enable = (((IData)(vlTOPp->valid_ff_e1) 
                                                & (0U 
                                                   != 
                                                   vlTOPp->exu_div_ctl__DOT__m_ff[0U])) 
                                               & (0U 
                                                  != (IData)(vlTOPp->exu_div_ctl__DOT__shortq_raw)));
    vlTOPp->exu_div_ctl__DOT__shortq_shift = ((0xf0U 
                                               & (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift)) 
                                              | (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                                 & (IData)(vlTOPp->exu_div_ctl__DOT__shortq_raw)));
}

VL_INLINE_OPT void Vexu_div_ctl::_combo__TOP__6(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_combo__TOP__6\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp85[3];
    WData/*95:0*/ __Vtemp88[3];
    WData/*95:0*/ __Vtemp89[3];
    WData/*95:0*/ __Vtemp95[3];
    WData/*95:0*/ __Vtemp97[3];
    // Body
    vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
        = ((1U & ((((IData)(vlTOPp->dp) >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                   & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                                  & (0x41U 
                                                     != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                  | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
            ? vlTOPp->exu_div_ctl__DOT__a_in[0U] : 
           vlTOPp->exu_div_ctl__DOT__a_ff[0U]);
    vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
        = ((1U & ((((IData)(vlTOPp->dp) >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                   & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                                  & (0x41U 
                                                     != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                  | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
            ? vlTOPp->exu_div_ctl__DOT__a_in[1U] : 
           vlTOPp->exu_div_ctl__DOT__a_ff[1U]);
    vlTOPp->exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
        = ((1U & ((((IData)(vlTOPp->dp) >> 2U) | (((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                   & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))) 
                                                  & (0x41U 
                                                     != (IData)(vlTOPp->exu_div_ctl__DOT__count)))) 
                  | (IData)(vlTOPp->exu_div_ctl__DOT__rem_correct)))
            ? vlTOPp->exu_div_ctl__DOT__a_in[2U] : 
           vlTOPp->exu_div_ctl__DOT__a_ff[2U]);
    VL_EXTEND_WQ(65,64, __Vtemp85, vlTOPp->dividend);
    __Vtemp88[0U] = ((0xfffffffeU & ((IData)(vlTOPp->exu_div_ctl__DOT__dividend_eff) 
                                     << 1U)) | (1U 
                                                & (~ 
                                                   vlTOPp->exu_div_ctl__DOT__a_in[2U])));
    __Vtemp88[1U] = ((1U & ((IData)(vlTOPp->exu_div_ctl__DOT__dividend_eff) 
                            >> 0x1fU)) | (0xfffffffeU 
                                          & ((IData)(
                                                     (vlTOPp->exu_div_ctl__DOT__dividend_eff 
                                                      >> 0x20U)) 
                                             << 1U)));
    __Vtemp88[2U] = (1U & ((IData)((vlTOPp->exu_div_ctl__DOT__dividend_eff 
                                    >> 0x20U)) >> 0x1fU));
    VL_SHIFTL_WWI(65,65,8, __Vtemp89, __Vtemp88, (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff));
    __Vtemp95[1U] = (((VL_NEGATE_I((IData)((1U & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                       & __Vtemp85[1U]) | (VL_NEGATE_I((IData)(
                                                               ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                & ((IData)(vlTOPp->valid_ff_e1) 
                                                                   | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                      >> 4U))))) 
                                           & __Vtemp89[1U])) 
                     | (VL_NEGATE_I((IData)(((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                             & (~ ((IData)(vlTOPp->valid_ff_e1) 
                                                   | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                      >> 4U)))))) 
                        & ((1U & ((IData)((((QData)((IData)(
                                                            vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->exu_div_ctl__DOT__q_ff[0U])))) 
                                  >> 0x1fU)) | (0xfffffffeU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                                            >> 0x20U)) 
                                                   << 1U)))));
    __Vtemp97[0U] = ((1U & (((IData)(vlTOPp->dp) >> 2U) 
                            | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                               & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
                      ? (((VL_NEGATE_I((IData)((1U 
                                                & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                           & __Vtemp85[0U]) | (VL_NEGATE_I((IData)(
                                                                   ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                    & ((IData)(vlTOPp->valid_ff_e1) 
                                                                       | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                          >> 4U))))) 
                                               & __Vtemp89[0U])) 
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
                               | (1U & (~ vlTOPp->exu_div_ctl__DOT__a_in[2U])))))
                      : vlTOPp->exu_div_ctl__DOT__q_ff[0U]);
    __Vtemp97[2U] = ((1U & (((IData)(vlTOPp->dp) >> 2U) 
                            | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                               & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
                      ? (((VL_NEGATE_I((IData)((1U 
                                                & (~ (IData)(vlTOPp->exu_div_ctl__DOT__run_state))))) 
                           & __Vtemp85[2U]) | (VL_NEGATE_I((IData)(
                                                                   ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                    & ((IData)(vlTOPp->valid_ff_e1) 
                                                                       | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                                          >> 4U))))) 
                                               & __Vtemp89[2U])) 
                         | (1U & (VL_NEGATE_I((IData)(
                                                      ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                       & (~ 
                                                          ((IData)(vlTOPp->valid_ff_e1) 
                                                           | ((IData)(vlTOPp->exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout) 
                                                              >> 4U)))))) 
                                  & ((IData)(((((QData)((IData)(
                                                                vlTOPp->exu_div_ctl__DOT__q_ff[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->exu_div_ctl__DOT__q_ff[0U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU)))) : 
                     vlTOPp->exu_div_ctl__DOT__q_ff[2U]);
    vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
        = __Vtemp97[0U];
    vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
        = ((1U & (((IData)(vlTOPp->dp) >> 2U) | ((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable)))))
            ? __Vtemp95[1U] : vlTOPp->exu_div_ctl__DOT__q_ff[1U]);
    vlTOPp->exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
        = (1U & __Vtemp97[2U]);
    vlTOPp->exu_div_ctl__DOT__count_in = (0xffU & (
                                                   VL_NEGATE_I((IData)(
                                                                       ((((IData)(vlTOPp->exu_div_ctl__DOT__run_state) 
                                                                          & (~ (IData)(vlTOPp->finish))) 
                                                                         & (~ (IData)(vlTOPp->exu_div_ctl__DOT__flush_lower_ff))) 
                                                                        & (~ (IData)(vlTOPp->exu_div_ctl__DOT__shortq_enable))))) 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlTOPp->exu_div_ctl__DOT__count) 
                                                       + (IData)(vlTOPp->exu_div_ctl__DOT__shortq_shift_ff)))));
}

void Vexu_div_ctl::_eval(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_eval\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->active_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__active_clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->active_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__active_clk))) 
         | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__active_clk = vlTOPp->active_clk;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vexu_div_ctl::_eval_initial(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_eval_initial\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__active_clk = vlTOPp->active_clk;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vexu_div_ctl::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::final\n"); );
    // Variables
    Vexu_div_ctl__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vexu_div_ctl::_eval_settle(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_eval_settle\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vexu_div_ctl::_change_request(Vexu_div_ctl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_change_request\n"); );
    Vexu_div_ctl* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vexu_div_ctl::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((active_clk & 0xfeU))) {
        Verilated::overWidthError("active_clk");}
    if (VL_UNLIKELY((rst_l & 0xfeU))) {
        Verilated::overWidthError("rst_l");}
    if (VL_UNLIKELY((scan_mode & 0xfeU))) {
        Verilated::overWidthError("scan_mode");}
    if (VL_UNLIKELY((dec_tlu_fast_div_disable & 0xfeU))) {
        Verilated::overWidthError("dec_tlu_fast_div_disable");}
    if (VL_UNLIKELY((flush_lower & 0xfeU))) {
        Verilated::overWidthError("flush_lower");}
}
#endif  // VL_DEBUG

void Vexu_div_ctl::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    active_clk = VL_RAND_RESET_I(1);
    rst_l = VL_RAND_RESET_I(1);
    scan_mode = VL_RAND_RESET_I(1);
    dec_tlu_fast_div_disable = VL_RAND_RESET_I(1);
    dividend = VL_RAND_RESET_Q(64);
    divisor = VL_RAND_RESET_Q(64);
    dp = 0;
    flush_lower = VL_RAND_RESET_I(1);
    valid_ff_e1 = VL_RAND_RESET_I(1);
    finish_early = VL_RAND_RESET_I(1);
    finish = VL_RAND_RESET_I(1);
    div_stall = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_Q(64);
    exu_div_ctl__DOT__run_in = VL_RAND_RESET_I(1);
    exu_div_ctl__DOT__run_state = VL_RAND_RESET_I(1);
    exu_div_ctl__DOT__count_in = VL_RAND_RESET_I(8);
    exu_div_ctl__DOT__count = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, exu_div_ctl__DOT__m_ff);
    VL_RAND_RESET_W(65, exu_div_ctl__DOT__q_ff);
    VL_RAND_RESET_W(65, exu_div_ctl__DOT__a_in);
    VL_RAND_RESET_W(65, exu_div_ctl__DOT__a_ff);
    exu_div_ctl__DOT__dividend_eff = VL_RAND_RESET_Q(64);
    exu_div_ctl__DOT__add = VL_RAND_RESET_I(1);
    exu_div_ctl__DOT__rem_correct = VL_RAND_RESET_I(1);
    exu_div_ctl__DOT__flush_lower_ff = VL_RAND_RESET_I(1);
    exu_div_ctl__DOT__valid_e1 = VL_RAND_RESET_I(1);
    exu_div_ctl__DOT__smallnum_case = VL_RAND_RESET_I(1);
    exu_div_ctl__DOT__smallnum = VL_RAND_RESET_I(4);
    exu_div_ctl__DOT____Vcellout__miscf__dout = VL_RAND_RESET_I(4);
    exu_div_ctl__DOT____Vcellout__smallnumff__dout = VL_RAND_RESET_I(5);
    exu_div_ctl__DOT__a_cls = VL_RAND_RESET_I(5);
    exu_div_ctl__DOT__b_cls = VL_RAND_RESET_I(5);
    exu_div_ctl__DOT__shortq = VL_RAND_RESET_I(6);
    exu_div_ctl__DOT__shortq_shift = VL_RAND_RESET_I(8);
    exu_div_ctl__DOT__shortq_shift_ff = VL_RAND_RESET_I(8);
    exu_div_ctl__DOT__shortq_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, exu_div_ctl__DOT__short_dividend);
    exu_div_ctl__DOT__shortq_raw = VL_RAND_RESET_I(4);
    exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout = VL_RAND_RESET_I(5);
    exu_div_ctl__DOT__miscf__DOT____Vcellinp__dffs__din = VL_RAND_RESET_I(4);
    exu_div_ctl__DOT__mff__DOT__l1clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din);
    exu_div_ctl__DOT__qff__DOT__l1clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din);
    exu_div_ctl__DOT__aff__DOT__l1clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din);
    exu_div_ctl__DOT__dividend_c__DOT__dout_temp = VL_RAND_RESET_Q(63);
    exu_div_ctl__DOT__q_ff_c__DOT__dout_temp = VL_RAND_RESET_Q(63);
    exu_div_ctl__DOT__a_ff_c__DOT__dout_temp = VL_RAND_RESET_Q(63);
    __Vm_traceActivity = 0;
}
