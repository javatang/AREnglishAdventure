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

// NcEffectBehaviour
struct NcEffectBehaviour_t813403937;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;
// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void NcEffectBehaviour::.ctor()
extern "C"  void NcEffectBehaviour__ctor_m2303526132 (NcEffectBehaviour_t813403937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcEffectBehaviour::GetEngineTime()
extern "C"  float NcEffectBehaviour_GetEngineTime_m3875707543 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcEffectBehaviour::GetEngineDeltaTime()
extern "C"  float NcEffectBehaviour_GetEngineDeltaTime_m2022632195 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcEffectBehaviour::GetAnimationState()
extern "C"  int32_t NcEffectBehaviour_GetAnimationState_m3297528397 (NcEffectBehaviour_t813403937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::GetRootInstanceEffect()
extern "C"  GameObject_t1756533147 * NcEffectBehaviour_GetRootInstanceEffect_m2643813569 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture[] NcEffectBehaviour::PreloadTexture(UnityEngine.GameObject)
extern "C"  TextureU5BU5D_t2474608790* NcEffectBehaviour_PreloadTexture_m86172995 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C"  void NcEffectBehaviour_SetActive_m3913493185 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, bool ___bActive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::SetActiveRecursively(UnityEngine.GameObject,System.Boolean)
extern "C"  void NcEffectBehaviour_SetActiveRecursively_m938288084 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, bool ___bActive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcEffectBehaviour::IsActive(UnityEngine.GameObject)
extern "C"  bool NcEffectBehaviour_IsActive_m3263151464 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::RemoveAllChildObject(UnityEngine.GameObject,System.Boolean)
extern "C"  void NcEffectBehaviour_RemoveAllChildObject_m40078287 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___parent0, bool ___bImmediate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::HideNcDelayActive(UnityEngine.GameObject)
extern "C"  void NcEffectBehaviour_HideNcDelayActive_m4012756754 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___tarObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::AddRuntimeMaterial(UnityEngine.Material)
extern "C"  void NcEffectBehaviour_AddRuntimeMaterial_m1957266632 (NcEffectBehaviour_t813403937 * __this, Material_t193706927 * ___addMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NcEffectBehaviour::GetMaterialColorName(UnityEngine.Material)
extern "C"  String_t* NcEffectBehaviour_GetMaterialColorName_m1780554832 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::DisableEmit()
extern "C"  void NcEffectBehaviour_DisableEmit_m541897437 (NcEffectBehaviour_t813403937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcEffectBehaviour::IsSafe()
extern "C"  bool NcEffectBehaviour_IsSafe_m1476165151 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateEditorGameObject(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NcEffectBehaviour_CreateEditorGameObject_m44098793 (NcEffectBehaviour_t813403937 * __this, GameObject_t1756533147 * ___srcGameObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(System.String)
extern "C"  GameObject_t1756533147 * NcEffectBehaviour_CreateGameObject_m3862750874 (NcEffectBehaviour_t813403937 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NcEffectBehaviour_CreateGameObject_m1257609854 (NcEffectBehaviour_t813403937 * __this, GameObject_t1756533147 * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1756533147 * NcEffectBehaviour_CreateGameObject_m3039144120 (NcEffectBehaviour_t813403937 * __this, GameObject_t1756533147 * ___prefabObj0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NcEffectBehaviour_CreateGameObject_m1782804594 (NcEffectBehaviour_t813403937 * __this, GameObject_t1756533147 * ___parentObj0, GameObject_t1756533147 * ___prefabObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcEffectBehaviour::CreateGameObject(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NcEffectBehaviour_CreateGameObject_m3410067523 (NcEffectBehaviour_t813403937 * __this, GameObject_t1756533147 * ___parentObj0, Transform_t3275118058 * ___parentTrans1, GameObject_t1756533147 * ___prefabObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::ChangeParent(UnityEngine.Transform,UnityEngine.Transform,System.Boolean,UnityEngine.Transform)
extern "C"  void NcEffectBehaviour_ChangeParent_m308700944 (NcEffectBehaviour_t813403937 * __this, Transform_t3275118058 * ___newParent0, Transform_t3275118058 * ___child1, bool ___bKeepingLocalTransform2, Transform_t3275118058 * ___addTransform3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::UpdateMeshColors(UnityEngine.Color)
extern "C"  void NcEffectBehaviour_UpdateMeshColors_m2668022934 (NcEffectBehaviour_t813403937 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnDestroy()
extern "C"  void NcEffectBehaviour_OnDestroy_m758788855 (NcEffectBehaviour_t813403937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnApplicationQuit()
extern "C"  void NcEffectBehaviour_OnApplicationQuit_m529261482 (NcEffectBehaviour_t813403937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcEffectBehaviour_OnUpdateEffectSpeed_m4028880448 (NcEffectBehaviour_t813403937 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnSetActiveRecursively(System.Boolean)
extern "C"  void NcEffectBehaviour_OnSetActiveRecursively_m402518723 (NcEffectBehaviour_t813403937 * __this, bool ___bActive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnUpdateToolData()
extern "C"  void NcEffectBehaviour_OnUpdateToolData_m518763728 (NcEffectBehaviour_t813403937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnSetReplayState()
extern "C"  void NcEffectBehaviour_OnSetReplayState_m1358810843 (NcEffectBehaviour_t813403937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::OnResetReplayStage(System.Boolean)
extern "C"  void NcEffectBehaviour_OnResetReplayStage_m223322104 (NcEffectBehaviour_t813403937 * __this, bool ___bClearOldParticle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectBehaviour::.cctor()
extern "C"  void NcEffectBehaviour__cctor_m3974450835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
