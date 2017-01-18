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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cameraViewObject
struct  cameraViewObject_t3398071479  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject cameraViewObject::guiObject
	GameObject_t1756533147 * ___guiObject_2;
	// UnityEngine.Vector2 cameraViewObject::rotationVelocity
	Vector2_t2243707579  ___rotationVelocity_3;

public:
	inline static int32_t get_offset_of_guiObject_2() { return static_cast<int32_t>(offsetof(cameraViewObject_t3398071479, ___guiObject_2)); }
	inline GameObject_t1756533147 * get_guiObject_2() const { return ___guiObject_2; }
	inline GameObject_t1756533147 ** get_address_of_guiObject_2() { return &___guiObject_2; }
	inline void set_guiObject_2(GameObject_t1756533147 * value)
	{
		___guiObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___guiObject_2, value);
	}

	inline static int32_t get_offset_of_rotationVelocity_3() { return static_cast<int32_t>(offsetof(cameraViewObject_t3398071479, ___rotationVelocity_3)); }
	inline Vector2_t2243707579  get_rotationVelocity_3() const { return ___rotationVelocity_3; }
	inline Vector2_t2243707579 * get_address_of_rotationVelocity_3() { return &___rotationVelocity_3; }
	inline void set_rotationVelocity_3(Vector2_t2243707579  value)
	{
		___rotationVelocity_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
