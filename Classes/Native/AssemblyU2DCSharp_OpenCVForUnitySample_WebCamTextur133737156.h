#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/ThreadComm
struct  ThreadComm_t133737156  : public Il2CppObject
{
public:
	// System.Boolean OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/ThreadComm::shouldDetectInMultiThread
	bool ___shouldDetectInMultiThread_0;

public:
	inline static int32_t get_offset_of_shouldDetectInMultiThread_0() { return static_cast<int32_t>(offsetof(ThreadComm_t133737156, ___shouldDetectInMultiThread_0)); }
	inline bool get_shouldDetectInMultiThread_0() const { return ___shouldDetectInMultiThread_0; }
	inline bool* get_address_of_shouldDetectInMultiThread_0() { return &___shouldDetectInMultiThread_0; }
	inline void set_shouldDetectInMultiThread_0(bool value)
	{
		___shouldDetectInMultiThread_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
