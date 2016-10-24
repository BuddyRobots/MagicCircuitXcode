#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t772277295;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.WebCamTextureToMatSample
struct  WebCamTextureToMatSample_t1083533867  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.WebCamTextureToMatSample::colors
	Color32U5BU5D_t2960766953* ___colors_2;
	// UnityEngine.Texture2D OpenCVForUnitySample.WebCamTextureToMatSample::texture
	Texture2D_t3884108195 * ___texture_3;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.WebCamTextureToMatSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t772277295 * ___webCamTextureToMatHelper_4;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(WebCamTextureToMatSample_t1083533867, ___colors_2)); }
	inline Color32U5BU5D_t2960766953* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t2960766953* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(WebCamTextureToMatSample_t1083533867, ___texture_3)); }
	inline Texture2D_t3884108195 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t3884108195 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t3884108195 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_4() { return static_cast<int32_t>(offsetof(WebCamTextureToMatSample_t1083533867, ___webCamTextureToMatHelper_4)); }
	inline WebCamTextureToMatHelper_t772277295 * get_webCamTextureToMatHelper_4() const { return ___webCamTextureToMatHelper_4; }
	inline WebCamTextureToMatHelper_t772277295 ** get_address_of_webCamTextureToMatHelper_4() { return &___webCamTextureToMatHelper_4; }
	inline void set_webCamTextureToMatHelper_4(WebCamTextureToMatHelper_t772277295 * value)
	{
		___webCamTextureToMatHelper_4 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
