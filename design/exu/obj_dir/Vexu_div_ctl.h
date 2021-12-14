// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VEXU_DIV_CTL_H_
#define _VEXU_DIV_CTL_H_  // guard

#include "verilated.h"

//==========

class Vexu_div_ctl__Syms;
class Vexu_div_ctl_VerilatedVcd;


//----------

VL_MODULE(Vexu_div_ctl) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(active_clk,0,0);
    VL_IN8(rst_l,0,0);
    VL_IN8(scan_mode,0,0);
    VL_IN8(dec_tlu_fast_div_disable,0,0);
    VL_IN8(dp,2,0);
    VL_IN8(flush_lower,0,0);
    VL_OUT8(valid_ff_e1,0,0);
    VL_OUT8(finish_early,0,0);
    VL_OUT8(finish,0,0);
    VL_OUT8(div_stall,0,0);
    VL_IN64(dividend,63,0);
    VL_IN64(divisor,63,0);
    VL_OUT64(out,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ exu_div_ctl__DOT__run_in;
    CData/*0:0*/ exu_div_ctl__DOT__run_state;
    CData/*7:0*/ exu_div_ctl__DOT__count_in;
    CData/*7:0*/ exu_div_ctl__DOT__count;
    CData/*0:0*/ exu_div_ctl__DOT__add;
    CData/*0:0*/ exu_div_ctl__DOT__rem_correct;
    CData/*0:0*/ exu_div_ctl__DOT__flush_lower_ff;
    CData/*0:0*/ exu_div_ctl__DOT__valid_e1;
    CData/*0:0*/ exu_div_ctl__DOT__smallnum_case;
    CData/*3:0*/ exu_div_ctl__DOT__smallnum;
    CData/*4:0*/ exu_div_ctl__DOT__a_cls;
    CData/*4:0*/ exu_div_ctl__DOT__b_cls;
    CData/*5:0*/ exu_div_ctl__DOT__shortq;
    CData/*7:0*/ exu_div_ctl__DOT__shortq_shift;
    CData/*7:0*/ exu_div_ctl__DOT__shortq_shift_ff;
    CData/*0:0*/ exu_div_ctl__DOT__shortq_enable;
    CData/*3:0*/ exu_div_ctl__DOT__shortq_raw;
    CData/*0:0*/ exu_div_ctl__DOT__mff__DOT__l1clk;
    CData/*0:0*/ exu_div_ctl__DOT__qff__DOT__l1clk;
    CData/*0:0*/ exu_div_ctl__DOT__aff__DOT__l1clk;
    WData/*64:0*/ exu_div_ctl__DOT__m_ff[3];
    WData/*64:0*/ exu_div_ctl__DOT__q_ff[3];
    WData/*64:0*/ exu_div_ctl__DOT__a_in[3];
    WData/*64:0*/ exu_div_ctl__DOT__a_ff[3];
    WData/*64:0*/ exu_div_ctl__DOT__short_dividend[3];
    QData/*63:0*/ exu_div_ctl__DOT__dividend_eff;
    QData/*62:0*/ exu_div_ctl__DOT__dividend_c__DOT__dout_temp;
    QData/*62:0*/ exu_div_ctl__DOT__q_ff_c__DOT__dout_temp;
    QData/*62:0*/ exu_div_ctl__DOT__a_ff_c__DOT__dout_temp;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ exu_div_ctl__DOT____Vcellout__miscf__dout;
    CData/*4:0*/ exu_div_ctl__DOT____Vcellout__smallnumff__dout;
    CData/*4:0*/ exu_div_ctl__DOT____Vcellout__i_shortq_ff__dout;
    CData/*3:0*/ exu_div_ctl__DOT__miscf__DOT____Vcellinp__dffs__din;
    CData/*0:0*/ __Vclklast__TOP__active_clk;
    CData/*0:0*/ __Vclklast__TOP__clk;
    WData/*64:0*/ exu_div_ctl__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3];
    WData/*64:0*/ exu_div_ctl__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3];
    WData/*64:0*/ exu_div_ctl__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3];
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vexu_div_ctl__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vexu_div_ctl);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vexu_div_ctl(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vexu_div_ctl();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vexu_div_ctl__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vexu_div_ctl__Syms* symsp, bool first);
  private:
    static QData _change_request(Vexu_div_ctl__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vexu_div_ctl__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(Vexu_div_ctl__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vexu_div_ctl__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vexu_div_ctl__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vexu_div_ctl__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(Vexu_div_ctl__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vexu_div_ctl__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vexu_div_ctl__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vexu_div_ctl__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vexu_div_ctl__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
