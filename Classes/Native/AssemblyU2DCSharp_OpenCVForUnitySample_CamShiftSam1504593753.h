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
// System.Collections.Generic.List`1<OpenCVForUnity.Point>
struct List_1_t3029553486;
// OpenCVForUnity.Rect
struct Rect_t4100128956;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3040734659;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t772277295;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.CamShiftSample
struct  CamShiftSample_t1504593753  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.CamShiftSample::colors
	Color32U5BU5D_t2960766953* ___colors_2;
	// UnityEngine.Texture2D OpenCVForUnitySample.CamShiftSample::texture
	Texture2D_t3884108195 * ___texture_3;
	// System.Collections.Generic.List`1<OpenCVForUnity.Point> OpenCVForUnitySample.CamShiftSample::roiPointList
	List_1_t3029553486 * ___roiPointList_4;
	// OpenCVForUnity.Rect OpenCVForUnitySample.CamShiftSample::roiRect
	Rect_t4100128956 * ___roiRect_5;
	// OpenCVForUnity.Mat OpenCVForUnitySample.CamShiftSample::hsvMat
	Mat_t3763101966 * ___hsvMat_6;
	// OpenCVForUnity.Mat OpenCVForUnitySample.CamShiftSample::roiHistMat
	Mat_t3763101966 * ___roiHistMat_7;
	// OpenCVForUnity.TermCriteria OpenCVForUnitySample.CamShiftSample::termination
	TermCriteria_t3040734659 * ___termination_8;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.CamShiftSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t772277295 * ___webCamTextureToMatHelper_9;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(CamShiftSample_t1504593753, ___colors_2)); }
	inline Color32U5BU5D_t2960766953* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t2960766953* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(CamShiftSample_t1504593753, ___texture_3)); }
	inline Texture2D_t3884108195 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t3884108195 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t3884108195 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_roiPointList_4() { return static_cast<int32_t>(offsetof(CamShiftSample_t1504593753, ___roiPointList_4)); }
	inline List_1_t3029553486 * get_roiPointList_4() const { return ___roiPointList_4; }
	inline List_1_t3029553486 ** get_address_of_roiPointList_4() { return &___roiPointList_4; }
	inline void set_roiPointList_4(List_1_t3029553486 * value)
	{
		___roiPointList_4 = value;
		Il2CppCodeGenWriteBarrier(&___roiPointList_4, value);
	}

	inline static int32_t get_offset_of_roiRect_5() { return static_cast<int32_t>(offsetof(CamShiftSample_t1504593753, ___roiRect_5)); }
	inline Rect_t4100128956 * get_roiRect_5() const { return ___roiRect_5; }
	inline Rect_t4100128956 ** get_address_of_roiRect_5() { return &___roiRect_5; }
	inline void set_roiRect_5(Rect_t4100128956 * value)
	{
		___roiRect_5 = value;
		Il2CppCodeGenWriteBarrier(&___roiRect_5, value);
	}

	inline static int32_t get_offset_of_hsvMat_6() { return static_cast<int32_t>(offsetof(CamShiftSample_t1504593753, ___hsvMat_6)); }
	inline Mat_t3763101966 * get_hsvMat_6() const { return ___hsvMat_6; }
	inline Mat_t3763101966 ** get_address_of_hsvMat_6() { return &___hsvMat_6; }
	inline void set_hsvMat_6(Mat_t3763101966 * value)
	{
		___hsvMat_6 = value;
		Il2CppCodeGenWriteBarrier(&___hsvMat_6, value);
	}

	inline static int32_t get_offset_of_roiHistMat_7() { return static_cast<int32_t>(offsetof(CamShiftSample_t1504593753, ___roiHistMat_7)); }
	inline Mat_t3763101966 * get_roiHistMat_7() const { return ___roiHistMat_7; }
	inline Mat_t3763101966 ** get_address_of_roiHistMat_7() { return &___roiHistMat_7; }
	inline void set_roiHistMat_7(Mat_t3763101966 * value)
	{
		___roiHistMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___roiHistMat_7, value);
	}

	inline static int32_t get_offset_of_termination_8() { return static_cast<int32_t>(offsetof(CamShiftSample_t1504593753, ___termination_8)); }
	inline TermCriteria_t3040734659 * get_termination_8() const { return ___termination_8; }
	inline TermCriteria_t3040734659 ** get_address_of_termination_8() { return &___termination_8; }
	inline void set_termination_8(TermCriteria_t3040734659 * value)
	{
		___termination_8 = value;
		Il2CppCodeGenWriteBarrier(&___termination_8, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_9() { return static_cast<int32_t>(offsetof(CamShiftSample_t1504593753, ___webCamTextureToMatHelper_9)); }
	inline WebCamTextureToMatHelper_t772277295 * get_webCamTextureToMatHelper_9() const { return ___webCamTextureToMatHelper_9; }
	inline WebCamTextureToMatHelper_t772277295 ** get_address_of_webCamTextureToMatHelper_9() { return &___webCamTextureToMatHelper_9; }
	inline void set_webCamTextureToMatHelper_9(WebCamTextureToMatHelper_t772277295 * value)
	{
		___webCamTextureToMatHelper_9 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
