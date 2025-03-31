// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Compressor4to2.h"
#include "VPvuTop__Syms.h"

void VPvuTop_Compressor4to2___ctor_var_reset(VPvuTop_Compressor4to2* vlSelf);

VPvuTop_Compressor4to2::VPvuTop_Compressor4to2(VPvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPvuTop_Compressor4to2___ctor_var_reset(this);
}

void VPvuTop_Compressor4to2::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPvuTop_Compressor4to2::~VPvuTop_Compressor4to2() {
}
