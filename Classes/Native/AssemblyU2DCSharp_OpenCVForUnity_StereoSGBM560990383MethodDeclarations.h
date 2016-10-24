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

// OpenCVForUnity.StereoSGBM
struct StereoSGBM_t560990383;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.StereoSGBM::.ctor(System.IntPtr)
extern "C"  void StereoSGBM__ctor_m1236984037 (StereoSGBM_t560990383 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::Dispose(System.Boolean)
extern "C"  void StereoSGBM_Dispose_m2980487363 (StereoSGBM_t560990383 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.StereoSGBM OpenCVForUnity.StereoSGBM::create(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  StereoSGBM_t560990383 * StereoSGBM_create_m621572299 (Il2CppObject * __this /* static, unused */, int32_t ___minDisparity0, int32_t ___numDisparities1, int32_t ___blockSize2, int32_t ___P13, int32_t ___P24, int32_t ___disp12MaxDiff5, int32_t ___preFilterCap6, int32_t ___uniquenessRatio7, int32_t ___speckleWindowSize8, int32_t ___speckleRange9, int32_t ___mode10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.StereoSGBM OpenCVForUnity.StereoSGBM::create(System.Int32,System.Int32,System.Int32)
extern "C"  StereoSGBM_t560990383 * StereoSGBM_create_m2477664843 (Il2CppObject * __this /* static, unused */, int32_t ___minDisparity0, int32_t ___numDisparities1, int32_t ___blockSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::getMode()
extern "C"  int32_t StereoSGBM_getMode_m403200244 (StereoSGBM_t560990383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::getP1()
extern "C"  int32_t StereoSGBM_getP1_m98771346 (StereoSGBM_t560990383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::getP2()
extern "C"  int32_t StereoSGBM_getP2_m98772307 (StereoSGBM_t560990383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::getPreFilterCap()
extern "C"  int32_t StereoSGBM_getPreFilterCap_m1683976232 (StereoSGBM_t560990383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::getUniquenessRatio()
extern "C"  int32_t StereoSGBM_getUniquenessRatio_m1033249396 (StereoSGBM_t560990383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::setMode(System.Int32)
extern "C"  void StereoSGBM_setMode_m3940693059 (StereoSGBM_t560990383 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::setP1(System.Int32)
extern "C"  void StereoSGBM_setP1_m1979180897 (StereoSGBM_t560990383 * __this, int32_t ___P10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::setP2(System.Int32)
extern "C"  void StereoSGBM_setP2_m3486732706 (StereoSGBM_t560990383 * __this, int32_t ___P20, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::setPreFilterCap(System.Int32)
extern "C"  void StereoSGBM_setPreFilterCap_m959397751 (StereoSGBM_t560990383 * __this, int32_t ___preFilterCap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::setUniquenessRatio(System.Int32)
extern "C"  void StereoSGBM_setUniquenessRatio_m2823686919 (StereoSGBM_t560990383 * __this, int32_t ___uniquenessRatio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_create_10(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t StereoSGBM_calib3d_StereoSGBM_create_10_m3804868338 (Il2CppObject * __this /* static, unused */, int32_t ___minDisparity0, int32_t ___numDisparities1, int32_t ___blockSize2, int32_t ___P13, int32_t ___P24, int32_t ___disp12MaxDiff5, int32_t ___preFilterCap6, int32_t ___uniquenessRatio7, int32_t ___speckleWindowSize8, int32_t ___speckleRange9, int32_t ___mode10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_create_11(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t StereoSGBM_calib3d_StereoSGBM_create_11_m176602739 (Il2CppObject * __this /* static, unused */, int32_t ___minDisparity0, int32_t ___numDisparities1, int32_t ___blockSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_getMode_10(System.IntPtr)
extern "C"  int32_t StereoSGBM_calib3d_StereoSGBM_getMode_10_m1627659027 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_getP1_10(System.IntPtr)
extern "C"  int32_t StereoSGBM_calib3d_StereoSGBM_getP1_10_m466392689 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_getP2_10(System.IntPtr)
extern "C"  int32_t StereoSGBM_calib3d_StereoSGBM_getP2_10_m3916888114 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_getPreFilterCap_10(System.IntPtr)
extern "C"  int32_t StereoSGBM_calib3d_StereoSGBM_getPreFilterCap_10_m677539655 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_getUniquenessRatio_10(System.IntPtr)
extern "C"  int32_t StereoSGBM_calib3d_StereoSGBM_getUniquenessRatio_10_m3236238941 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_setMode_10(System.IntPtr,System.Int32)
extern "C"  void StereoSGBM_calib3d_StereoSGBM_setMode_10_m3996913930 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_setP1_10(System.IntPtr,System.Int32)
extern "C"  void StereoSGBM_calib3d_StereoSGBM_setP1_10_m4024590316 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___P11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_setP2_10(System.IntPtr,System.Int32)
extern "C"  void StereoSGBM_calib3d_StereoSGBM_setP2_10_m2014486475 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___P21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_setPreFilterCap_10(System.IntPtr,System.Int32)
extern "C"  void StereoSGBM_calib3d_StereoSGBM_setPreFilterCap_10_m2942266198 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___preFilterCap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_setUniquenessRatio_10(System.IntPtr,System.Int32)
extern "C"  void StereoSGBM_calib3d_StereoSGBM_setUniquenessRatio_10_m645247348 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___uniquenessRatio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoSGBM::calib3d_StereoSGBM_delete(System.IntPtr)
extern "C"  void StereoSGBM_calib3d_StereoSGBM_delete_m1244477947 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
