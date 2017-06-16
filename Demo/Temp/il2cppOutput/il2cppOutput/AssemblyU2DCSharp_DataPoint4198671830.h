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
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataPoint
struct  DataPoint_t4198671830  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 DataPoint::id
	int32_t ___id_2;
	// System.String DataPoint::coordinates
	String_t* ___coordinates_3;
	// System.Int32 DataPoint::birdTypeQuantity
	int32_t ___birdTypeQuantity_4;
	// System.String[] DataPoint::birdCodes
	StringU5BU5D_t1642385972* ___birdCodes_5;
	// System.Int32[] DataPoint::birdCounts
	Int32U5BU5D_t3030399641* ___birdCounts_6;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(DataPoint_t4198671830, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_coordinates_3() { return static_cast<int32_t>(offsetof(DataPoint_t4198671830, ___coordinates_3)); }
	inline String_t* get_coordinates_3() const { return ___coordinates_3; }
	inline String_t** get_address_of_coordinates_3() { return &___coordinates_3; }
	inline void set_coordinates_3(String_t* value)
	{
		___coordinates_3 = value;
		Il2CppCodeGenWriteBarrier(&___coordinates_3, value);
	}

	inline static int32_t get_offset_of_birdTypeQuantity_4() { return static_cast<int32_t>(offsetof(DataPoint_t4198671830, ___birdTypeQuantity_4)); }
	inline int32_t get_birdTypeQuantity_4() const { return ___birdTypeQuantity_4; }
	inline int32_t* get_address_of_birdTypeQuantity_4() { return &___birdTypeQuantity_4; }
	inline void set_birdTypeQuantity_4(int32_t value)
	{
		___birdTypeQuantity_4 = value;
	}

	inline static int32_t get_offset_of_birdCodes_5() { return static_cast<int32_t>(offsetof(DataPoint_t4198671830, ___birdCodes_5)); }
	inline StringU5BU5D_t1642385972* get_birdCodes_5() const { return ___birdCodes_5; }
	inline StringU5BU5D_t1642385972** get_address_of_birdCodes_5() { return &___birdCodes_5; }
	inline void set_birdCodes_5(StringU5BU5D_t1642385972* value)
	{
		___birdCodes_5 = value;
		Il2CppCodeGenWriteBarrier(&___birdCodes_5, value);
	}

	inline static int32_t get_offset_of_birdCounts_6() { return static_cast<int32_t>(offsetof(DataPoint_t4198671830, ___birdCounts_6)); }
	inline Int32U5BU5D_t3030399641* get_birdCounts_6() const { return ___birdCounts_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_birdCounts_6() { return &___birdCounts_6; }
	inline void set_birdCounts_6(Int32U5BU5D_t3030399641* value)
	{
		___birdCounts_6 = value;
		Il2CppCodeGenWriteBarrier(&___birdCounts_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
