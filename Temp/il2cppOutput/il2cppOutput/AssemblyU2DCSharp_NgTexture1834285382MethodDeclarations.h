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

// NgTexture
struct NgTexture_t1834285382;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t2912116861;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void NgTexture::.ctor()
extern "C"  void NgTexture__ctor_m2860248953 (NgTexture_t1834285382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgTexture::UnloadTextures(UnityEngine.GameObject)
extern "C"  void NgTexture_UnloadTextures_m2605838036 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___rootObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgTexture::CopyTexture(UnityEngine.Texture2D,UnityEngine.Texture2D)
extern "C"  Texture2D_t3542995729 * NgTexture_CopyTexture_m671134050 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___srcTex0, Texture2D_t3542995729 * ___tarTex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgTexture::InverseTexture32(UnityEngine.Texture2D,UnityEngine.Texture2D)
extern "C"  Texture2D_t3542995729 * NgTexture_InverseTexture32_m648618038 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___srcTex0, Texture2D_t3542995729 * ___tarTex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgTexture::CombineTexture(UnityEngine.Texture2D,UnityEngine.Texture2D)
extern "C"  Texture2D_t3542995729 * NgTexture_CombineTexture_m1817026796 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___baseTexture0, Texture2D_t3542995729 * ___combineTexture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgTexture::CompareTexture(UnityEngine.Texture2D,UnityEngine.Texture2D)
extern "C"  bool NgTexture_CompareTexture_m2815345153 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___tex10, Texture2D_t3542995729 * ___tex21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgTexture::FindTexture(System.Collections.Generic.List`1<UnityEngine.Texture2D>,UnityEngine.Texture2D)
extern "C"  Texture2D_t3542995729 * NgTexture_FindTexture_m1934406874 (Il2CppObject * __this /* static, unused */, List_1_t2912116861 * ___findList0, Texture2D_t3542995729 * ___findTex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NgTexture::FindTextureIndex(System.Collections.Generic.List`1<UnityEngine.Texture2D>,UnityEngine.Texture2D)
extern "C"  int32_t NgTexture_FindTextureIndex_m1492080817 (Il2CppObject * __this /* static, unused */, List_1_t2912116861 * ___findList0, Texture2D_t3542995729 * ___findTex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgTexture::CopyTexture(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Texture2D,UnityEngine.Rect)
extern "C"  Texture2D_t3542995729 * NgTexture_CopyTexture_m1716148136 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___srcTex0, Rect_t3681755626  ___srcRect1, Texture2D_t3542995729 * ___tarTex2, Rect_t3681755626  ___tarRect3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgTexture::CopyTextureHalf(UnityEngine.Texture2D,UnityEngine.Texture2D)
extern "C"  Texture2D_t3542995729 * NgTexture_CopyTextureHalf_m1203157689 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___srcTexture0, Texture2D_t3542995729 * ___tarHalfTexture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgTexture::CopyTextureQuad(UnityEngine.Texture2D,UnityEngine.Texture2D)
extern "C"  Texture2D_t3542995729 * NgTexture_CopyTextureQuad_m1673906439 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___srcTexture0, Texture2D_t3542995729 * ___tarQuadTexture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D NgTexture::CopyTexture(UnityEngine.Texture2D,UnityEngine.Texture2D,UnityEngine.Rect)
extern "C"  Texture2D_t3542995729 * NgTexture_CopyTexture_m2450058921 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___srcTex0, Texture2D_t3542995729 * ___tarTex1, Rect_t3681755626  ___drawRect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
