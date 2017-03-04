#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FxmTestSingleMouse
struct  FxmTestSingleMouse_t2216994848  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FxmTestSingleMouse::m_TargetTrans
	Transform_t3275118058 * ___m_TargetTrans_2;
	// UnityEngine.Camera FxmTestSingleMouse::m_GrayscaleCamara
	Camera_t189460977 * ___m_GrayscaleCamara_3;
	// UnityEngine.Shader FxmTestSingleMouse::m_GrayscaleShader
	Shader_t2430389951 * ___m_GrayscaleShader_4;
	// System.Boolean FxmTestSingleMouse::m_bRaycastHit
	bool ___m_bRaycastHit_5;
	// System.Single FxmTestSingleMouse::m_fDistance
	float ___m_fDistance_8;
	// System.Single FxmTestSingleMouse::m_fXSpeed
	float ___m_fXSpeed_9;
	// System.Single FxmTestSingleMouse::m_fYSpeed
	float ___m_fYSpeed_10;
	// System.Single FxmTestSingleMouse::m_fWheelSpeed
	float ___m_fWheelSpeed_11;
	// System.Single FxmTestSingleMouse::m_fYMinLimit
	float ___m_fYMinLimit_12;
	// System.Single FxmTestSingleMouse::m_fYMaxLimit
	float ___m_fYMaxLimit_13;
	// System.Single FxmTestSingleMouse::m_fDistanceMin
	float ___m_fDistanceMin_14;
	// System.Single FxmTestSingleMouse::m_fDistanceMax
	float ___m_fDistanceMax_15;
	// System.Int32 FxmTestSingleMouse::m_nMoveInputIndex
	int32_t ___m_nMoveInputIndex_16;
	// System.Int32 FxmTestSingleMouse::m_nRotInputIndex
	int32_t ___m_nRotInputIndex_17;
	// System.Single FxmTestSingleMouse::m_fXRot
	float ___m_fXRot_18;
	// System.Single FxmTestSingleMouse::m_fYRot
	float ___m_fYRot_19;
	// System.Boolean FxmTestSingleMouse::m_bHandEnable
	bool ___m_bHandEnable_20;
	// UnityEngine.Vector3 FxmTestSingleMouse::m_MovePostion
	Vector3_t2243707580  ___m_MovePostion_21;
	// UnityEngine.Vector3 FxmTestSingleMouse::m_OldMousePos
	Vector3_t2243707580  ___m_OldMousePos_22;
	// System.Boolean FxmTestSingleMouse::m_bLeftClick
	bool ___m_bLeftClick_23;
	// System.Boolean FxmTestSingleMouse::m_bRightClick
	bool ___m_bRightClick_24;

