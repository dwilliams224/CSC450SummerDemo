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
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// DataPoint
struct DataPoint_t4198671830;
// TargetDataPoint
struct TargetDataPoint_t2096864723;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// vrHUD
struct  vrHUD_t2070291987  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text vrHUD::textField
	Text_t356221433 * ___textField_3;
	// System.String vrHUD::curCoor
	String_t* ___curCoor_4;
	// UnityEngine.GameObject vrHUD::targetData
	GameObject_t1756533147 * ___targetData_5;
	// UnityEngine.GameObject vrHUD::megaPoint
	GameObject_t1756533147 * ___megaPoint_6;
	// DataPoint vrHUD::dataPoint
	DataPoint_t4198671830 * ___dataPoint_7;
	// System.Int32 vrHUD::mpId
	int32_t ___mpId_8;
	// TargetDataPoint vrHUD::targetDataPoint
	TargetDataPoint_t2096864723 * ___targetDataPoint_9;
	// UnityEngine.Camera vrHUD::cam
	Camera_t189460977 * ___cam_10;

public:
	inline static int32_t get_offset_of_textField_3() { return static_cast<int32_t>(offsetof(vrHUD_t2070291987, ___textField_3)); }
	inline Text_t356221433 * get_textField_3() const { return ___textField_3; }
	inline Text_t356221433 ** get_address_of_textField_3() { return &___textField_3; }
	inline void set_textField_3(Text_t356221433 * value)
	{
		___textField_3 = value;
		Il2CppCodeGenWriteBarrier(&___textField_3, value);
	}

	inline static int32_t get_offset_of_curCoor_4() { return static_cast<int32_t>(offsetof(vrHUD_t2070291987, ___curCoor_4)); }
	inline String_t* get_curCoor_4() const { return ___curCoor_4; }
	inline String_t** get_address_of_curCoor_4() { return &___curCoor_4; }
	inline void set_curCoor_4(String_t* value)
	{
		___curCoor_4 = value;
		Il2CppCodeGenWriteBarrier(&___curCoor_4, value);
	}

	inline static int32_t get_offset_of_targetData_5() { return static_cast<int32_t>(offsetof(vrHUD_t2070291987, ___targetData_5)); }
	inline GameObject_t1756533147 * get_targetData_5() const { return ___targetData_5; }
	inline GameObject_t1756533147 ** get_address_of_targetData_5() { return &___targetData_5; }
	inline void set_targetData_5(GameObject_t1756533147 * value)
	{
		___targetData_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetData_5, value);
	}

	inline static int32_t get_offset_of_megaPoint_6() { return static_cast<int32_t>(offsetof(vrHUD_t2070291987, ___megaPoint_6)); }
	inline GameObject_t1756533147 * get_megaPoint_6() const { return ___megaPoint_6; }
	inline GameObject_t1756533147 ** get_address_of_megaPoint_6() { return &___megaPoint_6; }
	inline void set_megaPoint_6(GameObject_t1756533147 * value)
	{
		___megaPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___megaPoint_6, value);
	}

	inline static int32_t get_offset_of_dataPoint_7() { return static_cast<int32_t>(offsetof(vrHUD_t2070291987, ___dataPoint_7)); }
	inline DataPoint_t4198671830 * get_dataPoint_7() const { return ___dataPoint_7; }
	inline DataPoint_t4198671830 ** get_address_of_dataPoint_7() { return &___dataPoint_7; }
	inline void set_dataPoint_7(DataPoint_t4198671830 * value)
	{
		___dataPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___dataPoint_7, value);
	}

	inline static int32_t get_offset_of_mpId_8() { return static_cast<int32_t>(offsetof(vrHUD_t2070291987, ___mpId_8)); }
	inline int32_t get_mpId_8() const { return ___mpId_8; }
	inline int32_t* get_address_of_mpId_8() { return &___mpId_8; }
	inline void set_mpId_8(int32_t value)
	{
		___mpId_8 = value;
	}

	inline static int32_t get_offset_of_targetDataPoint_9() { return static_cast<int32_t>(offsetof(vrHUD_t2070291987, ___targetDataPoint_9)); }
	inline TargetDataPoint_t2096864723 * get_targetDataPoint_9() const { return ___targetDataPoint_9; }
	inline TargetDataPoint_t2096864723 ** get_address_of_targetDataPoint_9() { return &___targetDataPoint_9; }
	inline void set_targetDataPoint_9(TargetDataPoint_t2096864723 * value)
	{
		___targetDataPoint_9 = value;
		Il2CppCodeGenWriteBarrier(&___targetDataPoint_9, value);
	}

	inline static int32_t get_offset_of_cam_10() { return static_cast<int32_t>(offsetof(vrHUD_t2070291987, ___cam_10)); }
	inline Camera_t189460977 * get_cam_10() const { return ___cam_10; }
	inline Camera_t189460977 ** get_address_of_cam_10() { return &___cam_10; }
	inline void set_cam_10(Camera_t189460977 * value)
	{
		___cam_10 = value;
		Il2CppCodeGenWriteBarrier(&___cam_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
