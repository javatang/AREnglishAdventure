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

// NgAnimation
struct NgAnimation_t328838225;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animation2068071072.h"
#include "UnityEngine_UnityEngine_AnimationClip3510324950.h"

// System.Void NgAnimation::.ctor()
extern "C"  void NgAnimation__ctor_m415398882 (NgAnimation_t328838225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationClip NgAnimation::SetAnimation(UnityEngine.Animation,System.Int32,UnityEngine.AnimationClip)
extern "C"  AnimationClip_t3510324950 * NgAnimation_SetAnimation_m931454959 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___tarAnimation0, int32_t ___tarIndex1, AnimationClip_t3510324950 * ___srcClip2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState NgAnimation::GetAnimationByIndex(UnityEngine.Animation,System.Int32)
extern "C"  AnimationState_t1303741697 * NgAnimation_GetAnimationByIndex_m1993425718 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___anim0, int32_t ___nIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
