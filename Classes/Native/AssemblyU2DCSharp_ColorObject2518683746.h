#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// OpenCVForUnity.Scalar
struct Scalar_t3445295492;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorObject
struct  ColorObject_t2518683746  : public Il2CppObject
{
public:
	// System.Int32 ColorObject::xPos
	int32_t ___xPos_0;
	// System.Int32 ColorObject::yPos
	int32_t ___yPos_1;
	// System.String ColorObject::type
	String_t* ___type_2;
	// OpenCVForUnity.Scalar ColorObject::HSVmin
	Scalar_t3445295492 * ___HSVmin_3;
	// OpenCVForUnity.Scalar ColorObject::HSVmax
	Scalar_t3445295492 * ___HSVmax_4;
	// OpenCVForUnity.Scalar ColorObject::Color
	Scalar_t3445295492 * ___Color_5;

public:
	inline static int32_t get_offset_of_xPos_0() { return static_cast<int32_t>(offsetof(ColorObject_t2518683746, ___xPos_0)); }
	inline int32_t get_xPos_0() const { return ___xPos_0; }
	inline int32_t* get_address_of_xPos_0() { return &___xPos_0; }
	inline void set_xPos_0(int32_t value)
	{
		___xPos_0 = value;
	}

	inline static int32_t get_offset_of_yPos_1() { return static_cast<int32_t>(offsetof(ColorObject_t2518683746, ___yPos_1)); }
	inline int32_t get_yPos_1() const { return ___yPos_1; }
	inline int32_t* get_address_of_yPos_1() { return &___yPos_1; }
	inline void set_yPos_1(int32_t value)
	{
		___yPos_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ColorObject_t2518683746, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}

	inline static int32_t get_offset_of_HSVmin_3() { return static_cast<int32_t>(offsetof(ColorObject_t2518683746, ___HSVmin_3)); }
	inline Scalar_t3445295492 * get_HSVmin_3() const { return ___HSVmin_3; }
	inline Scalar_t3445295492 ** get_address_of_HSVmin_3() { return &___HSVmin_3; }
	inline void set_HSVmin_3(Scalar_t3445295492 * value)
	{
		___HSVmin_3 = value;
		Il2CppCodeGenWriteBarrier(&___HSVmin_3, value);
	}

	inline static int32_t get_offset_of_HSVmax_4() { return static_cast<int32_t>(offsetof(ColorObject_t2518683746, ___HSVmax_4)); }
	inline Scalar_t3445295492 * get_HSVmax_4() const { return ___HSVmax_4; }
	inline Scalar_t3445295492 ** get_address_of_HSVmax_4() { return &___HSVmax_4; }
	inline void set_HSVmax_4(Scalar_t3445295492 * value)
	{
		___HSVmax_4 = value;
		Il2CppCodeGenWriteBarrier(&___HSVmax_4, value);
	}

	inline static int32_t get_offset_of_Color_5() { return static_cast<int32_t>(offsetof(ColorObject_t2518683746, ___Color_5)); }
	inline Scalar_t3445295492 * get_Color_5() const { return ___Color_5; }
	inline Scalar_t3445295492 ** get_address_of_Color_5() { return &___Color_5; }
	inline void set_Color_5(Scalar_t3445295492 * value)
	{
		___Color_5 = value;
		Il2CppCodeGenWriteBarrier(&___Color_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
