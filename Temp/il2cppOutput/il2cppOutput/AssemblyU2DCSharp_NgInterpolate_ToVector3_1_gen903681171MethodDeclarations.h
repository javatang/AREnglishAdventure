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

// NgInterpolate/ToVector3`1<System.Object>
struct ToVector3_1_t903681171;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void NgInterpolate/ToVector3`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ToVector3_1__ctor_m2387564758_gshared (ToVector3_1_t903681171 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define ToVector3_1__ctor_m2387564758(__this, ___object0, ___method1, method) ((  void (*) (ToVector3_1_t903681171 *, Il2CppObject *, IntPtr_t, const MethodInfo*))ToVector3_1__ctor_m2387564758_gshared)(__this, ___object0, ___method1, method)
// UnityEngine.Vector3 NgInterpolate/ToVector3`1<System.Object>::Invoke(T)
extern "C"  Vector3_t2243707580  ToVector3_1_Invoke_m2702079556_gshared (ToVector3_1_t903681171 * __this, Il2CppObject * ___v0, const MethodInfo* method);
#define ToVector3_1_Invoke_m2702079556(__this, ___v0, method) ((  Vector3_t2243707580  (*) (ToVector3_1_t903681171 *, Il2CppObject *, const MethodInfo*))ToVector3_1_Invoke_m2702079556_gshared)(__this, ___v0, method)
// System.IAsyncResult NgInterpolate/ToVector3`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ToVector3_1_BeginInvoke_m1065753605_gshared (ToVector3_1_t903681171 * __this, Il2CppObject * ___v0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define ToVector3_1_BeginInvoke_m1065753605(__this, ___v0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (ToVector3_1_t903681171 *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))ToVector3_1_BeginInvoke_m1065753605_gshared)(__this, ___v0, ___callback1, ___object2, method)
// UnityEngine.Vector3 NgInterpolate/ToVector3`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t2243707580  ToVector3_1_EndInvoke_m291811014_gshared (ToVector3_1_t903681171 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define ToVector3_1_EndInvoke_m291811014(__this, ___result0, method) ((  Vector3_t2243707580  (*) (ToVector3_1_t903681171 *, Il2CppObject *, const MethodInfo*))ToVector3_1_EndInvoke_m291811014_gshared)(__this, ___result0, method)
