// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop__Syms.h"
#include "VPvuTop___024root.h"

void VPvuTop___024root___ctor_var_reset(VPvuTop___024root* vlSelf);

VPvuTop___024root::VPvuTop___024root(VPvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPvuTop___024root___ctor_var_reset(this);
}

void VPvuTop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPvuTop___024root::~VPvuTop___024root() {
}
