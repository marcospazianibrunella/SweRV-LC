// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexu_div_ctl.h for the primary calling header

#ifndef _VEXU_DIV_CTL___024UNIT_H_
#define _VEXU_DIV_CTL___024UNIT_H_  // guard

#include "verilated.h"

//==========

class Vexu_div_ctl__Syms;
class Vexu_div_ctl_VerilatedVcd;


//----------

VL_MODULE(Vexu_div_ctl___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vexu_div_ctl__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vexu_div_ctl___024unit);  ///< Copying not allowed
  public:
    Vexu_div_ctl___024unit(const char* name = "TOP");
    ~Vexu_div_ctl___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vexu_div_ctl__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
