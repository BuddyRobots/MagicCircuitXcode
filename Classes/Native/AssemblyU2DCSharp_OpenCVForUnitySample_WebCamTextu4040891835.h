#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OpenCVForUnity.Rect>
struct List_1_t1173347212;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/TrackedObject
struct  TrackedObject_t4040891835  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<OpenCVForUnity.Rect> OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/TrackedObject::lastPositions
	List_1_t1173347212 * ___lastPositions_0;
	// System.Int32 OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/TrackedObject::numDetectedFrames
	int32_t ___numDetectedFrames_1;
	// System.Int32 OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/TrackedObject::numFramesNotDetected
	int32_t ___numFramesNotDetected_2;
	// System.Int32 OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/TrackedObject::id
	int32_t ___id_3;

public:
	inline static int32_t get_offset_of_lastPositions_0() { return static_cast<int32_t>(offsetof(TrackedObject_t4040891835, ___lastPositions_0)); }
	inline List_1_t1173347212 * get_lastPositions_0() const { return ___lastPositions_0; }
	inline List_1_t1173347212 ** get_address_of_lastPositions_0() { return &___lastPositions_0; }
	inline void set_lastPositions_0(List_1_t1173347212 * value)
	{
		___lastPositions_0 = value;
		Il2CppCodeGenWriteBarrier(&___lastPositions_0, value);
	}

	inline static int32_t get_offset_of_numDetectedFrames_1() { return static_cast<int32_t>(offsetof(TrackedObject_t4040891835, ___numDetectedFrames_1)); }
	inline int32_t get_numDetectedFrames_1() const { return ___numDetectedFrames_1; }
	inline int32_t* get_address_of_numDetectedFrames_1() { return &___numDetectedFrames_1; }
	inline void set_numDetectedFrames_1(int32_t value)
	{
		___numDetectedFrames_1 = value;
	}

	inline static int32_t get_offset_of_numFramesNotDetected_2() { return static_cast<int32_t>(offsetof(TrackedObject_t4040891835, ___numFramesNotDetected_2)); }
	inline int32_t get_numFramesNotDetected_2() const { return ___numFramesNotDetected_2; }
	inline int32_t* get_address_of_numFramesNotDetected_2() { return &___numFramesNotDetected_2; }
	inline void set_numFramesNotDetected_2(int32_t value)
	{
		___numFramesNotDetected_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TrackedObject_t4040891835, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}
};

struct TrackedObject_t4040891835_StaticFields
{
public:
	// System.Int32 OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/TrackedObject::_id
	int32_t ____id_4;

public:
	inline static int32_t get_offset_of__id_4() { return static_cast<int32_t>(offsetof(TrackedObject_t4040891835_StaticFields, ____id_4)); }
	inline int32_t get__id_4() const { return ____id_4; }
	inline int32_t* get_address_of__id_4() { return &____id_4; }
	inline void set__id_4(int32_t value)
	{
		____id_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
