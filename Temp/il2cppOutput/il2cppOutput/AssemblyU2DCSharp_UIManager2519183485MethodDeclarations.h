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

// UIManager
struct UIManager_t2519183485;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m896165536 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Start()
extern "C"  void UIManager_Start_m1848595224 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Update()
extern "C"  void UIManager_Update_m2888972381 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::ReActive(UnityEngine.GameObject)
extern "C"  void UIManager_ReActive_m3984561695 (UIManager_t2519183485 * __this, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::EventEnterAR()
extern "C"  void UIManager_EventEnterAR_m739765223 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::EventEnterMap()
extern "C"  void UIManager_EventEnterMap_m347264640 (UIManager_t2519183485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::NavToPoint(UnityEngine.Vector3)
extern "C"  void UIManager_NavToPoint_m3929704651 (UIManager_t2519183485 * __this, Vector3_t2243707580  ___destination0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::XFInitWithAppID(System.String)
extern "C"  void UIManager_XFInitWithAppID_m1388012452 (Il2CppObject * __this /* static, unused */, String_t* ___appid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::XFSpeak(System.String,System.String)
extern "C"  void UIManager_XFSpeak_m2741874418 (Il2CppObject * __this /* static, unused */, String_t* ___people0, String_t* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::XFState(System.String)
extern "C"  void UIManager_XFState_m3992847879 (Il2CppObject * __this /* static, unused */, String_t* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
