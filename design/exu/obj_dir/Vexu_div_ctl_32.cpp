// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_div_ctl_32.h for the primary calling header

#include "Vexu_div_ctl_32.h"
#include "Vexu_div_ctl_32__Syms.h"

//==========

VL_CTOR_IMP(Vexu_div_ctl_32) {
    Vexu_div_ctl_32__Syms* __restrict vlSymsp = __VlSymsp = new Vexu_div_ctl_32__Syms(this, name());
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vexu_div_ctl_32::__Vconfigure(Vexu_div_ctl_32__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vexu_div_ctl_32::~Vexu_div_ctl_32() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vexu_div_ctl_32::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexu_div_ctl_32::eval\n"); );
    Vexu_div_ctl_32__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("exu_div_ctl_32.sv", 16, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vexu_div_ctl_32::_eval_initial_loop(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("exu_div_ctl_32.sv", 16, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vexu_div_ctl_32::_sequent__TOP__1(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_sequent__TOP__1\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout 
        = ((IData)(vlTOPp->rst_l) ? (((IData)(vlTOPp->exu_div_ctl_32__DOT__smallnum_case) 
                                      << 4U) | (IData)(vlTOPp->exu_div_ctl_32__DOT__smallnum))
            : 0U);
    vlTOPp->exu_div_ctl_32__DOT__run_state = ((IData)(vlTOPp->rst_l) 
                                              & (IData)(vlTOPp->exu_div_ctl_32__DOT__run_in));
    vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout 
        = ((IData)(vlTOPp->rst_l) ? (((IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable) 
                                      << 4U) | (0xfU 
                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift)))
            : 0U);
    vlTOPp->exu_div_ctl_32__DOT__count = ((IData)(vlTOPp->rst_l)
                                           ? (IData)(vlTOPp->exu_div_ctl_32__DOT__count_in)
                                           : 0U);
    vlTOPp->valid_ff_e1 = ((IData)(vlTOPp->rst_l) & 
                           (((IData)(vlTOPp->dp) >> 2U) 
                            & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff))));
    vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout 
        = ((IData)(vlTOPp->rst_l) ? (IData)(vlTOPp->exu_div_ctl_32__DOT__miscf__DOT____Vcellinp__dffs__din)
            : 0U);
    vlTOPp->div_stall = vlTOPp->exu_div_ctl_32__DOT__run_state;
    vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff = 
        ((((0x1fU & VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                               >> 3U))))) 
           | (0x18U & VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                 >> 2U)))))) 
          | (0x10U & VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                >> 1U)))))) 
         | (8U & VL_NEGATE_I((IData)((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout))))));
    vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff = ((IData)(vlTOPp->rst_l) 
                                                   & (IData)(vlTOPp->flush_lower));
    vlTOPp->exu_div_ctl_32__DOT__valid_e1 = ((IData)(vlTOPp->valid_ff_e1) 
                                             & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff)));
}

