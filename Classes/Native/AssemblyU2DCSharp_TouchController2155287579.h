#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchController
struct  TouchController_t2155287579  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject TouchController::Cube
	GameObject_t3674682005 * ___Cube_2;
	// System.Single TouchController::Speed
	float ___Speed_3;

public:
	inline static int32_t get_offset_of_Cube_2() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___Cube_2)); }
	inline GameObject_t3674682005 * get_Cube_2() const { return ___Cube_2; }
	inline GameObject_t3674682005 ** get_address_of_Cube_2() { return &___Cube_2; }
	inline void set_Cube_2(GameObject_t3674682005 * value)
	{
		___Cube_2 = value;
		Il2CppCodeGenWriteBarrier(&___Cube_2, value);
	}

	inline static int32_t get_offset_of_Speed_3() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___Speed_3)); }
	inline float get_Speed_3() const { return ___Speed_3; }
	inline float* get_address_of_Speed_3() { return &___Speed_3; }
	inline void set_Speed_3(float value)
	{
		___Speed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
