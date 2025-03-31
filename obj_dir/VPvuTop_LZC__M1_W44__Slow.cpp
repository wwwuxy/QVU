// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_LZC__M1_W44.h"
#include "VPvuTop__Syms.h"

void VPvuTop_LZC__M1_W44___ctor_var_reset(VPvuTop_LZC__M1_W44* vlSelf);

VPvuTop_LZC__M1_W44::VPvuTop_LZC__M1_W44(VPvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPvuTop_LZC__M1_W44___ctor_var_reset(this);
}

void VPvuTop_LZC__M1_W44::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPvuTop_LZC__M1_W44::~VPvuTop_LZC__M1_W44() {
}
