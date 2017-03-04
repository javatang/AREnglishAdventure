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

// NgObject
struct NgObject_t2319100044;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Component
struct Component_t3819376471;
// System.Type
struct Type_t;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// System.Collections.SortedList
struct SortedList_t3004938869;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_Type1303803226.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"

// System.Void NgObject::.ctor()
extern "C"  void NgObject__ctor_m137295743 (NgObject_t2319100044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C"  void NgObject_SetActive_m54051446 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, bool ___bActive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::SetActiveRecursively(UnityEngine.GameObject,System.Boolean)
extern "C"  void NgObject_SetActiveRecursively_m613118993 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, bool ___bActive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgObject::IsActive(UnityEngine.GameObject)
extern "C"  bool NgObject_IsActive_m136242705 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m2909669759 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefabObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m837302289 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___parent0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.MonoBehaviour,System.String)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m600384610 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___parent0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.Transform,System.String)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m3510406808 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___parent0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m3241421199 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___parent0, GameObject_t1756533147 * ___prefabObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.MonoBehaviour,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m428317766 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___parent0, GameObject_t1756533147 * ___prefabObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.Transform,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m3861247672 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___parent0, GameObject_t1756533147 * ___prefabObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m1762005837 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___parent0, GameObject_t1756533147 * ___prefabObj1, Vector3_t2243707580  ___pos2, Quaternion_t4030073918  ___rot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.MonoBehaviour,UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m2948833948 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___parent0, GameObject_t1756533147 * ___prefabObj1, Vector3_t2243707580  ___pos2, Quaternion_t4030073918  ___rot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::CreateGameObject(UnityEngine.Transform,UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1756533147 * NgObject_CreateGameObject_m2052917802 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___parent0, GameObject_t1756533147 * ___prefabObj1, Vector3_t2243707580  ___pos2, Quaternion_t4030073918  ___rot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::HideAllChildObject(UnityEngine.GameObject)
extern "C"  void NgObject_HideAllChildObject_m1404597841 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::RemoveAllChildObject(UnityEngine.GameObject,System.Boolean)
extern "C"  void NgObject_RemoveAllChildObject_m386897196 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___parent0, bool ___bImmediate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component NgObject::CreateComponent(UnityEngine.Transform,System.Type)
extern "C"  Component_t3819376471 * NgObject_CreateComponent_m4144485227 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___parent0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component NgObject::CreateComponent(UnityEngine.MonoBehaviour,System.Type)
extern "C"  Component_t3819376471 * NgObject_CreateComponent_m498547261 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___parent0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component NgObject::CreateComponent(UnityEngine.GameObject,System.Type)
extern "C"  Component_t3819376471 * NgObject_CreateComponent_m1251952520 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___parent0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform NgObject::FindTransform(UnityEngine.Transform,System.String)
extern "C"  Transform_t3275118058 * NgObject_FindTransform_m3437921655 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___rootTrans0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgObject::FindTransform(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  bool NgObject_FindTransform_m1219434722 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___rootTrans0, Transform_t3275118058 * ___findTrans1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material NgObject::ChangeMeshMaterial(UnityEngine.Transform,UnityEngine.Material)
extern "C"  Material_t193706927 * NgObject_ChangeMeshMaterial_m1548338497 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, Material_t193706927 * ___newMat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::ChangeSkinnedMeshColor(UnityEngine.Transform,UnityEngine.Color)
extern "C"  void NgObject_ChangeSkinnedMeshColor_m460125458 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::ChangeMeshColor(UnityEngine.Transform,UnityEngine.Color)
extern "C"  void NgObject_ChangeMeshColor_m1381504010 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::ChangeSkinnedMeshAlpha(UnityEngine.Transform,System.Single)
extern "C"  void NgObject_ChangeSkinnedMeshAlpha_m3444441938 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, float ___alpha1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::ChangeMeshAlpha(UnityEngine.Transform,System.Single)
extern "C"  void NgObject_ChangeMeshAlpha_m2683694738 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, float ___alpha1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] NgObject::GetChilds(UnityEngine.Transform)
extern "C"  TransformU5BU5D_t3764228911* NgObject_GetChilds_m547158297 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___parentObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.SortedList NgObject::GetChildsSortList(UnityEngine.Transform,System.Boolean,System.Boolean)
extern "C"  SortedList_t3004938869 * NgObject_GetChildsSortList_m2910261837 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___parentObj0, bool ___bSub1, bool ___bOnlyActive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::FindObjectWithTag(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t1756533147 * NgObject_FindObjectWithTag_m3788359714 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___rootObj0, String_t* ___findTag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NgObject::FindObjectWithLayer(UnityEngine.GameObject,System.Int32)
extern "C"  GameObject_t1756533147 * NgObject_FindObjectWithLayer_m2460602006 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___rootObj0, int32_t ___nFindLayer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::ChangeLayerWithChild(UnityEngine.GameObject,System.Int32)
extern "C"  void NgObject_ChangeLayerWithChild_m3862334679 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___rootObj0, int32_t ___nLayer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::GetMeshInfo(UnityEngine.GameObject,System.Boolean,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NgObject_GetMeshInfo_m1563256590 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___selObj0, bool ___bInChildren1, int32_t* ___nVertices2, int32_t* ___nTriangles3, int32_t* ___nMeshCount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NgObject::GetMeshInfo(UnityEngine.Mesh,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NgObject_GetMeshInfo_m4237561347 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, int32_t* ___nVertices1, int32_t* ___nTriangles2, int32_t* ___nMeshCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
