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

// NsEffectManager
struct NsEffectManager_t1282528699;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Component
struct Component_t3819376471;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void NsEffectManager::.ctor()
extern "C"  void NsEffectManager__ctor_m1801885796 (NsEffectManager_t1282528699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture[] NsEffectManager::PreloadResource(UnityEngine.GameObject)
extern "C"  TextureU5BU5D_t2474608790* NsEffectManager_PreloadResource_m1905206280 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component NsEffectManager::GetComponentInChildren(UnityEngine.GameObject,System.Type)
extern "C"  Component_t3819376471 * NsEffectManager_GetComponentInChildren_m578477843 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarObj0, Type_t * ___findType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NsEffectManager::CreateReplayEffect(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NsEffectManager_CreateReplayEffect_m2269061457 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarPrefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsEffectManager::SetReplayEffect(UnityEngine.GameObject)
extern "C"  void NsEffectManager_SetReplayEffect_m2743280132 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___instanceObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsEffectManager::RunReplayEffect(UnityEngine.GameObject,System.Boolean)
extern "C"  void NsEffectManager_RunReplayEffect_m4209639548 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___instanceObj0, bool ___bClearOldParticle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsEffectManager::AdjustSpeedRuntime(UnityEngine.GameObject,System.Single)
extern "C"  void NsEffectManager_AdjustSpeedRuntime_m1583487737 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, float ___fSpeedRate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsEffectManager::SetActiveRecursively(UnityEngine.GameObject,System.Boolean)
extern "C"  void NsEffectManager_SetActiveRecursively_m1943684600 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, bool ___bActive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NsEffectManager::IsActive(UnityEngine.GameObject)
extern "C"  bool NsEffectManager_IsActive_m429377468 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsEffectManager::SetActiveRecursivelyEffect(UnityEngine.GameObject,System.Boolean)
extern "C"  void NsEffectManager_SetActiveRecursivelyEffect_m2721065195 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, bool ___bActive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture[] NsEffectManager::PreloadResource(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  TextureU5BU5D_t2474608790* NsEffectManager_PreloadResource_m209732930 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarObj0, List_1_t1125654279 * ___parentPrefabList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture[] NsEffectManager::PreloadPrefab(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Boolean)
extern "C"  TextureU5BU5D_t2474608790* NsEffectManager_PreloadPrefab_m4054241881 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarObj0, List_1_t1125654279 * ___parentPrefabList1, bool ___bCheckDup2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component NsEffectManager::GetComponentInChildren(UnityEngine.GameObject,System.Type,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  Component_t3819376471 * NsEffectManager_GetComponentInChildren_m305113681 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarObj0, Type_t * ___findType1, List_1_t1125654279 * ___parentPrefabList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component NsEffectManager::GetValidComponentInChildren(UnityEngine.GameObject,System.Type,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Boolean)
extern "C"  Component_t3819376471 * NsEffectManager_GetValidComponentInChildren_m3870980228 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarObj0, Type_t * ___findType1, List_1_t1125654279 * ___parentPrefabList2, bool ___bCheckDup3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
