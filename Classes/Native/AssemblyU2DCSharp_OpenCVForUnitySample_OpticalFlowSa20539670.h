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
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.MatOfPoint
struct MatOfPoint_t1097329553;
// OpenCVForUnity.MatOfPoint2f
struct MatOfPoint2f_t3946375813;
// OpenCVForUnity.MatOfByte
struct MatOfByte_t3527287917;
// OpenCVForUnity.MatOfFloat
struct MatOfFloat_t1088010333;
// OpenCVForUnity.Scalar
struct Scalar_t3445295492;
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

// OpenCVForUnitySample.OpticalFlowSample
struct  OpticalFlowSample_t20539670  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.OpticalFlowSample::colors
	Color32U5BU5D_t2960766953* ___colors_2;
	// OpenCVForUnity.Mat OpenCVForUnitySample.OpticalFlowSample::matOpFlowThis
	Mat_t3763101966 * ___matOpFlowThis_3;
	// OpenCVForUnity.Mat OpenCVForUnitySample.OpticalFlowSample::matOpFlowPrev
	Mat_t3763101966 * ___matOpFlowPrev_4;
	// System.Int32 OpenCVForUnitySample.OpticalFlowSample::iGFFTMax
	int32_t ___iGFFTMax_5;
	// OpenCVForUnity.MatOfPoint OpenCVForUnitySample.OpticalFlowSample::MOPcorners
	MatOfPoint_t1097329553 * ___MOPcorners_6;
	// OpenCVForUnity.MatOfPoint2f OpenCVForUnitySample.OpticalFlowSample::mMOP2fptsThis
	MatOfPoint2f_t3946375813 * ___mMOP2fptsThis_7;
	// OpenCVForUnity.MatOfPoint2f OpenCVForUnitySample.OpticalFlowSample::mMOP2fptsPrev
	MatOfPoint2f_t3946375813 * ___mMOP2fptsPrev_8;
	// OpenCVForUnity.MatOfPoint2f OpenCVForUnitySample.OpticalFlowSample::mMOP2fptsSafe
	MatOfPoint2f_t3946375813 * ___mMOP2fptsSafe_9;
	// OpenCVForUnity.MatOfByte OpenCVForUnitySample.OpticalFlowSample::mMOBStatus
	MatOfByte_t3527287917 * ___mMOBStatus_10;
	// OpenCVForUnity.MatOfFloat OpenCVForUnitySample.OpticalFlowSample::mMOFerr
	MatOfFloat_t1088010333 * ___mMOFerr_11;
	// OpenCVForUnity.Scalar OpenCVForUnitySample.OpticalFlowSample::colorRed
	Scalar_t3445295492 * ___colorRed_12;
	// System.Int32 OpenCVForUnitySample.OpticalFlowSample::iLineThickness
	int32_t ___iLineThickness_13;
	// UnityEngine.Texture2D OpenCVForUnitySample.OpticalFlowSample::texture
	Texture2D_t3884108195 * ___texture_14;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.OpticalFlowSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t772277295 * ___webCamTextureToMatHelper_15;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___colors_2)); }
	inline Color32U5BU5D_t2960766953* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t2960766953* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_matOpFlowThis_3() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___matOpFlowThis_3)); }
	inline Mat_t3763101966 * get_matOpFlowThis_3() const { return ___matOpFlowThis_3; }
	inline Mat_t3763101966 ** get_address_of_matOpFlowThis_3() { return &___matOpFlowThis_3; }
	inline void set_matOpFlowThis_3(Mat_t3763101966 * value)
	{
		___matOpFlowThis_3 = value;
		Il2CppCodeGenWriteBarrier(&___matOpFlowThis_3, value);
	}

	inline static int32_t get_offset_of_matOpFlowPrev_4() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___matOpFlowPrev_4)); }
	inline Mat_t3763101966 * get_matOpFlowPrev_4() const { return ___matOpFlowPrev_4; }
	inline Mat_t3763101966 ** get_address_of_matOpFlowPrev_4() { return &___matOpFlowPrev_4; }
	inline void set_matOpFlowPrev_4(Mat_t3763101966 * value)
	{
		___matOpFlowPrev_4 = value;
		Il2CppCodeGenWriteBarrier(&___matOpFlowPrev_4, value);
	}

	inline static int32_t get_offset_of_iGFFTMax_5() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___iGFFTMax_5)); }
	inline int32_t get_iGFFTMax_5() const { return ___iGFFTMax_5; }
	inline int32_t* get_address_of_iGFFTMax_5() { return &___iGFFTMax_5; }
	inline void set_iGFFTMax_5(int32_t value)
	{
		___iGFFTMax_5 = value;
	}

	inline static int32_t get_offset_of_MOPcorners_6() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___MOPcorners_6)); }
	inline MatOfPoint_t1097329553 * get_MOPcorners_6() const { return ___MOPcorners_6; }
	inline MatOfPoint_t1097329553 ** get_address_of_MOPcorners_6() { return &___MOPcorners_6; }
	inline void set_MOPcorners_6(MatOfPoint_t1097329553 * value)
	{
		___MOPcorners_6 = value;
		Il2CppCodeGenWriteBarrier(&___MOPcorners_6, value);
	}

	inline static int32_t get_offset_of_mMOP2fptsThis_7() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___mMOP2fptsThis_7)); }
	inline MatOfPoint2f_t3946375813 * get_mMOP2fptsThis_7() const { return ___mMOP2fptsThis_7; }
	inline MatOfPoint2f_t3946375813 ** get_address_of_mMOP2fptsThis_7() { return &___mMOP2fptsThis_7; }
	inline void set_mMOP2fptsThis_7(MatOfPoint2f_t3946375813 * value)
	{
		___mMOP2fptsThis_7 = value;
		Il2CppCodeGenWriteBarrier(&___mMOP2fptsThis_7, value);
	}

	inline static int32_t get_offset_of_mMOP2fptsPrev_8() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___mMOP2fptsPrev_8)); }
	inline MatOfPoint2f_t3946375813 * get_mMOP2fptsPrev_8() const { return ___mMOP2fptsPrev_8; }
	inline MatOfPoint2f_t3946375813 ** get_address_of_mMOP2fptsPrev_8() { return &___mMOP2fptsPrev_8; }
	inline void set_mMOP2fptsPrev_8(MatOfPoint2f_t3946375813 * value)
	{
		___mMOP2fptsPrev_8 = value;
		Il2CppCodeGenWriteBarrier(&___mMOP2fptsPrev_8, value);
	}

	inline static int32_t get_offset_of_mMOP2fptsSafe_9() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___mMOP2fptsSafe_9)); }
	inline MatOfPoint2f_t3946375813 * get_mMOP2fptsSafe_9() const { return ___mMOP2fptsSafe_9; }
	inline MatOfPoint2f_t3946375813 ** get_address_of_mMOP2fptsSafe_9() { return &___mMOP2fptsSafe_9; }
	inline void set_mMOP2fptsSafe_9(MatOfPoint2f_t3946375813 * value)
	{
		___mMOP2fptsSafe_9 = value;
		Il2CppCodeGenWriteBarrier(&___mMOP2fptsSafe_9, value);
	}

	inline static int32_t get_offset_of_mMOBStatus_10() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___mMOBStatus_10)); }
	inline MatOfByte_t3527287917 * get_mMOBStatus_10() const { return ___mMOBStatus_10; }
	inline MatOfByte_t3527287917 ** get_address_of_mMOBStatus_10() { return &___mMOBStatus_10; }
	inline void set_mMOBStatus_10(MatOfByte_t3527287917 * value)
	{
		___mMOBStatus_10 = value;
		Il2CppCodeGenWriteBarrier(&___mMOBStatus_10, value);
	}

	inline static int32_t get_offset_of_mMOFerr_11() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___mMOFerr_11)); }
	inline MatOfFloat_t1088010333 * get_mMOFerr_11() const { return ___mMOFerr_11; }
	inline MatOfFloat_t1088010333 ** get_address_of_mMOFerr_11() { return &___mMOFerr_11; }
	inline void set_mMOFerr_11(MatOfFloat_t1088010333 * value)
	{
		___mMOFerr_11 = value;
		Il2CppCodeGenWriteBarrier(&___mMOFerr_11, value);
	}

	inline static int32_t get_offset_of_colorRed_12() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___colorRed_12)); }
	inline Scalar_t3445295492 * get_colorRed_12() const { return ___colorRed_12; }
	inline Scalar_t3445295492 ** get_address_of_colorRed_12() { return &___colorRed_12; }
	inline void set_colorRed_12(Scalar_t3445295492 * value)
	{
		___colorRed_12 = value;
		Il2CppCodeGenWriteBarrier(&___colorRed_12, value);
	}

	inline static int32_t get_offset_of_iLineThickness_13() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___iLineThickness_13)); }
	inline int32_t get_iLineThickness_13() const { return ___iLineThickness_13; }
	inline int32_t* get_address_of_iLineThickness_13() { return &___iLineThickness_13; }
	inline void set_iLineThickness_13(int32_t value)
	{
		___iLineThickness_13 = value;
	}

	inline static int32_t get_offset_of_texture_14() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___texture_14)); }
	inline Texture2D_t3884108195 * get_texture_14() const { return ___texture_14; }
	inline Texture2D_t3884108195 ** get_address_of_texture_14() { return &___texture_14; }
	inline void set_texture_14(Texture2D_t3884108195 * value)
	{
		___texture_14 = value;
		Il2CppCodeGenWriteBarrier(&___texture_14, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_15() { return static_cast<int32_t>(offsetof(OpticalFlowSample_t20539670, ___webCamTextureToMatHelper_15)); }
	inline WebCamTextureToMatHelper_t772277295 * get_webCamTextureToMatHelper_15() const { return ___webCamTextureToMatHelper_15; }
	inline WebCamTextureToMatHelper_t772277295 ** get_address_of_webCamTextureToMatHelper_15() { return &___webCamTextureToMatHelper_15; }
	inline void set_webCamTextureToMatHelper_15(WebCamTextureToMatHelper_t772277295 * value)
	{
		___webCamTextureToMatHelper_15 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
