#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IList
struct IList_t3321498491;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t2368636977;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3847001055;
// NgInterpolate/ToVector3`1<UnityEngine.Vector3>
struct ToVector3_1_t457939456;
// NgInterpolate/Function
struct Function_t4110077377;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NgInterpolate/<NewBezier>c__Iterator3`1<UnityEngine.Vector3>
struct  U3CNewBezierU3Ec__Iterator3_1_t3611361014  : public Il2CppObject
{
public:
	// System.Collections.IList NgInterpolate/<NewBezier>c__Iterator3`1::nodes
	Il2CppObject * ___nodes_0;
	// UnityEngine.Vector3[] NgInterpolate/<NewBezier>c__Iterator3`1::<points>__0
	Vector3U5BU5D_t1172311765* ___U3CpointsU3E__0_1;
	// System.Collections.Generic.IEnumerable`1<System.Single> NgInterpolate/<NewBezier>c__Iterator3`1::steps
	Il2CppObject* ___steps_2;
	// System.Collections.Generic.IEnumerator`1<System.Single> NgInterpolate/<NewBezier>c__Iterator3`1::$locvar0
	Il2CppObject* ___U24locvar0_3;
	// System.Single NgInterpolate/<NewBezier>c__Iterator3`1::<step>__1
	float ___U3CstepU3E__1_4;
	// NgInterpolate/ToVector3`1<T> NgInterpolate/<NewBezier>c__Iterator3`1::toVector3
	ToVector3_1_t457939456 * ___toVector3_5;
	// NgInterpolate/Function NgInterpolate/<NewBezier>c__Iterator3`1::ease
	Function_t4110077377 * ___ease_6;
	// System.Single NgInterpolate/<NewBezier>c__Iterator3`1::maxStep
	float ___maxStep_7;
	// UnityEngine.Vector3 NgInterpolate/<NewBezier>c__Iterator3`1::$current
	Vector3_t2243707580  ___U24current_8;
	// System.Boolean NgInterpolate/<NewBezier>c__Iterator3`1::$disposing
	bool ___U24disposing_9;
	// System.Int32 NgInterpolate/<NewBezier>c__Iterator3`1::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_nodes_0() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___nodes_0)); }
	inline Il2CppObject * get_nodes_0() const { return ___nodes_0; }
	inline Il2CppObject ** get_address_of_nodes_0() { return &___nodes_0; }
	inline void set_nodes_0(Il2CppObject * value)
	{
		___nodes_0 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_0, value);
	}

	inline static int32_t get_offset_of_U3CpointsU3E__0_1() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___U3CpointsU3E__0_1)); }
	inline Vector3U5BU5D_t1172311765* get_U3CpointsU3E__0_1() const { return ___U3CpointsU3E__0_1; }
	inline Vector3U5BU5D_t1172311765** get_address_of_U3CpointsU3E__0_1() { return &___U3CpointsU3E__0_1; }
	inline void set_U3CpointsU3E__0_1(Vector3U5BU5D_t1172311765* value)
	{
		___U3CpointsU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpointsU3E__0_1, value);
	}

	inline static int32_t get_offset_of_steps_2() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___steps_2)); }
	inline Il2CppObject* get_steps_2() const { return ___steps_2; }
	inline Il2CppObject** get_address_of_steps_2() { return &___steps_2; }
	inline void set_steps_2(Il2CppObject* value)
	{
		___steps_2 = value;
		Il2CppCodeGenWriteBarrier(&___steps_2, value);
	}

	inline static int32_t get_offset_of_U24locvar0_3() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___U24locvar0_3)); }
	inline Il2CppObject* get_U24locvar0_3() const { return ___U24locvar0_3; }
	inline Il2CppObject** get_address_of_U24locvar0_3() { return &___U24locvar0_3; }
	inline void set_U24locvar0_3(Il2CppObject* value)
	{
		___U24locvar0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24locvar0_3, value);
	}

	inline static int32_t get_offset_of_U3CstepU3E__1_4() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___U3CstepU3E__1_4)); }
	inline float get_U3CstepU3E__1_4() const { return ___U3CstepU3E__1_4; }
	inline float* get_address_of_U3CstepU3E__1_4() { return &___U3CstepU3E__1_4; }
	inline void set_U3CstepU3E__1_4(float value)
	{
		___U3CstepU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_toVector3_5() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___toVector3_5)); }
	inline ToVector3_1_t457939456 * get_toVector3_5() const { return ___toVector3_5; }
	inline ToVector3_1_t457939456 ** get_address_of_toVector3_5() { return &___toVector3_5; }
	inline void set_toVector3_5(ToVector3_1_t457939456 * value)
	{
		___toVector3_5 = value;
		Il2CppCodeGenWriteBarrier(&___toVector3_5, value);
	}

	inline static int32_t get_offset_of_ease_6() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___ease_6)); }
	inline Function_t4110077377 * get_ease_6() const { return ___ease_6; }
	inline Function_t4110077377 ** get_address_of_ease_6() { return &___ease_6; }
	inline void set_ease_6(Function_t4110077377 * value)
	{
		___ease_6 = value;
		Il2CppCodeGenWriteBarrier(&___ease_6, value);
	}

	inline static int32_t get_offset_of_maxStep_7() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___maxStep_7)); }
	inline float get_maxStep_7() const { return ___maxStep_7; }
	inline float* get_address_of_maxStep_7() { return &___maxStep_7; }
	inline void set_maxStep_7(float value)
	{
		___maxStep_7 = value;
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___U24current_8)); }
	inline Vector3_t2243707580  get_U24current_8() const { return ___U24current_8; }
	inline Vector3_t2243707580 * get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(Vector3_t2243707580  value)
	{
		___U24current_8 = value;
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CNewBezierU3Ec__Iterator3_1_t3611361014, ___U24PC_10)); }
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
