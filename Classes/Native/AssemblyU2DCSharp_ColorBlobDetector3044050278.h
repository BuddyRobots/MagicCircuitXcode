#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OpenCVForUnity.Scalar
struct Scalar_t3445295492;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>
struct List_1_t2465515105;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorBlobDetector
struct  ColorBlobDetector_t3044050278  : public Il2CppObject
{
public:
	// OpenCVForUnity.Scalar ColorBlobDetector::mLowerBound
	Scalar_t3445295492 * ___mLowerBound_0;
	// OpenCVForUnity.Scalar ColorBlobDetector::mUpperBound
	Scalar_t3445295492 * ___mUpperBound_1;
	// OpenCVForUnity.Scalar ColorBlobDetector::mColorRadius
	Scalar_t3445295492 * ___mColorRadius_3;
	// OpenCVForUnity.Mat ColorBlobDetector::mSpectrum
	Mat_t3763101966 * ___mSpectrum_4;
	// System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint> ColorBlobDetector::mContours
	List_1_t2465515105 * ___mContours_5;
	// OpenCVForUnity.Mat ColorBlobDetector::mPyrDownMat
	Mat_t3763101966 * ___mPyrDownMat_6;
	// OpenCVForUnity.Mat ColorBlobDetector::mHsvMat
	Mat_t3763101966 * ___mHsvMat_7;
	// OpenCVForUnity.Mat ColorBlobDetector::mMask
	Mat_t3763101966 * ___mMask_8;
	// OpenCVForUnity.Mat ColorBlobDetector::mDilatedMask
	Mat_t3763101966 * ___mDilatedMask_9;
	// OpenCVForUnity.Mat ColorBlobDetector::mHierarchy
	Mat_t3763101966 * ___mHierarchy_10;

public:
	inline static int32_t get_offset_of_mLowerBound_0() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mLowerBound_0)); }
	inline Scalar_t3445295492 * get_mLowerBound_0() const { return ___mLowerBound_0; }
	inline Scalar_t3445295492 ** get_address_of_mLowerBound_0() { return &___mLowerBound_0; }
	inline void set_mLowerBound_0(Scalar_t3445295492 * value)
	{
		___mLowerBound_0 = value;
		Il2CppCodeGenWriteBarrier(&___mLowerBound_0, value);
	}

	inline static int32_t get_offset_of_mUpperBound_1() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mUpperBound_1)); }
	inline Scalar_t3445295492 * get_mUpperBound_1() const { return ___mUpperBound_1; }
	inline Scalar_t3445295492 ** get_address_of_mUpperBound_1() { return &___mUpperBound_1; }
	inline void set_mUpperBound_1(Scalar_t3445295492 * value)
	{
		___mUpperBound_1 = value;
		Il2CppCodeGenWriteBarrier(&___mUpperBound_1, value);
	}

	inline static int32_t get_offset_of_mColorRadius_3() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mColorRadius_3)); }
	inline Scalar_t3445295492 * get_mColorRadius_3() const { return ___mColorRadius_3; }
	inline Scalar_t3445295492 ** get_address_of_mColorRadius_3() { return &___mColorRadius_3; }
	inline void set_mColorRadius_3(Scalar_t3445295492 * value)
	{
		___mColorRadius_3 = value;
		Il2CppCodeGenWriteBarrier(&___mColorRadius_3, value);
	}

	inline static int32_t get_offset_of_mSpectrum_4() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mSpectrum_4)); }
	inline Mat_t3763101966 * get_mSpectrum_4() const { return ___mSpectrum_4; }
	inline Mat_t3763101966 ** get_address_of_mSpectrum_4() { return &___mSpectrum_4; }
	inline void set_mSpectrum_4(Mat_t3763101966 * value)
	{
		___mSpectrum_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSpectrum_4, value);
	}

	inline static int32_t get_offset_of_mContours_5() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mContours_5)); }
	inline List_1_t2465515105 * get_mContours_5() const { return ___mContours_5; }
	inline List_1_t2465515105 ** get_address_of_mContours_5() { return &___mContours_5; }
	inline void set_mContours_5(List_1_t2465515105 * value)
	{
		___mContours_5 = value;
		Il2CppCodeGenWriteBarrier(&___mContours_5, value);
	}

	inline static int32_t get_offset_of_mPyrDownMat_6() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mPyrDownMat_6)); }
	inline Mat_t3763101966 * get_mPyrDownMat_6() const { return ___mPyrDownMat_6; }
	inline Mat_t3763101966 ** get_address_of_mPyrDownMat_6() { return &___mPyrDownMat_6; }
	inline void set_mPyrDownMat_6(Mat_t3763101966 * value)
	{
		___mPyrDownMat_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPyrDownMat_6, value);
	}

	inline static int32_t get_offset_of_mHsvMat_7() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mHsvMat_7)); }
	inline Mat_t3763101966 * get_mHsvMat_7() const { return ___mHsvMat_7; }
	inline Mat_t3763101966 ** get_address_of_mHsvMat_7() { return &___mHsvMat_7; }
	inline void set_mHsvMat_7(Mat_t3763101966 * value)
	{
		___mHsvMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___mHsvMat_7, value);
	}

	inline static int32_t get_offset_of_mMask_8() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mMask_8)); }
	inline Mat_t3763101966 * get_mMask_8() const { return ___mMask_8; }
	inline Mat_t3763101966 ** get_address_of_mMask_8() { return &___mMask_8; }
	inline void set_mMask_8(Mat_t3763101966 * value)
	{
		___mMask_8 = value;
		Il2CppCodeGenWriteBarrier(&___mMask_8, value);
	}

	inline static int32_t get_offset_of_mDilatedMask_9() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mDilatedMask_9)); }
	inline Mat_t3763101966 * get_mDilatedMask_9() const { return ___mDilatedMask_9; }
	inline Mat_t3763101966 ** get_address_of_mDilatedMask_9() { return &___mDilatedMask_9; }
	inline void set_mDilatedMask_9(Mat_t3763101966 * value)
	{
		___mDilatedMask_9 = value;
		Il2CppCodeGenWriteBarrier(&___mDilatedMask_9, value);
	}

	inline static int32_t get_offset_of_mHierarchy_10() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278, ___mHierarchy_10)); }
	inline Mat_t3763101966 * get_mHierarchy_10() const { return ___mHierarchy_10; }
	inline Mat_t3763101966 ** get_address_of_mHierarchy_10() { return &___mHierarchy_10; }
	inline void set_mHierarchy_10(Mat_t3763101966 * value)
	{
		___mHierarchy_10 = value;
		Il2CppCodeGenWriteBarrier(&___mHierarchy_10, value);
	}
};

struct ColorBlobDetector_t3044050278_StaticFields
{
public:
	// System.Double ColorBlobDetector::mMinContourArea
	double ___mMinContourArea_2;

public:
	inline static int32_t get_offset_of_mMinContourArea_2() { return static_cast<int32_t>(offsetof(ColorBlobDetector_t3044050278_StaticFields, ___mMinContourArea_2)); }
	inline double get_mMinContourArea_2() const { return ___mMinContourArea_2; }
	inline double* get_address_of_mMinContourArea_2() { return &___mMinContourArea_2; }
	inline void set_mMinContourArea_2(double value)
	{
		___mMinContourArea_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
