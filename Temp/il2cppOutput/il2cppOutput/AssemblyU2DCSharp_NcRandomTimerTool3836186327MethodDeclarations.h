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

// NcRandomTimerTool
struct NcRandomTimerTool_t3836186327;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void NcRandomTimerTool::.ctor()
extern "C"  void NcRandomTimerTool__ctor_m2206673406 (NcRandomTimerTool_t3836186327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcRandomTimerTool::UpdateRandomTimer(System.Boolean)
extern "C"  bool NcRandomTimerTool_UpdateRandomTimer_m3527446762 (NcRandomTimerTool_t3836186327 * __this, bool ___bReset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcRandomTimerTool::UpdateRandomTimer()
extern "C"  bool NcRandomTimerTool_UpdateRandomTimer_m3768117147 (NcRandomTimerTool_t3836186327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::ResetUpdateTime()
extern "C"  void NcRandomTimerTool_ResetUpdateTime_m4141280991 (NcRandomTimerTool_t3836186327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcRandomTimerTool::GetCallCount()
extern "C"  int32_t NcRandomTimerTool_GetCallCount_m1688122871 (NcRandomTimerTool_t3836186327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object NcRandomTimerTool::GetArgObject()
extern "C"  Il2CppObject * NcRandomTimerTool_GetArgObject_m2379218574 (NcRandomTimerTool_t3836186327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcRandomTimerTool::GetElapsedRate()
extern "C"  float NcRandomTimerTool_GetElapsedRate_m3990961664 (NcRandomTimerTool_t3836186327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single)
extern "C"  void NcRandomTimerTool_SetTimer_m1220922703 (NcRandomTimerTool_t3836186327 * __this, float ___fStartTime0, float ___fRandomTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Single)
extern "C"  void NcRandomTimerTool_SetTimer_m2802943478 (NcRandomTimerTool_t3836186327 * __this, float ___fStartTime0, float ___fRandomTime1, float ___fMinIntervalTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Single,System.Int32)
extern "C"  void NcRandomTimerTool_SetTimer_m459123619 (NcRandomTimerTool_t3836186327 * __this, float ___fStartTime0, float ___fRandomTime1, float ___fMinIntervalTime2, int32_t ___nRepeatCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Object)
extern "C"  void NcRandomTimerTool_SetTimer_m3888071461 (NcRandomTimerTool_t3836186327 * __this, float ___fStartTime0, float ___fRandomTime1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Single,System.Object)
extern "C"  void NcRandomTimerTool_SetTimer_m1713430108 (NcRandomTimerTool_t3836186327 * __this, float ___fStartTime0, float ___fRandomTime1, float ___fMinIntervalTime2, Il2CppObject * ___arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetTimer(System.Single,System.Single,System.Single,System.Int32,System.Object)
extern "C"  void NcRandomTimerTool_SetTimer_m1988950929 (NcRandomTimerTool_t3836186327 * __this, float ___fStartTime0, float ___fRandomTime1, float ___fMinIntervalTime2, int32_t ___nRepeatCount3, Il2CppObject * ___arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single)
extern "C"  void NcRandomTimerTool_SetRelTimer_m3252098352 (NcRandomTimerTool_t3836186327 * __this, float ___fStartRelTime0, float ___fRandomTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Single)
extern "C"  void NcRandomTimerTool_SetRelTimer_m1521916741 (NcRandomTimerTool_t3836186327 * __this, float ___fStartRelTime0, float ___fRandomTime1, float ___fMinIntervalTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Single,System.Int32)
extern "C"  void NcRandomTimerTool_SetRelTimer_m3321206786 (NcRandomTimerTool_t3836186327 * __this, float ___fStartRelTime0, float ___fRandomTime1, float ___fMinIntervalTime2, int32_t ___nRepeatCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Object)
extern "C"  void NcRandomTimerTool_SetRelTimer_m974204642 (NcRandomTimerTool_t3836186327 * __this, float ___fStartRelTime0, float ___fRandomTime1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Single,System.Object)
extern "C"  void NcRandomTimerTool_SetRelTimer_m2300918407 (NcRandomTimerTool_t3836186327 * __this, float ___fStartRelTime0, float ___fRandomTime1, float ___fMinIntervalTime2, Il2CppObject * ___arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcRandomTimerTool::SetRelTimer(System.Single,System.Single,System.Single,System.Int32,System.Object)
extern "C"  void NcRandomTimerTool_SetRelTimer_m556743352 (NcRandomTimerTool_t3836186327 * __this, float ___fStartRelTime0, float ___fRandomTime1, float ___fMinIntervalTime2, int32_t ___nRepeatCount3, Il2CppObject * ___arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
