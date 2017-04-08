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

// NcEffectAniBehaviour
struct NcEffectAniBehaviour_t2396724283;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"

// System.Void NcEffectAniBehaviour::.ctor()
extern "C"  void NcEffectAniBehaviour__ctor_m3189044834 (NcEffectAniBehaviour_t2396724283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::SetCallBackEndAnimation(UnityEngine.GameObject)
extern "C"  void NcEffectAniBehaviour_SetCallBackEndAnimation_m4166044090 (NcEffectAniBehaviour_t2396724283 * __this, GameObject_t1756533147 * ___callBackGameObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::SetCallBackEndAnimation(UnityEngine.GameObject,System.String)
extern "C"  void NcEffectAniBehaviour_SetCallBackEndAnimation_m2695134690 (NcEffectAniBehaviour_t2396724283 * __this, GameObject_t1756533147 * ___callBackGameObj0, String_t* ___nameFunction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcEffectAniBehaviour::IsStartAnimation()
extern "C"  bool NcEffectAniBehaviour_IsStartAnimation_m967314048 (NcEffectAniBehaviour_t2396724283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcEffectAniBehaviour::IsEndAnimation()
extern "C"  bool NcEffectAniBehaviour_IsEndAnimation_m2378223473 (NcEffectAniBehaviour_t2396724283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::InitAnimationTimer()
extern "C"  void NcEffectAniBehaviour_InitAnimationTimer_m1602722233 (NcEffectAniBehaviour_t2396724283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::ResetAnimation()
extern "C"  void NcEffectAniBehaviour_ResetAnimation_m2437280729 (NcEffectAniBehaviour_t2396724283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::PauseAnimation()
extern "C"  void NcEffectAniBehaviour_PauseAnimation_m2552600040 (NcEffectAniBehaviour_t2396724283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::ResumeAnimation()
extern "C"  void NcEffectAniBehaviour_ResumeAnimation_m3741658993 (NcEffectAniBehaviour_t2396724283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::MoveAnimation(System.Single)
extern "C"  void NcEffectAniBehaviour_MoveAnimation_m4016838032 (NcEffectAniBehaviour_t2396724283 * __this, float ___fElapsedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::OnEndAnimation()
extern "C"  void NcEffectAniBehaviour_OnEndAnimation_m2044667060 (NcEffectAniBehaviour_t2396724283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
