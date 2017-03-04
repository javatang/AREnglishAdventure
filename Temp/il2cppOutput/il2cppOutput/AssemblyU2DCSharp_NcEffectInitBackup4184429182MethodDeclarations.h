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

// NcEffectInitBackup
struct NcEffectInitBackup_t4184429182;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// NcUvAnimation
struct NcUvAnimation_t3398882402;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_NcUvAnimation3398882402.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_MeshFilter3026937449.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void NcEffectInitBackup::.ctor()
extern "C"  void NcEffectInitBackup__ctor_m3808571629 (NcEffectInitBackup_t4184429182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::BackupTransform(UnityEngine.Transform)
extern "C"  void NcEffectInitBackup_BackupTransform_m3566154296 (NcEffectInitBackup_t4184429182 * __this, Transform_t3275118058 * ___targetTrans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::RestoreTransform()
extern "C"  void NcEffectInitBackup_RestoreTransform_m1951840249 (NcEffectInitBackup_t4184429182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::BackupMaterialColor(UnityEngine.GameObject,System.Boolean)
extern "C"  void NcEffectInitBackup_BackupMaterialColor_m1919053048 (NcEffectInitBackup_t4184429182 * __this, GameObject_t1756533147 * ___targetObj0, bool ___bRecursively1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::RestoreMaterialColor()
extern "C"  void NcEffectInitBackup_RestoreMaterialColor_m2747097363 (NcEffectInitBackup_t4184429182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::BackupUvAnimation(NcUvAnimation)
extern "C"  void NcEffectInitBackup_BackupUvAnimation_m3041512324 (NcEffectInitBackup_t4184429182 * __this, NcUvAnimation_t3398882402 * ___uvAniCom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::RestoreUvAnimation()
extern "C"  void NcEffectInitBackup_RestoreUvAnimation_m3134191192 (NcEffectInitBackup_t4184429182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::BackupMeshColor(UnityEngine.GameObject,System.Boolean)
extern "C"  void NcEffectInitBackup_BackupMeshColor_m2239370696 (NcEffectInitBackup_t4184429182 * __this, GameObject_t1756533147 * ___targetObj0, bool ___bRecursively1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::RestoreMeshColor()
extern "C"  void NcEffectInitBackup_RestoreMeshColor_m2238205987 (NcEffectInitBackup_t4184429182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NcEffectInitBackup::GetMeshColor(UnityEngine.MeshFilter)
extern "C"  Color_t2020392075  NcEffectInitBackup_GetMeshColor_m1072747734 (NcEffectInitBackup_t4184429182 * __this, MeshFilter_t3026937449 * ___mFilter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectInitBackup::SetMeshColor(UnityEngine.MeshFilter,UnityEngine.Color)
extern "C"  void NcEffectInitBackup_SetMeshColor_m3050595939 (NcEffectInitBackup_t4184429182 * __this, MeshFilter_t3026937449 * ___mFilter0, Color_t2020392075  ___tarColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NcEffectInitBackup::GetMaterialColorName(UnityEngine.Material)
extern "C"  String_t* NcEffectInitBackup_GetMaterialColorName_m2690190107 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
