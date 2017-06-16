#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetDataPoint
struct  TargetDataPoint_t2096864723  : public MonoBehaviour_t1158329972
{
public:
	// System.String TargetDataPoint::dataPointName
	String_t* ___dataPointName_2;

public:
	inline static int32_t get_offset_of_dataPointName_2() { return static_cast<int32_t>(offsetof(TargetDataPoint_t2096864723, ___dataPointName_2)); }
	inline String_t* get_dataPointName_2() const { return ___dataPointName_2; }
	inline String_t** get_address_of_dataPointName_2() { return &___dataPointName_2; }
	inline void set_dataPointName_2(String_t* value)
	{
		___dataPointName_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataPointName_2, value);
	}
};

struct TargetDataPoint_t2096864723_StaticFields
{
public:
	// UnityEngine.GameObject TargetDataPoint::targetDataObj
	GameObject_t1756533147 * ___targetDataObj_3;

public:
	inline static int32_t get_offset_of_targetDataObj_3() { return static_cast<int32_t>(offsetof(TargetDataPoint_t2096864723_StaticFields, ___targetDataObj_3)); }
	inline GameObject_t1756533147 * get_targetDataObj_3() const { return ___targetDataObj_3; }
	inline GameObject_t1756533147 ** get_address_of_targetDataObj_3() { return &___targetDataObj_3; }
	inline void set_targetDataObj_3(GameObject_t1756533147 * value)
	{
		___targetDataObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetDataObj_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
