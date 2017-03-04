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

// NgMaterial
struct NgMaterial_t770794970;
// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"

// System.Void NgMaterial::.ctor()
extern "C"  void NgMaterial__ctor_m1590152293 (NgMaterial_t770794970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgMaterial::IsMaterialColor(UnityEngine.Material)
extern "C"  bool NgMaterial_IsMaterialColor_m2723947629 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgMaterial::GetMaterialColorName(UnityEngine.Material)
extern "C"  String_t* NgMaterial_GetMaterialColorName_m1744227871 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NgMaterial::GetMaterialColor(UnityEngine.Material)
extern "C"  Color_t2020392075  NgMaterial_GetMaterialColor_m3874304556 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NgMaterial::GetMaterialColor(UnityEngine.Material,UnityEngine.Color)
extern "C"  Color_t2020392075  NgMaterial_GetMaterialColor_m773182 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, Color_t2020392075  ___defaultColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgMaterial::SetMaterialColor(UnityEngine.Material,UnityEngine.Color)
extern "C"  void NgMaterial_SetMaterialColor_m1635409955 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgMaterial::IsSameMaterial(UnityEngine.Material,UnityEngine.Material,System.Boolean)
extern "C"  bool NgMaterial_IsSameMaterial_m4282422789 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat10, Material_t193706927 * ___mat21, bool ___bCheckAddress2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgMaterial::CopyMaterialArgument(UnityEngine.Material,UnityEngine.Material)
extern "C"  void NgMaterial_CopyMaterialArgument_m421614772 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___srcMat0, Material_t193706927 * ___tarMat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgMaterial::IsSameColorProperty(UnityEngine.Material,UnityEngine.Material,System.String)
extern "C"  bool NgMaterial_IsSameColorProperty_m1922337281 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat10, Material_t193706927 * ___mat21, String_t* ___propertyName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgMaterial::CopyColorProperty(UnityEngine.Material,UnityEngine.Material,System.String)
extern "C"  void NgMaterial_CopyColorProperty_m1171462982 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___srcMat0, Material_t193706927 * ___tarMat1, String_t* ___propertyName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgMaterial::IsSameFloatProperty(UnityEngine.Material,UnityEngine.Material,System.String)
extern "C"  bool NgMaterial_IsSameFloatProperty_m623004572 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat10, Material_t193706927 * ___mat21, String_t* ___propertyName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture NgMaterial::GetTexture(UnityEngine.Material,System.Boolean)
extern "C"  Texture_t2243626319 * NgMaterial_GetTexture_m853541534 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, bool ___bMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgMaterial::SetMaskTexture(UnityEngine.Material,System.Boolean,UnityEngine.Texture)
extern "C"  void NgMaterial_SetMaskTexture_m3884991883 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, bool ___bMask1, Texture_t2243626319 * ___newTexture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgMaterial::IsMaskTexture(UnityEngine.Material)
extern "C"  bool NgMaterial_IsMaskTexture_m2558967510 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___tarMat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgMaterial::SetMaskTexture(UnityEngine.Material,UnityEngine.Texture)
extern "C"  void NgMaterial_SetMaskTexture_m657067378 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___tarMat0, Texture_t2243626319 * ___maskTex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture NgMaterial::GetMaskTexture(UnityEngine.Material)
extern "C"  Texture_t2243626319 * NgMaterial_GetMaskTexture_m3727813831 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
