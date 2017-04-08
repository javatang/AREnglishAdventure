#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "AssemblyU2DCSharp_NcAttachSound_PLAY_TYPE1634577035.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcAttachSound
struct  NcAttachSound_t3877161099  : public NcEffectBehaviour_t813403937
{
public:
	// NcAttachSound/PLAY_TYPE NcAttachSound::m_PlayType
	int32_t ___m_PlayType_9;
	// System.Boolean NcAttachSound::m_bSharedAudioSource
	bool ___m_bSharedAudioSource_10;
	// System.Boolean NcAttachSound::m_bPlayOnActive
	bool ___m_bPlayOnActive_11;
	// System.Single NcAttachSound::m_fDelayTime
	float ___m_fDelayTime_12;
	// System.Single NcAttachSound::m_fRepeatTime
	float ___m_fRepeatTime_13;
	// System.Int32 NcAttachSound::m_nRepeatCount
	int32_t ___m_nRepeatCount_14;
	// UnityEngine.AudioClip NcAttachSound::m_AudioClip
	AudioClip_t1932558630 * ___m_AudioClip_15;
	// System.Int32 NcAttachSound::m_nPriority
	int32_t ___m_nPriority_16;
	// System.Boolean NcAttachSound::m_bLoop
	bool ___m_bLoop_17;
	// System.Single NcAttachSound::m_fVolume
	float ___m_fVolume_18;
	// System.Single NcAttachSound::m_fPitch
	float ___m_fPitch_19;
	// UnityEngine.AudioSource NcAttachSound::m_AudioSource
	AudioSource_t1135106623 * ___m_AudioSource_20;
	// System.Single NcAttachSound::m_fStartTime
	float ___m_fStartTime_21;
	// System.Int32 NcAttachSound::m_nCreateCount
	int32_t ___m_nCreateCount_22;
	// System.Boolean NcAttachSound::m_bStartAttach
	bool ___m_bStartAttach_23;
	// System.Boolean NcAttachSound::m_bEnable
	bool ___m_bEnable_24;

public:
	inline static int32_t get_offset_of_m_PlayType_9() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_PlayType_9)); }
	inline int32_t get_m_PlayType_9() const { return ___m_PlayType_9; }
	inline int32_t* get_address_of_m_PlayType_9() { return &___m_PlayType_9; }
	inline void set_m_PlayType_9(int32_t value)
	{
		___m_PlayType_9 = value;
	}

	inline static int32_t get_offset_of_m_bSharedAudioSource_10() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_bSharedAudioSource_10)); }
	inline bool get_m_bSharedAudioSource_10() const { return ___m_bSharedAudioSource_10; }
	inline bool* get_address_of_m_bSharedAudioSource_10() { return &___m_bSharedAudioSource_10; }
	inline void set_m_bSharedAudioSource_10(bool value)
	{
		___m_bSharedAudioSource_10 = value;
	}

	inline static int32_t get_offset_of_m_bPlayOnActive_11() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_bPlayOnActive_11)); }
	inline bool get_m_bPlayOnActive_11() const { return ___m_bPlayOnActive_11; }
	inline bool* get_address_of_m_bPlayOnActive_11() { return &___m_bPlayOnActive_11; }
	inline void set_m_bPlayOnActive_11(bool value)
	{
		___m_bPlayOnActive_11 = value;
	}

	inline static int32_t get_offset_of_m_fDelayTime_12() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_fDelayTime_12)); }
	inline float get_m_fDelayTime_12() const { return ___m_fDelayTime_12; }
	inline float* get_address_of_m_fDelayTime_12() { return &___m_fDelayTime_12; }
	inline void set_m_fDelayTime_12(float value)
	{
		___m_fDelayTime_12 = value;
	}

	inline static int32_t get_offset_of_m_fRepeatTime_13() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_fRepeatTime_13)); }
	inline float get_m_fRepeatTime_13() const { return ___m_fRepeatTime_13; }
	inline float* get_address_of_m_fRepeatTime_13() { return &___m_fRepeatTime_13; }
	inline void set_m_fRepeatTime_13(float value)
	{
		___m_fRepeatTime_13 = value;
	}

	inline static int32_t get_offset_of_m_nRepeatCount_14() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_nRepeatCount_14)); }
	inline int32_t get_m_nRepeatCount_14() const { return ___m_nRepeatCount_14; }
	inline int32_t* get_address_of_m_nRepeatCount_14() { return &___m_nRepeatCount_14; }
	inline void set_m_nRepeatCount_14(int32_t value)
	{
		___m_nRepeatCount_14 = value;
	}

	inline static int32_t get_offset_of_m_AudioClip_15() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_AudioClip_15)); }
	inline AudioClip_t1932558630 * get_m_AudioClip_15() const { return ___m_AudioClip_15; }
	inline AudioClip_t1932558630 ** get_address_of_m_AudioClip_15() { return &___m_AudioClip_15; }
	inline void set_m_AudioClip_15(AudioClip_t1932558630 * value)
	{
		___m_AudioClip_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioClip_15, value);
	}

	inline static int32_t get_offset_of_m_nPriority_16() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_nPriority_16)); }
	inline int32_t get_m_nPriority_16() const { return ___m_nPriority_16; }
	inline int32_t* get_address_of_m_nPriority_16() { return &___m_nPriority_16; }
	inline void set_m_nPriority_16(int32_t value)
	{
		___m_nPriority_16 = value;
	}

	inline static int32_t get_offset_of_m_bLoop_17() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_bLoop_17)); }
	inline bool get_m_bLoop_17() const { return ___m_bLoop_17; }
	inline bool* get_address_of_m_bLoop_17() { return &___m_bLoop_17; }
	inline void set_m_bLoop_17(bool value)
	{
		___m_bLoop_17 = value;
	}

	inline static int32_t get_offset_of_m_fVolume_18() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_fVolume_18)); }
	inline float get_m_fVolume_18() const { return ___m_fVolume_18; }
	inline float* get_address_of_m_fVolume_18() { return &___m_fVolume_18; }
	inline void set_m_fVolume_18(float value)
	{
		___m_fVolume_18 = value;
	}

	inline static int32_t get_offset_of_m_fPitch_19() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_fPitch_19)); }
	inline float get_m_fPitch_19() const { return ___m_fPitch_19; }
	inline float* get_address_of_m_fPitch_19() { return &___m_fPitch_19; }
	inline void set_m_fPitch_19(float value)
	{
		___m_fPitch_19 = value;
	}

	inline static int32_t get_offset_of_m_AudioSource_20() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_AudioSource_20)); }
	inline AudioSource_t1135106623 * get_m_AudioSource_20() const { return ___m_AudioSource_20; }
	inline AudioSource_t1135106623 ** get_address_of_m_AudioSource_20() { return &___m_AudioSource_20; }
	inline void set_m_AudioSource_20(AudioSource_t1135106623 * value)
	{
		___m_AudioSource_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioSource_20, value);
	}

	inline static int32_t get_offset_of_m_fStartTime_21() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_fStartTime_21)); }
	inline float get_m_fStartTime_21() const { return ___m_fStartTime_21; }
	inline float* get_address_of_m_fStartTime_21() { return &___m_fStartTime_21; }
	inline void set_m_fStartTime_21(float value)
	{
		___m_fStartTime_21 = value;
	}

	inline static int32_t get_offset_of_m_nCreateCount_22() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_nCreateCount_22)); }
	inline int32_t get_m_nCreateCount_22() const { return ___m_nCreateCount_22; }
	inline int32_t* get_address_of_m_nCreateCount_22() { return &___m_nCreateCount_22; }
	inline void set_m_nCreateCount_22(int32_t value)
	{
		___m_nCreateCount_22 = value;
	}

	inline static int32_t get_offset_of_m_bStartAttach_23() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_bStartAttach_23)); }
	inline bool get_m_bStartAttach_23() const { return ___m_bStartAttach_23; }
	inline bool* get_address_of_m_bStartAttach_23() { return &___m_bStartAttach_23; }
	inline void set_m_bStartAttach_23(bool value)
	{
		___m_bStartAttach_23 = value;
	}

	inline static int32_t get_offset_of_m_bEnable_24() { return static_cast<int32_t>(offsetof(NcAttachSound_t3877161099, ___m_bEnable_24)); }
	inline bool get_m_bEnable_24() const { return ___m_bEnable_24; }
	inline bool* get_address_of_m_bEnable_24() { return &___m_bEnable_24; }
	inline void set_m_bEnable_24(bool value)
	{
		___m_bEnable_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
