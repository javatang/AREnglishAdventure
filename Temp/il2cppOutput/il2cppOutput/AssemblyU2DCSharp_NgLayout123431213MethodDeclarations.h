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

// NgLayout
struct NgLayout_t123431213;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void NgLayout::.ctor()
extern "C"  void NgLayout__ctor_m2663661844 (NgLayout_t123431213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetZeroRect()
extern "C"  Rect_t3681755626  NgLayout_GetZeroRect_m4209175204 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetSumRect(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  Rect_t3681755626  NgLayout_GetSumRect_m2598815953 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect10, Rect_t3681755626  ___rect21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetOffsetRect(UnityEngine.Rect,System.Single,System.Single)
extern "C"  Rect_t3681755626  NgLayout_GetOffsetRect_m1203331418 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___left1, float ___top2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetOffsetRect(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single)
extern "C"  Rect_t3681755626  NgLayout_GetOffsetRect_m2327762554 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___left1, float ___top2, float ___right3, float ___bottom4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetOffsetRect(UnityEngine.Rect,System.Single)
extern "C"  Rect_t3681755626  NgLayout_GetOffsetRect_m3386093801 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___fOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetVOffsetRect(UnityEngine.Rect,System.Single)
extern "C"  Rect_t3681755626  NgLayout_GetVOffsetRect_m1958923959 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___fOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetHOffsetRect(UnityEngine.Rect,System.Single)
extern "C"  Rect_t3681755626  NgLayout_GetHOffsetRect_m4101822613 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___fOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetOffsetRateRect(UnityEngine.Rect,System.Single)
extern "C"  Rect_t3681755626  NgLayout_GetOffsetRateRect_m3765143235 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___fOffsetRate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetZeroStartRect(UnityEngine.Rect)
extern "C"  Rect_t3681755626  NgLayout_GetZeroStartRect_m26686491 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetLeftRect(UnityEngine.Rect,System.Single)
extern "C"  Rect_t3681755626  NgLayout_GetLeftRect_m1748414463 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetRightRect(UnityEngine.Rect,System.Single)
extern "C"  Rect_t3681755626  NgLayout_GetRightRect_m2607426006 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetInnerTopRect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t3681755626  NgLayout_GetInnerTopRect_m1166481800 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rectBase0, int32_t ___topMargin1, int32_t ___nHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::GetInnerBottomRect(UnityEngine.Rect,System.Int32)
extern "C"  Rect_t3681755626  NgLayout_GetInnerBottomRect_m615134493 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rectBase0, int32_t ___nHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NgLayout::ClampPoint(UnityEngine.Rect,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  NgLayout_ClampPoint_m1002730299 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, Vector2_t2243707579  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgLayout::ClampPoint(UnityEngine.Rect,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  NgLayout_ClampPoint_m2026552283 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, Vector3_t2243707580  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NgLayout::ClampWindow(UnityEngine.Rect)
extern "C"  Rect_t3681755626  NgLayout_ClampWindow_m1021485652 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___popupRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgLayout::GUIToggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,System.Boolean)
extern "C"  bool NgLayout_GUIToggle_m2150972851 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___pos0, bool ___bToggle1, GUIContent_t4210063000 * ___content2, bool ___bEnable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgLayout::GUIButton(UnityEngine.Rect,System.String,System.Boolean)
extern "C"  bool NgLayout_GUIButton_m3706824931 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___pos0, String_t* ___name1, bool ___bEnable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgLayout::GUIButton(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean)
extern "C"  bool NgLayout_GUIButton_m1712586120 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___pos0, GUIContent_t4210063000 * ___content1, bool ___bEnable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgLayout::GUIButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,System.Boolean)
extern "C"  bool NgLayout_GUIButton_m1217765707 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___pos0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, bool ___bEnable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgLayout::GUITextField(UnityEngine.Rect,System.String,System.Boolean)
extern "C"  String_t* NgLayout_GUITextField_m3952293527 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___pos0, String_t* ___name1, bool ___bEnable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgLayout::GUIEnableBackup(System.Boolean)
extern "C"  bool NgLayout_GUIEnableBackup_m3056600423 (Il2CppObject * __this /* static, unused */, bool ___newEnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgLayout::GUIEnableRestore()
extern "C"  void NgLayout_GUIEnableRestore_m3245475968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NgLayout::GUIColorBackup(UnityEngine.Color)
extern "C"  Color_t2020392075  NgLayout_GUIColorBackup_m1944691331 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___newColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgLayout::GUIColorRestore()
extern "C"  void NgLayout_GUIColorRestore_m1159771196 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NgLayout::GetGUIMousePosition()
extern "C"  Vector2_t2243707579  NgLayout_GetGUIMousePosition_m12091276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgLayout::GetWorldPerScreenPixel(UnityEngine.Vector3)
extern "C"  float NgLayout_GetWorldPerScreenPixel_m3406683090 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___worldPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgLayout::GetScreenToWorld(UnityEngine.Vector3,UnityEngine.Vector2)
extern "C"  Vector3_t2243707580  NgLayout_GetScreenToWorld_m1687879434 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___targetWorld0, Vector2_t2243707579  ___screenPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgLayout::GetWorldToScreen(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  NgLayout_GetWorldToScreen_m2990959714 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___targetWorld0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
