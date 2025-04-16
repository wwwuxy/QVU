// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop___024root.h"

void VQvuTop___024root___nba_sequent__TOP__0(VQvuTop___024root* vlSelf);
void VQvuTop___024root___nba_sequent__TOP__1(VQvuTop___024root* vlSelf);

void VQvuTop___024root___eval_nba(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x20U)) {
        VQvuTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
        VQvuTop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VQvuTop___024root___eval_triggers__ico(VQvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__ico(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VQvuTop___024root___eval_ico(VQvuTop___024root* vlSelf);
void VQvuTop___024root___eval_triggers__act(VQvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__act(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VQvuTop___024root___eval_act(VQvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__nba(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VQvuTop___024root___eval(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<33> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VQvuTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VQvuTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/QVU/vsrc/QvuTop.sv", 4409, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VQvuTop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VQvuTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VQvuTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wuxy/QVU/vsrc/QvuTop.sv", 4409, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VQvuTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VQvuTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/QVU/vsrc/QvuTop.sv", 4409, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VQvuTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VQvuTop___024root___eval_debug_assertions(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_op & 0xf0U))) {
        Verilated::overWidthError("io_op");}
    if (VL_UNLIKELY((vlSelf->io_Isposit & 0xfeU))) {
        Verilated::overWidthError("io_Isposit");}
    if (VL_UNLIKELY((vlSelf->io_Outposit & 0xfeU))) {
        Verilated::overWidthError("io_Outposit");}
    if (VL_UNLIKELY((vlSelf->io_float_mode & 0xf8U))) {
        Verilated::overWidthError("io_float_mode");}
    if (VL_UNLIKELY((vlSelf->io_float_posit & 0xfeU))) {
        Verilated::overWidthError("io_float_posit");}
    if (VL_UNLIKELY((vlSelf->io_src_posit_width & 0xc0U))) {
        Verilated::overWidthError("io_src_posit_width");}
    if (VL_UNLIKELY((vlSelf->io_vector_size & 0xf8U))) {
        Verilated::overWidthError("io_vector_size");}
    if (VL_UNLIKELY((vlSelf->io_dst_posit_width & 0xc0U))) {
        Verilated::overWidthError("io_dst_posit_width");}
    if (VL_UNLIKELY((vlSelf->io_reset_window & 0xfeU))) {
        Verilated::overWidthError("io_reset_window");}
}
#endif  // VL_DEBUG