VL_INLINE_OPT void Vexu_div_ctl_32::_sequent__TOP__2(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_sequent__TOP__2\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->exu_div_ctl_32__DOT__m_ff = ((IData)(vlTOPp->rst_l)
                                          ? vlTOPp->exu_div_ctl_32__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din
                                          : VL_ULL(0));
    vlTOPp->exu_div_ctl_32__DOT__a_ff = ((IData)(vlTOPp->rst_l)
                                          ? vlTOPp->exu_div_ctl_32__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din
                                          : VL_ULL(0));
    vlTOPp->exu_div_ctl_32__DOT__q_ff = ((IData)(vlTOPp->rst_l)
                                          ? vlTOPp->exu_div_ctl_32__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din
                                          : VL_ULL(0));
    vlTOPp->exu_div_ctl_32__DOT__b_cls = (((((~ (IData)(
                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                         >> 0x20U))) 
                                             & (0U 
                                                != 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                            >> 0x18U))))) 
                                            | ((IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                        >> 0x20U)) 
                                               & (0xffU 
                                                  != 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                              >> 0x18U)))))) 
                                           << 2U) | 
                                          (((((~ (IData)(
                                                         (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                          >> 0x20U))) 
                                              & (0U 
                                                 != 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                             >> 0x10U))))) 
                                             | ((IData)(
                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                         >> 0x20U)) 
                                                & (0xffU 
                                                   != 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                               >> 0x10U)))))) 
                                            << 1U) 
                                           | (((~ (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                           >> 0x20U))) 
                                               & (0U 
                                                  != 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                              >> 8U))))) 
                                              | ((IData)(
                                                         (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                          >> 0x20U)) 
                                                 & (0xffU 
                                                    != 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                >> 8U))))))));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff))
                     ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                   >> 1U))) : (IData)(
                                                      (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                       >> 1U)))));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                    >> 2U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                    >> 3U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                    >> 4U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffefU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 5U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 6U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 7U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 8U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 9U))) : (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffefffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0xdU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                      >> 0xdU))) << 0xcU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0xeU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                      >> 0xeU))) << 0xdU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0xfU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                      >> 0xfU))) << 0xeU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x10U)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                      >> 0x10U))) << 0xfU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x11U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x12U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x13U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x14U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fefffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                           >> 0x15U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                           >> 0x16U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                           >> 0x17U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                           >> 0x18U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7effffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                            >> 0x19U)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7dffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                            >> 0x1aU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7bffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                            >> 0x1bU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x77ffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                            >> 0x1cU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x6fffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                             >> 0x1dU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x5fffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                             >> 0x1eU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x3fffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                             >> 0x1fU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlTOPp->exu_div_ctl_32__DOT__smallnum = ((8U & 
                                              (((((IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 3U)) 
                                                  & (~ (IData)(
                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                >> 3U)))) 
                                                 & (~ (IData)(
                                                              (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                               >> 2U)))) 
                                                & (~ (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                              >> 1U)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((((IData)(
                                                                 (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                  >> 3U)) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                       >> 3U)))) 
                                                        & (~ (IData)(
                                                                     (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                      >> 2U)))) 
                                                       & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                      | ((((IData)(
                                                                   (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                    >> 2U)) 
                                                           & (~ (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                         >> 3U)))) 
                                                          & (~ (IData)(
                                                                       (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                        >> 2U)))) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                       >> 1U))))) 
                                                     | ((((IData)(
                                                                  (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                   >> 3U)) 
                                                          & (IData)(
                                                                    (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                     >> 2U))) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                       >> 3U)))) 
                                                        & (~ (IData)(
                                                                     (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                      >> 2U))))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((((((((((IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 2U)) 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                 & (~ (IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                               >> 2U)))) 
                                                                & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                               | ((((IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 1U)) 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                   & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                              | ((((IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                            >> 3U)) 
                                                                   & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                             | ((((((IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 3U)) 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)))) 
                                                                   & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                 & (IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                            >> 1U))) 
                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                            | (((((~ (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 3U))) 
                                                                  & (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 2U))) 
                                                                 & (IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                            >> 1U))) 
                                                                & (~ (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                              >> 3U)))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 2U))))) 
                                                           | ((((IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 3U)) 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 2U))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 3U)))) 
                                                              & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                          | (((((IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 3U)) 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 2U))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 3U)))) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                         >> 2U))) 
                                                             & (~ (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                           >> 1U))))) 
                                                         | ((((IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                       >> 3U)) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 1U))) 
                                                             & (~ (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                           >> 3U)))) 
                                                            & (~ (IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                          >> 1U))))) 
                                                        | (((((IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                       >> 3U)) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 2U))) 
                                                             & (IData)(
                                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                        >> 1U))) 
                                                            & (~ (IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                          >> 3U)))) 
                                                           & (IData)(
                                                                     (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                      >> 2U)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((((((((((((((((((((((((((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                                | ((((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)))) 
                                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                                                | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                                & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                               | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                                & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                              | ((((IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                                             | (((((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                                            | (((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                               & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                           | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                               & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                              & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                          | (((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)))) 
                                                                               & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                              & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))) 
                                                                             & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                         | ((((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                               & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                              & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                             & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))) 
                                                                            & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                                        | (((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                              & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                            & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                           & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                                       | ((((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                              & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)))) 
                                                                             & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U)))) 
                                                                            & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                           & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))) 
                                                                          & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                                      | (((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                            & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                           & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                          & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                         & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))))) 
                                                                     | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                          & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                         & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                        & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                    | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                         & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                        & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                       & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                   | ((((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                          & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                         & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                        & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                       & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                      & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                  | ((((IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                       & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                      & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U))) 
                                                                     & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))))) 
                                                                 | (((((IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                       & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                      & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U))) 
                                                                     & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                                | ((((IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 3U)) 
                                                                     & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                   & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                               | ((((((IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                               >> 3U)) 
                                                                      & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U)))) 
                                                                     & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                    & (IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                               >> 2U))) 
                                                                   & (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                              >> 1U))) 
                                                                  & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                              | (((((IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 3U)) 
                                                                    & (IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                               >> 2U))) 
                                                                   & (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 1U))) 
                                                                  & (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 3U))) 
                                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                             | (((((IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                            >> 3U)) 
                                                                   & (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 2U))) 
                                                                  & (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 1U))) 
                                                                 & (IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                            >> 3U))) 
                                                                & (~ (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                              >> 1U))))) 
                                                            | (((((IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 3U)) 
                                                                  & (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 2U))) 
                                                                 & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                           >> 3U))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 1U))))) 
                                                           | (((((IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                          >> 3U)) 
                                                                 & (~ (IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                               >> 2U)))) 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 1U))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 3U)))) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                         >> 1U)))) 
                                                          | ((((IData)(
                                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                        >> 3U)) 
                                                               & (IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                          >> 1U))) 
                                                              & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                             & (~ (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                           >> 2U))))) 
                                                         | (((((IData)(
                                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                        >> 3U)) 
                                                               & (IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                          >> 2U))) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 1U))) 
                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                            & (IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                       >> 3U))))))));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff))
                     ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                   >> 1U))) : (IData)(
                                                      (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                       >> 1U)))));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 2U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 3U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 4U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffefU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 5U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 6U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 7U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 8U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 9U))) : (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffefffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xdU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xdU))) << 0xcU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xeU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xeU))) << 0xdU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xfU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xfU))) << 0xeU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x10U)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0x10U))) << 0xfU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x11U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x12U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x13U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x14U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fefffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x15U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x16U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x17U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x18U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7effffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x19U)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7dffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1aU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7bffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1bU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x77ffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1cU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x6fffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1dU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x5fffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1eU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x3fffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1fU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff))
                     ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                   >> 1U))) : (IData)(
                                                      (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                       >> 1U)))));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 2U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 3U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 4U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffefU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 5U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 6U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 7U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 8U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 9U))) : (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffefffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xdU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xdU))) << 0xcU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xeU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xeU))) << 0xdU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xfU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xfU))) << 0xeU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x10U)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0x10U))) << 0xfU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x11U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x12U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x13U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x14U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fefffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x15U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x16U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x17U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x18U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7effffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x19U)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7dffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1aU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7bffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1bU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x77ffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1cU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x6fffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1dU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x5fffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1eU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x3fffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1fU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlTOPp->exu_div_ctl_32__DOT__short_dividend = (
                                                   (VL_ULL(0x100000000) 
                                                    & vlTOPp->exu_div_ctl_32__DOT__short_dividend) 
                                                   | (IData)((IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)));
}

