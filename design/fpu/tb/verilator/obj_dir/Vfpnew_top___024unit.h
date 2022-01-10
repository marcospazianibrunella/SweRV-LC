// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfpnew_top.h for the primary calling header

#ifndef _VFPNEW_TOP___024UNIT_H_
#define _VFPNEW_TOP___024UNIT_H_  // guard

#include "verilated.h"

//==========

class Vfpnew_top__Syms;
class Vfpnew_top_VerilatedVcd;


//----------

VL_MODULE(Vfpnew_top___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vfpnew_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfpnew_top___024unit);  ///< Copying not allowed
  public:
    Vfpnew_top___024unit(const char* name = "TOP");
    ~Vfpnew_top___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vfpnew_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