public:
	inline static int32_t get_offset_of_m_TargetTrans_2() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_TargetTrans_2)); }
	inline Transform_t3275118058 * get_m_TargetTrans_2() const { return ___m_TargetTrans_2; }
	inline Transform_t3275118058 ** get_address_of_m_TargetTrans_2() { return &___m_TargetTrans_2; }
	inline void set_m_TargetTrans_2(Transform_t3275118058 * value)
	{
		___m_TargetTrans_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetTrans_2, value);
	}

	inline static int32_t get_offset_of_m_GrayscaleCamara_3() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_GrayscaleCamara_3)); }
	inline Camera_t189460977 * get_m_GrayscaleCamara_3() const { return ___m_GrayscaleCamara_3; }
	inline Camera_t189460977 ** get_address_of_m_GrayscaleCamara_3() { return &___m_GrayscaleCamara_3; }
	inline void set_m_GrayscaleCamara_3(Camera_t189460977 * value)
	{
		___m_GrayscaleCamara_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_GrayscaleCamara_3, value);
	}

	inline static int32_t get_offset_of_m_GrayscaleShader_4() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_GrayscaleShader_4)); }
	inline Shader_t2430389951 * get_m_GrayscaleShader_4() const { return ___m_GrayscaleShader_4; }
	inline Shader_t2430389951 ** get_address_of_m_GrayscaleShader_4() { return &___m_GrayscaleShader_4; }
	inline void set_m_GrayscaleShader_4(Shader_t2430389951 * value)
	{
		___m_GrayscaleShader_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_GrayscaleShader_4, value);
	}

	inline static int32_t get_offset_of_m_bRaycastHit_5() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_bRaycastHit_5)); }
	inline bool get_m_bRaycastHit_5() const { return ___m_bRaycastHit_5; }
	inline bool* get_address_of_m_bRaycastHit_5() { return &___m_bRaycastHit_5; }
	inline void set_m_bRaycastHit_5(bool value)
	{
		___m_bRaycastHit_5 = value;
	}

	inline static int32_t get_offset_of_m_fDistance_8() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fDistance_8)); }
	inline float get_m_fDistance_8() const { return ___m_fDistance_8; }
	inline float* get_address_of_m_fDistance_8() { return &___m_fDistance_8; }
	inline void set_m_fDistance_8(float value)
	{
		___m_fDistance_8 = value;
	}

	inline static int32_t get_offset_of_m_fXSpeed_9() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fXSpeed_9)); }
	inline float get_m_fXSpeed_9() const { return ___m_fXSpeed_9; }
	inline float* get_address_of_m_fXSpeed_9() { return &___m_fXSpeed_9; }
	inline void set_m_fXSpeed_9(float value)
	{
		___m_fXSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_fYSpeed_10() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fYSpeed_10)); }
	inline float get_m_fYSpeed_10() const { return ___m_fYSpeed_10; }
	inline float* get_address_of_m_fYSpeed_10() { return &___m_fYSpeed_10; }
	inline void set_m_fYSpeed_10(float value)
	{
		___m_fYSpeed_10 = value;
	}

	inline static int32_t get_offset_of_m_fWheelSpeed_11() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fWheelSpeed_11)); }
	inline float get_m_fWheelSpeed_11() const { return ___m_fWheelSpeed_11; }
	inline float* get_address_of_m_fWheelSpeed_11() { return &___m_fWheelSpeed_11; }
	inline void set_m_fWheelSpeed_11(float value)
	{
		___m_fWheelSpeed_11 = value;
	}

	inline static int32_t get_offset_of_m_fYMinLimit_12() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fYMinLimit_12)); }
	inline float get_m_fYMinLimit_12() const { return ___m_fYMinLimit_12; }
	inline float* get_address_of_m_fYMinLimit_12() { return &___m_fYMinLimit_12; }
	inline void set_m_fYMinLimit_12(float value)
	{
		___m_fYMinLimit_12 = value;
	}

	inline static int32_t get_offset_of_m_fYMaxLimit_13() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fYMaxLimit_13)); }
	inline float get_m_fYMaxLimit_13() const { return ___m_fYMaxLimit_13; }
	inline float* get_address_of_m_fYMaxLimit_13() { return &___m_fYMaxLimit_13; }
	inline void set_m_fYMaxLimit_13(float value)
	{
		___m_fYMaxLimit_13 = value;
	}

	inline static int32_t get_offset_of_m_fDistanceMin_14() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fDistanceMin_14)); }
	inline float get_m_fDistanceMin_14() const { return ___m_fDistanceMin_14; }
	inline float* get_address_of_m_fDistanceMin_14() { return &___m_fDistanceMin_14; }
	inline void set_m_fDistanceMin_14(float value)
	{
		___m_fDistanceMin_14 = value;
	}

	inline static int32_t get_offset_of_m_fDistanceMax_15() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fDistanceMax_15)); }
	inline float get_m_fDistanceMax_15() const { return ___m_fDistanceMax_15; }
	inline float* get_address_of_m_fDistanceMax_15() { return &___m_fDistanceMax_15; }
	inline void set_m_fDistanceMax_15(float value)
	{
		___m_fDistanceMax_15 = value;
	}

	inline static int32_t get_offset_of_m_nMoveInputIndex_16() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_nMoveInputIndex_16)); }
	inline int32_t get_m_nMoveInputIndex_16() const { return ___m_nMoveInputIndex_16; }
	inline int32_t* get_address_of_m_nMoveInputIndex_16() { return &___m_nMoveInputIndex_16; }
	inline void set_m_nMoveInputIndex_16(int32_t value)
	{
		___m_nMoveInputIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_nRotInputIndex_17() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_nRotInputIndex_17)); }
	inline int32_t get_m_nRotInputIndex_17() const { return ___m_nRotInputIndex_17; }
	inline int32_t* get_address_of_m_nRotInputIndex_17() { return &___m_nRotInputIndex_17; }
	inline void set_m_nRotInputIndex_17(int32_t value)
	{
		___m_nRotInputIndex_17 = value;
	}

	inline static int32_t get_offset_of_m_fXRot_18() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fXRot_18)); }
	inline float get_m_fXRot_18() const { return ___m_fXRot_18; }
	inline float* get_address_of_m_fXRot_18() { return &___m_fXRot_18; }
	inline void set_m_fXRot_18(float value)
	{
		___m_fXRot_18 = value;
	}

	inline static int32_t get_offset_of_m_fYRot_19() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_fYRot_19)); }
	inline float get_m_fYRot_19() const { return ___m_fYRot_19; }
	inline float* get_address_of_m_fYRot_19() { return &___m_fYRot_19; }
	inline void set_m_fYRot_19(float value)
	{
		___m_fYRot_19 = value;
	}

	inline static int32_t get_offset_of_m_bHandEnable_20() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_bHandEnable_20)); }
	inline bool get_m_bHandEnable_20() const { return ___m_bHandEnable_20; }
	inline bool* get_address_of_m_bHandEnable_20() { return &___m_bHandEnable_20; }
	inline void set_m_bHandEnable_20(bool value)
	{
		___m_bHandEnable_20 = value;
	}

	inline static int32_t get_offset_of_m_MovePostion_21() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_MovePostion_21)); }
	inline Vector3_t2243707580  get_m_MovePostion_21() const { return ___m_MovePostion_21; }
	inline Vector3_t2243707580 * get_address_of_m_MovePostion_21() { return &___m_MovePostion_21; }
	inline void set_m_MovePostion_21(Vector3_t2243707580  value)
	{
		___m_MovePostion_21 = value;
	}

	inline static int32_t get_offset_of_m_OldMousePos_22() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_OldMousePos_22)); }
	inline Vector3_t2243707580  get_m_OldMousePos_22() const { return ___m_OldMousePos_22; }
	inline Vector3_t2243707580 * get_address_of_m_OldMousePos_22() { return &___m_OldMousePos_22; }
	inline void set_m_OldMousePos_22(Vector3_t2243707580  value)
	{
		___m_OldMousePos_22 = value;
	}

	inline static int32_t get_offset_of_m_bLeftClick_23() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_bLeftClick_23)); }
	inline bool get_m_bLeftClick_23() const { return ___m_bLeftClick_23; }
	inline bool* get_address_of_m_bLeftClick_23() { return &___m_bLeftClick_23; }
	inline void set_m_bLeftClick_23(bool value)
	{
		___m_bLeftClick_23 = value;
	}

	inline static int32_t get_offset_of_m_bRightClick_24() { return static_cast<int32_t>(offsetof(FxmTestSingleMouse_t2216994848, ___m_bRightClick_24)); }
	inline bool get_m_bRightClick_24() const { return ___m_bRightClick_24; }
	inline bool* get_address_of_m_bRightClick_24() { return &___m_bRightClick_24; }
	inline void set_m_bRightClick_24(bool value)
	{
		___m_bRightClick_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