void Vexu_div_ctl_32::_settle__TOP__3(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_settle__TOP__3\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    // Body
    vlTOPp->div_stall = vlTOPp->exu_div_ctl_32__DOT__run_state;
    vlTOPp->exu_div_ctl_32__DOT__smallnum = ((8U & 
                                              (((((IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 3U)) 
                                                  & (~ (IData)(
                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                >> 3U)))) 
                                                 & (~ (IData)(
                                                              (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                               >> 2U)))) 
                                                & (~ (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                              >> 1U)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((((IData)(
                                                                 (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                  >> 3U)) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                       >> 3U)))) 
                                                        & (~ (IData)(
                                                                     (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                      >> 2U)))) 
                                                       & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                      | ((((IData)(
                                                                   (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                    >> 2U)) 
                                                           & (~ (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                         >> 3U)))) 
                                                          & (~ (IData)(
                                                                       (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                        >> 2U)))) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                       >> 1U))))) 
                                                     | ((((IData)(
                                                                  (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                   >> 3U)) 
                                                          & (IData)(
                                                                    (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                     >> 2U))) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                       >> 3U)))) 
                                                        & (~ (IData)(
                                                                     (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                      >> 2U))))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((((((((((IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 2U)) 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                 & (~ (IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                               >> 2U)))) 
                                                                & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                               | ((((IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 1U)) 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                   & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                              | ((((IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                            >> 3U)) 
                                                                   & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                             | ((((((IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 3U)) 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)))) 
                                                                   & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                  & (~ (IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                 & (IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                            >> 1U))) 
                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                            | (((((~ (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 3U))) 
                                                                  & (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 2U))) 
                                                                 & (IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                            >> 1U))) 
                                                                & (~ (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                              >> 3U)))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 2U))))) 
                                                           | ((((IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 3U)) 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 2U))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 3U)))) 
                                                              & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                          | (((((IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 3U)) 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 2U))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 3U)))) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                         >> 2U))) 
                                                             & (~ (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                           >> 1U))))) 
                                                         | ((((IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                       >> 3U)) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 1U))) 
                                                             & (~ (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                           >> 3U)))) 
                                                            & (~ (IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                          >> 1U))))) 
                                                        | (((((IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                       >> 3U)) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 2U))) 
                                                             & (IData)(
                                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                        >> 1U))) 
                                                            & (~ (IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                          >> 3U)))) 
                                                           & (IData)(
                                                                     (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                      >> 2U)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((((((((((((((((((((((((((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                                | ((((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)))) 
                                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                                                | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                                & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                               | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                                & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                              | ((((IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                                             | (((((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))) 
                                                                                & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                                            | (((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                               & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                           | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                               & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                              & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                          | (((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                                & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)))) 
                                                                               & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                              & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))) 
                                                                             & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                         | ((((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                                & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                               & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                              & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                             & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))) 
                                                                            & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                                        | (((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                              & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                            & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                           & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                                       | ((((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                              & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U)))) 
                                                                             & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U)))) 
                                                                            & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                           & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))) 
                                                                          & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                                      | (((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                            & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                           & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                          & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                         & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))))) 
                                                                     | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                          & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                         & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U)))) 
                                                                        & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                    | ((((IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                         & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                        & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                       & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                                   | ((((((~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U))) 
                                                                          & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                         & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                        & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                       & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                      & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                  | ((((IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                       & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 2U))) 
                                                                      & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U))) 
                                                                     & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U))))) 
                                                                 | (((((IData)(
                                                                               (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 3U)) 
                                                                       & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U))) 
                                                                      & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U))) 
                                                                     & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                                | ((((IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 3U)) 
                                                                     & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                    & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 2U)))) 
                                                                   & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 1U))))) 
                                                               | ((((((IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                               >> 3U)) 
                                                                      & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 1U)))) 
                                                                     & (~ (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                                >> 3U)))) 
                                                                    & (IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                               >> 2U))) 
                                                                   & (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                              >> 1U))) 
                                                                  & (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                              | (((((IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 3U)) 
                                                                    & (IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                               >> 2U))) 
                                                                   & (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 1U))) 
                                                                  & (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 3U))) 
                                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff)))) 
                                                             | (((((IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                            >> 3U)) 
                                                                   & (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                              >> 2U))) 
                                                                  & (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 1U))) 
                                                                 & (IData)(
                                                                           (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                            >> 3U))) 
                                                                & (~ (IData)(
                                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                              >> 1U))))) 
                                                            | (((((IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 3U)) 
                                                                  & (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                             >> 2U))) 
                                                                 & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                           >> 3U))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 1U))))) 
                                                           | (((((IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                          >> 3U)) 
                                                                 & (~ (IData)(
                                                                              (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                               >> 2U)))) 
                                                                & (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                           >> 1U))) 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                             >> 3U)))) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                         >> 1U)))) 
                                                          | ((((IData)(
                                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                        >> 3U)) 
                                                               & (IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                          >> 1U))) 
                                                              & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                             & (~ (IData)(
                                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                           >> 2U))))) 
                                                         | (((((IData)(
                                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                        >> 3U)) 
                                                               & (IData)(
                                                                         (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                          >> 2U))) 
                                                              & (IData)(
                                                                        (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                         >> 1U))) 
                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                            & (IData)(
                                                                      (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                       >> 3U))))))));
    vlTOPp->exu_div_ctl_32__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlTOPp->dp)) ? (((QData)((IData)(
                                                          (1U 
                                                           & ((~ 
                                                               ((IData)(vlTOPp->dp) 
                                                                >> 1U)) 
                                                              & (vlTOPp->divisor 
                                                                 >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlTOPp->divisor)))
            : vlTOPp->exu_div_ctl_32__DOT__m_ff);
    vlTOPp->exu_div_ctl_32__DOT__miscf__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlTOPp->dp)) ? ((8U & (vlTOPp->dividend 
                                                >> 0x1cU)) 
                                         | ((4U & (vlTOPp->divisor 
                                                   >> 0x1dU)) 
                                            | ((((~ 
                                                  ((IData)(vlTOPp->dp) 
                                                   >> 1U)) 
                                                 & (0U 
                                                    != vlTOPp->divisor)) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlTOPp->dp)))))
            : (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff))
                     ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                   >> 1U))) : (IData)(
                                                      (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                       >> 1U)))));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 2U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 3U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 4U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffefU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 5U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 6U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 7U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 8U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 9U))) : (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffefffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xdU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xdU))) << 0xcU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xeU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xeU))) << 0xdU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xfU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xfU))) << 0xeU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x10U)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0x10U))) << 0xfU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x11U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x12U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x13U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x14U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fefffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x15U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x16U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x17U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x18U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7effffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x19U)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7dffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1aU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x7bffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1bU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x77ffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1cU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x6fffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1dU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x5fffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1eU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
        = ((0x3fffffffU & vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1fU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff))
                     ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                   >> 1U))) : (IData)(
                                                      (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                       >> 1U)))));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                    >> 2U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                    >> 3U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                    >> 4U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffefU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 5U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 6U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 7U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 8U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 9U))) : (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffefffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0xdU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                      >> 0xdU))) << 0xcU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0xeU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                      >> 0xeU))) << 0xdU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0xfU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                      >> 0xfU))) << 0xeU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x10U)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                      >> 0x10U))) << 0xfU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x11U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x12U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x13U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x14U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fefffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                           >> 0x15U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                           >> 0x16U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                           >> 0x17U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                           >> 0x18U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7effffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                            >> 0x19U)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7dffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                            >> 0x1aU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x7bffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                            >> 0x1bU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x77ffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                            >> 0x1cU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x6fffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                             >> 0x1dU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x5fffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                             >> 0x1eU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
        = ((0x3fffffffU & vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                             >> 0x1fU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff = 
        ((((0x1fU & VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                               >> 3U))))) 
           | (0x18U & VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                 >> 2U)))))) 
          | (0x10U & VL_NEGATE_I((IData)((1U & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                >> 1U)))))) 
         | (8U & VL_NEGATE_I((IData)((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout))))));
    vlTOPp->exu_div_ctl_32__DOT__b_cls = (((((~ (IData)(
                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                         >> 0x20U))) 
                                             & (0U 
                                                != 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                            >> 0x18U))))) 
                                            | ((IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                        >> 0x20U)) 
                                               & (0xffU 
                                                  != 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                              >> 0x18U)))))) 
                                           << 2U) | 
                                          (((((~ (IData)(
                                                         (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                          >> 0x20U))) 
                                              & (0U 
                                                 != 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                             >> 0x10U))))) 
                                             | ((IData)(
                                                        (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                         >> 0x20U)) 
                                                & (0xffU 
                                                   != 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                               >> 0x10U)))))) 
                                            << 1U) 
                                           | (((~ (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                           >> 0x20U))) 
                                               & (0U 
                                                  != 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                              >> 8U))))) 
                                              | ((IData)(
                                                         (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                          >> 0x20U)) 
                                                 & (0xffU 
                                                    != 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                >> 8U))))))));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffeU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (1U & ((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff))
                     ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                   >> 1U))) : (IData)(
                                                      (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                       >> 1U)))));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffdU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (2U & (((0U != (3U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 2U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 2U))) 
                    << 1U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffffbU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (4U & (((0U != (7U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 3U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 3U))) 
                    << 2U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffff7U & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (8U & (((0U != (0xfU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                      ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                    >> 4U))) : (IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                        >> 4U))) 
                    << 3U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffefU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x10U & (((0U != (0x1fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 5U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 5U))) 
                       << 4U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffdfU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x20U & (((0U != (0x3fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 6U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 6U))) 
                       << 5U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffffbfU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x40U & (((0U != (0x7fU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 7U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 7U))) 
                       << 6U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffff7fU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x80U & (((0U != (0xffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                         ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 8U))) : (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                           >> 8U))) 
                       << 7U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffeffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x100U & (((0U != (0x1ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 9U))) : (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                            >> 9U))) 
                        << 8U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffdffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x200U & (((0U != (0x3ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xaU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xaU))) 
                        << 9U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffffbffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x400U & (((0U != (0x7ffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xbU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xbU))) 
                        << 0xaU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffff7ffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x800U & (((0U != (0xfffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0xcU))) : (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                              >> 0xcU))) 
                        << 0xbU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffefffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x1000U & (((0U != (0x1fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xdU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xdU))) << 0xcU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffdfffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x2000U & (((0U != (0x3fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xeU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xeU))) << 0xdU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fffbfffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x4000U & (((0U != (0x7fffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0xfU)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0xfU))) << 0xeU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fff7fffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x8000U & (((0U != (0xffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                           ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x10U)))
                           : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                      >> 0x10U))) << 0xfU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffeffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x10000U & (((0U != (0x1ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x11U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x11U))) 
                          << 0x10U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffdffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x20000U & (((0U != (0x3ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x12U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x12U))) 
                          << 0x11U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ffbffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x40000U & (((0U != (0x7ffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x13U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x13U))) 
                          << 0x12U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7ff7ffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x80000U & (((0U != (0xfffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                            ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x14U)))
                            : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                       >> 0x14U))) 
                          << 0x13U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fefffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x100000U & (((0U != (0x1fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x15U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x15U))) 
                           << 0x14U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fdfffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x200000U & (((0U != (0x3fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x16U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x16U))) 
                           << 0x15U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7fbfffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x400000U & (((0U != (0x7fffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x17U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x17U))) 
                           << 0x16U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7f7fffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x800000U & (((0U != (0xffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                             ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                           >> 0x18U)))
                             : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                        >> 0x18U))) 
                           << 0x17U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7effffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x1000000U & (((0U != (0x1ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x19U)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x19U))) 
                            << 0x18U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7dffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x2000000U & (((0U != (0x3ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1aU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1aU))) 
                            << 0x19U)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x7bffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x4000000U & (((0U != (0x7ffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1bU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1bU))) 
                            << 0x1aU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x77ffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x8000000U & (((0U != (0xfffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                              ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                            >> 0x1cU)))
                              : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                         >> 0x1cU))) 
                            << 0x1bU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x6fffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x10000000U & (((0U != (0x1fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1dU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1dU))) 
                             << 0x1cU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x5fffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x20000000U & (((0U != (0x3fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1eU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1eU))) 
                             << 0x1dU)));
    vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
        = ((0x3fffffffU & vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp) 
           | (0x40000000U & (((0U != (0x7fffffffU & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                               ? (~ (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                             >> 0x1fU)))
                               : (IData)((vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                          >> 0x1fU))) 
                             << 0x1eU)));
    vlTOPp->exu_div_ctl_32__DOT__rem_correct = (((0x21U 
                                                  == (IData)(vlTOPp->exu_div_ctl_32__DOT__count)) 
                                                 & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout)) 
                                                & (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 0x20U)));
    vlTOPp->exu_div_ctl_32__DOT__short_dividend = (
                                                   (VL_ULL(0x100000000) 
                                                    & vlTOPp->exu_div_ctl_32__DOT__short_dividend) 
                                                   | (IData)((IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)));
    vlTOPp->exu_div_ctl_32__DOT__short_dividend = (
                                                   (VL_ULL(0xffffffff) 
                                                    & vlTOPp->exu_div_ctl_32__DOT__short_dividend) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                                           >> 1U) 
                                                                          & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 0x1fU)))))) 
                                                      << 0x20U));
    vlTOPp->exu_div_ctl_32__DOT__valid_e1 = ((IData)(vlTOPp->valid_ff_e1) 
                                             & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff)));
    vlTOPp->out = (((0xfU & (VL_NEGATE_I((IData)((1U 
                                                  & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout) 
                                                     >> 4U)))) 
                             & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout))) 
                    | (VL_NEGATE_I((IData)((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout)))) 
                       & ((1U & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                  >> 1U) & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                            >> 3U)))
                           ? ((vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
                               << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           : (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))) 
                   | (VL_NEGATE_I((IData)((1U & ((~ 
                                                  ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout) 
                                                   >> 4U)) 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout)))))) 
                      & ((1U & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                 >> 1U) & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                            >> 3U) 
                                           ^ ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                              >> 2U))))
                          ? ((vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
                              << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          : (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff))));
    vlTOPp->exu_div_ctl_32__DOT__dividend_eff = ((1U 
                                                  & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                      >> 1U) 
                                                     & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                        >> 3U)))
                                                  ? 
                                                 ((vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                                                  : (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff));
    vlTOPp->exu_div_ctl_32__DOT__add = (1U & (((IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                        >> 0x20U)) 
                                               | (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)) 
                                              ^ (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                  >> 2U) 
                                                 & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                    >> 1U))));
    vlTOPp->exu_div_ctl_32__DOT__a_cls = (((((~ (IData)(
                                                        (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                         >> 0x20U))) 
                                             & (0U 
                                                != 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                            >> 0x18U))))) 
                                            | ((IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                        >> 0x20U)) 
                                               & (0x1ffU 
                                                  != 
                                                  (0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                              >> 0x17U)))))) 
                                           << 2U) | 
                                          (((((~ (IData)(
                                                         (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                          >> 0x20U))) 
                                              & (0U 
                                                 != 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                             >> 0x10U))))) 
                                             | ((IData)(
                                                        (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                         >> 0x20U)) 
                                                & (0xffU 
                                                   != 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                               >> 0xfU)))))) 
                                            << 1U) 
                                           | (((~ (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                           >> 0x20U))) 
                                               & (0U 
                                                  != 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                              >> 8U))))) 
                                              | ((IData)(
                                                         (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                          >> 0x20U)) 
                                                 & (0xffU 
                                                    != 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                                >> 7U))))))));
    vlTOPp->exu_div_ctl_32__DOT__smallnum_case = ((
                                                   (((((0U 
                                                        == 
                                                        (0xfffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                    >> 4U)))) 
                                                       & (0U 
                                                          == 
                                                          (0xfffffffU 
                                                           & (IData)(
                                                                     (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                      >> 4U))))) 
                                                      & (0U 
                                                         != (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                     & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout))) 
                                                    & (IData)(vlTOPp->exu_div_ctl_32__DOT__valid_e1)) 
                                                   & (~ (IData)(vlTOPp->dec_tlu_fast_div_disable))) 
                                                  | (((((0U 
                                                         == (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                        & (0U 
                                                           != (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                       & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout))) 
                                                      & (IData)(vlTOPp->exu_div_ctl_32__DOT__valid_e1)) 
                                                     & (~ (IData)(vlTOPp->dec_tlu_fast_div_disable))));
    VL_EXTEND_WI(65,32, __Vtemp2, vlTOPp->exu_div_ctl_32__DOT__dividend_eff);
    VL_SHIFTL_WWI(65,65,6, __Vtemp3, __Vtemp2, (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff));
    vlTOPp->exu_div_ctl_32__DOT__a_in = (VL_ULL(0x1ffffffff) 
                                         & (VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state))) 
                                            & (((VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state))) 
                                                 & (((VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct))) 
                                                      & vlTOPp->exu_div_ctl_32__DOT__a_ff) 
                                                     | (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((~ (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                                >> 4U))))))) 
                                                        & (((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)) 
                                                            << 1U) 
                                                           | (QData)((IData)(
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
                                                                            & __Vtemp3[2U]))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            __Vtemp3[1U])))))) 
                                                + ((IData)(vlTOPp->exu_div_ctl_32__DOT__add)
                                                    ? vlTOPp->exu_div_ctl_32__DOT__m_ff
                                                    : 
                                                   (~ vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                               + (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__add))))))));
    vlTOPp->exu_div_ctl_32__DOT__shortq_raw = (((((0xfffffff8U 
                                                   & (((((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                              >> 1U))) 
                                                         << 3U) 
                                                        & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                           << 1U)) 
                                                       | (((1U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                           << 3U) 
                                                          & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                             << 1U))) 
                                                      | (((0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                          << 3U) 
                                                         & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                            << 1U)))) 
                                                  | (((1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                      & (1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                             >> 1U)))) 
                                                     << 3U)) 
                                                 | (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                     & (1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                            >> 1U)))) 
                                                    << 3U)) 
                                                | (((0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((((0xfffffffcU 
                                                         & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                            & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                                 >> 1U))) 
                                                            & (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                                   >> 1U)))) 
                                                           << 2U)) 
                                                       | (((1U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                           & (1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                         << 2U))) 
                                                  | ((((0x7ffffffeU 
                                                        & (((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                            >> 1U) 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                                   >> 1U))) 
                                                              << 1U))) 
                                                       | (((1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                                >> 1U))) 
                                                           & (1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                          << 1U)) 
                                                      | (((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                         << 1U)) 
                                                     | ((((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                          >> 2U) 
                                                         & (1U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                        | ((1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                                >> 1U))) 
                                                           & (0U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls))))))));
    vlTOPp->finish_early = vlTOPp->exu_div_ctl_32__DOT__smallnum_case;
    vlTOPp->finish = ((((IData)(vlTOPp->exu_div_ctl_32__DOT__smallnum_case) 
                        | ((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout))
                            ? (0x21U == (IData)(vlTOPp->exu_div_ctl_32__DOT__count))
                            : (0x20U == (IData)(vlTOPp->exu_div_ctl_32__DOT__count)))) 
                       & (~ (IData)(vlTOPp->flush_lower))) 
                      & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff)));
    vlTOPp->exu_div_ctl_32__DOT__shortq_enable = (((IData)(vlTOPp->valid_ff_e1) 
                                                   & (0U 
                                                      != (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_raw)));
    vlTOPp->exu_div_ctl_32__DOT__run_in = (1U & (((
                                                   ((IData)(vlTOPp->dp) 
                                                    >> 2U) 
                                                   | (IData)(vlTOPp->exu_div_ctl_32__DOT__run_state)) 
                                                  & (~ (IData)(vlTOPp->finish))) 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff))));
    vlTOPp->exu_div_ctl_32__DOT__shortq_shift = ((0x30U 
                                                  & (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift)) 
                                                 | (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))) 
                                                    & (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_raw)));
    vlTOPp->exu_div_ctl_32__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlTOPp->dp) >> 2U) | (((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                   & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))) 
                                                  & (0x21U 
                                                     != (IData)(vlTOPp->exu_div_ctl_32__DOT__count)))) 
                  | (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)))
            ? vlTOPp->exu_div_ctl_32__DOT__a_in : vlTOPp->exu_div_ctl_32__DOT__a_ff);
    vlTOPp->exu_div_ctl_32__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (VL_ULL(0x1ffffffff) & ((1U & (((IData)(vlTOPp->dp) 
                                          >> 2U) | 
                                         ((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
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
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__a_in 
                                                                             >> 0x20U)))))))))
                                   : vlTOPp->exu_div_ctl_32__DOT__q_ff));
    vlTOPp->exu_div_ctl_32__DOT__count_in = (0x3fU 
                                             & (VL_NEGATE_I((IData)(
                                                                    ((((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                                       & (~ (IData)(vlTOPp->finish))) 
                                                                      & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff))) 
                                                                     & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))))) 
                                                & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlTOPp->exu_div_ctl_32__DOT__count) 
                                                    + (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff)))));
}

