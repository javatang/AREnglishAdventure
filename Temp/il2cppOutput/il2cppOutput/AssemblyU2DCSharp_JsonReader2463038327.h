#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FamilyList
struct FamilyList_t136462996;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonReader
struct  JsonReader_t2463038327  : public MonoBehaviour_t1158329972
{
public:
	// FamilyList JsonReader::m_FamilyList
	FamilyList_t136462996 * ___m_FamilyList_2;
	// UnityEngine.TextAsset JsonReader::JsonTxt
	TextAsset_t3973159845 * ___JsonTxt_3;

public:
	inline static int32_t get_offset_of_m_FamilyList_2() { return static_cast<int32_t>(offsetof(JsonReader_t2463038327, ___m_FamilyList_2)); }
	inline FamilyList_t136462996 * get_m_FamilyList_2() const { return ___m_FamilyList_2; }
	inline FamilyList_t136462996 ** get_address_of_m_FamilyList_2() { return &___m_FamilyList_2; }
	inline void set_m_FamilyList_2(FamilyList_t136462996 * value)
	{
		___m_FamilyList_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_FamilyList_2, value);
	}

	inline static int32_t get_offset_of_JsonTxt_3() { return static_cast<int32_t>(offsetof(JsonReader_t2463038327, ___JsonTxt_3)); }
	inline TextAsset_t3973159845 * get_JsonTxt_3() const { return ___JsonTxt_3; }
	inline TextAsset_t3973159845 ** get_address_of_JsonTxt_3() { return &___JsonTxt_3; }
	inline void set_JsonTxt_3(TextAsset_t3973159845 * value)
	{
		___JsonTxt_3 = value;
		Il2CppCodeGenWriteBarrier(&___JsonTxt_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
