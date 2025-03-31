// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_Radix4BoothMultiplier.h"
#include "VPvuTop__Syms.h"

void VPvuTop_Radix4BoothMultiplier___ctor_var_reset(VPvuTop_Radix4BoothMultiplier* vlSelf);

VPvuTop_Radix4BoothMultiplier::VPvuTop_Radix4BoothMultiplier(VPvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPvuTop_Radix4BoothMultiplier___ctor_var_reset(this);
}

void VPvuTop_Radix4BoothMultiplier::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPvuTop_Radix4BoothMultiplier::~VPvuTop_Radix4BoothMultiplier() {
}