VL_INLINE_OPT void Vexu_div_ctl_32::_combo__TOP__4(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_combo__TOP__4\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->exu_div_ctl_32__DOT__miscf__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlTOPp->dp)) ? ((8U & (vlTOPp->dividend 
                                                >> 0x1cU)) 
                                         | ((4U & (vlTOPp->divisor 
                                                   >> 0x1dU)) 
                                            | ((((~ 
                                                  ((IData)(vlTOPp->dp) 
                                                   >> 1U)) 
                                                 & (0U 
                                                    != vlTOPp->divisor)) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlTOPp->dp)))))
            : (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout));
    vlTOPp->exu_div_ctl_32__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlTOPp->dp)) ? (((QData)((IData)(
                                                          (1U 
                                                           & ((~ 
                                                               ((IData)(vlTOPp->dp) 
                                                                >> 1U)) 
                                                              & (vlTOPp->divisor 
                                                                 >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlTOPp->divisor)))
            : vlTOPp->exu_div_ctl_32__DOT__m_ff);
    vlTOPp->exu_div_ctl_32__DOT__smallnum_case = ((
                                                   (((((0U 
                                                        == 
                                                        (0xfffffffU 
                                                         & (IData)(
                                                                   (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                    >> 4U)))) 
                                                       & (0U 
                                                          == 
                                                          (0xfffffffU 
                                                           & (IData)(
                                                                     (vlTOPp->exu_div_ctl_32__DOT__m_ff 
                                                                      >> 4U))))) 
                                                      & (0U 
                                                         != (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                     & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout))) 
                                                    & (IData)(vlTOPp->exu_div_ctl_32__DOT__valid_e1)) 
                                                   & (~ (IData)(vlTOPp->dec_tlu_fast_div_disable))) 
                                                  | (((((0U 
                                                         == (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)) 
                                                        & (0U 
                                                           != (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                       & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout))) 
                                                      & (IData)(vlTOPp->exu_div_ctl_32__DOT__valid_e1)) 
                                                     & (~ (IData)(vlTOPp->dec_tlu_fast_div_disable))));
    vlTOPp->finish_early = vlTOPp->exu_div_ctl_32__DOT__smallnum_case;
    vlTOPp->finish = ((((IData)(vlTOPp->exu_div_ctl_32__DOT__smallnum_case) 
                        | ((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout))
                            ? (0x21U == (IData)(vlTOPp->exu_div_ctl_32__DOT__count))
                            : (0x20U == (IData)(vlTOPp->exu_div_ctl_32__DOT__count)))) 
                       & (~ (IData)(vlTOPp->flush_lower))) 
                      & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff)));
    vlTOPp->exu_div_ctl_32__DOT__run_in = (1U & (((
                                                   ((IData)(vlTOPp->dp) 
                                                    >> 2U) 
                                                   | (IData)(vlTOPp->exu_div_ctl_32__DOT__run_state)) 
                                                  & (~ (IData)(vlTOPp->finish))) 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff))));
}

