#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// TargetDataPoint
struct TargetDataPoint_t2096864723;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveToTarget
struct  MoveToTarget_t4056015053  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MoveToTarget::targetData
	GameObject_t1756533147 * ___targetData_2;
	// TargetDataPoint MoveToTarget::targetDataPoint
	TargetDataPoint_t2096864723 * ___targetDataPoint_3;
	// System.String MoveToTarget::currentDataPoint
	String_t* ___currentDataPoint_4;
	// System.Single MoveToTarget::offset
	float ___offset_5;

public:
	inline static int32_t get_offset_of_targetData_2() { return static_cast<int32_t>(offsetof(MoveToTarget_t4056015053, ___targetData_2)); }
	inline GameObject_t1756533147 * get_targetData_2() const { return ___targetData_2; }
	inline GameObject_t1756533147 ** get_address_of_targetData_2() { return &___targetData_2; }
	inline void set_targetData_2(GameObject_t1756533147 * value)
	{
		___targetData_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetData_2, value);
	}

	inline static int32_t get_offset_of_targetDataPoint_3() { return static_cast<int32_t>(offsetof(MoveToTarget_t4056015053, ___targetDataPoint_3)); }
	inline TargetDataPoint_t2096864723 * get_targetDataPoint_3() const { return ___targetDataPoint_3; }
	inline TargetDataPoint_t2096864723 ** get_address_of_targetDataPoint_3() { return &___targetDataPoint_3; }
	inline void set_targetDataPoint_3(TargetDataPoint_t2096864723 * value)
	{
		___targetDataPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetDataPoint_3, value);
	}

	inline static int32_t get_offset_of_currentDataPoint_4() { return static_cast<int32_t>(offsetof(MoveToTarget_t4056015053, ___currentDataPoint_4)); }
	inline String_t* get_currentDataPoint_4() const { return ___currentDataPoint_4; }
	inline String_t** get_address_of_currentDataPoint_4() { return &___currentDataPoint_4; }
	inline void set_currentDataPoint_4(String_t* value)
	{
		___currentDataPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentDataPoint_4, value);
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(MoveToTarget_t4056015053, ___offset_5)); }
	inline float get_offset_5() const { return ___offset_5; }
	inline float* get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(float value)
	{
		___offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
