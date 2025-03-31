// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_PositDecode.h"
#include "VPvuTop__Syms.h"

void VPvuTop_PositDecode___ctor_var_reset(VPvuTop_PositDecode* vlSelf);

VPvuTop_PositDecode::VPvuTop_PositDecode(VPvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPvuTop_PositDecode___ctor_var_reset(this);
}

void VPvuTop_PositDecode::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPvuTop_PositDecode::~VPvuTop_PositDecode() {
}
