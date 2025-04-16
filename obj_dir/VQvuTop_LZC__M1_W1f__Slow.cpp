// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop_LZC__M1_W1f.h"
#include "VQvuTop__Syms.h"

void VQvuTop_LZC__M1_W1f___ctor_var_reset(VQvuTop_LZC__M1_W1f* vlSelf);

VQvuTop_LZC__M1_W1f::VQvuTop_LZC__M1_W1f(VQvuTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VQvuTop_LZC__M1_W1f___ctor_var_reset(this);
}

void VQvuTop_LZC__M1_W1f::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VQvuTop_LZC__M1_W1f::~VQvuTop_LZC__M1_W1f() {
}