VL_INLINE_OPT void Vexu_div_ctl_32::_multiclk__TOP__5(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_multiclk__TOP__5\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp6[3];
    WData/*95:0*/ __Vtemp7[3];
    // Body
    vlTOPp->exu_div_ctl_32__DOT__rem_correct = (((0x21U 
                                                  == (IData)(vlTOPp->exu_div_ctl_32__DOT__count)) 
                                                 & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout)) 
                                                & (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                           >> 0x20U)));
    vlTOPp->exu_div_ctl_32__DOT__short_dividend = (
                                                   (VL_ULL(0xffffffff) 
                                                    & vlTOPp->exu_div_ctl_32__DOT__short_dividend) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                                           >> 1U) 
                                                                          & (IData)(
                                                                                (vlTOPp->exu_div_ctl_32__DOT__q_ff 
                                                                                >> 0x1fU)))))) 
                                                      << 0x20U));
    vlTOPp->out = (((0xfU & (VL_NEGATE_I((IData)((1U 
                                                  & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout) 
                                                     >> 4U)))) 
                             & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout))) 
                    | (VL_NEGATE_I((IData)((1U & (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout)))) 
                       & ((1U & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                  >> 1U) & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                            >> 3U)))
                           ? ((vlTOPp->exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp 
                               << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))
                           : (IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)))) 
                   | (VL_NEGATE_I((IData)((1U & ((~ 
                                                  ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__smallnumff__dout) 
                                                   >> 4U)) 
                                                 & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout)))))) 
                      & ((1U & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                 >> 1U) & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                            >> 3U) 
                                           ^ ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                              >> 2U))))
                          ? ((vlTOPp->exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp 
                              << 1U) | (1U & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                          : (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff))));
    vlTOPp->exu_div_ctl_32__DOT__dividend_eff = ((1U 
                                                  & (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                      >> 1U) 
                                                     & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                        >> 3U)))
                                                  ? 
                                                 ((vlTOPp->exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff)))
                                                  : (IData)(vlTOPp->exu_div_ctl_32__DOT__q_ff));
    vlTOPp->exu_div_ctl_32__DOT__add = (1U & (((IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__a_ff 
                                                        >> 0x20U)) 
                                               | (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)) 
                                              ^ (((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                  >> 2U) 
                                                 & ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__miscf__dout) 
                                                    >> 1U))));
    vlTOPp->exu_div_ctl_32__DOT__a_cls = (((((~ (IData)(
                                                        (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                         >> 0x20U))) 
                                             & (0U 
                                                != 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                            >> 0x18U))))) 
                                            | ((IData)(
                                                       (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                        >> 0x20U)) 
                                               & (0x1ffU 
                                                  != 
                                                  (0x1ffU 
                                                   & (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                              >> 0x17U)))))) 
                                           << 2U) | 
                                          (((((~ (IData)(
                                                         (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                          >> 0x20U))) 
                                              & (0U 
                                                 != 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                             >> 0x10U))))) 
                                             | ((IData)(
                                                        (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                         >> 0x20U)) 
                                                & (0xffU 
                                                   != 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                               >> 0xfU)))))) 
                                            << 1U) 
                                           | (((~ (IData)(
                                                          (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                           >> 0x20U))) 
                                               & (0U 
                                                  != 
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                              >> 8U))))) 
                                              | ((IData)(
                                                         (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                          >> 0x20U)) 
                                                 & (0xffU 
                                                    != 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->exu_div_ctl_32__DOT__short_dividend 
                                                                >> 7U))))))));
    VL_EXTEND_WI(65,32, __Vtemp6, vlTOPp->exu_div_ctl_32__DOT__dividend_eff);
    VL_SHIFTL_WWI(65,65,6, __Vtemp7, __Vtemp6, (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff));
    vlTOPp->exu_div_ctl_32__DOT__a_in = (VL_ULL(0x1ffffffff) 
                                         & (VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state))) 
                                            & (((VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state))) 
                                                 & (((VL_NEGATE_Q((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct))) 
                                                      & vlTOPp->exu_div_ctl_32__DOT__a_ff) 
                                                     | (VL_NEGATE_Q((QData)((IData)(
                                                                                (1U 
                                                                                & ((~ (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)) 
                                                                                & (~ 
                                                                                ((IData)(vlTOPp->exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout) 
                                                                                >> 4U))))))) 
                                                        & (((QData)((IData)(vlTOPp->exu_div_ctl_32__DOT__a_ff)) 
                                                            << 1U) 
                                                           | (QData)((IData)(
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
                                                                            & __Vtemp7[2U]))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            __Vtemp7[1U])))))) 
                                                + ((IData)(vlTOPp->exu_div_ctl_32__DOT__add)
                                                    ? vlTOPp->exu_div_ctl_32__DOT__m_ff
                                                    : 
                                                   (~ vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                               + (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__add))))))));
    vlTOPp->exu_div_ctl_32__DOT__shortq_raw = (((((0xfffffff8U 
                                                   & (((((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                              >> 1U))) 
                                                         << 3U) 
                                                        & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                           << 1U)) 
                                                       | (((1U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                           << 3U) 
                                                          & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                             << 1U))) 
                                                      | (((0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                          << 3U) 
                                                         & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                            << 1U)))) 
                                                  | (((1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                      & (1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                             >> 1U)))) 
                                                     << 3U)) 
                                                 | (((0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                     & (1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                            >> 1U)))) 
                                                    << 3U)) 
                                                | (((0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((((0xfffffffcU 
                                                         & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                            & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                                 >> 1U))) 
                                                            & (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                                   >> 1U)))) 
                                                           << 2U)) 
                                                       | (((1U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                           & (1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                          << 2U)) 
                                                      | (((0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                         << 2U))) 
                                                  | ((((0x7ffffffeU 
                                                        & (((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                            >> 1U) 
                                                           & ((1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls) 
                                                                   >> 1U))) 
                                                              << 1U))) 
                                                       | (((1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                                >> 1U))) 
                                                           & (1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                          << 1U)) 
                                                      | (((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                         << 1U)) 
                                                     | ((((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                          >> 2U) 
                                                         & (1U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls)))) 
                                                        | ((1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlTOPp->exu_div_ctl_32__DOT__a_cls) 
                                                                >> 1U))) 
                                                           & (0U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->exu_div_ctl_32__DOT__b_cls))))))));
    vlTOPp->exu_div_ctl_32__DOT__shortq_enable = (((IData)(vlTOPp->valid_ff_e1) 
                                                   & (0U 
                                                      != (IData)(vlTOPp->exu_div_ctl_32__DOT__m_ff))) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_raw)));
    vlTOPp->exu_div_ctl_32__DOT__shortq_shift = ((0x30U 
                                                  & (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift)) 
                                                 | (VL_NEGATE_I((IData)((IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))) 
                                                    & (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_raw)));
}

