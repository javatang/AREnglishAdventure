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

// NgMath/EasingFunction
struct EasingFunction_t230141997;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void NgMath/EasingFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void EasingFunction__ctor_m3881307274 (EasingFunction_t230141997 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath/EasingFunction::Invoke(System.Single,System.Single,System.Single)
extern "C"  float EasingFunction_Invoke_m1041192071 (EasingFunction_t230141997 * __this, float ___start0, float ___end1, float ___Value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult NgMath/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EasingFunction_BeginInvoke_m1916580870 (EasingFunction_t230141997 * __this, float ___start0, float ___end1, float ___Value2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgMath/EasingFunction::EndInvoke(System.IAsyncResult)
extern "C"  float EasingFunction_EndInvoke_m3126347662 (EasingFunction_t230141997 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
