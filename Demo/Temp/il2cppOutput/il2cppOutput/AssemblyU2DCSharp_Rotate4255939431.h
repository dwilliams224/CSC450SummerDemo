#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotate
struct  Rotate_t4255939431  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Rotate::rotationSpeed
	float ___rotationSpeed_2;
	// System.Boolean Rotate::rotateClockwise
	bool ___rotateClockwise_3;
	// System.Boolean Rotate::rotateCounterClockwise
	bool ___rotateCounterClockwise_4;
	// System.Single Rotate::angle
	float ___angle_5;

public:
	inline static int32_t get_offset_of_rotationSpeed_2() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___rotationSpeed_2)); }
	inline float get_rotationSpeed_2() const { return ___rotationSpeed_2; }
	inline float* get_address_of_rotationSpeed_2() { return &___rotationSpeed_2; }
	inline void set_rotationSpeed_2(float value)
	{
		___rotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rotateClockwise_3() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___rotateClockwise_3)); }
	inline bool get_rotateClockwise_3() const { return ___rotateClockwise_3; }
	inline bool* get_address_of_rotateClockwise_3() { return &___rotateClockwise_3; }
	inline void set_rotateClockwise_3(bool value)
	{
		___rotateClockwise_3 = value;
	}

	inline static int32_t get_offset_of_rotateCounterClockwise_4() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___rotateCounterClockwise_4)); }
	inline bool get_rotateCounterClockwise_4() const { return ___rotateCounterClockwise_4; }
	inline bool* get_address_of_rotateCounterClockwise_4() { return &___rotateCounterClockwise_4; }
	inline void set_rotateCounterClockwise_4(bool value)
	{
		___rotateCounterClockwise_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
