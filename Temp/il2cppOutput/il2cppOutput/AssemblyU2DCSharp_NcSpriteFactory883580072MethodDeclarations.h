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

// NcSpriteFactory
struct NcSpriteFactory_t883580072;
// NcSpriteFactory/NcSpriteNode
struct NcSpriteNode_t368222601;
// System.String
struct String_t;
// NcEffectBehaviour
struct NcEffectBehaviour_t813403937;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// NcSpriteAnimation
struct NcSpriteAnimation_t3095587620;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// NcSpriteFactory/NcFrameInfo
struct NcFrameInfo_t2402943951;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_NcSpriteNode368222601.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_NcSpriteAnimation3095587620.h"
#include "UnityEngine_UnityEngine_MeshFilter3026937449.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_NcFrameInfo2402943951.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_ALIGN_TYPE1276270715.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_MESH_TYPE826724577.h"

// System.Void NcSpriteFactory::.ctor()
extern "C"  void NcSpriteFactory__ctor_m1360331799 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteFactory::IsUnused(System.Int32)
extern "C"  bool NcSpriteFactory_IsUnused_m2421509746 (NcSpriteFactory_t883580072 * __this, int32_t ___nNodeIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcSpriteFactory/NcSpriteNode NcSpriteFactory::GetSpriteNode(System.Int32)
extern "C"  NcSpriteNode_t368222601 * NcSpriteFactory_GetSpriteNode_m3041309493 (NcSpriteFactory_t883580072 * __this, int32_t ___nIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcSpriteFactory/NcSpriteNode NcSpriteFactory::GetSpriteNode(System.String)
extern "C"  NcSpriteNode_t368222601 * NcSpriteFactory_GetSpriteNode_m2896224966 (NcSpriteFactory_t883580072 * __this, String_t* ___spriteName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::GetSpriteNodeIndex(System.String)
extern "C"  int32_t NcSpriteFactory_GetSpriteNodeIndex_m660562160 (NcSpriteFactory_t883580072 * __this, String_t* ___spriteName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcSpriteFactory/NcSpriteNode NcSpriteFactory::SetSpriteNode(System.Int32,NcSpriteFactory/NcSpriteNode)
extern "C"  NcSpriteNode_t368222601 * NcSpriteFactory_SetSpriteNode_m2040879672 (NcSpriteFactory_t883580072 * __this, int32_t ___nIndex0, NcSpriteNode_t368222601 * ___newInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::AddSpriteNode()
extern "C"  int32_t NcSpriteFactory_AddSpriteNode_m3438733609 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::AddSpriteNode(NcSpriteFactory/NcSpriteNode)
extern "C"  int32_t NcSpriteFactory_AddSpriteNode_m3095711110 (NcSpriteFactory_t883580072 * __this, NcSpriteNode_t368222601 * ___addSpriteNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::DeleteSpriteNode(System.Int32)
extern "C"  void NcSpriteFactory_DeleteSpriteNode_m1996740248 (NcSpriteFactory_t883580072 * __this, int32_t ___nIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::MoveSpriteNode(System.Int32,System.Int32)
extern "C"  void NcSpriteFactory_MoveSpriteNode_m4209246891 (NcSpriteFactory_t883580072 * __this, int32_t ___nSrcIndex0, int32_t ___nTarIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::ClearAllSpriteNode()
extern "C"  void NcSpriteFactory_ClearAllSpriteNode_m506980146 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::GetSpriteNodeCount()
extern "C"  int32_t NcSpriteFactory_GetSpriteNodeCount_m81537801 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcSpriteFactory/NcSpriteNode NcSpriteFactory::GetCurrentSpriteNode()
extern "C"  NcSpriteNode_t368222601 * NcSpriteFactory_GetCurrentSpriteNode_m301547525 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NcSpriteFactory::GetSpriteUvRect(System.Int32,System.Int32)
extern "C"  Rect_t3681755626  NcSpriteFactory_GetSpriteUvRect_m799411647 (NcSpriteFactory_t883580072 * __this, int32_t ___nStriteIndex0, int32_t ___nFrameIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteFactory::IsValidFactory()
extern "C"  bool NcSpriteFactory_IsValidFactory_m581983359 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::Awake()
extern "C"  void NcSpriteFactory_Awake_m2554829032 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcEffectBehaviour NcSpriteFactory::SetSprite(System.Int32)
extern "C"  NcEffectBehaviour_t813403937 * NcSpriteFactory_SetSprite_m1495940313 (NcSpriteFactory_t883580072 * __this, int32_t ___nNodeIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcEffectBehaviour NcSpriteFactory::SetSprite(System.String)
extern "C"  NcEffectBehaviour_t813403937 * NcSpriteFactory_SetSprite_m1390115034 (NcSpriteFactory_t883580072 * __this, String_t* ___spriteName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcEffectBehaviour NcSpriteFactory::SetSprite(System.Int32,System.Boolean)
extern "C"  NcEffectBehaviour_t813403937 * NcSpriteFactory_SetSprite_m602208468 (NcSpriteFactory_t883580072 * __this, int32_t ___nNodeIndex0, bool ___bRunImmediate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::GetCurrentSpriteIndex()
extern "C"  int32_t NcSpriteFactory_GetCurrentSpriteIndex_m849745197 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteFactory::IsEndSprite()
extern "C"  bool NcSpriteFactory_IsEndSprite_m2354982335 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::CreateEffectObject()
extern "C"  void NcSpriteFactory_CreateEffectObject_m2307136409 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcSpriteFactory::CreateSpriteEffect(System.Int32,UnityEngine.Transform)
extern "C"  GameObject_t1756533147 * NcSpriteFactory_CreateSpriteEffect_m1850492518 (NcSpriteFactory_t883580072 * __this, int32_t ___nSrcSpriteIndex0, Transform_t3275118058 * ___parentTrans1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::DestroyEffectObject()
extern "C"  void NcSpriteFactory_DestroyEffectObject_m1292065075 (NcSpriteFactory_t883580072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::CreateSoundObject(NcSpriteFactory/NcSpriteNode)
extern "C"  void NcSpriteFactory_CreateSoundObject_m3262249250 (NcSpriteFactory_t883580072 * __this, NcSpriteNode_t368222601 * ___ncSpriteNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::OnChangingSprite(System.Int32,System.Int32)
extern "C"  void NcSpriteFactory_OnChangingSprite_m2363795172 (NcSpriteFactory_t883580072 * __this, int32_t ___nOldNodeIndex0, int32_t ___nNewNodeIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::OnAnimationStartFrame(NcSpriteAnimation)
extern "C"  void NcSpriteFactory_OnAnimationStartFrame_m2925895567 (NcSpriteFactory_t883580072 * __this, NcSpriteAnimation_t3095587620 * ___spriteCom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::OnAnimationChangingFrame(NcSpriteAnimation,System.Int32,System.Int32,System.Int32)
extern "C"  void NcSpriteFactory_OnAnimationChangingFrame_m884709145 (NcSpriteFactory_t883580072 * __this, NcSpriteAnimation_t3095587620 * ___spriteCom0, int32_t ___nOldIndex1, int32_t ___nNewIndex2, int32_t ___nLoopCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteFactory::OnAnimationLastFrame(NcSpriteAnimation,System.Int32)
extern "C"  bool NcSpriteFactory_OnAnimationLastFrame_m2249586298 (NcSpriteFactory_t883580072 * __this, NcSpriteAnimation_t3095587620 * ___spriteCom0, int32_t ___nLoopCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcSpriteFactory_OnUpdateEffectSpeed_m653085909 (NcSpriteFactory_t883580072 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::CreatePlane(UnityEngine.MeshFilter,System.Single,NcSpriteFactory/NcFrameInfo,System.Boolean,NcSpriteFactory/ALIGN_TYPE,NcSpriteFactory/MESH_TYPE,System.Single)
extern "C"  void NcSpriteFactory_CreatePlane_m2989728233 (Il2CppObject * __this /* static, unused */, MeshFilter_t3026937449 * ___meshFilter0, float ___fUvScale1, NcFrameInfo_t2402943951 * ___ncSpriteFrameInfo2, bool ___bTrimCenterAlign3, int32_t ___alignType4, int32_t ___m_MeshType5, float ___fHShowRate6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::CreateEmptyMesh(UnityEngine.MeshFilter)
extern "C"  void NcSpriteFactory_CreateEmptyMesh_m2188165777 (Il2CppObject * __this /* static, unused */, MeshFilter_t3026937449 * ___meshFilter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::UpdatePlane(UnityEngine.MeshFilter,System.Single,NcSpriteFactory/NcFrameInfo,System.Boolean,NcSpriteFactory/ALIGN_TYPE,System.Single)
extern "C"  void NcSpriteFactory_UpdatePlane_m3593594763 (Il2CppObject * __this /* static, unused */, MeshFilter_t3026937449 * ___meshFilter0, float ___fUvScale1, NcFrameInfo_t2402943951 * ___ncSpriteFrameInfo2, bool ___bTrimCenterAlign3, int32_t ___alignType4, float ___fHShowRate5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::UpdateMeshUVs(UnityEngine.MeshFilter,UnityEngine.Rect,NcSpriteFactory/ALIGN_TYPE,System.Single)
extern "C"  void NcSpriteFactory_UpdateMeshUVs_m4212109760 (Il2CppObject * __this /* static, unused */, MeshFilter_t3026937449 * ___meshFilter0, Rect_t3681755626  ___uv1, int32_t ___alignType2, float ___fHShowRate3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
