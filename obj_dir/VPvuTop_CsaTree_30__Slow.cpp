// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_CsaTree_30.h"
#include "VPvuTop__Syms.h"

void VPvuTop_CsaTree_30___ctor_var_reset(VPvuTop_CsaTree_30* vlSelf);

VPvuTop_CsaTree_30::VPvuTop_CsaTree_30(VPvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPvuTop_CsaTree_30___ctor_var_reset(this);
}

void VPvuTop_CsaTree_30::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPvuTop_CsaTree_30::~VPvuTop_CsaTree_30() {
}
