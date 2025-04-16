// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQvuTop.h for the primary calling header

#include "verilated.h"

#include "VQvuTop__Syms.h"
#include "VQvuTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VQvuTop___024root___dump_triggers__ico(VQvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VQvuTop___024root___eval_triggers__ico(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(2U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(3U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(4U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(5U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(6U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(7U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(8U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(9U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                  | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                 | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0xaU) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0xbU) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0xcU) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0xdU) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0xeU) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes 
                                        != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0xfU) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__sel_nodes) 
                                        | (0U != ((
                                                   (((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                  | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x10U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x11U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x12U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x13U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x14U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x15U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x16U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x17U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x18U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x19U) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x1aU) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x1bU) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x1cU) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x1dU) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x1eU) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__VicoTriggered.at(0x1fU) = ((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes 
                                          != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__sel_nodes) 
                                         | (0U != (
                                                   ((((vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                      | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                         ^ 
                                                         vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[1U])) 
                                                     | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                        ^ 
                                                        vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[2U])) 
                                                    | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                       ^ 
                                                       vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[3U])) 
                                                   | (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[4U]))));
    vlSelf->__VicoTriggered.at(0x20U) = (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes 
                                         != vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__sel_nodes);
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_15____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_14____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_13____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_12____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_11____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_10____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_9____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_8____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_7____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_6____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_5____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_4____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_3____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_2____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule_1____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__sel_nodes 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[0U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[1U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[2U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[3U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__QvuTop__DOT__decode__DOT__lzcModule____PVT__gen_lzc__DOT__index_nodes[4U] 
        = vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[4U];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
        vlSelf->__VicoTriggered.at(2U) = 1U;
        vlSelf->__VicoTriggered.at(3U) = 1U;
        vlSelf->__VicoTriggered.at(4U) = 1U;
        vlSelf->__VicoTriggered.at(5U) = 1U;
        vlSelf->__VicoTriggered.at(6U) = 1U;
        vlSelf->__VicoTriggered.at(7U) = 1U;
        vlSelf->__VicoTriggered.at(8U) = 1U;
        vlSelf->__VicoTriggered.at(9U) = 1U;
        vlSelf->__VicoTriggered.at(0xaU) = 1U;
        vlSelf->__VicoTriggered.at(0xbU) = 1U;
        vlSelf->__VicoTriggered.at(0xcU) = 1U;
        vlSelf->__VicoTriggered.at(0xdU) = 1U;
        vlSelf->__VicoTriggered.at(0xeU) = 1U;
        vlSelf->__VicoTriggered.at(0xfU) = 1U;
        vlSelf->__VicoTriggered.at(0x10U) = 1U;
        vlSelf->__VicoTriggered.at(0x11U) = 1U;
        vlSelf->__VicoTriggered.at(0x12U) = 1U;
        vlSelf->__VicoTriggered.at(0x13U) = 1U;
        vlSelf->__VicoTriggered.at(0x14U) = 1U;
        vlSelf->__VicoTriggered.at(0x15U) = 1U;
        vlSelf->__VicoTriggered.at(0x16U) = 1U;
        vlSelf->__VicoTriggered.at(0x17U) = 1U;
        vlSelf->__VicoTriggered.at(0x18U) = 1U;
        vlSelf->__VicoTriggered.at(0x19U) = 1U;
        vlSelf->__VicoTriggered.at(0x1aU) = 1U;
        vlSelf->__VicoTriggered.at(0x1bU) = 1U;
        vlSelf->__VicoTriggered.at(0x1cU) = 1U;
        vlSelf->__VicoTriggered.at(0x1dU) = 1U;
        vlSelf->__VicoTriggered.at(0x1eU) = 1U;
        vlSelf->__VicoTriggered.at(0x1fU) = 1U;
        vlSelf->__VicoTriggered.at(0x20U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VQvuTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__0(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__0\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_15__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h5939b817__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x8000U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h433f84f8__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h907e46d1__0))));
    if ((0U == (IData)(vlSelf->io_vector_size))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he40a7e5d__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h5939b817__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0 
            = vlSelf->__VdfgTmp_h5939b817__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d037__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h5939b817__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3016326__0 
            = (0U != vlSelf->__VdfgTmp_h5939b817__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he40a7e5d__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d037__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3016326__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__1(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__1\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h93c7e7df__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((1U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h62563a14__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h88bc2594__0))));
    if ((0U != (IData)(vlSelf->QvuTop__DOT___GEN_0))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc3001b5__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h93c7e7df__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0 
            = vlSelf->__VdfgTmp_h93c7e7df__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a6fc__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h93c7e7df__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0 
            = (0U != vlSelf->__VdfgTmp_h93c7e7df__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc3001b5__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a6fc__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__2(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__2\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_14__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_hf483a44e__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x4000U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h60d0e577__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h93fcca7b__0))));
    if ((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he78bd7e7__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_hf483a44e__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0 
            = vlSelf->__VdfgTmp_hf483a44e__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7da4__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_hf483a44e__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3bf0dae__0 
            = (0U != vlSelf->__VdfgTmp_hf483a44e__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he78bd7e7__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7da4__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3bf0dae__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__3(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__3\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_13__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h82595622__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x2000U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hd2b53c8a__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8fff338c__0))));
    if ((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc29e61ec__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h82595622__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0 
            = vlSelf->__VdfgTmp_h82595622__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0e7e__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h82595622__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h34eabf7b__0 
            = (0U != vlSelf->__VdfgTmp_h82595622__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc29e61ec__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0e7e__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h34eabf7b__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__4(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__4\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_12__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h28105e05__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x1000U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h3458467d__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f719326__0))));
    if ((0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc2281910__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h28105e05__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0 
            = vlSelf->__VdfgTmp_h28105e05__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eba09__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h28105e05__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0 
            = (0U != vlSelf->__VdfgTmp_h28105e05__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc2281910__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eba09__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__5(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__5\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_11__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_he5a8b1b2__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x800U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hd84f4eef__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8effb80f__0))));
    if ((0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hddabf1ae__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_he5a8b1b2__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0 
            = vlSelf->__VdfgTmp_he5a8b1b2__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85dc2__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_he5a8b1b2__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd91def4b__0 
            = (0U != vlSelf->__VdfgTmp_he5a8b1b2__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hddabf1ae__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85dc2__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd91def4b__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__6(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__6\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_10__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h5acc59ba__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x400U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hdbc09056__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e62d0a5__0))));
    if ((0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd270b9c__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h5acc59ba__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0 
            = vlSelf->__VdfgTmp_h5acc59ba__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210c4c__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h5acc59ba__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0 
            = (0U != vlSelf->__VdfgTmp_h5acc59ba__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd270b9c__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210c4c__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__7(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__7\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_9__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_hc1d7047f__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x200U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h657998f6__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8de56522__0))));
    if ((9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc08300e3__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_hc1d7047f__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0 
            = vlSelf->__VdfgTmp_hc1d7047f__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02867__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_hc1d7047f__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3af5d97e__0 
            = (0U != vlSelf->__VdfgTmp_hc1d7047f__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc08300e3__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02867__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3af5d97e__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__8(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__8\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_8__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h447ba768__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x100U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h672aad8b__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d7f6188__0))));
    if ((8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc017bafb__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h447ba768__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0 
            = vlSelf->__VdfgTmp_h447ba768__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036deeb__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h447ba768__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3b636de0__0 
            = (0U != vlSelf->__VdfgTmp_h447ba768__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc017bafb__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036deeb__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3b636de0__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__9(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__9\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_6__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h2a607f05__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x40U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h63b3fc32__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c68d66f__0))));
    if ((6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc326fab3__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h2a607f05__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0 
            = vlSelf->__VdfgTmp_h2a607f05__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc34698b0__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h2a607f05__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37932ea5__0 
            = (0U != vlSelf->__VdfgTmp_h2a607f05__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc326fab3__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc34698b0__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37932ea5__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__10(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__10\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_5__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h33db8eb5__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x20U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h5fdab54b__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8beafdc8__0))));
    if ((5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdeb92de4__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h33db8eb5__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0 
            = vlSelf->__VdfgTmp_h33db8eb5__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded989a1__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h33db8eb5__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd80e3daa__0 
            = (0U != vlSelf->__VdfgTmp_h33db8eb5__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdeb92de4__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded989a1__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd80e3daa__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__11(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__11\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_4__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_hdbad544b__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x10U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h738293b2__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b7d4662__0))));
    if ((4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde2b96ae__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_hdbad544b__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0 
            = vlSelf->__VdfgTmp_hdbad544b__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde5471e5__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_hdbad544b__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0 
            = (0U != vlSelf->__VdfgTmp_hdbad544b__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde2b96ae__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde5471e5__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__12(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__12\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h3aa8e614__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((8U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h5a247d4f__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a383c23__0))));
    if (vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd9b73fc0__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h3aa8e614__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0 
            = vlSelf->__VdfgTmp_h3aa8e614__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61bde__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h3aa8e614__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0 
            = (0U != vlSelf->__VdfgTmp_h3aa8e614__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd9b73fc0__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61bde__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__13(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__13\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_hc3fa4165__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((4U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hef4171a5__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h898ddcf9__0))));
    if ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd93d690c__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_hc3fa4165__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0 
            = vlSelf->__VdfgTmp_hc3fa4165__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8805__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_hc3fa4165__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0 
            = (0U != vlSelf->__VdfgTmp_hc3fa4165__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd93d690c__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8805__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__14(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__14\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h3180c58e__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((2U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h0037cc42__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8933512e__0))));
    if (vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc8dcd07__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h3180c58e__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0 
            = vlSelf->__VdfgTmp_h3180c58e__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf2b43__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h3180c58e__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0 
            = (0U != vlSelf->__VdfgTmp_h3180c58e__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc8dcd07__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf2b43__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__15(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__15\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_3_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_2_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_1_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_0_T_2;
    QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_0_T_2 = 0;
    // Body
    QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6 
                              << 0x10U) : vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6));
    QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_3_T_2 
                              << 8U) : QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_3_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_2_T_2 
                              << 4U) : QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_2_T_2));
    QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_1_T_2 
                              << 2U) : QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_1_T_2));
    vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U]))
                           ? (QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_0_T_2 
                              << 1U) : QvuTop__DOT__decode__DOT__barrel_shifter_7__DOT___temp_results_0_T_2));
    vlSelf->__VdfgTmp_h63efa7e5__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (QData)((IData)(
                                                         ((0x80U 
                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                           ? 0U
                                                           : 
                                                          (((IData)(
                                                                    (0U 
                                                                     != vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)) 
                                                            << 0x1bU) 
                                                           | (0x7ffffffU 
                                                              & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                                 >> 2U))))))
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h433f84f8__0)
                                                           ? 0U
                                                           : vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8cea4ac5__0))));
    if ((0U == (IData)(vlSelf->io_vector_size))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc380ef73__0 
            = (0x1ffffffU & (IData)((vlSelf->__VdfgTmp_h63efa7e5__0 
                                     >> 8U)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0 
            = vlSelf->__VdfgTmp_h63efa7e5__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14e76__0 
            = (0xfffffffU & (IData)(vlSelf->__VdfgTmp_h63efa7e5__0));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37f6fbe9__0 
            = (0U != vlSelf->__VdfgTmp_h63efa7e5__0);
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc380ef73__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14e76__0 = 0U;
        vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37f6fbe9__0 = 0U;
    }
}

VL_INLINE_OPT void VQvuTop___024root___ico_comb__TOP__16(VQvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQvuTop___024root___ico_comb__TOP__16\n"); );
    // Init
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_1;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_1 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_2;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_2 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_3;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_3 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_4;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_4 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_5;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_5 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_6;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_6 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_7;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_7 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_8;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_8 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_9;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_9 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_10;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_10 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_11;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_11 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_12;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_12 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_13;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_13 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_14;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_14 = 0;
    IData/*30:0*/ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_15;
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_15 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30;
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515;
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd2dd069b__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd2dd069b__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h77c3957a__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h77c3957a__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd904d1f8__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd904d1f8__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h80149b1c__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h80149b1c__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hbd4f2c65__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hbd4f2c65__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0e7de402__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0e7de402__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h044c7ad5__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h044c7ad5__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h215b4166__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h215b4166__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf8ca6894__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf8ca6894__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h35962cb3__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h35962cb3__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h460cb8e3__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h460cb8e3__0 = 0;
    CData/*0:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h951889c8__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h951889c8__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0 = 0;
    QData/*36:0*/ QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0;
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102 = 0;
    QData/*32:0*/ QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109;
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109 = 0;
    CData/*3:0*/ __VdfgTmp_h266d6a75__0;
    __VdfgTmp_h266d6a75__0 = 0;
    CData/*3:0*/ __VdfgTmp_haf5bb8dc__0;
    __VdfgTmp_haf5bb8dc__0 = 0;
    CData/*3:0*/ __VdfgTmp_h4cc533e1__0;
    __VdfgTmp_h4cc533e1__0 = 0;
    CData/*3:0*/ __VdfgTmp_hc3f1f329__0;
    __VdfgTmp_hc3f1f329__0 = 0;
    CData/*3:0*/ __VdfgTmp_h8a7e261f__0;
    __VdfgTmp_h8a7e261f__0 = 0;
    CData/*3:0*/ __VdfgTmp_h14aa63ed__0;
    __VdfgTmp_h14aa63ed__0 = 0;
    CData/*3:0*/ __VdfgTmp_h8555aa89__0;
    __VdfgTmp_h8555aa89__0 = 0;
    CData/*3:0*/ __VdfgTmp_hbbc8c52e__0;
    __VdfgTmp_hbbc8c52e__0 = 0;
    CData/*3:0*/ __VdfgTmp_h4164099a__0;
    __VdfgTmp_h4164099a__0 = 0;
    CData/*3:0*/ __VdfgTmp_hef50fc5e__0;
    __VdfgTmp_hef50fc5e__0 = 0;
    CData/*3:0*/ __VdfgTmp_h8faaaf4d__0;
    __VdfgTmp_h8faaaf4d__0 = 0;
    CData/*3:0*/ __VdfgTmp_hfc4e52b7__0;
    __VdfgTmp_hfc4e52b7__0 = 0;
    CData/*3:0*/ __VdfgTmp_h685a7541__0;
    __VdfgTmp_h685a7541__0 = 0;
    CData/*3:0*/ __VdfgTmp_h820a2292__0;
    __VdfgTmp_h820a2292__0 = 0;
    CData/*3:0*/ __VdfgTmp_h57d15536__0;
    __VdfgTmp_h57d15536__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h92ab071e__0;
    VlWide<3>/*95:0*/ __Vtemp_h41713db7__0;
    VlWide<3>/*95:0*/ __Vtemp_h7461f36c__0;
    VlWide<4>/*127:0*/ __Vtemp_hcfb23d50__0;
    VlWide<4>/*127:0*/ __Vtemp_h9389f64c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6771d296__0;
    VlWide<3>/*95:0*/ __Vtemp_hcab21daa__0;
    VlWide<4>/*127:0*/ __Vtemp_h2bf6ea75__0;
    VlWide<3>/*95:0*/ __Vtemp_h43b61f92__0;
    // Body
    __Vtemp_h92ab071e__0[0U] = (IData)((((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(vlSelf->io_vector_size))
                                                           ? 
                                                          ((0x80U 
                                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                            ? 0U
                                                            : 
                                                           ((((1U 
                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                               ? 
                                                              ((0x40000000U 
                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)
                                                                ? 
                                                               (0x1fU 
                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                   - (IData)(1U)))
                                                                : 
                                                               (0x20U 
                                                                | (0x1fU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (~ 
                                                                       vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                               : 0U) 
                                                             << 2U) 
                                                            | ((1U 
                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                                ? 
                                                               (3U 
                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                                   >> 0x1dU))
                                                                : 0U)))
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((6U 
                                                              < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                              ? 
                                                             ((0x40U 
                                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                               ? 0U
                                                               : 
                                                              ((((1U 
                                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((0x40000000U 
                                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)
                                                                   ? 
                                                                  (0x1fU 
                                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                      - (IData)(1U)))
                                                                   : 
                                                                  (0x20U 
                                                                   | (0x1fU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                  : 0U) 
                                                                << 2U) 
                                                               | ((1U 
                                                                   & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                   ? 
                                                                  (3U 
                                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                                      >> 0x1dU))
                                                                   : 0U)))
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((5U 
                                                                 < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                 ? 
                                                                ((0x20U 
                                                                  & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                  ? 0U
                                                                  : 
                                                                 ((((1U 
                                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((0x40000000U 
                                                                      & vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)
                                                                      ? 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                         - (IData)(1U)))
                                                                      : 
                                                                     (0x20U 
                                                                      | (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + 
                                                                            (~ 
                                                                             vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                     : 0U) 
                                                                   << 2U) 
                                                                  | ((1U 
                                                                      & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     (3U 
                                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                                         >> 0x1dU))
                                                                      : 0U)))
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((4U 
                                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                    ? 
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                     ? 0U
                                                                     : 
                                                                    ((((1U 
                                                                        & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((0x40000000U 
                                                                         & vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)
                                                                         ? 
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                            - (IData)(1U)))
                                                                         : 
                                                                        (0x20U 
                                                                         | (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                        : 0U) 
                                                                      << 2U) 
                                                                     | ((1U 
                                                                         & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                         ? 
                                                                        (3U 
                                                                         & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                                            >> 0x1dU))
                                                                         : 0U)))
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                                                                       ? 
                                                                      ((8U 
                                                                        & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                        ? 0U
                                                                        : 
                                                                       ((((1U 
                                                                           & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((0x40000000U 
                                                                            & vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)
                                                                            ? 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                               - (IData)(1U)))
                                                                            : 
                                                                           (0x20U 
                                                                            | (0x1fU 
                                                                               & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                           : 0U) 
                                                                         << 2U) 
                                                                        | ((1U 
                                                                            & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                            ? 
                                                                           (3U 
                                                                            & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                                               >> 0x1dU))
                                                                            : 0U)))
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((2U 
                                                                          < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                          ? 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                           ? 0U
                                                                           : 
                                                                          ((((1U 
                                                                              & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((0x40000000U 
                                                                               & vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)
                                                                               ? 
                                                                              (0x1fU 
                                                                               & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                               : 
                                                                              (0x20U 
                                                                               | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                              : 0U) 
                                                                            << 2U) 
                                                                           | ((1U 
                                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                               ? 
                                                                              (3U 
                                                                               & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                                                >> 0x1dU))
                                                                               : 0U)))
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                                                                             ? 
                                                                            ((2U 
                                                                              & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                              ? 0U
                                                                              : 
                                                                             ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                               << 2U) 
                                                                              | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U)))
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((0U 
                                                                              != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                                                                              ? 
                                                                             ((1U 
                                                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                               ? 0U
                                                                               : 
                                                                              ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                                << 2U) 
                                                                               | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U)))
                                                                              : 0U)))))))))));
    __Vtemp_h92ab071e__0[1U] = (IData)(((((QData)((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->io_vector_size))
                                                            ? 
                                                           ((0x80U 
                                                             & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                             ? 0U
                                                             : 
                                                            ((((1U 
                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                                ? 
                                                               ((0x40000000U 
                                                                 & vlSelf->QvuTop__DOT__decode__DOT___operand_7_T_6)
                                                                 ? 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                    - (IData)(1U)))
                                                                 : 
                                                                (0x20U 
                                                                 | (0x1fU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (~ 
                                                                        vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                : 0U) 
                                                              << 2U) 
                                                             | ((1U 
                                                                 & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_7.__PVT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                (3U 
                                                                 & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_7_io_result_o 
                                                                    >> 0x1dU))
                                                                 : 0U)))
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((6U 
                                                               < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                               ? 
                                                              ((0x40U 
                                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                ? 0U
                                                                : 
                                                               ((((1U 
                                                                   & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                   ? 
                                                                  ((0x40000000U 
                                                                    & vlSelf->QvuTop__DOT__decode__DOT___operand_6_T_6)
                                                                    ? 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                       - (IData)(1U)))
                                                                    : 
                                                                   (0x20U 
                                                                    | (0x1fU 
                                                                       & ((IData)(1U) 
                                                                          + 
                                                                          (~ 
                                                                           vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                   : 0U) 
                                                                 << 2U) 
                                                                | ((1U 
                                                                    & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_6.__PVT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   (3U 
                                                                    & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_6_io_result_o 
                                                                       >> 0x1dU))
                                                                    : 0U)))
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((5U 
                                                                  < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                  ? 
                                                                 ((0x20U 
                                                                   & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                   ? 0U
                                                                   : 
                                                                  ((((1U 
                                                                      & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                      ? 
                                                                     ((0x40000000U 
                                                                       & vlSelf->QvuTop__DOT__decode__DOT___operand_5_T_6)
                                                                       ? 
                                                                      (0x1fU 
                                                                       & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                          - (IData)(1U)))
                                                                       : 
                                                                      (0x20U 
                                                                       | (0x1fU 
                                                                          & ((IData)(1U) 
                                                                             + 
                                                                             (~ 
                                                                              vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                      : 0U) 
                                                                    << 2U) 
                                                                   | ((1U 
                                                                       & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_5.__PVT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      (3U 
                                                                       & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_5_io_result_o 
                                                                          >> 0x1dU))
                                                                       : 0U)))
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((4U 
                                                                     < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                     ? 
                                                                    ((0x10U 
                                                                      & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                      ? 0U
                                                                      : 
                                                                     ((((1U 
                                                                         & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                         ? 
                                                                        ((0x40000000U 
                                                                          & vlSelf->QvuTop__DOT__decode__DOT___operand_4_T_6)
                                                                          ? 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                             - (IData)(1U)))
                                                                          : 
                                                                         (0x20U 
                                                                          | (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                         : 0U) 
                                                                       << 2U) 
                                                                      | ((1U 
                                                                          & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_4.__PVT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         (3U 
                                                                          & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_4_io_result_o 
                                                                             >> 0x1dU))
                                                                          : 0U)))
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                                                                        ? 
                                                                       ((8U 
                                                                         & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                         ? 0U
                                                                         : 
                                                                        ((((1U 
                                                                            & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                            ? 
                                                                           ((0x40000000U 
                                                                             & vlSelf->QvuTop__DOT__decode__DOT___operand_3_T_6)
                                                                             ? 
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                             : 
                                                                            (0x20U 
                                                                             | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                            : 0U) 
                                                                          << 2U) 
                                                                         | ((1U 
                                                                             & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_3.__PVT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            (3U 
                                                                             & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_3_io_result_o 
                                                                                >> 0x1dU))
                                                                             : 0U)))
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((2U 
                                                                           < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                                           ? 
                                                                          ((4U 
                                                                            & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                            ? 0U
                                                                            : 
                                                                           ((((1U 
                                                                               & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                               ? 
                                                                              ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_2_T_6)
                                                                                ? 
                                                                               (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                : 
                                                                               (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                               : 0U) 
                                                                             << 2U) 
                                                                            | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_2.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_2_io_result_o 
                                                                                >> 0x1dU))
                                                                                : 0U)))
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                                                                              ? 
                                                                             ((2U 
                                                                               & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                               ? 0U
                                                                               : 
                                                                              ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_1_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                                << 2U) 
                                                                               | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_1.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_1_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U)))
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((0U 
                                                                               != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                                                                               ? 
                                                                              ((1U 
                                                                                & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                                                ? 0U
                                                                                : 
                                                                               ((((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((0x40000000U 
                                                                                & vlSelf->QvuTop__DOT__decode__DOT___operand_0_T_6)
                                                                                 ? 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(1U)))
                                                                                 : 
                                                                                (0x20U 
                                                                                | (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                                                 : 0U) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule.__PVT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                (3U 
                                                                                & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_io_result_o 
                                                                                >> 0x1dU))
                                                                                 : 0U)))
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    __Vtemp_h41713db7__0[2U] = ((((9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                   ? ((0x200U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                       ? 0U : ((((1U 
                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_9_T_6)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                   : 
                                                  (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                  : 0U) 
                                                << 2U) 
                                               | ((1U 
                                                   & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_9.__PVT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  (3U 
                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_9_io_result_o 
                                                      >> 0x1dU))
                                                   : 0U)))
                                   : 0U) << 8U) | (
                                                   (8U 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                    ? 
                                                   ((0x100U 
                                                     & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                     ? 0U
                                                     : 
                                                    ((((1U 
                                                        & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       ((0x40000000U 
                                                         & vlSelf->QvuTop__DOT__decode__DOT___operand_8_T_6)
                                                         ? 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                            - (IData)(1U)))
                                                         : 
                                                        (0x20U 
                                                         | (0x1fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ 
                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((1U 
                                                         & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_8.__PVT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (3U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_8_io_result_o 
                                                            >> 0x1dU))
                                                         : 0U)))
                                                    : 0U));
    __Vtemp_h7461f36c__0[2U] = ((((0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                   ? ((0x800U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                       ? 0U : ((((1U 
                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_11_T_6)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                   : 
                                                  (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                  : 0U) 
                                                << 2U) 
                                               | ((1U 
                                                   & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_11.__PVT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  (3U 
                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_11_io_result_o 
                                                      >> 0x1dU))
                                                   : 0U)))
                                   : 0U) << 0x18U) 
                                | ((((0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                      ? ((0x400U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                          ? 0U : ((
                                                   ((1U 
                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->QvuTop__DOT__decode__DOT___operand_10_T_6)
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                         - (IData)(1U)))
                                                      : 
                                                     (0x20U 
                                                      | (0x1fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (~ 
                                                             vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                     : 0U) 
                                                   << 2U) 
                                                  | ((1U 
                                                      & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_10.__PVT__gen_lzc__DOT__sel_nodes)
                                                      ? 
                                                     (3U 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_10_io_result_o 
                                                         >> 0x1dU))
                                                      : 0U)))
                                      : 0U) << 0x10U) 
                                   | __Vtemp_h41713db7__0[2U]));
    __Vtemp_hcfb23d50__0[3U] = ((((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                   ? ((0x2000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                       ? 0U : ((((1U 
                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_13_T_6)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                   : 
                                                  (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                  : 0U) 
                                                << 2U) 
                                               | ((1U 
                                                   & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_13.__PVT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  (3U 
                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_13_io_result_o 
                                                      >> 0x1dU))
                                                   : 0U)))
                                   : 0U) << 8U) | (
                                                   (0xcU 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                    ? 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                                     ? 0U
                                                     : 
                                                    ((((1U 
                                                        & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes)
                                                        ? 
                                                       ((0x40000000U 
                                                         & vlSelf->QvuTop__DOT__decode__DOT___operand_12_T_6)
                                                         ? 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                            - (IData)(1U)))
                                                         : 
                                                        (0x20U 
                                                         | (0x1fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               (~ 
                                                                vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                        : 0U) 
                                                      << 2U) 
                                                     | ((1U 
                                                         & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_12.__PVT__gen_lzc__DOT__sel_nodes)
                                                         ? 
                                                        (3U 
                                                         & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_12_io_result_o 
                                                            >> 0x1dU))
                                                         : 0U)))
                                                    : 0U));
    __Vtemp_h9389f64c__0[3U] = ((((0U == (IData)(vlSelf->io_vector_size))
                                   ? ((0x8000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                       ? 0U : ((((1U 
                                                  & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->QvuTop__DOT__decode__DOT___operand_15_T_6)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                      - (IData)(1U)))
                                                   : 
                                                  (0x20U 
                                                   | (0x1fU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ 
                                                          vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                  : 0U) 
                                                << 2U) 
                                               | ((1U 
                                                   & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_15.__PVT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  (3U 
                                                   & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_15_io_result_o 
                                                      >> 0x1dU))
                                                   : 0U)))
                                   : 0U) << 0x18U) 
                                | ((((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                      ? ((0x4000U & (IData)(vlSelf->QvuTop__DOT__decode__DOT__isNaR))
                                          ? 0U : ((
                                                   ((1U 
                                                     & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->QvuTop__DOT__decode__DOT___operand_14_T_6)
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                         - (IData)(1U)))
                                                      : 
                                                     (0x20U 
                                                      | (0x1fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (~ 
                                                             vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__index_nodes[0U])))))
                                                     : 0U) 
                                                   << 2U) 
                                                  | ((1U 
                                                      & vlSymsp->TOP__QvuTop__DOT__decode__DOT__lzcModule_14.__PVT__gen_lzc__DOT__sel_nodes)
                                                      ? 
                                                     (3U 
                                                      & (vlSelf->QvuTop__DOT__decode__DOT___barrel_shifter_14_io_result_o 
                                                         >> 0x1dU))
                                                      : 0U)))
                                      : 0U) << 0x10U) 
                                   | __Vtemp_hcfb23d50__0[3U]));
    __Vtemp_h6771d296__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h433f84f8__0)
                                                           ? 0U
                                                           : 
                                                          ((0U 
                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))
                                                            ? 0x82U
                                                            : 
                                                           ((0xffU 
                                                             == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))
                                                             ? 0U
                                                             : 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0) 
                                                                - (IData)(0x7fU)))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h63b3fc32__0)
                                                              ? 0U
                                                              : 
                                                             ((0U 
                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))
                                                               ? 0x82U
                                                               : 
                                                              ((0xffU 
                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0) 
                                                                   - (IData)(0x7fU)))))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h5fdab54b__0)
                                                                 ? 0U
                                                                 : 
                                                                ((0U 
                                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))
                                                                  ? 0x82U
                                                                  : 
                                                                 ((0xffU 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))
                                                                   ? 0U
                                                                   : 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0) 
                                                                      - (IData)(0x7fU)))))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h738293b2__0)
                                                                    ? 0U
                                                                    : 
                                                                   ((0U 
                                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))
                                                                     ? 0x82U
                                                                     : 
                                                                    ((0xffU 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))
                                                                      ? 0U
                                                                      : 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0) 
                                                                         - (IData)(0x7fU)))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h5a247d4f__0)
                                                                       ? 0U
                                                                       : 
                                                                      ((0U 
                                                                        == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))
                                                                        ? 0x82U
                                                                        : 
                                                                       ((0xffU 
                                                                         == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))
                                                                         ? 0U
                                                                         : 
                                                                        (0xffU 
                                                                         & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0) 
                                                                            - (IData)(0x7fU)))))) 
                                                                     << 0x18U) 
                                                                    | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hef4171a5__0)
                                                                          ? 0U
                                                                          : 
                                                                         ((0U 
                                                                           == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))
                                                                           ? 0x82U
                                                                           : 
                                                                          ((0xffU 
                                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))
                                                                            ? 0U
                                                                            : 
                                                                           (0xffU 
                                                                            & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0) 
                                                                               - (IData)(0x7fU)))))) 
                                                                        << 0x10U) 
                                                                       | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h0037cc42__0)
                                                                             ? 0U
                                                                             : 
                                                                            ((0U 
                                                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))
                                                                              ? 0x82U
                                                                              : 
                                                                             ((0xffU 
                                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))
                                                                               ? 0U
                                                                               : 
                                                                              (0xffU 
                                                                               & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0) 
                                                                                - (IData)(0x7fU)))))) 
                                                                           << 8U) 
                                                                          | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h62563a14__0)
                                                                              ? 0U
                                                                              : 
                                                                             ((0U 
                                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))
                                                                               ? 0x82U
                                                                               : 
                                                                              ((0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))
                                                                                ? 0U
                                                                                : 
                                                                               (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0) 
                                                                                - (IData)(0x7fU))))))))))))))));
    __Vtemp_h6771d296__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h433f84f8__0)
                                                            ? 0U
                                                            : 
                                                           ((0U 
                                                             == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))
                                                             ? 0x82U
                                                             : 
                                                            ((0xffU 
                                                              == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0))
                                                              ? 0U
                                                              : 
                                                             (0xffU 
                                                              & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c8c6027__0) 
                                                                 - (IData)(0x7fU)))))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h63b3fc32__0)
                                                               ? 0U
                                                               : 
                                                              ((0U 
                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))
                                                                ? 0x82U
                                                                : 
                                                               ((0xffU 
                                                                 == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0))
                                                                 ? 0U
                                                                 : 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8c0d968d__0) 
                                                                    - (IData)(0x7fU)))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h5fdab54b__0)
                                                                  ? 0U
                                                                  : 
                                                                 ((0U 
                                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))
                                                                   ? 0x82U
                                                                   : 
                                                                  ((0xffU 
                                                                    == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0))
                                                                    ? 0U
                                                                    : 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b957352__0) 
                                                                       - (IData)(0x7fU)))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h738293b2__0)
                                                                     ? 0U
                                                                     : 
                                                                    ((0U 
                                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))
                                                                      ? 0x82U
                                                                      : 
                                                                     ((0xffU 
                                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0))
                                                                       ? 0U
                                                                       : 
                                                                      (0xffU 
                                                                       & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8b0ae1f8__0) 
                                                                          - (IData)(0x7fU)))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h5a247d4f__0)
                                                                        ? 0U
                                                                        : 
                                                                       ((0U 
                                                                         == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))
                                                                         ? 0x82U
                                                                         : 
                                                                        ((0xffU 
                                                                          == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0))
                                                                          ? 0U
                                                                          : 
                                                                         (0xffU 
                                                                          & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8aa26e89__0) 
                                                                             - (IData)(0x7fU)))))) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hef4171a5__0)
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))
                                                                            ? 0x82U
                                                                            : 
                                                                           ((0xffU 
                                                                             == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0))
                                                                             ? 0U
                                                                             : 
                                                                            (0xffU 
                                                                             & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8a58f023__0) 
                                                                                - (IData)(0x7fU)))))) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h0037cc42__0)
                                                                              ? 0U
                                                                              : 
                                                                             ((0U 
                                                                               == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))
                                                                               ? 0x82U
                                                                               : 
                                                                              ((0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0))
                                                                                ? 0U
                                                                                : 
                                                                               (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h89ab41bc__0) 
                                                                                - (IData)(0x7fU)))))) 
                                                                            << 8U) 
                                                                           | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h62563a14__0)
                                                                               ? 0U
                                                                               : 
                                                                              ((0U 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))
                                                                                ? 0x82U
                                                                                : 
                                                                               ((0xffU 
                                                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0))
                                                                                 ? 0U
                                                                                 : 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8929cb16__0) 
                                                                                - (IData)(0x7fU))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hcab21daa__0[2U] = ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hd84f4eef__0)
                                   ? 0U : ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0))
                                            ? 0x82U
                                            : ((0xffU 
                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0))
                                                ? 0U
                                                : (0xffU 
                                                   & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e96a8b5__0) 
                                                      - (IData)(0x7fU)))))) 
                                 << 0x18U) | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hdbc09056__0)
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))
                                                  ? 0x82U
                                                  : 
                                                 ((0xffU 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8e2c350f__0) 
                                                      - (IData)(0x7fU)))))) 
                                               << 0x10U) 
                                              | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h657998f6__0)
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0))
                                                     ? 0x82U
                                                     : 
                                                    ((0xffU 
                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0))
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_hf27fc7c0__0) 
                                                         - (IData)(0x7fU)))))) 
                                                  << 8U) 
                                                 | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h672aad8b__0)
                                                     ? 0U
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0))
                                                      ? 0x82U
                                                      : 
                                                     ((0xffU 
                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0))
                                                       ? 0U
                                                       : 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8d1d245a__0) 
                                                          - (IData)(0x7fU)))))))));
    __Vtemp_h2bf6ea75__0[3U] = ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h433f84f8__0)
                                   ? 0U : ((0U == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0))
                                            ? 0x82U
                                            : ((0xffU 
                                                == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0))
                                                ? 0U
                                                : (0xffU 
                                                   & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h90d0fe13__0) 
                                                      - (IData)(0x7fU)))))) 
                                 << 0x18U) | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h60d0e577__0)
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))
                                                  ? 0x82U
                                                  : 
                                                 ((0xffU 
                                                   == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h905e77b9__0) 
                                                      - (IData)(0x7fU)))))) 
                                               << 0x10U) 
                                              | ((((IData)(vlSelf->QvuTop__DOT____VdfgTmp_hd2b53c8a__0)
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0))
                                                     ? 0x82U
                                                     : 
                                                    ((0xffU 
                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0))
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f89e526__0) 
                                                         - (IData)(0x7fU)))))) 
                                                  << 8U) 
                                                 | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h3458467d__0)
                                                     ? 0U
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0))
                                                      ? 0x82U
                                                      : 
                                                     ((0xffU 
                                                       == (IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0))
                                                       ? 0U
                                                       : 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->QvuTop__DOT__floatDecode__DOT____VdfgTmp_h8f0f6e8c__0) 
                                                          - (IData)(0x7fU)))))))));
    if (vlSelf->io_Isposit) {
        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
            = __Vtemp_h92ab071e__0[0U];
        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
            = __Vtemp_h92ab071e__0[1U];
        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
            = __Vtemp_h7461f36c__0[2U];
        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
            = __Vtemp_h9389f64c__0[3U];
    } else {
        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
            = __Vtemp_h6771d296__0[0U];
        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
            = __Vtemp_h6771d296__0[1U];
        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
            = __Vtemp_hcab21daa__0[2U];
        vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
            = __Vtemp_h2bf6ea75__0[3U];
    }
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))
            ? (0x3fU & ((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))) 
                 & (((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                              << 0x18U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                >> 8U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                           << 0x18U) 
                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                             >> 8U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                    << 0x18U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                      >> 8U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                        << 0x18U) | 
                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                        >> 8U))) >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                              << 0x10U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                >> 0x10U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                           << 0x10U) 
                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                             >> 0x10U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                      >> 0x10U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                        << 0x10U) | 
                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                        >> 0x10U))) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                              << 8U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                >> 0x18U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                           << 8U) | 
                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                           >> 0x18U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                    << 8U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                      >> 0x18U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                        << 8U) | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                  >> 0x18U))) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))
            ? (0x3fU & ((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd2dd069b__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))) 
                 & (((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                              << 0x18U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                >> 8U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                           << 0x18U) 
                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                             >> 8U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h77c3957a__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                    << 0x18U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                      >> 8U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                        << 0x18U) | 
                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                        >> 8U))) >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                              << 0x10U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                >> 0x10U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                           << 0x10U) 
                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                             >> 0x10U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd904d1f8__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                      >> 0x10U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                        << 0x10U) | 
                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                        >> 0x10U))) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))
            ? (0x3fU & ((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hbd4f2c65__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))) 
                 & (((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                              << 0x18U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                >> 8U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                           << 0x18U) 
                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                             >> 8U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0e7de402__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                      >> 8U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                        << 0x18U) | 
                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                        >> 8U))) >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                              << 0x10U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                >> 0x10U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                           << 0x10U) 
                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                             >> 0x10U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h044c7ad5__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                      >> 0x10U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                        << 0x10U) | 
                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                        >> 0x10U))) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                              << 8U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                >> 0x18U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                           << 8U) | 
                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                           >> 0x18U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h215b4166__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                    << 8U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                      >> 0x18U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                        << 8U) | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                  >> 0x18U))) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))
            ? (0x3fU & ((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf8ca6894__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))) 
                 & (((IData)(0x1eU) - vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                              << 0x18U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                >> 8U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                           << 0x18U) 
                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                             >> 8U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h35962cb3__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                    << 0x18U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                      >> 8U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                        << 0x18U) | 
                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                        >> 8U))) >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                              << 0x10U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                >> 0x10U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                           << 0x10U) 
                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                             >> 0x10U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h460cb8e3__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                      >> 0x10U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                        << 0x10U) | 
                                       (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                        >> 0x10U))) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                              << 8U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                >> 0x18U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                           << 8U) | 
                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                           >> 0x18U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h80149b1c__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                    << 8U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                      >> 0x18U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                        << 8U) | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                  >> 0x18U))) 
                    >> 5U)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                              << 8U) 
                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                >> 0x18U)))))
            ? (0x3fU & ((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                           << 8U) | 
                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                           >> 0x18U))))
            : 0U);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h951889c8__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (
                                                   (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                    << 8U) 
                                                   | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                      >> 0x18U))))) 
                 & (((IData)(0x1eU) - ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                        << 8U) | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                  >> 0x18U))) 
                    >> 5U)));
    vlSelf->__VdfgTmp_h6b3a5eab__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                     >> 0x10U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                        >> 0x10U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                         >> 0x10U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                            << 0x10U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                              >> 0x10U)))))) 
                                                    << 0xaU) 
                                                   | ((0xeU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hf483a44e__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h55c635c7__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                   << 0x18U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                     >> 8U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                        >> 8U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                         >> 8U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                            << 0x18U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                              >> 8U)))))) 
                                                    << 0xaU) 
                                                   | ((0xdU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h82595622__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h3dfd7295__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))) 
                                                    << 0xaU) 
                                                   | ((0xcU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h28105e05__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h0609fa5a__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                     >> 0x18U)))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                            >> 0x18U)) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                     >> 0x18U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                      << 8U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                        >> 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                       << 8U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                         >> 0x18U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                            << 8U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                              >> 0x18U)))))) 
                                                    << 0xaU) 
                                                   | ((0xbU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_he5a8b1b2__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_hfbcbb255__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                     >> 0x10U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                        >> 0x10U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                         >> 0x10U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                            << 0x10U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                              >> 0x10U)))))) 
                                                    << 0xaU) 
                                                   | ((0xaU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h5acc59ba__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_hfbb06ac0__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                   << 0x18U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                     >> 8U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                        >> 8U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                         >> 8U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                            << 0x18U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                              >> 8U)))))) 
                                                    << 0xaU) 
                                                   | ((9U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hc1d7047f__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_hbc36f83b__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))) 
                                                    << 0xaU) 
                                                   | ((8U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h447ba768__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h3f6e3113__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                     >> 0x10U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                        >> 0x10U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                         >> 0x10U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                            << 0x10U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              >> 0x10U)))))) 
                                                    << 0xaU) 
                                                   | ((6U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h2a607f05__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h1fa020bc__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                   << 0x18U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                     >> 8U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                        >> 8U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                         >> 8U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                            << 0x18U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              >> 8U)))))) 
                                                    << 0xaU) 
                                                   | ((5U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h33db8eb5__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h29201396__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))) 
                                                    << 0xaU) 
                                                   | ((4U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hdbad544b__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h1e6be8f2__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                     >> 0x18U)))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                            >> 0x18U)) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                     >> 0x18U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                      << 8U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                        >> 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                       << 8U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                         >> 0x18U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                            << 8U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              >> 0x18U)))))) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h3aa8e614__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h15c5203c__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                     >> 0x10U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                        >> 0x10U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                         >> 0x10U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                            << 0x10U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              >> 0x10U)))))) 
                                                    << 0xaU) 
                                                   | ((2U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hc3fa4165__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_hd12e3618__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                   << 0x18U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                     >> 8U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                        >> 8U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                         >> 8U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                            << 0x18U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              >> 8U)))))) 
                                                    << 0xaU) 
                                                   | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h3180c58e__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h34744805__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                     >> 0x10U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                        >> 0x10U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                         >> 0x10U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                            << 0x10U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                              >> 0x10U)))))) 
                                                    << 3U) 
                                                   | ((0xeU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hf483a44e__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h4ecb4224__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                   << 0x18U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                     >> 8U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                        >> 8U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                         >> 8U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                            << 0x18U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                              >> 8U)))))) 
                                                    << 3U) 
                                                   | ((0xdU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h82595622__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_hd07f1d61__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))) 
                                                    << 3U) 
                                                   | ((0xcU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h28105e05__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h31cfcd1e__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                     >> 0x18U)))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                            >> 0x18U)) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                     >> 0x18U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                      << 8U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                        >> 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                       << 8U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                         >> 0x18U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                            << 8U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                              >> 0x18U)))))) 
                                                    << 3U) 
                                                   | ((0xbU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_he5a8b1b2__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_ha24b52a4__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                     >> 0x10U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                        >> 0x10U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                         >> 0x10U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                            << 0x10U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                              >> 0x10U)))))) 
                                                    << 3U) 
                                                   | ((0xaU 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h5acc59ba__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h90cf73ba__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                   << 0x18U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                     >> 8U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                        >> 8U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                         >> 8U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                            << 0x18U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                              >> 8U)))))) 
                                                    << 3U) 
                                                   | ((9U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hc1d7047f__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_hab31a8ed__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))) 
                                                    << 3U) 
                                                   | ((8U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h447ba768__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h66c1db1c__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                     >> 0x10U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                        >> 0x10U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                         >> 0x10U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                            << 0x10U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              >> 0x10U)))))) 
                                                    << 3U) 
                                                   | ((6U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h2a607f05__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_he5b81198__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                   << 0x18U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                     >> 8U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                        >> 8U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                         >> 8U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                            << 0x18U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              >> 8U)))))) 
                                                    << 3U) 
                                                   | ((5U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h33db8eb5__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h95bf39bd__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))) 
                                                    << 3U) 
                                                   | ((4U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hdbad544b__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h8a2eaf1f__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                     >> 0x18U)))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                            >> 0x18U)) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                     >> 0x18U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                      << 8U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                        >> 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                       << 8U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                         >> 0x18U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                            << 8U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              >> 0x18U)))))) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h3aa8e614__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h54d188b7__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                        >> 0x10U))))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                               >> 0x10U))) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                     >> 0x10U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                        >> 0x10U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                         >> 0x10U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                            << 0x10U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              >> 0x10U)))))) 
                                                    << 3U) 
                                                   | ((2U 
                                                       < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_hc3fa4165__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h45a06809__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (0xffU 
                                                     & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                        >> 8U))))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (0xffU 
                                                            & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                               >> 8U))) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                   << 0x18U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                     >> 8U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                      << 0x18U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                        >> 8U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                       << 0x18U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                         >> 8U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                            << 0x18U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              >> 8U)))))) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h3180c58e__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_hc6e18ff1__0 = ((0x8000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  << 0xfU)) 
                                      | (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0) 
                                          | VL_GTS_III(8, 0xf1U, 
                                                       (0xffU 
                                                        & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))
                                          ? 0U : ((
                                                   VL_LTS_III(8, 0x10U, 
                                                              (0xffU 
                                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])) 
                                                   | VL_LTS_III(8, 0x1eU, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))))
                                                   ? 0x7c00U
                                                   : 
                                                  (((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))) 
                                                    << 0xaU) 
                                                   | ((0U 
                                                       != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h93c7e7df__0 
                                                                  >> 0x17U)))
                                                       : 0U)))));
    vlSelf->__VdfgTmp_hece37c2e__0 = ((0x80U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 7U)) 
                                      | (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0) 
                                          | VL_GTS_III(8, 0xf9U, 
                                                       (0xffU 
                                                        & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))
                                          ? 0U : ((
                                                   VL_LTS_III(8, 8U, 
                                                              (0xffU 
                                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])) 
                                                   | VL_LTS_III(8, 0xeU, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))))
                                                   ? 0x78U
                                                   : 
                                                  (((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h93c7e7df__0 
                                                                  >> 0x1eU)))
                                                       : 0U)))));
    vlSelf->__VdfgTmp_hdaffa71e__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                     >> 0x18U)))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                            >> 0x18U)) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                     >> 0x18U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                      << 8U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                        >> 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                       << 8U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                         >> 0x18U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                            << 8U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                              >> 0x18U)))))) 
                                                    << 0xaU) 
                                                   | ((0U 
                                                       == (IData)(vlSelf->io_vector_size))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h5939b817__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h3f732c73__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0) 
                                       | VL_GTS_III(8, 0xf1U, 
                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                     >> 0x18U)))
                                       ? 0U : ((VL_LTS_III(8, 0x10U, 
                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                            >> 0x18U)) 
                                                | VL_LTS_III(8, 0x1eU, 
                                                             (0xffU 
                                                              & ((IData)(0xfU) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                     >> 0x18U))))))
                                                ? 0x7c00U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                        >> 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0x1eU, 
                                                                 (0xffU 
                                                                  & ((IData)(0xfU) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                       << 8U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                         >> 0x18U)))))
                                                       ? 0x1eU
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                            << 8U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              >> 0x18U)))))) 
                                                    << 0xaU) 
                                                   | ((0U 
                                                       == (IData)(vlSelf->io_vector_size))
                                                       ? 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h63efa7e5__0 
                                                                  >> 0x17U)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h03f676fd__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                     >> 0x18U)))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                            >> 0x18U)) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                     >> 0x18U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                      << 8U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                        >> 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                       << 8U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                         >> 0x18U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                            << 8U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                              >> 0x18U)))))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       == (IData)(vlSelf->io_vector_size))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h5939b817__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->__VdfgTmp_h47b9a3d0__0 = (((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0) 
                                       | VL_GTS_III(8, 0xf9U, 
                                                    (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                     >> 0x18U)))
                                       ? 0U : ((VL_LTS_III(8, 8U, 
                                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                            >> 0x18U)) 
                                                | VL_LTS_III(8, 0xeU, 
                                                             (0xffU 
                                                              & ((IData)(7U) 
                                                                 + 
                                                                 ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                   << 8U) 
                                                                  | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                     >> 0x18U))))))
                                                ? 0x78U
                                                : (
                                                   ((VL_GTS_III(8, 0U, 
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                      << 8U) 
                                                                     | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                        >> 0x18U)))))
                                                      ? 0U
                                                      : 
                                                     (VL_LTS_III(8, 0xeU, 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                       << 8U) 
                                                                      | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                         >> 0x18U)))))
                                                       ? 0xeU
                                                       : 
                                                      (0xfU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                            << 8U) 
                                                           | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              >> 0x18U)))))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       == (IData)(vlSelf->io_vector_size))
                                                       ? 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__VdfgTmp_h63efa7e5__0 
                                                                  >> 0x1eU)))
                                                       : 0U))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_14 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3016326__0)
            ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                            (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                             >> 0x18U))
                                  ? (VL_GTS_III(8, 9U, 
                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                 >> 0x18U))
                                      ? ((0x20U >= 
                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                           >> 0x18U))
                                          ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he40a7e5d__0)) 
                                             << (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                 >> 0x18U))
                                          : 0ULL) : 0x1ffffffffULL)
                                  : (QData)((IData)(
                                                    (VL_LTS_III(8, 0xdfU, 
                                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                 >> 0x18U))
                                                      ? 
                                                     ((0x18U 
                                                       >= 
                                                       (0xffU 
                                                        & (- 
                                                           ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                             << 8U) 
                                                            | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                               >> 0x18U)))))
                                                       ? 
                                                      (0x1ffffffU 
                                                       & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he40a7e5d__0 
                                                          >> 
                                                          (0xffU 
                                                           & (- 
                                                              ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                << 8U) 
                                                               | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                  >> 0x18U))))))
                                                       : 0U)
                                                      : 0U)))))
            : 0ULL);
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                          >> 8U))) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0) 
           | (VL_GTS_III(8, 1U, (0xffU & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8ec3__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                          >> 0x10U))) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0) 
           | (VL_GTS_III(8, 1U, (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                 >> 0x18U)) & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde54723b__0) 
           | (VL_GTS_III(8, 1U, (0xffU & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                          >> 8U))) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd80e3daa__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                          >> 0x10U))) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37932ea5__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0) 
           | (VL_GTS_III(8, 1U, (0xffU & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3b636de0__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                          >> 8U))) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3af5d97e__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210b92__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                          >> 0x10U))) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0) 
           | (VL_GTS_III(8, 1U, (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                 >> 0x18U)) & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd91def4b__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eb5f8__0) 
           | (VL_GTS_III(8, 1U, (0xffU & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                          >> 8U))) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h34eabf7b__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0) 
           | (VL_GTS_III(8, 1U, (0xffU & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                          >> 0x10U))) 
              & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3bf0dae__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0) 
           | (VL_GTS_III(8, 1U, (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                 >> 0x18U)) & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37f6fbe9__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45 
        = ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0) 
           | (VL_GTS_III(8, 1U, (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                 >> 0x18U)) & (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3016326__0)));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0)
            ? (- (IData)((1U & (IData)(vlSelf->QvuTop__DOT___GEN_7))))
            : ((0x1fU >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal))
                ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a6fc__0 
                    << 4U) >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal))
                : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_1 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 1U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf2b43__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_2 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 2U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8805__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_3 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 3U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61bde__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_4 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd2dd069b__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 4U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde5471e5__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_5 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h77c3957a__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 5U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded989a1__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_6 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd904d1f8__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 6U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc34698b0__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_8 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hbd4f2c65__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 8U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036deeb__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_9 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0e7de402__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 9U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02867__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_10 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h044c7ad5__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 0xaU)))) : ((0x1fU 
                                                >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10))
                                                ? (
                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210c4c__0 
                                                    << 4U) 
                                                   >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10))
                                                : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_11 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h215b4166__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 0xbU)))) : ((0x1fU 
                                                >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11))
                                                ? (
                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85dc2__0 
                                                    << 4U) 
                                                   >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11))
                                                : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_12 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf8ca6894__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 0xcU)))) : ((0x1fU 
                                                >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12))
                                                ? (
                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eba09__0 
                                                    << 4U) 
                                                   >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12))
                                                : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_13 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h35962cb3__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 0xdU)))) : ((0x1fU 
                                                >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13))
                                                ? (
                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0e7e__0 
                                                    << 4U) 
                                                   >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13))
                                                : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_14 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h460cb8e3__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 0xeU)))) : ((0x1fU 
                                                >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14))
                                                ? (
                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7da4__0 
                                                    << 4U) 
                                                   >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14))
                                                : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_7 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h80149b1c__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 7U)))) : ((0x1fU 
                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7))
                                              ? ((vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14e76__0 
                                                  << 4U) 
                                                 >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7))
                                              : 0U));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_15 
        = ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h951889c8__0)
            ? (- (IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                >> 0xfU)))) : ((0x1fU 
                                                >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15))
                                                ? (
                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d037__0 
                                                    << 4U) 
                                                   >> (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15))
                                                : 0U));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o[0U] 
        = (IData)((((QData)((IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                           >> 3U)))) 
                    << 0x3fU) | (((QData)((IData)(vlSelf->__VdfgTmp_h1e6be8f2__0)) 
                                  << 0x30U) | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                    >> 2U)))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(vlSelf->__VdfgTmp_h15c5203c__0)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0x80000000U 
                                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                         << 0x1eU)) 
                                                                     | (((IData)(vlSelf->__VdfgTmp_hd12e3618__0) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlSelf->__VdfgTmp_hc6e18ff1__0))))))))));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o[1U] 
        = (IData)(((((QData)((IData)((1U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                            >> 3U)))) 
                     << 0x3fU) | (((QData)((IData)(vlSelf->__VdfgTmp_h1e6be8f2__0)) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                     >> 2U)))) 
                                                 << 0x2fU) 
                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h15c5203c__0)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x80000000U 
                                                                       & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                          << 0x1eU)) 
                                                                      | (((IData)(vlSelf->__VdfgTmp_hd12e3618__0) 
                                                                          << 0x10U) 
                                                                         | (IData)(vlSelf->__VdfgTmp_hc6e18ff1__0))))))))) 
                   >> 0x20U));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o[2U] 
        = ((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                           << 0x1aU)) | (((IData)(vlSelf->__VdfgTmp_h1fa020bc__0) 
                                          << 0x10U) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 0xbU)) 
                                            | (IData)(vlSelf->__VdfgTmp_h29201396__0))));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o[3U] 
        = ((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                           << 0x18U)) | (((IData)(vlSelf->__VdfgTmp_h3f732c73__0) 
                                          << 0x10U) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 9U)) 
                                            | (IData)(vlSelf->__VdfgTmp_h3f6e3113__0))));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o[4U] 
        = ((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                           << 0x16U)) | (((IData)(vlSelf->__VdfgTmp_hfbb06ac0__0) 
                                          << 0x10U) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 7U)) 
                                            | (IData)(vlSelf->__VdfgTmp_hbc36f83b__0))));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o[5U] 
        = ((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                           << 0x14U)) | (((IData)(vlSelf->__VdfgTmp_h0609fa5a__0) 
                                          << 0x10U) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 5U)) 
                                            | (IData)(vlSelf->__VdfgTmp_hfbcbb255__0))));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o[6U] 
        = ((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                           << 0x12U)) | (((IData)(vlSelf->__VdfgTmp_h55c635c7__0) 
                                          << 0x10U) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 3U)) 
                                            | (IData)(vlSelf->__VdfgTmp_h3dfd7295__0))));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP16__io_fp16_o[7U] 
        = ((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                           << 0x10U)) | (((IData)(vlSelf->__VdfgTmp_hdaffa71e__0) 
                                          << 0x10U) 
                                         | ((0x8000U 
                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 1U)) 
                                            | (IData)(vlSelf->__VdfgTmp_h6b3a5eab__0))));
    __Vtemp_h43b61f92__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                             >> 7U)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_h47b9a3d0__0)) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                   >> 6U)))) 
                                               << 0x37U) 
                                              | (((QData)((IData)(vlSelf->__VdfgTmp_h66c1db1c__0)) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                         >> 5U)))) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(vlSelf->__VdfgTmp_he5b81198__0)) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                               >> 4U)))) 
                                                           << 0x27U) 
                                                          | (((QData)((IData)(vlSelf->__VdfgTmp_h95bf39bd__0)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x80000000U 
                                                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h8a2eaf1f__0) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h54d188b7__0) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h45a06809__0) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hece37c2e__0))))))))))))))))));
    __Vtemp_h43b61f92__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                              >> 7U)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->__VdfgTmp_h47b9a3d0__0)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                    >> 6U)))) 
                                                << 0x37U) 
                                               | (((QData)((IData)(vlSelf->__VdfgTmp_h66c1db1c__0)) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                          >> 5U)))) 
                                                      << 0x2fU) 
                                                     | (((QData)((IData)(vlSelf->__VdfgTmp_he5b81198__0)) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                                >> 4U)))) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(vlSelf->__VdfgTmp_h95bf39bd__0)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h8a2eaf1f__0) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h54d188b7__0) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h45a06809__0) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hece37c2e__0))))))))))))))))) 
                                        >> 0x20U));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP8__io_fp8_o[0U] 
        = __Vtemp_h43b61f92__0[0U];
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP8__io_fp8_o[1U] 
        = __Vtemp_h43b61f92__0[1U];
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP8__io_fp8_o[2U] 
        = ((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                           << 0x14U)) | (((IData)(vlSelf->__VdfgTmp_h31cfcd1e__0) 
                                          << 0x18U) 
                                         | ((0x800000U 
                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 0xdU)) 
                                            | (((IData)(vlSelf->__VdfgTmp_ha24b52a4__0) 
                                                << 0x10U) 
                                               | ((0x8000U 
                                                   & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                      << 6U)) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h90cf73ba__0) 
                                                      << 8U) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                            >> 1U)) 
                                                        | (IData)(vlSelf->__VdfgTmp_hab31a8ed__0))))))));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP8__io_fp8_o[3U] 
        = ((0x80000000U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                           << 0x10U)) | (((IData)(vlSelf->__VdfgTmp_h03f676fd__0) 
                                          << 0x18U) 
                                         | ((0x800000U 
                                             & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->__VdfgTmp_h34744805__0) 
                                                << 0x10U) 
                                               | ((0x8000U 
                                                   & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h4ecb4224__0) 
                                                      << 8U) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                            >> 5U)) 
                                                        | (IData)(vlSelf->__VdfgTmp_hd07f1d61__0))))))));
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_14 
                             - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0)
                                                    ? 
                                                   (0x1ffffffffULL 
                                                    & (VL_LTS_III(8, 0xffU, 
                                                                  (0xffU 
                                                                   & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))
                                                        ? 
                                                       (VL_GTS_III(8, 9U, 
                                                                   (0xffU 
                                                                    & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))
                                                         ? 
                                                        ((0x20U 
                                                          >= 
                                                          (0xffU 
                                                           & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))
                                                          ? 
                                                         ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc3001b5__0)) 
                                                          << 
                                                          (0xffU 
                                                           & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))
                                                          : 0ULL)
                                                         : 0x1ffffffffULL)
                                                        : (QData)((IData)(
                                                                          (VL_LTS_III(8, 0xdfU, 
                                                                                (0xffU 
                                                                                & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))
                                                                            ? 
                                                                           ((0x18U 
                                                                             >= 
                                                                             (0xffU 
                                                                              & (- 
                                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U])))
                                                                             ? 
                                                                            (0x1ffffffU 
                                                                             & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc3001b5__0 
                                                                                >> 
                                                                                (0xffU 
                                                                                & (- 
                                                                                vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U]))))
                                                                             : 0U)
                                                                            : 0U)))))
                                                    : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_13 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3bf0dae__0)
            ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                            (0xffU 
                                             & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                >> 0x10U)))
                                  ? (VL_GTS_III(8, 9U, 
                                                (0xffU 
                                                 & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                    >> 0x10U)))
                                      ? ((0x20U >= 
                                          (0xffU & 
                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                            >> 0x10U)))
                                          ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he78bd7e7__0)) 
                                             << (0xffU 
                                                 & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                    >> 0x10U)))
                                          : 0ULL) : 0x1ffffffffULL)
                                  : (QData)((IData)(
                                                    (VL_LTS_III(8, 0xdfU, 
                                                                (0xffU 
                                                                 & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                    >> 0x10U)))
                                                      ? 
                                                     ((0x18U 
                                                       >= 
                                                       (0xffU 
                                                        & (- 
                                                           ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                             << 0x10U) 
                                                            | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                               >> 0x10U)))))
                                                       ? 
                                                      (0x1ffffffU 
                                                       & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_he78bd7e7__0 
                                                          >> 
                                                          (0xffU 
                                                           & (- 
                                                              ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                << 0x10U) 
                                                               | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                  >> 0x10U))))))
                                                       : 0U)
                                                      : 0U)))))
            : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_13 
                             - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_12 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h34eabf7b__0)
            ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                            (0xffU 
                                             & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                >> 8U)))
                                  ? (VL_GTS_III(8, 9U, 
                                                (0xffU 
                                                 & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                    >> 8U)))
                                      ? ((0x20U >= 
                                          (0xffU & 
                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                            >> 8U)))
                                          ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc29e61ec__0)) 
                                             << (0xffU 
                                                 & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                    >> 8U)))
                                          : 0ULL) : 0x1ffffffffULL)
                                  : (QData)((IData)(
                                                    (VL_LTS_III(8, 0xdfU, 
                                                                (0xffU 
                                                                 & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                    >> 8U)))
                                                      ? 
                                                     ((0x18U 
                                                       >= 
                                                       (0xffU 
                                                        & (- 
                                                           ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                             << 0x18U) 
                                                            | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                               >> 8U)))))
                                                       ? 
                                                      (0x1ffffffU 
                                                       & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc29e61ec__0 
                                                          >> 
                                                          (0xffU 
                                                           & (- 
                                                              ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                << 0x18U) 
                                                               | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U] 
                                                                  >> 8U))))))
                                                       : 0U)
                                                      : 0U)))))
            : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_12 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_11 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0)
            ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                            (0xffU 
                                             & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))
                                  ? (VL_GTS_III(8, 9U, 
                                                (0xffU 
                                                 & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))
                                      ? ((0x20U >= 
                                          (0xffU & 
                                           vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))
                                          ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc2281910__0)) 
                                             << (0xffU 
                                                 & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))
                                          : 0ULL) : 0x1ffffffffULL)
                                  : (QData)((IData)(
                                                    (VL_LTS_III(8, 0xdfU, 
                                                                (0xffU 
                                                                 & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))
                                                      ? 
                                                     ((0x18U 
                                                       >= 
                                                       (0xffU 
                                                        & (- 
                                                           vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U])))
                                                       ? 
                                                      (0x1ffffffU 
                                                       & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc2281910__0 
                                                          >> 
                                                          (0xffU 
                                                           & (- 
                                                              vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[3U]))))
                                                       : 0U)
                                                      : 0U)))))
            : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_11 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_10 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd91def4b__0)
            ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                            (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                             >> 0x18U))
                                  ? (VL_GTS_III(8, 9U, 
                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                 >> 0x18U))
                                      ? ((0x20U >= 
                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                           >> 0x18U))
                                          ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hddabf1ae__0)) 
                                             << (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                 >> 0x18U))
                                          : 0ULL) : 0x1ffffffffULL)
                                  : (QData)((IData)(
                                                    (VL_LTS_III(8, 0xdfU, 
                                                                (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                 >> 0x18U))
                                                      ? 
                                                     ((0x18U 
                                                       >= 
                                                       (0xffU 
                                                        & (- 
                                                           ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                             << 8U) 
                                                            | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                               >> 0x18U)))))
                                                       ? 
                                                      (0x1ffffffU 
                                                       & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hddabf1ae__0 
                                                          >> 
                                                          (0xffU 
                                                           & (- 
                                                              ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                << 8U) 
                                                               | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                  >> 0x18U))))))
                                                       : 0U)
                                                      : 0U)))))
            : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_10 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_9 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (0xffU & 
                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                            >> 0x10U)))
                                ? (VL_GTS_III(8, 9U, 
                                              (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                  >> 0x10U)))
                                    ? ((0x20U >= (0xffU 
                                                  & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                     >> 0x10U)))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd270b9c__0)) 
                                           << (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                  >> 0x10U)))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (0xffU 
                                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                  >> 0x10U)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                           << 0x10U) 
                                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                             >> 0x10U)))))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd270b9c__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                              << 0x10U) 
                                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                >> 0x10U))))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_9 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_8 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3af5d97e__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (0xffU & 
                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                            >> 8U)))
                                ? (VL_GTS_III(8, 9U, 
                                              (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                  >> 8U)))
                                    ? ((0x20U >= (0xffU 
                                                  & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                     >> 8U)))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc08300e3__0)) 
                                           << (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                  >> 8U)))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (0xffU 
                                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                  >> 8U)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                           << 0x18U) 
                                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                             >> 8U)))))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc08300e3__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                              << 0x18U) 
                                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U] 
                                                                >> 8U))))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_8 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_7 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3b636de0__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (0xffU & 
                                           vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))
                                ? (VL_GTS_III(8, 9U, 
                                              (0xffU 
                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))
                                    ? ((0x20U >= (0xffU 
                                                  & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc017bafb__0)) 
                                           << (0xffU 
                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (0xffU 
                                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U])))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc017bafb__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[2U]))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_7 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_5 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37932ea5__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (0xffU & 
                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                            >> 0x10U)))
                                ? (VL_GTS_III(8, 9U, 
                                              (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                  >> 0x10U)))
                                    ? ((0x20U >= (0xffU 
                                                  & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                     >> 0x10U)))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc326fab3__0)) 
                                           << (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                  >> 0x10U)))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (0xffU 
                                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                  >> 0x10U)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                           << 0x10U) 
                                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                             >> 0x10U)))))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc326fab3__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              << 0x10U) 
                                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                >> 0x10U))))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_5 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_4 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd80e3daa__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (0xffU & 
                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                            >> 8U)))
                                ? (VL_GTS_III(8, 9U, 
                                              (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                  >> 8U)))
                                    ? ((0x20U >= (0xffU 
                                                  & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                     >> 8U)))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdeb92de4__0)) 
                                           << (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                  >> 8U)))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (0xffU 
                                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                  >> 8U)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                           << 0x18U) 
                                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                             >> 8U)))))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdeb92de4__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              << 0x18U) 
                                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                >> 8U))))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_4 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_3 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (0xffU & 
                                           vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))
                                ? (VL_GTS_III(8, 9U, 
                                              (0xffU 
                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))
                                    ? ((0x20U >= (0xffU 
                                                  & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde2b96ae__0)) 
                                           << (0xffU 
                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (0xffU 
                                                               & vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U])))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde2b96ae__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U]))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_3 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_2 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                           >> 0x18U))
                                ? (VL_GTS_III(8, 9U, 
                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                               >> 0x18U))
                                    ? ((0x20U >= (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                  >> 0x18U))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd9b73fc0__0)) 
                                           << (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                               >> 0x18U))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                               >> 0x18U))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                           << 8U) 
                                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                             >> 0x18U)))))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd9b73fc0__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              << 8U) 
                                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                >> 0x18U))))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_2 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_1 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (0xffU & 
                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                            >> 0x10U)))
                                ? (VL_GTS_III(8, 9U, 
                                              (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                  >> 0x10U)))
                                    ? ((0x20U >= (0xffU 
                                                  & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                     >> 0x10U)))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd93d690c__0)) 
                                           << (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                  >> 0x10U)))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (0xffU 
                                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                  >> 0x10U)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                           << 0x10U) 
                                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                             >> 0x10U)))))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd93d690c__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              << 0x10U) 
                                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                >> 0x10U))))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_1 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_0 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (0xffU & 
                                           (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                            >> 8U)))
                                ? (VL_GTS_III(8, 9U, 
                                              (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                  >> 8U)))
                                    ? ((0x20U >= (0xffU 
                                                  & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                     >> 8U)))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc8dcd07__0)) 
                                           << (0xffU 
                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                  >> 8U)))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (0xffU 
                                                               & (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                  >> 8U)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                           << 0x18U) 
                                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                             >> 8U)))))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdc8dcd07__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                              << 0x18U) 
                                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[0U] 
                                                                >> 8U))))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_0 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_6 = 
        ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37f6fbe9__0)
          ? (0x1ffffffffULL & (VL_LTS_III(8, 0xffU, 
                                          (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                           >> 0x18U))
                                ? (VL_GTS_III(8, 9U, 
                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                               >> 0x18U))
                                    ? ((0x20U >= (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                  >> 0x18U))
                                        ? ((QData)((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc380ef73__0)) 
                                           << (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                               >> 0x18U))
                                        : 0ULL) : 0x1ffffffffULL)
                                : (QData)((IData)((
                                                   VL_LTS_III(8, 0xdfU, 
                                                              (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                               >> 0x18U))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (0xffU 
                                                      & (- 
                                                         ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                           << 8U) 
                                                          | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                             >> 0x18U)))))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hc380ef73__0 
                                                        >> 
                                                        (0xffU 
                                                         & (- 
                                                            ((vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                              << 8U) 
                                                             | (vlSelf->QvuTop__DOT____Vcellinp__quantizeInt8__io_pir_exp_i[1U] 
                                                                >> 0x18U))))))
                                                     : 0U)
                                                    : 0U)))))
          : 0ULL);
    QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53 = 
        (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeFP4__DOT___GEN_6 
                           - vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalMin));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T = 
        (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac 
                         >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac 
                                         & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0)
                                              ? ((0U 
                                                  != (IData)(vlSelf->QvuTop__DOT___GEN_0)) 
                                                 & (0U 
                                                    != 
                                                    (0xfffffffU 
                                                     & (IData)(vlSelf->__VdfgTmp_h93c7e7df__0))))
                                              : ((0U 
                                                  != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal)) 
                                                 & ((~ 
                                                     ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf936d8b2__0) 
                                                      | (0U 
                                                         == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal)))) 
                                                    & (0U 
                                                       != 
                                                       (((((0x1fU 
                                                            >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal))
                                                            ? 
                                                           ((IData)(1U) 
                                                            << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal))
                                                            : 0U) 
                                                          - (IData)(1U)) 
                                                         >> 4U) 
                                                        & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a6fc__0))))) 
                                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac 
                                               >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_1 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_1 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_1 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0)
                                                ? ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h3180c58e__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd092db84__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_1))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf2b43__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_1 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_2 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_2 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_2 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0)
                                                ? (
                                                   (2U 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_hc3fa4165__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h75cc7c16__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_2))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd95c8805__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_2 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_3 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_3 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_3 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0)
                                                ? ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h3aa8e614__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hebc2a567__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_3))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61bde__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_3 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_4 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_4 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_4 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd2dd069b__0)
                                                ? (
                                                   (4U 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_hdbad544b__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd2dd069b__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_4))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hde5471e5__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_4 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_5 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_5 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_5 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h77c3957a__0)
                                                ? (
                                                   (5U 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h33db8eb5__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h77c3957a__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_5))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded989a1__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_5 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_6 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_6 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_6 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd904d1f8__0)
                                                ? (
                                                   (6U 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h2a607f05__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd904d1f8__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_6))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc34698b0__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_6 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_8 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_8 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_8 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hbd4f2c65__0)
                                                ? (
                                                   (8U 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h447ba768__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hbd4f2c65__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_8))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036deeb__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_8 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_9 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_9 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_9 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0e7de402__0)
                                                ? (
                                                   (9U 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_hc1d7047f__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0e7de402__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_9))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02867__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_9 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_10 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_10 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_10 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h044c7ad5__0)
                                                ? (
                                                   (0xaU 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h5acc59ba__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h044c7ad5__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_10))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdd210c4c__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_10 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_11 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_11 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_11 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h215b4166__0)
                                                ? (
                                                   (0xbU 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_he5a8b1b2__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h215b4166__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_11))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85dc2__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_11 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_12 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_12 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_12 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf8ca6894__0)
                                                ? (
                                                   (0xcU 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h28105e05__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf8ca6894__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_12))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc24eba09__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_12 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_13 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_13 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_13 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h35962cb3__0)
                                                ? (
                                                   (0xdU 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h82595622__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h35962cb3__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_13))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0e7e__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_13 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_14 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_14 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_14 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h460cb8e3__0)
                                                ? (
                                                   (0xeU 
                                                    < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_hf483a44e__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h460cb8e3__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_14))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7da4__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_14 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_7 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_7 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_7 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h80149b1c__0)
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->io_vector_size)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h63efa7e5__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h80149b1c__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_7))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14e76__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_7 
                                                 >> 1U))))));
    QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_15 
        = (0x7fffffffU & ((vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_15 
                           >> 1U) + (1U & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_15 
                                           & (((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h951889c8__0)
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->io_vector_size)) 
                                                   & (0U 
                                                      != 
                                                      (0xfffffffU 
                                                       & (IData)(vlSelf->__VdfgTmp_h5939b817__0))))
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15)) 
                                                   & ((~ 
                                                       ((IData)(QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h951889c8__0) 
                                                        | (0U 
                                                           == (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15)))) 
                                                      & (0U 
                                                         != 
                                                         (((((0x1fU 
                                                              >= (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15))
                                                              ? 
                                                             ((IData)(1U) 
                                                              << (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftVal_15))
                                                              : 0U) 
                                                            - (IData)(1U)) 
                                                           >> 4U) 
                                                          & vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d037__0))))) 
                                              | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__shiftedFrac_15 
                                                 >> 1U))))));
    if ((0U != (IData)((vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale 
                        >> 1U)))) {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7 
            = (0x1ffffffffULL & VL_DIV_QQQ(33, QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53, vlSelf->QvuTop__DOT__quantizeFP4__DOT__globalScale));
    } else {
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_109);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_4);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_102);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_95);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_88);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_81);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_74);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_67);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_60);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_46);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_39);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_32);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_25);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_18);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_11);
        vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7 
            = (0x1ffffffffULL & QvuTop__DOT__quantizeFP4__DOT___valueAbs_T_53);
    }
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)
            ? 0ULL : ((1U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)
            ? 0ULL : ((2U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_1)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_1))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_1 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_1)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)
            ? 0ULL : ((4U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_2)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_2))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_2 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_2)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)
            ? 0ULL : ((8U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_3)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_3))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_3 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_3)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)
            ? 0ULL : ((0x10U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_4)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_4))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_4 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_4)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)
            ? 0ULL : ((0x20U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_5)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_5))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_5 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_5)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)
            ? 0ULL : ((0x40U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_6)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_6))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_6 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_6)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)
            ? 0ULL : ((0x100U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_8)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_8))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_8 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_8)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)
            ? 0ULL : ((0x200U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_9)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_9))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_9 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_9)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)
            ? 0ULL : ((0x400U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_10)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_10))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_10 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_10)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)
            ? 0ULL : ((0x800U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_11)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_11))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_11 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_11)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)
            ? 0ULL : ((0x1000U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_12)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_12))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_12 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_12)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)
            ? 0ULL : ((0x2000U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_13)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_13))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_13 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_13)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)
            ? 0ULL : ((0x4000U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_14)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_14))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_14 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_14)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)
            ? 0ULL : ((0x80U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_7)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_7))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_7 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_7)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46 
        = ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)
            ? 0ULL : ((0x8000U & (IData)(vlSelf->QvuTop__DOT___GEN_7))
                       ? (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (((IData)(1U) 
                                                                 + 
                                                                 (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_15)) 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(
                                                       (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_15))))))
                       : (((QData)((IData)((3U & (- (IData)(
                                                            (1U 
                                                             & (QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_15 
                                                                >> 0x1eU))))))) 
                           << 0x1fU) | (QData)((IData)(QvuTop__DOT__quantizeInt4__DOT___roundedInt_T_15)))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15 
                                                                >> 0x15U))))))))));
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h266d6a75__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdbc354e5__0)
                               ? ((((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                    & ((0x27fffffULL 
                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                       | ((0x1bfffffULL 
                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                          | ((0x13fffffULL 
                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                             | ((0xdfffffULL 
                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                | ((0x9fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs) 
                                                   | (IData)(
                                                             ((0ULL 
                                                               != 
                                                               (0x1ffe00000ULL 
                                                                & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)) 
                                                              | (0x5fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs))))))))) 
                                   << 3U) | ((0x27fffffULL 
                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs)
                                              ? 7U : 
                                             ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h57d15536__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3bf0dae__0)
                               ? ((0x1ffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                 >> 0xbU) 
                                                & (((0x27fffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                    | ((0x1bfffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                       | ((0x13fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                          | ((0xdfffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                             | ((0x9fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14) 
                                                                | (IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x1ffe00000ULL 
                                                                             & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)) 
                                                                           | (0x5fffffULL 
                                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)))))))) 
                                                   << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_14)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_14)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h820a2292__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h34eabf7b__0)
                               ? ((0x3ffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                 >> 0xaU) 
                                                & (((0x27fffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                    | ((0x1bfffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                       | ((0x13fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                          | ((0xdfffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                             | ((0x9fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13) 
                                                                | (IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x1ffe00000ULL 
                                                                             & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)) 
                                                                           | (0x5fffffULL 
                                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)))))))) 
                                                   << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_13)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_13)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h685a7541__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0)
                               ? ((0x7ffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                 >> 9U) 
                                                & (((0x27fffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                    | ((0x1bfffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                       | ((0x13fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                          | ((0xdfffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                             | ((0x9fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12) 
                                                                | (IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x1ffe00000ULL 
                                                                             & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)) 
                                                                           | (0x5fffffULL 
                                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)))))))) 
                                                   << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_12)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_12)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11 
                                                                >> 0x15U))))))))));
    __VdfgTmp_hfc4e52b7__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd91def4b__0)
                               ? ((0xfffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                 >> 8U) 
                                                & (((0x27fffffULL 
                                                     < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                    | ((0x1bfffffULL 
                                                        < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                       | ((0x13fffffULL 
                                                           < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                          | ((0xdfffffULL 
                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                             | ((0x9fffffULL 
                                                                 < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11) 
                                                                | (IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x1ffe00000ULL 
                                                                             & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)) 
                                                                           | (0x5fffffULL 
                                                                              < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)))))))) 
                                                   << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_11)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_11)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h8faaaf4d__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0)
                               ? ((0x1fffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  >> 7U) 
                                                 & (((0x27fffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                     | ((0x1bfffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                        | ((0x13fffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                           | ((0xdfffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                              | ((0x9fffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10) 
                                                                 | (IData)(
                                                                           ((0ULL 
                                                                             != 
                                                                             (0x1ffe00000ULL 
                                                                              & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)) 
                                                                            | (0x5fffffULL 
                                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)))))))) 
                                                    << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_10)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_10)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9 
                                                                >> 0x15U))))))))));
    __VdfgTmp_hef50fc5e__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3af5d97e__0)
                               ? ((0x3fffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  >> 6U) 
                                                 & (((0x27fffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                     | ((0x1bfffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                        | ((0x13fffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                           | ((0xdfffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                              | ((0x9fffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9) 
                                                                 | (IData)(
                                                                           ((0ULL 
                                                                             != 
                                                                             (0x1ffe00000ULL 
                                                                              & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)) 
                                                                            | (0x5fffffULL 
                                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)))))))) 
                                                    << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_9)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_9)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h4164099a__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h3b636de0__0)
                               ? ((0x7fffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  >> 5U) 
                                                 & (((0x27fffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                     | ((0x1bfffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                        | ((0x13fffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                           | ((0xdfffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                              | ((0x9fffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8) 
                                                                 | (IData)(
                                                                           ((0ULL 
                                                                             != 
                                                                             (0x1ffe00000ULL 
                                                                              & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)) 
                                                                            | (0x5fffffULL 
                                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)))))))) 
                                                    << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_8)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_8)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h8555aa89__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37932ea5__0)
                               ? ((0x1ffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   >> 3U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_6)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_6)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h14aa63ed__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd80e3daa__0)
                               ? ((0x3ffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   >> 2U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_5)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_5)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h8a7e261f__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0)
                               ? ((0x7ffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   >> 1U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_4)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_4)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3 
                                                                >> 0x15U))))))))));
    __VdfgTmp_hc3f1f329__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd03ac44__0)
                               ? ((0xfffffff8U & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_3)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_3)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2 
                                                                >> 0x15U))))))))));
    __VdfgTmp_h4cc533e1__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0)
                               ? ((0xfffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   << 1U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_2)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_2)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1 
                                                                >> 0x15U))))))))));
    __VdfgTmp_haf5bb8dc__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdee4f6f7__0)
                               ? ((0xfffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                   << 2U) 
                                                  & (((0x27fffffULL 
                                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                      | ((0x1bfffffULL 
                                                          < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                         | ((0x13fffffULL 
                                                             < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                            | ((0xdfffffULL 
                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                               | ((0x9fffffULL 
                                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1) 
                                                                  | (IData)(
                                                                            ((0ULL 
                                                                              != 
                                                                              (0x1ffe00000ULL 
                                                                               & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)) 
                                                                             | (0x5fffffULL 
                                                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)))))))) 
                                                     << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_1)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_1)))))))))
                               : 0U);
    vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7 
        = ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
            ? 7U : ((0x1bfffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                     ? 6U : ((0x13fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                              ? 5U : ((0xdfffffULL 
                                       < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                                       ? 4U : ((0x9fffffULL 
                                                < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                                                ? 3U
                                                : (
                                                   (0x5fffffULL 
                                                    < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                                                    ? 2U
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7 
                                                                >> 0x15U))))))))));
    __VdfgTmp_hbbc8c52e__0 = ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h37f6fbe9__0)
                               ? ((0xffffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                  >> 4U) 
                                                 & (((0x27fffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                     | ((0x1bfffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                        | ((0x13fffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                           | ((0xdfffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                              | ((0x9fffffULL 
                                                                  < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7) 
                                                                 | (IData)(
                                                                           ((0ULL 
                                                                             != 
                                                                             (0x1ffe00000ULL 
                                                                              & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)) 
                                                                            | (0x5fffffULL 
                                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)))))))) 
                                                    << 3U))) 
                                  | ((0x27fffffULL 
                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_7)
                                      ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                               ? 6U
                                               : ((5U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7))
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_7)))))))))
                               : 0U);
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_1 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_4 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_7 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_10 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_13 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_16 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_19 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_25 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_28 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_31 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_34 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_37 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_40 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_43 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_22 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_46 
                             - vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalOffset));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, (0x1ffffffffULL 
                                                & (VL_GTS_IQQ(33, 0ULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30)
                                                    ? 
                                                   (- QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30)
                                                    : QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30)), vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30), vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_48));
    vlSelf->QvuTop__DOT____Vcellout__quantizeFP4__io_fp4_o 
        = (((QData)((IData)(((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd3016326__0)
                              ? ((0xffff8U & (((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                               >> 0xcU) 
                                              & (((0x27fffffULL 
                                                   < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                  | ((0x1bfffffULL 
                                                      < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                     | ((0x13fffffULL 
                                                         < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                        | ((0xdfffffULL 
                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                           | ((0x9fffffULL 
                                                               < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15) 
                                                              | (IData)(
                                                                        ((0ULL 
                                                                          != 
                                                                          (0x1ffe00000ULL 
                                                                           & vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)) 
                                                                         | (0x5fffffULL 
                                                                            < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)))))))) 
                                                 << 3U))) 
                                 | ((0x27fffffULL < vlSelf->QvuTop__DOT__quantizeFP4__DOT__valueAbs_15)
                                     ? 7U : ((6U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                              ? 6U : 
                                             ((5U == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                               ? 5U
                                               : ((4U 
                                                   == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15))
                                                     ? 2U
                                                     : 
                                                    (1U 
                                                     == (IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT__quantIndex_15)))))))))
                              : 0U))) << 0x3cU) | (
                                                   ((QData)((IData)(__VdfgTmp_h57d15536__0)) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(__VdfgTmp_h820a2292__0)) 
                                                       << 0x34U) 
                                                      | (((QData)((IData)(__VdfgTmp_h685a7541__0)) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(__VdfgTmp_hfc4e52b7__0)) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(__VdfgTmp_h8faaaf4d__0)) 
                                                                << 0x28U) 
                                                               | (((QData)((IData)(__VdfgTmp_hef50fc5e__0)) 
                                                                   << 0x24U) 
                                                                  | (((QData)((IData)(__VdfgTmp_h4164099a__0)) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(__VdfgTmp_hbbc8c52e__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(__VdfgTmp_h8555aa89__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(__VdfgTmp_h14aa63ed__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(__VdfgTmp_h8a7e261f__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(__VdfgTmp_hc3f1f329__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(__VdfgTmp_h4cc533e1__0) 
                                                                                << 8U) 
                                                                                | (((IData)(__VdfgTmp_haf5bb8dc__0) 
                                                                                << 4U) 
                                                                                | (IData)(__VdfgTmp_h266d6a75__0))))))))))))))))));
    if (vlSelf->QvuTop__DOT___GEN_6) {
        vlSelf->io_float_o_0 = 0ULL;
        vlSelf->io_float_o_14 = 0ULL;
        vlSelf->io_float_o_13 = 0ULL;
        vlSelf->io_float_o_12 = 0ULL;
        vlSelf->io_float_o_11 = 0ULL;
        vlSelf->io_float_o_10 = 0ULL;
        vlSelf->io_float_o_9 = 0ULL;
        vlSelf->io_float_o_8 = 0ULL;
        vlSelf->io_float_o_6 = 0ULL;
        vlSelf->io_float_o_5 = 0ULL;
        vlSelf->io_float_o_4 = 0ULL;
        vlSelf->io_float_o_3 = 0ULL;
        vlSelf->io_float_o_2 = 0ULL;
        vlSelf->io_float_o_1 = 0ULL;
        vlSelf->io_float_o_7 = 0ULL;
        vlSelf->io_float_o_15 = 0ULL;
    } else if ((2U == (IData)(vlSelf->io_op))) {
        vlSelf->io_float_o_0 = ((0U != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                                 ? (QData)((IData)(vlSelf->__VdfgTmp_hc6e18ff1__0))
                                 : 0ULL);
        vlSelf->io_float_o_14 = ((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h6b3a5eab__0))))
                                  : 0ULL);
        vlSelf->io_float_o_13 = ((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 2U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h55c635c7__0))))
                                  : 0ULL);
        vlSelf->io_float_o_12 = ((0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 3U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h3dfd7295__0))))
                                  : 0ULL);
        vlSelf->io_float_o_11 = ((0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 4U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h0609fa5a__0))))
                                  : 0ULL);
        vlSelf->io_float_o_10 = ((0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         << 5U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_hfbcbb255__0))))
                                  : 0ULL);
        vlSelf->io_float_o_9 = ((9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 6U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_hfbb06ac0__0))))
                                 : 0ULL);
        vlSelf->io_float_o_8 = ((8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 7U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_hbc36f83b__0))))
                                 : 0ULL);
        vlSelf->io_float_o_6 = ((6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 9U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h3f6e3113__0))))
                                 : 0ULL);
        vlSelf->io_float_o_5 = ((5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xaU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h1fa020bc__0))))
                                 : 0ULL);
        vlSelf->io_float_o_4 = ((4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xbU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h29201396__0))))
                                 : 0ULL);
        vlSelf->io_float_o_3 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xcU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h1e6be8f2__0))))
                                 : 0ULL);
        vlSelf->io_float_o_2 = ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xdU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h15c5203c__0))))
                                 : 0ULL);
        vlSelf->io_float_o_1 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                                 ? (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 0xeU)) 
                                                    | (IData)(vlSelf->__VdfgTmp_hd12e3618__0))))
                                 : 0ULL);
        if ((0U == (IData)(vlSelf->io_vector_size))) {
            vlSelf->io_float_o_7 = (QData)((IData)(
                                                   ((0x8000U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 8U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h3f732c73__0))));
            vlSelf->io_float_o_15 = (QData)((IData)(
                                                    ((0x8000U 
                                                      & (IData)(vlSelf->QvuTop__DOT___GEN_7)) 
                                                     | (IData)(vlSelf->__VdfgTmp_hdaffa71e__0))));
        } else {
            vlSelf->io_float_o_7 = 0ULL;
            vlSelf->io_float_o_15 = 0ULL;
        }
    } else if ((3U == (IData)(vlSelf->io_op))) {
        vlSelf->io_float_o_0 = ((0U != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                                 ? (QData)((IData)(vlSelf->__VdfgTmp_hece37c2e__0))
                                 : 0ULL);
        vlSelf->io_float_o_14 = ((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 7U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h34744805__0))))
                                  : 0ULL);
        vlSelf->io_float_o_13 = ((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 6U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h4ecb4224__0))))
                                  : 0ULL);
        vlSelf->io_float_o_12 = ((0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 5U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_hd07f1d61__0))))
                                  : 0ULL);
        vlSelf->io_float_o_11 = ((0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h31cfcd1e__0))))
                                  : 0ULL);
        vlSelf->io_float_o_10 = ((0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                  ? (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 3U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_ha24b52a4__0))))
                                  : 0ULL);
        vlSelf->io_float_o_9 = ((9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        >> 2U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h90cf73ba__0))))
                                 : 0ULL);
        vlSelf->io_float_o_8 = ((8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        >> 1U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_hab31a8ed__0))))
                                 : 0ULL);
        vlSelf->io_float_o_6 = ((6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h66c1db1c__0))))
                                 : 0ULL);
        vlSelf->io_float_o_5 = ((5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 2U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_he5b81198__0))))
                                 : 0ULL);
        vlSelf->io_float_o_4 = ((4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 3U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h95bf39bd__0))))
                                 : 0ULL);
        vlSelf->io_float_o_3 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 4U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h8a2eaf1f__0))))
                                 : 0ULL);
        vlSelf->io_float_o_2 = ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 5U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h54d188b7__0))))
                                 : 0ULL);
        vlSelf->io_float_o_1 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                                 ? (QData)((IData)(
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                        << 6U)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h45a06809__0))))
                                 : 0ULL);
        if ((0U == (IData)(vlSelf->io_vector_size))) {
            vlSelf->io_float_o_7 = (QData)((IData)(
                                                   ((0x80U 
                                                     & (IData)(vlSelf->QvuTop__DOT___GEN_7)) 
                                                    | (IData)(vlSelf->__VdfgTmp_h47b9a3d0__0))));
            vlSelf->io_float_o_15 = (QData)((IData)(
                                                    ((0x80U 
                                                      & ((IData)(vlSelf->QvuTop__DOT___GEN_7) 
                                                         >> 8U)) 
                                                     | (IData)(vlSelf->__VdfgTmp_h03f676fd__0))));
        } else {
            vlSelf->io_float_o_7 = 0ULL;
            vlSelf->io_float_o_15 = 0ULL;
        }
    } else {
        vlSelf->io_float_o_0 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (0U != (IData)(vlSelf->QvuTop__DOT___GEN_0)))
                                 ? (QData)((IData)(__VdfgTmp_h266d6a75__0))
                                 : 0ULL);
        vlSelf->io_float_o_14 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_h57d15536__0))
                                  : 0ULL);
        vlSelf->io_float_o_13 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_h820a2292__0))
                                  : 0ULL);
        vlSelf->io_float_o_12 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_h685a7541__0))
                                  : 0ULL);
        vlSelf->io_float_o_11 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_hfc4e52b7__0))
                                  : 0ULL);
        vlSelf->io_float_o_10 = (((4U == (IData)(vlSelf->io_op)) 
                                  & (0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                  ? (QData)((IData)(__VdfgTmp_h8faaaf4d__0))
                                  : 0ULL);
        vlSelf->io_float_o_9 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_hef50fc5e__0))
                                 : 0ULL);
        vlSelf->io_float_o_8 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h4164099a__0))
                                 : 0ULL);
        vlSelf->io_float_o_6 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h8555aa89__0))
                                 : 0ULL);
        vlSelf->io_float_o_5 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h14aa63ed__0))
                                 : 0ULL);
        vlSelf->io_float_o_4 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h8a7e261f__0))
                                 : 0ULL);
        vlSelf->io_float_o_3 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0))
                                 ? (QData)((IData)(__VdfgTmp_hc3f1f329__0))
                                 : 0ULL);
        vlSelf->io_float_o_2 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                 ? (QData)((IData)(__VdfgTmp_h4cc533e1__0))
                                 : 0ULL);
        vlSelf->io_float_o_1 = (((4U == (IData)(vlSelf->io_op)) 
                                 & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0))
                                 ? (QData)((IData)(__VdfgTmp_haf5bb8dc__0))
                                 : 0ULL);
        if (vlSelf->__VdfgTmp_hbb02c542__0) {
            vlSelf->io_float_o_7 = (QData)((IData)(__VdfgTmp_hbbc8c52e__0));
            vlSelf->io_float_o_15 = (vlSelf->QvuTop__DOT____Vcellout__quantizeFP4__io_fp4_o 
                                     >> 0x3cU);
        } else {
            vlSelf->io_float_o_7 = 0ULL;
            vlSelf->io_float_o_15 = 0ULL;
        }
    }
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_1));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_2));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_3));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_4));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_5));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_6));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_8));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_9));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_10));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_11));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_12));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_13));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_14));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_7));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15)
                              ? (- vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15)
                              : vlSelf->QvuTop__DOT__quantizeInt4__DOT__remainder_15));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15 
        = (0x1ffffffffULL & ((VL_GTS_IQQ(34, 0ULL, 
                                         (0x3ffffffffULL 
                                          & (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15)))
                               ? (- (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15))
                               : (8ULL + vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15)) 
                             >> 1U));
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243);
    QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0 
        = (((QData)((IData)((0xfU & (- (IData)((1U 
                                                & (IData)(
                                                          (QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515 
                                                           >> 0x20U)))))))) 
            << 0x21U) | QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515);
    if ((0U != vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal)) {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h3fb54d31__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_1))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d870601__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_2))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8f6c38e1__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_3))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h78ea89b4__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_4))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9d61ae14__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_5))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf31189d0__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_6))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8823f27f__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_8))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h949acf11__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_9))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c1bf3a5__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_10))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he359e005__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_11))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h6becf6c5__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_12))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h8bb8b26a__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_13))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h191de478__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_14))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hf49b5ebe__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_7))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd737cc62__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15 
            = (((0xffffU & (((0U == (0x1fU & (((8ULL 
                                                > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                                ? (7U 
                                                   & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                                : 7U) 
                                              << 4U)))
                              ? 0U : (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                                      (((IData)(0xfU) 
                                        + (0x7fU & 
                                           (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                              : 7U) 
                                            << 4U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((8ULL 
                                                         > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                                         ? 
                                                        (7U 
                                                         & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                                         : 7U) 
                                                       << 4U))))) 
                            | (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogram[
                               (3U & (((8ULL > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                        ? (7U & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                        : 7U) >> 1U))] 
                               >> (0x1fU & (((8ULL 
                                              > vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15)
                                              ? (7U 
                                                 & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__tempIdx_15))
                                              : 7U) 
                                            << 4U))))) 
                > (0xfffffU & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__histogramTotal 
                               >> 3U))) ? VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0, vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h5d60b427__0)
                : VL_GTS_IQQ(37, QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h16c28398__0, 
                             (0x1fffffffffULL & VL_DIVS_QQQ(37, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_50, 5ULL))));
    } else {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_5 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_39 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_73 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_107 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_141 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_175 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_209 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_277 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_311 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_345 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_379 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_413 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_447 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_481 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_243 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7)));
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15 
            = (VL_GTS_IQQ(33, QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515, vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
               | ((QvuTop__DOT__quantizeInt4__DOT___needRounding_T_515 
                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_51) 
                  & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15)));
    }
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_2)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_1)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_4)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_2)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_6)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_3)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_8)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_4)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_10)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_5)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_12)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_6)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_16)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_8)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_18)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_9)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_20)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_10)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_22)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_11)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_24)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_12)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_26)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_13)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_28)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_14)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_14)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_7)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, QvuTop__DOT__quantizeInt4__DOT___centeredValue_T_30)
                  ? (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15)
                  : (- (IData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__needRounding_15)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_1 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_1)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_2 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_2)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_3 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_3)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_4 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_4)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_5 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_5)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_6 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_6)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_8 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_8)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_9 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_9)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_10 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_10)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_11 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_11)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_12 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_12)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_13 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_13)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_14 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_14)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_7 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_7)))));
    vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0 
        = (0x1ffffffffULL & (vlSelf->QvuTop__DOT__quantizeInt4__DOT__scaledValue_15 
                             + (((QData)((IData)((0x7fffffffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15) 
                                                                   >> 1U))))))) 
                                 << 2U) | (QData)((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT__roundingDirection_15)))));
    if ((0ULL == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)) {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7 = 0ULL;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15 = 0ULL;
    } else {
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0;
        vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15 
            = vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0;
    }
    if ((0U == (IData)(vlSelf->io_op))) {
        vlSelf->io_int_o_0 = ((0U != (IData)(vlSelf->QvuTop__DOT___GEN_0))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                             ? 0ULL
                                                             : 0x7fULL)) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                              ? 0ULL
                                                              : 0x7fULL))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                          ? 0ULL
                                                          : 0x7fULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                              ? 0ULL
                                                              : 0x7fULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdf96a634__0)
                                                   ? 0U
                                                   : 0x7fU))))
                               : 0U);
        vlSelf->io_int_o_1 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0)
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                             ? 0ULL
                                                             : 0x1ffffff80ULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffff80ULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                          ? 0ULL
                                                          : 0x1ffffff80ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                              ? 0ULL
                                                              : 0x1ffffff80ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hdcaf4442__0)
                                                   ? 0U
                                                   : 0x80U))))
                               : 0U);
        vlSelf->io_int_o_2 = ((2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U)))) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                                                << 6U))))
                                                  ? 0x80U
                                                  : 
                                                 ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hdd893d74__0) 
                                                  << 6U))))
                               : 0U);
        vlSelf->io_int_o_3 = ((IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0)
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                             ? 0ULL
                                                             : 0x1ffffffc0ULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffffc0ULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                          ? 0ULL
                                                          : 0x1ffffffc0ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                              ? 0ULL
                                                              : 0x1ffffffc0ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hd9d61d93__0)
                                                   ? 0U
                                                   : 0xc0U))))
                               : 0U);
        vlSelf->io_int_o_4 = ((4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U)))) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                                                << 5U))))
                                                  ? 0x80U
                                                  : 
                                                 ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hd88100fc__0) 
                                                  << 5U))))
                               : 0U);
        vlSelf->io_int_o_5 = ((5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                             ? 0ULL
                                                             : 0x1ffffffe0ULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffffe0ULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                          ? 0ULL
                                                          : 0x1ffffffe0ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                              ? 0ULL
                                                              : 0x1ffffffe0ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hded98ee5__0)
                                                   ? 0U
                                                   : 0xe0U))))
                               : 0U);
        vlSelf->io_int_o_6 = ((6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                             ? 0ULL
                                                             : 0x64ULL)) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                              ? 0ULL
                                                              : 0x64ULL))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                          ? 0ULL
                                                          : 0x64ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                              ? 0ULL
                                                              : 0x64ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3469bf4__0)
                                                   ? 0U
                                                   : 0x64U))))
                               : 0U);
        vlSelf->io_int_o_8 = ((8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                             ? 0ULL
                                                             : 0x7fULL)) 
                                               & VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                              ? 0ULL
                                                              : 0x7fULL))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                          ? 0ULL
                                                          : 0x7fULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                              ? 0ULL
                                                              : 0x7fULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc036df2f__0)
                                                   ? 0U
                                                   : 0x7fU))))
                               : 0U);
        vlSelf->io_int_o_9 = ((9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                               ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                             ? 0ULL
                                                             : 0x1ffffff80ULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffff80ULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                          ? 0ULL
                                                          : 0x1ffffff80ULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                              ? 0ULL
                                                              : 0x1ffffff80ULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc0a02ab9__0)
                                                   ? 0U
                                                   : 0x80U))))
                               : 0U);
        vlSelf->io_int_o_10 = ((0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U)))) 
                                                & VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U))))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U))))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                                                << 6U))))
                                                   ? 0x80U
                                                   : 
                                                  ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_hde76be47__0) 
                                                   << 6U))))
                                : 0U);
        vlSelf->io_int_o_11 = ((0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                              ? 0ULL
                                                              : 0x1ffffffc0ULL)) 
                                                & ((0ULL 
                                                    != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0) 
                                                   | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                ((0ULL 
                                                                  == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                                  ? 0ULL
                                                                  : 0x1ffffffc0ULL)))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                           ? 0ULL
                                                           : 0x1ffffffc0ULL))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                               ? 0ULL
                                                               : 0x1ffffffc0ULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hddc85c86__0)
                                                    ? 0U
                                                    : 0xc0U))))
                                : 0U);
        vlSelf->io_int_o_12 = ((0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U)))) 
                                                & VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, (QData)((IData)(
                                                                                ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                                                << 5U))))
                                                   ? 0x80U
                                                   : 
                                                  ((IData)(vlSelf->QvuTop__DOT__quantizeFP4__DOT____VdfgTmp_h349b44b9__0) 
                                                   << 5U))))
                                : 0U);
        vlSelf->io_int_o_13 = ((0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                              ? 0ULL
                                                              : 0x1ffffffe0ULL)) 
                                                & ((0ULL 
                                                    != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0) 
                                                   | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                ((0ULL 
                                                                  == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                                  ? 0ULL
                                                                  : 0x1ffffffe0ULL)))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                           ? 0ULL
                                                           : 0x1ffffffe0ULL))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                               ? 0ULL
                                                               : 0x1ffffffe0ULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc2bd0cb6__0)
                                                    ? 0U
                                                    : 0xe0U))))
                                : 0U);
        vlSelf->io_int_o_14 = ((0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                ? (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                              ? 0ULL
                                                              : 0x64ULL)) 
                                                & VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                               ? 0ULL
                                                               : 0x64ULL))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                           ? 0ULL
                                                           : 0x64ULL))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                               ? 0ULL
                                                               : 0x64ULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he76a7ee9__0)
                                                    ? 0U
                                                    : 0x64U))))
                                : 0U);
        if ((0U == (IData)(vlSelf->io_vector_size))) {
            vlSelf->io_int_o_7 = (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                           ((0ULL 
                                                             == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                             ? 0ULL
                                                             : 0x1ffffff9cULL)) 
                                               & ((0ULL 
                                                   != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0) 
                                                  | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                               ((0ULL 
                                                                 == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                                 ? 0ULL
                                                                 : 0x1ffffff9cULL)))))) 
                                   << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                        ((0ULL 
                                                          == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                          ? 0ULL
                                                          : 0x1ffffff9cULL))
                                              ? 0x7fU
                                              : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                              ? 0ULL
                                                              : 0x1ffffff9cULL))
                                                  ? 0x80U
                                                  : 
                                                 ((0ULL 
                                                   == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc3a14928__0)
                                                   ? 0U
                                                   : 0x9cU))));
            vlSelf->io_int_o_15 = (((- (IData)((VL_GTES_IQQ(33, 0x7fULL, 
                                                            ((0ULL 
                                                              == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                              ? 0ULL
                                                              : 0x1ffffff9cULL)) 
                                                & ((0ULL 
                                                    != vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0) 
                                                   | VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                                ((0ULL 
                                                                  == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                                  ? 0ULL
                                                                  : 0x1ffffff9cULL)))))) 
                                    << 8U) | (VL_LTS_IQQ(33, 0x7fULL, 
                                                         ((0ULL 
                                                           == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                           ? 0ULL
                                                           : 0x1ffffff9cULL))
                                               ? 0x7fU
                                               : (VL_GTS_IQQ(33, 0x1ffffff80ULL, 
                                                             ((0ULL 
                                                               == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                               ? 0ULL
                                                               : 0x1ffffff9cULL))
                                                   ? 0x80U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7d4d071__0)
                                                    ? 0U
                                                    : 0x9cU))));
        } else {
            vlSelf->io_int_o_7 = 0U;
            vlSelf->io_int_o_15 = 0U;
        }
    } else {
        vlSelf->io_int_o_0 = (((1U == (IData)(vlSelf->io_op)) 
                               & (0U != (IData)(vlSelf->QvuTop__DOT___GEN_0)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_0)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h9762a8ae__0)))))))
                               : 0U);
        vlSelf->io_int_o_1 = (((1U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h9b1a73b4__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_3)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_1)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hff625ee6__0)))))))
                               : 0U);
        vlSelf->io_int_o_2 = (((1U == (IData)(vlSelf->io_op)) 
                               & (2U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_6)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_2)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h601d99d2__0)))))))
                               : 0U);
        vlSelf->io_int_o_3 = (((1U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->QvuTop__DOT____VdfgTmp_h07168e9e__0))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_9)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_3)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_he7b16fba__0)))))))
                               : 0U);
        vlSelf->io_int_o_4 = (((1U == (IData)(vlSelf->io_op)) 
                               & (4U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_12)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_4)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h2c756526__0)))))))
                               : 0U);
        vlSelf->io_int_o_5 = (((1U == (IData)(vlSelf->io_op)) 
                               & (5U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_15)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_5)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h159e3222__0)))))))
                               : 0U);
        vlSelf->io_int_o_6 = (((1U == (IData)(vlSelf->io_op)) 
                               & (6U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_18)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_6)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hae55fc57__0)))))))
                               : 0U);
        vlSelf->io_int_o_8 = (((1U == (IData)(vlSelf->io_op)) 
                               & (8U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_24)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_8)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hc40f109e__0)))))))
                               : 0U);
        vlSelf->io_int_o_9 = (((1U == (IData)(vlSelf->io_op)) 
                               & (9U < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                               ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_27)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_9)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h4af495e2__0)))))))
                               : 0U);
        vlSelf->io_int_o_10 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xaU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_30)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_10)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h1ac14696__0)))))))
                                : 0U);
        vlSelf->io_int_o_11 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xbU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_33)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_11)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h50e13622__0)))))))
                                : 0U);
        vlSelf->io_int_o_12 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xcU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_36)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_12)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hca8bba58__0)))))))
                                : 0U);
        vlSelf->io_int_o_13 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xdU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_39)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_13)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h39952376__0)))))))
                                : 0U);
        vlSelf->io_int_o_14 = (((1U == (IData)(vlSelf->io_op)) 
                                & (0xeU < (IData)(vlSelf->QvuTop__DOT__ACTUAL_VECTOR_SIZE)))
                                ? (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_42)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_14)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_hcbc32e41__0)))))))
                                : 0U);
        if (vlSelf->__VdfgTmp_he1263253__0) {
            vlSelf->io_int_o_7 = (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)) 
                                               & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7) 
                                                  & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7) 
                                                     | ((0ULL 
                                                         != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                        & (IData)(
                                                                  (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0 
                                                                   >> 3U)))))))) 
                                   << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_21)
                                              ? 0U : 
                                             (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7)
                                               ? 7U
                                               : (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_7)
                                                   ? 8U
                                                   : 
                                                  ((0ULL 
                                                    == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h44842b86__0)))))));
            vlSelf->io_int_o_15 = (((- (IData)(((~ (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)) 
                                                & (VL_GTES_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15) 
                                                   & (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15) 
                                                      | ((0ULL 
                                                          != vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale) 
                                                         & (IData)(
                                                                   (vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0 
                                                                    >> 3U)))))))) 
                                    << 4U) | ((IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT___GEN_45)
                                               ? 0U
                                               : (VL_LTS_IQQ(33, 7ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15)
                                                   ? 7U
                                                   : 
                                                  (VL_GTS_IQQ(33, 0x1fffffff8ULL, vlSelf->QvuTop__DOT__quantizeInt4__DOT__quantizedValue_15)
                                                    ? 8U
                                                    : 
                                                   ((0ULL 
                                                     == vlSelf->QvuTop__DOT__quantizeInt4__DOT__globalScale)
                                                     ? 0U
                                                     : 
                                                    (0xfU 
                                                     & (IData)(vlSelf->QvuTop__DOT__quantizeInt4__DOT____VdfgTmp_h0de0d3f7__0)))))));
        } else {
            vlSelf->io_int_o_7 = 0U;
            vlSelf->io_int_o_15 = 0U;
        }
    }
}
