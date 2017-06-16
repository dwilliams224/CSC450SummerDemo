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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveMenu
struct  MoveMenu_t3662256802  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MoveMenu::player
	GameObject_t1756533147 * ___player_2;
	// System.Boolean MoveMenu::moving
	bool ___moving_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(MoveMenu_t3662256802, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_moving_3() { return static_cast<int32_t>(offsetof(MoveMenu_t3662256802, ___moving_3)); }
	inline bool get_moving_3() const { return ___moving_3; }
	inline bool* get_address_of_moving_3() { return &___moving_3; }
	inline void set_moving_3(bool value)
	{
		___moving_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
