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

// NgInterpolate
struct NgInterpolate_t4133051006;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t2368636977;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// NgInterpolate/Function
struct Function_t4110077377;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t2535834625;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_NgInterpolate_Function4110077377.h"
#include "AssemblyU2DCSharp_NgInterpolate_EaseType2535291765.h"

// System.Void NgInterpolate::.ctor()
extern "C"  void NgInterpolate__ctor_m4037640929 (NgInterpolate_t4133051006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::Identity(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  NgInterpolate_Identity_m1328055542 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::TransformDotPosition(UnityEngine.Transform)
extern "C"  Vector3_t2243707580  NgInterpolate_TransformDotPosition_m3075239884 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Single> NgInterpolate::NewTimer(System.Single)
extern "C"  Il2CppObject* NgInterpolate_NewTimer_m3865538352 (Il2CppObject * __this /* static, unused */, float ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Single> NgInterpolate::NewCounter(System.Int32,System.Int32,System.Int32)
extern "C"  Il2CppObject* NgInterpolate_NewCounter_m1629286333 (Il2CppObject * __this /* static, unused */, int32_t ___start0, int32_t ___end1, int32_t ___step2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NgInterpolate::NewEase(NgInterpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Il2CppObject * NgInterpolate_NewEase_m2714912395 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, Vector3_t2243707580  ___start1, Vector3_t2243707580  ___end2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NgInterpolate::NewEase(NgInterpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  Il2CppObject * NgInterpolate_NewEase_m3769416519 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, Vector3_t2243707580  ___start1, Vector3_t2243707580  ___end2, int32_t ___slices3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NgInterpolate::NewEase(NgInterpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Collections.Generic.IEnumerable`1<System.Single>)
extern "C"  Il2CppObject * NgInterpolate_NewEase_m2961326217 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, Vector3_t2243707580  ___start1, Vector3_t2243707580  ___end2, float ___total3, Il2CppObject* ___driver4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::Ease(NgInterpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t2243707580  NgInterpolate_Ease_m13196828 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, Vector3_t2243707580  ___start1, Vector3_t2243707580  ___distance2, float ___elapsedTime3, float ___duration4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NgInterpolate/Function NgInterpolate::Ease(NgInterpolate/EaseType)
extern "C"  Function_t4110077377 * NgInterpolate_Ease_m4102275354 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewBezier(NgInterpolate/Function,UnityEngine.Transform[],System.Single)
extern "C"  Il2CppObject* NgInterpolate_NewBezier_m3460874602 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, TransformU5BU5D_t3764228911* ___nodes1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewBezier(NgInterpolate/Function,UnityEngine.Transform[],System.Int32)
extern "C"  Il2CppObject* NgInterpolate_NewBezier_m1315996648 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, TransformU5BU5D_t3764228911* ___nodes1, int32_t ___slices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewBezier(NgInterpolate/Function,UnityEngine.Vector3[],System.Single)
extern "C"  Il2CppObject* NgInterpolate_NewBezier_m2861883842 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, Vector3U5BU5D_t1172311765* ___points1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewBezier(NgInterpolate/Function,UnityEngine.Vector3[],System.Int32)
extern "C"  Il2CppObject* NgInterpolate_NewBezier_m2844072320 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, Vector3U5BU5D_t1172311765* ___points1, int32_t ___slices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::Bezier(NgInterpolate/Function,UnityEngine.Vector3[],System.Single,System.Single)
extern "C"  Vector3_t2243707580  NgInterpolate_Bezier_m2471439478 (Il2CppObject * __this /* static, unused */, Function_t4110077377 * ___ease0, Vector3U5BU5D_t1172311765* ___points1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewCatmullRom(UnityEngine.Transform[],System.Int32,System.Boolean)
extern "C"  Il2CppObject* NgInterpolate_NewCatmullRom_m3822218749 (Il2CppObject * __this /* static, unused */, TransformU5BU5D_t3764228911* ___nodes0, int32_t ___slices1, bool ___loop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewCatmullRom(UnityEngine.Vector3[],System.Int32,System.Boolean)
extern "C"  Il2CppObject* NgInterpolate_NewCatmullRom_m3722209071 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t1172311765* ___points0, int32_t ___slices1, bool ___loop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t2243707580  NgInterpolate_CatmullRom_m3064135049 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___previous0, Vector3_t2243707580  ___start1, Vector3_t2243707580  ___end2, Vector3_t2243707580  ___next3, float ___elapsedTime4, float ___duration5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::Linear(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_Linear_m3885145440 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInQuad(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInQuad_m2046263679 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutQuad(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseOutQuad_m3850539560 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutQuad(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInOutQuad_m1319453361 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInCubic(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInCubic_m376943952 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutCubic(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseOutCubic_m2197518957 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutCubic(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInOutCubic_m2672520490 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInQuart(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInQuart_m926496153 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutQuart(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseOutQuart_m2282164936 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutQuart(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInOutQuart_m800334043 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInQuint(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInQuint_m271823373 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutQuint(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseOutQuint_m3775660852 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutQuint(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInOutQuint_m239860455 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInSine(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInSine_m2397088611 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutSine(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseOutSine_m1358990538 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutSine(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInOutSine_m1910344709 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInExpo(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInExpo_m1101994096 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutExpo(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseOutExpo_m4167516357 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutExpo(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInOutExpo_m72217622 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInCirc(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInCirc_m2870922529 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutCirc(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseOutCirc_m980462880 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutCirc(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NgInterpolate_EaseInOutCirc_m1927671619 (Il2CppObject * __this /* static, unused */, float ___start0, float ___distance1, float ___elapsedTime2, float ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
