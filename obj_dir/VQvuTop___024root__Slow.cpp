// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop__Syms.h"
#include "VQvuTop___024root.h"

void VQvuTop___024root___ctor_var_reset(VQvuTop___024root* vlSelf);

VQvuTop___024root::VQvuTop___024root(VQvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VQvuTop___024root___ctor_var_reset(this);
}

void VQvuTop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VQvuTop___024root::~VQvuTop___024root() {
}
