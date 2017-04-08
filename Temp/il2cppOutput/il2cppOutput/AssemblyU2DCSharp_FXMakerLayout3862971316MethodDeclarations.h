#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// FXMakerLayout
struct FXMakerLayout_t3862971316;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1194435593;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3486805455;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FXMakerLayout_WINDOWID1433762628.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction3486805455.h"
#include "mscorlib_System_String2029220233.h"

// System.Void FXMakerLayout::.ctor()
extern "C"  void FXMakerLayout__ctor_m186035659 (FXMakerLayout_t3862971316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FXMakerLayout::GetFixedWindowWidth()
extern "C"  float FXMakerLayout_GetFixedWindowWidth_m846840755 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FXMakerLayout::GetTopMenuHeight()
extern "C"  float FXMakerLayout_GetTopMenuHeight_m3631542438 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXMakerLayout::GetWindowId(FXMakerLayout/WINDOWID)
extern "C"  int32_t FXMakerLayout_GetWindowId_m1505947064 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetChildTopRect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetChildTopRect_m1764739095 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rectParent0, int32_t ___topMargin1, int32_t ___nHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetChildBottomRect(UnityEngine.Rect,System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetChildBottomRect_m12043686 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rectParent0, int32_t ___nHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetChildVerticalRect(UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetChildVerticalRect_m3840165030 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rectParent0, int32_t ___topMargin1, int32_t ___count2, int32_t ___pos3, int32_t ___sumCount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetInnerVerticalRect(UnityEngine.Rect,System.Int32,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetInnerVerticalRect_m623954903 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rectBase0, int32_t ___count1, int32_t ___pos2, int32_t ___sumCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetChildHorizontalRect(UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetChildHorizontalRect_m771558616 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rectParent0, int32_t ___topMargin1, int32_t ___count2, int32_t ___pos3, int32_t ___sumCount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetInnerHorizontalRect(UnityEngine.Rect,System.Int32,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetInnerHorizontalRect_m1940801359 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rectBase0, int32_t ___count1, int32_t ___pos2, int32_t ___sumCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetMenuChangeRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetMenuChangeRect_m653314266 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetMenuToolbarRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetMenuToolbarRect_m1689602179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetMenuTopRightRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetMenuTopRightRect_m2890517621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetResListRect(System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetResListRect_m4049487582 (Il2CppObject * __this /* static, unused */, int32_t ___nIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetEffectListRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetEffectListRect_m2564559108 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetEffectHierarchyRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetEffectHierarchyRect_m934791817 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetActionToolbarRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetActionToolbarRect_m3752672532 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetToolMessageRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetToolMessageRect_m2906337296 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetTooltipRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetTooltipRect_m521992490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetCursorTooltipRect(UnityEngine.Vector2)
extern "C"  Rect_t3681755626  FXMakerLayout_GetCursorTooltipRect_m1776589896 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetModalMessageRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetModalMessageRect_m191034809 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetMenuGizmoRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetMenuGizmoRect_m2392627078 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetMenuTestPanelRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetMenuTestPanelRect_m3038968954 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetClientRect()
extern "C"  Rect_t3681755626  FXMakerLayout_GetClientRect_m735665602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetScrollViewRect(System.Int32,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetScrollViewRect_m4266137986 (Il2CppObject * __this /* static, unused */, int32_t ___nWidth0, int32_t ___nButtonCount1, int32_t ___nColumn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetScrollGridRect(System.Int32,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  FXMakerLayout_GetScrollGridRect_m1484041785 (Il2CppObject * __this /* static, unused */, int32_t ___nWidth0, int32_t ___nButtonCount1, int32_t ___nColumn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetAspectScrollViewRect(System.Int32,System.Single,System.Int32,System.Int32,System.Boolean)
extern "C"  Rect_t3681755626  FXMakerLayout_GetAspectScrollViewRect_m2158983996 (Il2CppObject * __this /* static, unused */, int32_t ___nWidth0, float ___fAspect1, int32_t ___nButtonCount2, int32_t ___nColumn3, bool ___bImageOnly4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FXMakerLayout::GetAspectScrollGridRect(System.Int32,System.Single,System.Int32,System.Int32,System.Boolean)
extern "C"  Rect_t3681755626  FXMakerLayout_GetAspectScrollGridRect_m1603582307 (Il2CppObject * __this /* static, unused */, int32_t ___nWidth0, float ___fAspect1, int32_t ___nButtonCount2, int32_t ___nColumn3, bool ___bImageOnly4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode FXMakerLayout::GetVaildInputKey(UnityEngine.KeyCode,System.Boolean)
extern "C"  int32_t FXMakerLayout_GetVaildInputKey_m4071919402 (Il2CppObject * __this /* static, unused */, int32_t ___key0, bool ___bPress1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXMakerLayout::GetGridHoverIndex(UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Rect,System.Int32,System.Int32,UnityEngine.GUIStyle)
extern "C"  int32_t FXMakerLayout_GetGridHoverIndex_m2321842383 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___windowRect0, Rect_t3681755626  ___listRect1, Rect_t3681755626  ___gridRect2, int32_t ___nCount3, int32_t ___nColumn4, GUIStyle_t1799908754 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXMakerLayout::TooltipToolbar(UnityEngine.Rect,UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[])
extern "C"  int32_t FXMakerLayout_TooltipToolbar_m1115897807 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___windowRect0, Rect_t3681755626  ___gridRect1, int32_t ___nGridIndex2, GUIContentU5BU5D_t1194435593* ___cons3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXMakerLayout::TooltipToolbar(UnityEngine.Rect,UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle)
extern "C"  int32_t FXMakerLayout_TooltipToolbar_m2560550626 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___windowRect0, Rect_t3681755626  ___gridRect1, int32_t ___nGridIndex2, GUIContentU5BU5D_t1194435593* ___cons3, GUIStyle_t1799908754 * ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXMakerLayout::TooltipSelectionGrid(UnityEngine.Rect,UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32)
extern "C"  int32_t FXMakerLayout_TooltipSelectionGrid_m3789075799 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___windowRect0, Rect_t3681755626  ___listRect1, int32_t ___nGridIndex2, GUIContentU5BU5D_t1194435593* ___cons3, int32_t ___nColumCount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXMakerLayout::TooltipSelectionGrid(UnityEngine.Rect,UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle)
extern "C"  int32_t FXMakerLayout_TooltipSelectionGrid_m3934551898 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___windowRect0, Rect_t3681755626  ___listRect1, int32_t ___nGridIndex2, GUIContentU5BU5D_t1194435593* ___cons3, int32_t ___nColumCount4, GUIStyle_t1799908754 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXMakerLayout::TooltipSelectionGrid(UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32)
extern "C"  int32_t FXMakerLayout_TooltipSelectionGrid_m2187432148 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___windowRect0, Rect_t3681755626  ___listRect1, Rect_t3681755626  ___gridRect2, int32_t ___nGridIndex3, GUIContentU5BU5D_t1194435593* ___cons4, int32_t ___nColumCount5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXMakerLayout::TooltipSelectionGrid(UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle)
extern "C"  int32_t FXMakerLayout_TooltipSelectionGrid_m2957322899 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___windowRect0, Rect_t3681755626  ___listRect1, Rect_t3681755626  ___gridRect2, int32_t ___nGridIndex3, GUIContentU5BU5D_t1194435593* ___cons4, int32_t ___nColumCount5, GUIStyle_t1799908754 * ___style6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXMakerLayout::ModalWindow(UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  void FXMakerLayout_ModalWindow_m2449453060 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, WindowFunction_t3486805455 * ___func1, String_t* ___title2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXMakerLayout::setHotControl(System.Int32)
extern "C"  void FXMakerLayout_setHotControl_m4184116158 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXMakerLayout::.cctor()
extern "C"  void FXMakerLayout__cctor_m4153545482 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
