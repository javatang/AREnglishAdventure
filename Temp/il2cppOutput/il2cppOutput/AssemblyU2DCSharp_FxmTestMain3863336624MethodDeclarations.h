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

// FxmTestMain
struct FxmTestMain_t3863336624;
// FxmTestMouse
struct FxmTestMouse_t3565211952;
// FxmTestControls
struct FxmTestControls_t64800591;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void FxmTestMain::.ctor()
extern "C"  void FxmTestMain__ctor_m2029858585 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FxmTestMouse FxmTestMain::GetFXMakerMouse()
extern "C"  FxmTestMouse_t3565211952 * FxmTestMain_GetFXMakerMouse_m3297715863 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FxmTestControls FxmTestMain::GetFXMakerControls()
extern "C"  FxmTestControls_t64800591 * FxmTestMain_GetFXMakerControls_m3596166051 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::Awake()
extern "C"  void FxmTestMain_Awake_m2232771328 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::OnEnable()
extern "C"  void FxmTestMain_OnEnable_m2447534337 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::Start()
extern "C"  void FxmTestMain_Start_m1363928673 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::Update()
extern "C"  void FxmTestMain_Update_m284295710 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::OnGUI()
extern "C"  void FxmTestMain_OnGUI_m2130984719 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::ChangeEffect(System.Boolean)
extern "C"  void FxmTestMain_ChangeEffect_m1238019783 (FxmTestMain_t3863336624 * __this, bool ___bNext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FxmTestMain::ChangeGroup(System.Boolean)
extern "C"  bool FxmTestMain_ChangeGroup_m2507128207 (FxmTestMain_t3863336624 * __this, bool ___bNext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FxmTestMain::IsCurrentEffectObject()
extern "C"  bool FxmTestMain_IsCurrentEffectObject_m2835899794 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FxmTestMain::GetOriginalEffectObject()
extern "C"  GameObject_t1756533147 * FxmTestMain_GetOriginalEffectObject_m1224583871 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::ChangeRoot_OriginalEffectObject(UnityEngine.GameObject)
extern "C"  void FxmTestMain_ChangeRoot_OriginalEffectObject_m3992548541 (FxmTestMain_t3863336624 * __this, GameObject_t1756533147 * ___newRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::ChangeRoot_InstanceEffectObject(UnityEngine.GameObject)
extern "C"  void FxmTestMain_ChangeRoot_InstanceEffectObject_m2557794377 (FxmTestMain_t3863336624 * __this, GameObject_t1756533147 * ___newRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FxmTestMain::GetInstanceEffectObject()
extern "C"  GameObject_t1756533147 * FxmTestMain_GetInstanceEffectObject_m2641084335 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::ClearCurrentEffectObject(UnityEngine.GameObject,System.Boolean)
extern "C"  void FxmTestMain_ClearCurrentEffectObject_m2561654588 (FxmTestMain_t3863336624 * __this, GameObject_t1756533147 * ___effectRoot0, bool ___bClearEventObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMain::CreateCurrentInstanceEffect(System.Boolean)
extern "C"  void FxmTestMain_CreateCurrentInstanceEffect_m3070337045 (FxmTestMain_t3863336624 * __this, bool ___bRunAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FxmTestMain::GetInstanceRoot()
extern "C"  GameObject_t1756533147 * FxmTestMain_GetInstanceRoot_m3960947551 (FxmTestMain_t3863336624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FxmTestMain::CreateCurrentInstanceEffect(UnityEngine.GameObject)
extern "C"  bool FxmTestMain_CreateCurrentInstanceEffect_m2600706984 (FxmTestMain_t3863336624 * __this, GameObject_t1756533147 * ___gameObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
