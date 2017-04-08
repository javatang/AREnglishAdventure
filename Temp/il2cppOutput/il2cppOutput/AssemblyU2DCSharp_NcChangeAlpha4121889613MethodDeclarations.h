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

// NcChangeAlpha
struct NcChangeAlpha_t4121889613;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void NcChangeAlpha::.ctor()
extern "C"  void NcChangeAlpha__ctor_m2008926512 (NcChangeAlpha_t4121889613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcChangeAlpha NcChangeAlpha::SetChangeTime(UnityEngine.GameObject,System.Single,System.Single,System.Single,System.Single)
extern "C"  NcChangeAlpha_t4121889613 * NcChangeAlpha_SetChangeTime_m1746048001 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___baseGameObject0, float ___fLifeTime1, float ___fChangeTime2, float ___fFromMeshAlphaValue3, float ___fToMeshAlphaValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::SetChangeTime(System.Single,System.Single,System.Single,System.Single)
extern "C"  void NcChangeAlpha_SetChangeTime_m3178592477 (NcChangeAlpha_t4121889613 * __this, float ___fDelayTime0, float ___fChangeTime1, float ___fFromAlphaValue2, float ___fToAlphaValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::Restart()
extern "C"  void NcChangeAlpha_Restart_m1247141163 (NcChangeAlpha_t4121889613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::Awake()
extern "C"  void NcChangeAlpha_Awake_m2116554345 (NcChangeAlpha_t4121889613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::Start()
extern "C"  void NcChangeAlpha_Start_m2985391848 (NcChangeAlpha_t4121889613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::Update()
extern "C"  void NcChangeAlpha_Update_m3089776845 (NcChangeAlpha_t4121889613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::StartChange()
extern "C"  void NcChangeAlpha_StartChange_m2848179488 (NcChangeAlpha_t4121889613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::ChangeToAlpha(System.Single)
extern "C"  void NcChangeAlpha_ChangeToAlpha_m1315224708 (NcChangeAlpha_t4121889613 * __this, float ___fElapsedRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcChangeAlpha_OnUpdateEffectSpeed_m4100548900 (NcChangeAlpha_t4121889613 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::OnSetReplayState()
extern "C"  void NcChangeAlpha_OnSetReplayState_m2923610167 (NcChangeAlpha_t4121889613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcChangeAlpha::OnResetReplayStage(System.Boolean)
extern "C"  void NcChangeAlpha_OnResetReplayStage_m2484765644 (NcChangeAlpha_t4121889613 * __this, bool ___bClearOldParticle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
