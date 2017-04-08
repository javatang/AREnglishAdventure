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

// NcDetachObject
struct NcDetachObject_t4019232197;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void NcDetachObject::.ctor()
extern "C"  void NcDetachObject__ctor_m1126389510 (NcDetachObject_t4019232197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcDetachObject NcDetachObject::Create(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  NcDetachObject_t4019232197 * NcDetachObject_Create_m1610750096 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___parentObj0, GameObject_t1756533147 * ___linkObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcDetachObject::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcDetachObject_OnUpdateEffectSpeed_m265785662 (NcDetachObject_t4019232197 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcDetachObject::OnSetActiveRecursively(System.Boolean)
extern "C"  void NcDetachObject_OnSetActiveRecursively_m1974481527 (NcDetachObject_t4019232197 * __this, bool ___bActive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
