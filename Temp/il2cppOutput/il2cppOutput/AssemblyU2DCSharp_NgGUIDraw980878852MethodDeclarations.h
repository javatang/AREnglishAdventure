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

// NgGUIDraw
struct NgGUIDraw_t980878852;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void NgGUIDraw::.ctor()
extern "C"  void NgGUIDraw__ctor_m12921381 (NgGUIDraw_t980878852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgGUIDraw::get_adLineTex()
extern "C"  Texture2D_t3542995729 * NgGUIDraw_get_adLineTex_m822635519 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgGUIDraw::get_lineTex()
extern "C"  Texture2D_t3542995729 * NgGUIDraw_get_lineTex_m2250479958 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgGUIDraw::get_whiteTexture()
extern "C"  Texture2D_t3542995729 * NgGUIDraw_get_whiteTexture_m4236145145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgGUIDraw::DrawHorizontalLine(UnityEngine.Vector2,System.Int32,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void NgGUIDraw_DrawHorizontalLine_m1612309976 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pointA0, int32_t ___nlen1, Color_t2020392075  ___color2, float ___width3, bool ___antiAlias4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgGUIDraw::DrawVerticalLine(UnityEngine.Vector2,System.Int32,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void NgGUIDraw_DrawVerticalLine_m4221424990 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pointA0, int32_t ___nlen1, Color_t2020392075  ___color2, float ___width3, bool ___antiAlias4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgGUIDraw::DrawBox(UnityEngine.Rect,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void NgGUIDraw_DrawBox_m3717116995 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, Color_t2020392075  ___color1, float ___width2, bool ___antiAlias3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgGUIDraw::DrawLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void NgGUIDraw_DrawLine_m483895411 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pointA0, Vector2_t2243707579  ___pointB1, Color_t2020392075  ___color2, float ___width3, bool ___antiAlias4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgGUIDraw::DrawBezierLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean,System.Int32)
extern "C"  void NgGUIDraw_DrawBezierLine_m1657016085 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___start0, Vector2_t2243707579  ___startTangent1, Vector2_t2243707579  ___end2, Vector2_t2243707579  ___endTangent3, Color_t2020392075  ___color4, float ___width5, bool ___antiAlias6, int32_t ___segments7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgGUIDraw::DrawLineMac(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void NgGUIDraw_DrawLineMac_m295445026 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pointA0, Vector2_t2243707579  ___pointB1, Color_t2020392075  ___color2, float ___width3, bool ___antiAlias4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgGUIDraw::DrawLineWindows(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void NgGUIDraw_DrawLineWindows_m492429336 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pointA0, Vector2_t2243707579  ___pointB1, Color_t2020392075  ___color2, float ___width3, bool ___antiAlias4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NgGUIDraw::cubeBezier(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  NgGUIDraw_cubeBezier_m1350405597 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___s0, Vector2_t2243707579  ___st1, Vector2_t2243707579  ___e2, Vector2_t2243707579  ___et3, float ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 NgGUIDraw::translationMatrix(UnityEngine.Vector3)
extern "C"  Matrix4x4_t2933234003  NgGUIDraw_translationMatrix_m3505493731 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgGUIDraw::.cctor()
extern "C"  void NgGUIDraw__cctor_m2842124294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