VL_INLINE_OPT void Vexu_div_ctl_32::_combo__TOP__6(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_combo__TOP__6\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->exu_div_ctl_32__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlTOPp->dp) >> 2U) | (((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                   & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))) 
                                                  & (0x21U 
                                                     != (IData)(vlTOPp->exu_div_ctl_32__DOT__count)))) 
                  | (IData)(vlTOPp->exu_div_ctl_32__DOT__rem_correct)))
            ? vlTOPp->exu_div_ctl_32__DOT__a_in : vlTOPp->exu_div_ctl_32__DOT__a_ff);
    vlTOPp->exu_div_ctl_32__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (VL_ULL(0x1ffffffff) & ((1U & (((IData)(vlTOPp->dp) 
                                          >> 2U) | 
                                         ((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
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
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(
                                                                            (vlTOPp->exu_div_ctl_32__DOT__a_in 
                                                                             >> 0x20U)))))))))
                                   : vlTOPp->exu_div_ctl_32__DOT__q_ff));
    vlTOPp->exu_div_ctl_32__DOT__count_in = (0x3fU 
                                             & (VL_NEGATE_I((IData)(
                                                                    ((((IData)(vlTOPp->exu_div_ctl_32__DOT__run_state) 
                                                                       & (~ (IData)(vlTOPp->finish))) 
                                                                      & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__flush_lower_ff))) 
                                                                     & (~ (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_enable))))) 
                                                & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlTOPp->exu_div_ctl_32__DOT__count) 
                                                    + (IData)(vlTOPp->exu_div_ctl_32__DOT__shortq_shift_ff)))));
}

