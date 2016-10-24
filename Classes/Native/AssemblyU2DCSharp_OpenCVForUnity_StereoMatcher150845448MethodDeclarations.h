#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OpenCVForUnity.StereoMatcher
struct StereoMatcher_t150845448;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.StereoMatcher::.ctor(System.IntPtr)
extern "C"  void StereoMatcher__ctor_m3253078094 (StereoMatcher_t150845448 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::Dispose(System.Boolean)
extern "C"  void StereoMatcher_Dispose_m3615872186 (StereoMatcher_t150845448 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::getBlockSize()
extern "C"  int32_t StereoMatcher_getBlockSize_m3963295780 (StereoMatcher_t150845448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::getDisp12MaxDiff()
extern "C"  int32_t StereoMatcher_getDisp12MaxDiff_m1642830908 (StereoMatcher_t150845448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::getMinDisparity()
extern "C"  int32_t StereoMatcher_getMinDisparity_m2970081909 (StereoMatcher_t150845448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::getNumDisparities()
extern "C"  int32_t StereoMatcher_getNumDisparities_m3283320287 (StereoMatcher_t150845448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::getSpeckleRange()
extern "C"  int32_t StereoMatcher_getSpeckleRange_m1913252000 (StereoMatcher_t150845448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::getSpeckleWindowSize()
extern "C"  int32_t StereoMatcher_getSpeckleWindowSize_m558050416 (StereoMatcher_t150845448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::compute(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void StereoMatcher_compute_m161915968 (StereoMatcher_t150845448 * __this, Mat_t3763101966 * ___left0, Mat_t3763101966 * ___right1, Mat_t3763101966 * ___disparity2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::setBlockSize(System.Int32)
extern "C"  void StereoMatcher_setBlockSize_m959708379 (StereoMatcher_t150845448 * __this, int32_t ___blockSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::setDisp12MaxDiff(System.Int32)
extern "C"  void StereoMatcher_setDisp12MaxDiff_m2742680051 (StereoMatcher_t150845448 * __this, int32_t ___disp12MaxDiff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::setMinDisparity(System.Int32)
extern "C"  void StereoMatcher_setMinDisparity_m585793824 (StereoMatcher_t150845448 * __this, int32_t ___minDisparity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::setNumDisparities(System.Int32)
extern "C"  void StereoMatcher_setNumDisparities_m1239385866 (StereoMatcher_t150845448 * __this, int32_t ___numDisparities0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::setSpeckleRange(System.Int32)
extern "C"  void StereoMatcher_setSpeckleRange_m2873730763 (StereoMatcher_t150845448 * __this, int32_t ___speckleRange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::setSpeckleWindowSize(System.Int32)
extern "C"  void StereoMatcher_setSpeckleWindowSize_m2966632743 (StereoMatcher_t150845448 * __this, int32_t ___speckleWindowSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_getBlockSize_10(System.IntPtr)
extern "C"  int32_t StereoMatcher_calib3d_StereoMatcher_getBlockSize_10_m2913411812 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_getDisp12MaxDiff_10(System.IntPtr)
extern "C"  int32_t StereoMatcher_calib3d_StereoMatcher_getDisp12MaxDiff_10_m3323851004 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_getMinDisparity_10(System.IntPtr)
extern "C"  int32_t StereoMatcher_calib3d_StereoMatcher_getMinDisparity_10_m503740701 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_getNumDisparities_10(System.IntPtr)
extern "C"  int32_t StereoMatcher_calib3d_StereoMatcher_getNumDisparities_10_m581340039 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_getSpeckleRange_10(System.IntPtr)
extern "C"  int32_t StereoMatcher_calib3d_StereoMatcher_getSpeckleRange_10_m1907675464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_getSpeckleWindowSize_10(System.IntPtr)
extern "C"  int32_t StereoMatcher_calib3d_StereoMatcher_getSpeckleWindowSize_10_m1642795824 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_compute_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void StereoMatcher_calib3d_StereoMatcher_compute_10_m3094470733 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___left_nativeObj1, IntPtr_t ___right_nativeObj2, IntPtr_t ___disparity_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_setBlockSize_10(System.IntPtr,System.Int32)
extern "C"  void StereoMatcher_calib3d_StereoMatcher_setBlockSize_10_m3405410637 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___blockSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_setDisp12MaxDiff_10(System.IntPtr,System.Int32)
extern "C"  void StereoMatcher_calib3d_StereoMatcher_setDisp12MaxDiff_10_m3671805237 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___disp12MaxDiff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_setMinDisparity_10(System.IntPtr,System.Int32)
extern "C"  void StereoMatcher_calib3d_StereoMatcher_setMinDisparity_10_m4127854528 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___minDisparity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_setNumDisparities_10(System.IntPtr,System.Int32)
extern "C"  void StereoMatcher_calib3d_StereoMatcher_setNumDisparities_10_m1728256022 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___numDisparities1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_setSpeckleRange_10(System.IntPtr,System.Int32)
extern "C"  void StereoMatcher_calib3d_StereoMatcher_setSpeckleRange_10_m3131807093 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___speckleRange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_setSpeckleWindowSize_10(System.IntPtr,System.Int32)
extern "C"  void StereoMatcher_calib3d_StereoMatcher_setSpeckleWindowSize_10_m819389057 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___speckleWindowSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoMatcher::calib3d_StereoMatcher_delete(System.IntPtr)
extern "C"  void StereoMatcher_calib3d_StereoMatcher_delete_m2197245279 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
