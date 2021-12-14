// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VEXU_DIV_CTL_32__SYMS_H_
#define _VEXU_DIV_CTL_32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vexu_div_ctl_32.h"
#include "Vexu_div_ctl_32___024unit.h"

// SYMS CLASS
class Vexu_div_ctl_32__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vexu_div_ctl_32*               TOPp;
    
    // CREATORS
    Vexu_div_ctl_32__Syms(Vexu_div_ctl_32* topp, const char* namep);
    ~Vexu_div_ctl_32__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
