// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VQvuTop.h for the primary calling header

#ifndef VERILATED_VQVUTOP_LZC__M1_W1F_H_
#define VERILATED_VQVUTOP_LZC__M1_W1F_H_  // guard

#include "verilated.h"

class VQvuTop__Syms;

class VQvuTop_LZC__M1_W1f final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(cnt_o,4,0);
    VL_OUT8(empty_o,0,0);
    VlWide<5>/*159:0*/ __PVT__gen_lzc__DOT__index_nodes;
    VL_IN(in_i,30,0);
    IData/*31:0*/ __PVT__gen_lzc__DOT__sel_nodes;
    IData/*30:0*/ __PVT__gen_lzc__DOT__in_tmp;

    // INTERNAL VARIABLES
    VQvuTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VQvuTop_LZC__M1_W1f(VQvuTop__Syms* symsp, const char* v__name);
    ~VQvuTop_LZC__M1_W1f();
    VL_UNCOPYABLE(VQvuTop_LZC__M1_W1f);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
