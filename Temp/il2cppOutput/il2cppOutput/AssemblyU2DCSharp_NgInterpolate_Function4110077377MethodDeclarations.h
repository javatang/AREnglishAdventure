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

// NgInterpolate/Function
struct Function_t4110077377;
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

// System.Void NgInterpolate/Function::.ctor(System.Object,System.IntPtr)
extern "C"  void Function__ctor_m3016059798 (Function_t4110077377 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate/Function::Invoke(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Function_Invoke_m3033303336 (Function_t4110077377 * __this, float ___a0, float ___b1, float ___c2, float ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult NgInterpolate/Function::BeginInvoke(System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Function_BeginInvoke_m382529079 (Function_t4110077377 * __this, float ___a0, float ___b1, float ___c2, float ___d3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate/Function::EndInvoke(System.IAsyncResult)
extern "C"  float Function_EndInvoke_m3837140350 (Function_t4110077377 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
