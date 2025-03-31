// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_IntDivider.h"
#include "VPvuTop__Syms.h"

void VPvuTop_IntDivider___ctor_var_reset(VPvuTop_IntDivider* vlSelf);

VPvuTop_IntDivider::VPvuTop_IntDivider(VPvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPvuTop_IntDivider___ctor_var_reset(this);
}

void VPvuTop_IntDivider::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPvuTop_IntDivider::~VPvuTop_IntDivider() {
}
