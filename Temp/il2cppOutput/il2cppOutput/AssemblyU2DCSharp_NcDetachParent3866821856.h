#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// NcDetachObject
struct NcDetachObject_t4019232197;
// NcTransformTool
struct NcTransformTool_t1254871775;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcDetachParent
struct  NcDetachParent_t3866821856  : public NcEffectBehaviour_t813403937
{
public:
	// System.Boolean NcDetachParent::m_bFollowParentTransform
	bool ___m_bFollowParentTransform_9;
	// System.Boolean NcDetachParent::m_bParentHideToStartDestroy
	bool ___m_bParentHideToStartDestroy_10;
	// System.Single NcDetachParent::m_fSmoothDestroyTime
	float ___m_fSmoothDestroyTime_11;
	// System.Boolean NcDetachParent::m_bDisableEmit
	bool ___m_bDisableEmit_12;
	// System.Boolean NcDetachParent::m_bSmoothHide
	bool ___m_bSmoothHide_13;
	// System.Boolean NcDetachParent::m_bMeshFilterOnlySmoothHide
	bool ___m_bMeshFilterOnlySmoothHide_14;
	// System.Boolean NcDetachParent::m_bStartDetach
	bool ___m_bStartDetach_15;
	// System.Single NcDetachParent::m_fStartDestroyTime
	float ___m_fStartDestroyTime_16;
	// UnityEngine.GameObject NcDetachParent::m_ParentGameObject
	GameObject_t1756533147 * ___m_ParentGameObject_17;
	// NcDetachObject NcDetachParent::m_ncDetachObject
	NcDetachObject_t4019232197 * ___m_ncDetachObject_18;
	// NcTransformTool NcDetachParent::m_OriginalPos
	NcTransformTool_t1254871775 * ___m_OriginalPos_19;

public:
	inline static int32_t get_offset_of_m_bFollowParentTransform_9() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_bFollowParentTransform_9)); }
	inline bool get_m_bFollowParentTransform_9() const { return ___m_bFollowParentTransform_9; }
	inline bool* get_address_of_m_bFollowParentTransform_9() { return &___m_bFollowParentTransform_9; }
	inline void set_m_bFollowParentTransform_9(bool value)
	{
		___m_bFollowParentTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_bParentHideToStartDestroy_10() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_bParentHideToStartDestroy_10)); }
	inline bool get_m_bParentHideToStartDestroy_10() const { return ___m_bParentHideToStartDestroy_10; }
	inline bool* get_address_of_m_bParentHideToStartDestroy_10() { return &___m_bParentHideToStartDestroy_10; }
	inline void set_m_bParentHideToStartDestroy_10(bool value)
	{
		___m_bParentHideToStartDestroy_10 = value;
	}

	inline static int32_t get_offset_of_m_fSmoothDestroyTime_11() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_fSmoothDestroyTime_11)); }
	inline float get_m_fSmoothDestroyTime_11() const { return ___m_fSmoothDestroyTime_11; }
	inline float* get_address_of_m_fSmoothDestroyTime_11() { return &___m_fSmoothDestroyTime_11; }
	inline void set_m_fSmoothDestroyTime_11(float value)
	{
		___m_fSmoothDestroyTime_11 = value;
	}

	inline static int32_t get_offset_of_m_bDisableEmit_12() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_bDisableEmit_12)); }
	inline bool get_m_bDisableEmit_12() const { return ___m_bDisableEmit_12; }
	inline bool* get_address_of_m_bDisableEmit_12() { return &___m_bDisableEmit_12; }
	inline void set_m_bDisableEmit_12(bool value)
	{
		___m_bDisableEmit_12 = value;
	}

	inline static int32_t get_offset_of_m_bSmoothHide_13() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_bSmoothHide_13)); }
	inline bool get_m_bSmoothHide_13() const { return ___m_bSmoothHide_13; }
	inline bool* get_address_of_m_bSmoothHide_13() { return &___m_bSmoothHide_13; }
	inline void set_m_bSmoothHide_13(bool value)
	{
		___m_bSmoothHide_13 = value;
	}

	inline static int32_t get_offset_of_m_bMeshFilterOnlySmoothHide_14() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_bMeshFilterOnlySmoothHide_14)); }
	inline bool get_m_bMeshFilterOnlySmoothHide_14() const { return ___m_bMeshFilterOnlySmoothHide_14; }
	inline bool* get_address_of_m_bMeshFilterOnlySmoothHide_14() { return &___m_bMeshFilterOnlySmoothHide_14; }
	inline void set_m_bMeshFilterOnlySmoothHide_14(bool value)
	{
		___m_bMeshFilterOnlySmoothHide_14 = value;
	}

	inline static int32_t get_offset_of_m_bStartDetach_15() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_bStartDetach_15)); }
	inline bool get_m_bStartDetach_15() const { return ___m_bStartDetach_15; }
	inline bool* get_address_of_m_bStartDetach_15() { return &___m_bStartDetach_15; }
	inline void set_m_bStartDetach_15(bool value)
	{
		___m_bStartDetach_15 = value;
	}

	inline static int32_t get_offset_of_m_fStartDestroyTime_16() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_fStartDestroyTime_16)); }
	inline float get_m_fStartDestroyTime_16() const { return ___m_fStartDestroyTime_16; }
	inline float* get_address_of_m_fStartDestroyTime_16() { return &___m_fStartDestroyTime_16; }
	inline void set_m_fStartDestroyTime_16(float value)
	{
		___m_fStartDestroyTime_16 = value;
	}

	inline static int32_t get_offset_of_m_ParentGameObject_17() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_ParentGameObject_17)); }
	inline GameObject_t1756533147 * get_m_ParentGameObject_17() const { return ___m_ParentGameObject_17; }
	inline GameObject_t1756533147 ** get_address_of_m_ParentGameObject_17() { return &___m_ParentGameObject_17; }
	inline void set_m_ParentGameObject_17(GameObject_t1756533147 * value)
	{
		___m_ParentGameObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParentGameObject_17, value);
	}

	inline static int32_t get_offset_of_m_ncDetachObject_18() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_ncDetachObject_18)); }
	inline NcDetachObject_t4019232197 * get_m_ncDetachObject_18() const { return ___m_ncDetachObject_18; }
	inline NcDetachObject_t4019232197 ** get_address_of_m_ncDetachObject_18() { return &___m_ncDetachObject_18; }
	inline void set_m_ncDetachObject_18(NcDetachObject_t4019232197 * value)
	{
		___m_ncDetachObject_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_ncDetachObject_18, value);
	}

	inline static int32_t get_offset_of_m_OriginalPos_19() { return static_cast<int32_t>(offsetof(NcDetachParent_t3866821856, ___m_OriginalPos_19)); }
	inline NcTransformTool_t1254871775 * get_m_OriginalPos_19() const { return ___m_OriginalPos_19; }
	inline NcTransformTool_t1254871775 ** get_address_of_m_OriginalPos_19() { return &___m_OriginalPos_19; }
	inline void set_m_OriginalPos_19(NcTransformTool_t1254871775 * value)
	{
		___m_OriginalPos_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_OriginalPos_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
