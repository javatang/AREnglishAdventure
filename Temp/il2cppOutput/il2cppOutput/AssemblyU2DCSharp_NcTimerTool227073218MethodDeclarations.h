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

// NcTimerTool
struct NcTimerTool_t227073218;

#include "codegen/il2cpp-codegen.h"

// System.Void NcTimerTool::.ctor()
extern "C"  void NcTimerTool__ctor_m3701986293 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetEngineTime()
extern "C"  float NcTimerTool_GetEngineTime_m3580788440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetEngineDeltaTime()
extern "C"  float NcTimerTool_GetEngineDeltaTime_m3035795122 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::InitSmoothTime()
extern "C"  void NcTimerTool_InitSmoothTime_m1360340140 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::UpdateSmoothTime(System.Single)
extern "C"  float NcTimerTool_UpdateSmoothTime_m1152554066 (NcTimerTool_t227073218 * __this, float ___fDeltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcTimerTool::IsUpdateTimer()
extern "C"  bool NcTimerTool_IsUpdateTimer_m786001825 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::UpdateTimer()
extern "C"  float NcTimerTool_UpdateTimer_m2240697473 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetTime()
extern "C"  float NcTimerTool_GetTime_m531507762 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetDeltaTime()
extern "C"  float NcTimerTool_GetDeltaTime_m2116053316 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetSmoothDeltaTime()
extern "C"  float NcTimerTool_GetSmoothDeltaTime_m411739358 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcTimerTool::IsEnable()
extern "C"  bool NcTimerTool_IsEnable_m1469657656 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::Start()
extern "C"  void NcTimerTool_Start_m3078464413 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::Reset(System.Single)
extern "C"  void NcTimerTool_Reset_m3882719909 (NcTimerTool_t227073218 * __this, float ___fElapsedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::Pause()
extern "C"  void NcTimerTool_Pause_m698582491 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::Resume()
extern "C"  void NcTimerTool_Resume_m778516718 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTimerTool::SetTimeScale(System.Single)
extern "C"  void NcTimerTool_SetTimeScale_m434152563 (NcTimerTool_t227073218 * __this, float ___fTimeScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTimerTool::GetTimeScale()
extern "C"  float NcTimerTool_GetTimeScale_m3992948646 (NcTimerTool_t227073218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
