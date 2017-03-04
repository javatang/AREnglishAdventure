#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NcTimerTool
struct NcTimerTool_t227073218;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcEffectAniBehaviour
struct  NcEffectAniBehaviour_t2396724283  : public NcEffectBehaviour_t813403937
{
public:
	// NcTimerTool NcEffectAniBehaviour::m_Timer
	NcTimerTool_t227073218 * ___m_Timer_9;
	// UnityEngine.GameObject NcEffectAniBehaviour::m_OnEndAniGameObject
	GameObject_t1756533147 * ___m_OnEndAniGameObject_10;
	// System.Boolean NcEffectAniBehaviour::m_bEndAnimation
	bool ___m_bEndAnimation_11;
	// System.String NcEffectAniBehaviour::m_OnEndAniFunction
	String_t* ___m_OnEndAniFunction_12;

public:
	inline static int32_t get_offset_of_m_Timer_9() { return static_cast<int32_t>(offsetof(NcEffectAniBehaviour_t2396724283, ___m_Timer_9)); }
	inline NcTimerTool_t227073218 * get_m_Timer_9() const { return ___m_Timer_9; }
	inline NcTimerTool_t227073218 ** get_address_of_m_Timer_9() { return &___m_Timer_9; }
	inline void set_m_Timer_9(NcTimerTool_t227073218 * value)
	{
		___m_Timer_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Timer_9, value);
	}

	inline static int32_t get_offset_of_m_OnEndAniGameObject_10() { return static_cast<int32_t>(offsetof(NcEffectAniBehaviour_t2396724283, ___m_OnEndAniGameObject_10)); }
	inline GameObject_t1756533147 * get_m_OnEndAniGameObject_10() const { return ___m_OnEndAniGameObject_10; }
	inline GameObject_t1756533147 ** get_address_of_m_OnEndAniGameObject_10() { return &___m_OnEndAniGameObject_10; }
	inline void set_m_OnEndAniGameObject_10(GameObject_t1756533147 * value)
	{
		___m_OnEndAniGameObject_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnEndAniGameObject_10, value);
	}

	inline static int32_t get_offset_of_m_bEndAnimation_11() { return static_cast<int32_t>(offsetof(NcEffectAniBehaviour_t2396724283, ___m_bEndAnimation_11)); }
	inline bool get_m_bEndAnimation_11() const { return ___m_bEndAnimation_11; }
	inline bool* get_address_of_m_bEndAnimation_11() { return &___m_bEndAnimation_11; }
	inline void set_m_bEndAnimation_11(bool value)
	{
		___m_bEndAnimation_11 = value;
	}

	inline static int32_t get_offset_of_m_OnEndAniFunction_12() { return static_cast<int32_t>(offsetof(NcEffectAniBehaviour_t2396724283, ___m_OnEndAniFunction_12)); }
	inline String_t* get_m_OnEndAniFunction_12() const { return ___m_OnEndAniFunction_12; }
	inline String_t** get_address_of_m_OnEndAniFunction_12() { return &___m_OnEndAniFunction_12; }
	inline void set_m_OnEndAniFunction_12(String_t* value)
	{
		___m_OnEndAniFunction_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnEndAniFunction_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
