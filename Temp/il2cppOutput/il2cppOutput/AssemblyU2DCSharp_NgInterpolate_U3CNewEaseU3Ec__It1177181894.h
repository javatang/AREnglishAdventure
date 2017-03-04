#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t2368636977;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3847001055;
// NgInterpolate/Function
struct Function_t4110077377;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NgInterpolate/<NewEase>c__Iterator2
struct  U3CNewEaseU3Ec__Iterator2_t1177181894  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 NgInterpolate/<NewEase>c__Iterator2::end
	Vector3_t2243707580  ___end_0;
	// UnityEngine.Vector3 NgInterpolate/<NewEase>c__Iterator2::start
	Vector3_t2243707580  ___start_1;
	// UnityEngine.Vector3 NgInterpolate/<NewEase>c__Iterator2::<distance>__0
	Vector3_t2243707580  ___U3CdistanceU3E__0_2;
	// System.Collections.Generic.IEnumerable`1<System.Single> NgInterpolate/<NewEase>c__Iterator2::driver
	Il2CppObject* ___driver_3;
	// System.Collections.Generic.IEnumerator`1<System.Single> NgInterpolate/<NewEase>c__Iterator2::$locvar0
	Il2CppObject* ___U24locvar0_4;
	// System.Single NgInterpolate/<NewEase>c__Iterator2::<i>__1
	float ___U3CiU3E__1_5;
	// NgInterpolate/Function NgInterpolate/<NewEase>c__Iterator2::ease
	Function_t4110077377 * ___ease_6;
	// System.Single NgInterpolate/<NewEase>c__Iterator2::total
	float ___total_7;
	// System.Object NgInterpolate/<NewEase>c__Iterator2::$current
	Il2CppObject * ___U24current_8;
	// System.Boolean NgInterpolate/<NewEase>c__Iterator2::$disposing
	bool ___U24disposing_9;
	// System.Int32 NgInterpolate/<NewEase>c__Iterator2::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_end_0() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___end_0)); }
	inline Vector3_t2243707580  get_end_0() const { return ___end_0; }
	inline Vector3_t2243707580 * get_address_of_end_0() { return &___end_0; }
	inline void set_end_0(Vector3_t2243707580  value)
	{
		___end_0 = value;
	}

	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___start_1)); }
	inline Vector3_t2243707580  get_start_1() const { return ___start_1; }
	inline Vector3_t2243707580 * get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(Vector3_t2243707580  value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_U3CdistanceU3E__0_2() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___U3CdistanceU3E__0_2)); }
	inline Vector3_t2243707580  get_U3CdistanceU3E__0_2() const { return ___U3CdistanceU3E__0_2; }
	inline Vector3_t2243707580 * get_address_of_U3CdistanceU3E__0_2() { return &___U3CdistanceU3E__0_2; }
	inline void set_U3CdistanceU3E__0_2(Vector3_t2243707580  value)
	{
		___U3CdistanceU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_driver_3() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___driver_3)); }
	inline Il2CppObject* get_driver_3() const { return ___driver_3; }
	inline Il2CppObject** get_address_of_driver_3() { return &___driver_3; }
	inline void set_driver_3(Il2CppObject* value)
	{
		___driver_3 = value;
		Il2CppCodeGenWriteBarrier(&___driver_3, value);
	}

	inline static int32_t get_offset_of_U24locvar0_4() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___U24locvar0_4)); }
	inline Il2CppObject* get_U24locvar0_4() const { return ___U24locvar0_4; }
	inline Il2CppObject** get_address_of_U24locvar0_4() { return &___U24locvar0_4; }
	inline void set_U24locvar0_4(Il2CppObject* value)
	{
		___U24locvar0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24locvar0_4, value);
	}

	inline static int32_t get_offset_of_U3CiU3E__1_5() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___U3CiU3E__1_5)); }
	inline float get_U3CiU3E__1_5() const { return ___U3CiU3E__1_5; }
	inline float* get_address_of_U3CiU3E__1_5() { return &___U3CiU3E__1_5; }
	inline void set_U3CiU3E__1_5(float value)
	{
		___U3CiU3E__1_5 = value;
	}

	inline static int32_t get_offset_of_ease_6() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___ease_6)); }
	inline Function_t4110077377 * get_ease_6() const { return ___ease_6; }
	inline Function_t4110077377 ** get_address_of_ease_6() { return &___ease_6; }
	inline void set_ease_6(Function_t4110077377 * value)
	{
		___ease_6 = value;
		Il2CppCodeGenWriteBarrier(&___ease_6, value);
	}

	inline static int32_t get_offset_of_total_7() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___total_7)); }
	inline float get_total_7() const { return ___total_7; }
	inline float* get_address_of_total_7() { return &___total_7; }
	inline void set_total_7(float value)
	{
		___total_7 = value;
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___U24current_8)); }
	inline Il2CppObject * get_U24current_8() const { return ___U24current_8; }
	inline Il2CppObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(Il2CppObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_8, value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CNewEaseU3Ec__Iterator2_t1177181894, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