void Vexu_div_ctl_32::_eval(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_eval\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vexu_div_ctl_32::_eval_initial(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_eval_initial\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__active_clk = vlTOPp->active_clk;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vexu_div_ctl_32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::final\n"); );
    // Variables
    Vexu_div_ctl_32__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vexu_div_ctl_32::_eval_settle(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_eval_settle\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vexu_div_ctl_32::_change_request(Vexu_div_ctl_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_change_request\n"); );
    Vexu_div_ctl_32* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vexu_div_ctl_32::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_eval_debug_assertions\n"); );
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

void Vexu_div_ctl_32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_div_ctl_32::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    active_clk = VL_RAND_RESET_I(1);
    rst_l = VL_RAND_RESET_I(1);
    scan_mode = VL_RAND_RESET_I(1);
    dec_tlu_fast_div_disable = VL_RAND_RESET_I(1);
    dividend = VL_RAND_RESET_I(32);
    divisor = VL_RAND_RESET_I(32);
    dp = 0;
    flush_lower = VL_RAND_RESET_I(1);
    valid_ff_e1 = VL_RAND_RESET_I(1);
    finish_early = VL_RAND_RESET_I(1);
    finish = VL_RAND_RESET_I(1);
    div_stall = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(32);
    exu_div_ctl_32__DOT__run_in = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__run_state = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__count_in = VL_RAND_RESET_I(6);
    exu_div_ctl_32__DOT__count = VL_RAND_RESET_I(6);
    exu_div_ctl_32__DOT__m_ff = VL_RAND_RESET_Q(33);
    exu_div_ctl_32__DOT__q_ff = VL_RAND_RESET_Q(33);
    exu_div_ctl_32__DOT__a_in = VL_RAND_RESET_Q(33);
    exu_div_ctl_32__DOT__a_ff = VL_RAND_RESET_Q(33);
    exu_div_ctl_32__DOT__dividend_eff = VL_RAND_RESET_I(32);
    exu_div_ctl_32__DOT__add = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__rem_correct = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__flush_lower_ff = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__valid_e1 = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__smallnum_case = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__smallnum = VL_RAND_RESET_I(4);
    exu_div_ctl_32__DOT____Vcellout__miscf__dout = VL_RAND_RESET_I(4);
    exu_div_ctl_32__DOT____Vcellout__smallnumff__dout = VL_RAND_RESET_I(5);
    exu_div_ctl_32__DOT__a_cls = VL_RAND_RESET_I(5);
    exu_div_ctl_32__DOT__b_cls = VL_RAND_RESET_I(5);
    exu_div_ctl_32__DOT__shortq = VL_RAND_RESET_I(6);
    exu_div_ctl_32__DOT__shortq_shift = VL_RAND_RESET_I(6);
    exu_div_ctl_32__DOT__shortq_shift_ff = VL_RAND_RESET_I(6);
    exu_div_ctl_32__DOT__shortq_enable = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__short_dividend = VL_RAND_RESET_Q(33);
    exu_div_ctl_32__DOT__shortq_raw = VL_RAND_RESET_I(4);
    exu_div_ctl_32__DOT____Vcellout__i_shortq_ff__dout = VL_RAND_RESET_I(5);
    exu_div_ctl_32__DOT__miscf__DOT____Vcellinp__dffs__din = VL_RAND_RESET_I(4);
    exu_div_ctl_32__DOT__mff__DOT__l1clk = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din = VL_RAND_RESET_Q(33);
    exu_div_ctl_32__DOT__qff__DOT__l1clk = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din = VL_RAND_RESET_Q(33);
    exu_div_ctl_32__DOT__aff__DOT__l1clk = VL_RAND_RESET_I(1);
    exu_div_ctl_32__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din = VL_RAND_RESET_Q(33);
    exu_div_ctl_32__DOT__dividend_c__DOT__dout_temp = VL_RAND_RESET_I(31);
    exu_div_ctl_32__DOT__q_ff_c__DOT__dout_temp = VL_RAND_RESET_I(31);
    exu_div_ctl_32__DOT__a_ff_c__DOT__dout_temp = VL_RAND_RESET_I(31);
    __Vm_traceActivity = 0;
}
