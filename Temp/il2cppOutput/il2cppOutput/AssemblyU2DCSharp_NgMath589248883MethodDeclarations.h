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

// NgMath
struct NgMath_t589248883;
// NgMath/EasingFunction
struct EasingFunction_t230141997;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NgMath_EaseType358905644.h"

// System.Void NgMath::.ctor()
extern "C"  void NgMath__ctor_m3746960268 (NgMath_t589248883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NgMath/EasingFunction NgMath::GetEasingFunction(NgMath/EaseType)
extern "C"  EasingFunction_t230141997 * NgMath_GetEasingFunction_m3949791997 (Il2CppObject * __this /* static, unused */, int32_t ___easeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::linear(System.Single,System.Single,System.Single)
extern "C"  float NgMath_linear_m2074470082 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::clerp(System.Single,System.Single,System.Single)
extern "C"  float NgMath_clerp_m2500325453 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::spring(System.Single,System.Single,System.Single)
extern "C"  float NgMath_spring_m859575926 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInQuad(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInQuad_m2669943421 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutQuad(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutQuad_m1616691288 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutQuad_m1777096567 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInCubic(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInCubic_m268002124 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutCubic(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutCubic_m4234779583 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutCubic_m869494744 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInQuart(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInQuart_m521501099 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutQuart(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutQuart_m1657976338 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutQuart_m2460674217 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInQuint(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInQuint_m1316202231 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutQuint(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutQuint_m2294741246 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutQuint_m289833429 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInSine(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInSine_m1915646585 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutSine(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutSine_m3915591910 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutSine(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutSine_m469529051 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInExpo(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInExpo_m3784620650 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutExpo(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutExpo_m3035107191 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutExpo(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutExpo_m3256114734 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInCirc(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInCirc_m2534066127 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutCirc(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutCirc_m2841381560 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutCirc(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutCirc_m3952437381 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInBounce(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInBounce_m4086119082 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutBounce(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutBounce_m3811013985 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutBounce_m920176694 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInBack(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInBack_m875983231 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutBack(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutBack_m3721562440 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutBack(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutBack_m4284351509 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::punch(System.Single,System.Single)
extern "C"  float NgMath_punch_m1454314916 (Il2CppObject * __this /* static, unused */, float ___amplitude0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInElastic(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInElastic_m881060521 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeOutElastic(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeOutElastic_m17009390 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath::easeInOutElastic(System.Single,System.Single,System.Single)
extern "C"  float NgMath_easeInOutElastic_m3269369911 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
