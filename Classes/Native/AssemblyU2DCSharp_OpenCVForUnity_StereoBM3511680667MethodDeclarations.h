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

// OpenCVForUnity.StereoBM
struct StereoBM_t3511680667;
// OpenCVForUnity.Rect
struct Rect_t4100128956;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect4100128956.h"

// System.Void OpenCVForUnity.StereoBM::.ctor(System.IntPtr)
extern "C"  void StereoBM__ctor_m3974005713 (StereoBM_t3511680667 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::Dispose(System.Boolean)
extern "C"  void StereoBM_Dispose_m1639122519 (StereoBM_t3511680667 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.StereoBM OpenCVForUnity.StereoBM::create(System.Int32,System.Int32)
extern "C"  StereoBM_t3511680667 * StereoBM_create_m822101428 (Il2CppObject * __this /* static, unused */, int32_t ___numDisparities0, int32_t ___blockSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.StereoBM OpenCVForUnity.StereoBM::create()
extern "C"  StereoBM_t3511680667 * StereoBM_create_m3322280370 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Rect OpenCVForUnity.StereoBM::getROI1()
extern "C"  Rect_t4100128956 * StereoBM_getROI1_m4184752710 (StereoBM_t3511680667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Rect OpenCVForUnity.StereoBM::getROI2()
extern "C"  Rect_t4100128956 * StereoBM_getROI2_m4184753671 (StereoBM_t3511680667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::getPreFilterCap()
extern "C"  int32_t StereoBM_getPreFilterCap_m153518140 (StereoBM_t3511680667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::getPreFilterSize()
extern "C"  int32_t StereoBM_getPreFilterSize_m929906169 (StereoBM_t3511680667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::getPreFilterType()
extern "C"  int32_t StereoBM_getPreFilterType_m973013746 (StereoBM_t3511680667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::getSmallerBlockSize()
extern "C"  int32_t StereoBM_getSmallerBlockSize_m732687423 (StereoBM_t3511680667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::getTextureThreshold()
extern "C"  int32_t StereoBM_getTextureThreshold_m640115637 (StereoBM_t3511680667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::getUniquenessRatio()
extern "C"  int32_t StereoBM_getUniquenessRatio_m2529044960 (StereoBM_t3511680667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::setPreFilterCap(System.Int32)
extern "C"  void StereoBM_setPreFilterCap_m448144907 (StereoBM_t3511680667 * __this, int32_t ___preFilterCap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::setPreFilterSize(System.Int32)
extern "C"  void StereoBM_setPreFilterSize_m4026116876 (StereoBM_t3511680667 * __this, int32_t ___preFilterSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::setPreFilterType(System.Int32)
extern "C"  void StereoBM_setPreFilterType_m4017537669 (StereoBM_t3511680667 * __this, int32_t ___preFilterType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::setROI1(OpenCVForUnity.Rect)
extern "C"  void StereoBM_setROI1_m740029857 (StereoBM_t3511680667 * __this, Rect_t4100128956 * ___roi10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::setROI2(OpenCVForUnity.Rect)
extern "C"  void StereoBM_setROI2_m2996940864 (StereoBM_t3511680667 * __this, Rect_t4100128956 * ___roi20, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::setSmallerBlockSize(System.Int32)
extern "C"  void StereoBM_setSmallerBlockSize_m2796369550 (StereoBM_t3511680667 * __this, int32_t ___blockSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::setTextureThreshold(System.Int32)
extern "C"  void StereoBM_setTextureThreshold_m2568170756 (StereoBM_t3511680667 * __this, int32_t ___textureThreshold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::setUniquenessRatio(System.Int32)
extern "C"  void StereoBM_setUniquenessRatio_m2044242931 (StereoBM_t3511680667 * __this, int32_t ___uniquenessRatio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.StereoBM::calib3d_StereoBM_create_10(System.Int32,System.Int32)
extern "C"  IntPtr_t StereoBM_calib3d_StereoBM_create_10_m3928477357 (Il2CppObject * __this /* static, unused */, int32_t ___numDisparities0, int32_t ___blockSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.StereoBM::calib3d_StereoBM_create_11()
extern "C"  IntPtr_t StereoBM_calib3d_StereoBM_create_11_m588215898 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_getROI1_10(System.IntPtr,System.Double[])
extern "C"  void StereoBM_calib3d_StereoBM_getROI1_10_m3755045781 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_getROI2_10(System.IntPtr,System.Double[])
extern "C"  void StereoBM_calib3d_StereoBM_getROI2_10_m1185559382 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::calib3d_StereoBM_getPreFilterCap_10(System.IntPtr)
extern "C"  int32_t StereoBM_calib3d_StereoBM_getPreFilterCap_10_m1020991135 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::calib3d_StereoBM_getPreFilterSize_10(System.IntPtr)
extern "C"  int32_t StereoBM_calib3d_StereoBM_getPreFilterSize_10_m2610874974 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::calib3d_StereoBM_getPreFilterType_10(System.IntPtr)
extern "C"  int32_t StereoBM_calib3d_StereoBM_getPreFilterType_10_m3747708247 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::calib3d_StereoBM_getSmallerBlockSize_10(System.IntPtr)
extern "C"  int32_t StereoBM_calib3d_StereoBM_getSmallerBlockSize_10_m1946881314 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::calib3d_StereoBM_getTextureThreshold_10(System.IntPtr)
extern "C"  int32_t StereoBM_calib3d_StereoBM_getTextureThreshold_10_m1023727768 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StereoBM::calib3d_StereoBM_getUniquenessRatio_10(System.IntPtr)
extern "C"  int32_t StereoBM_calib3d_StereoBM_getUniquenessRatio_10_m92213253 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_setPreFilterCap_10(System.IntPtr,System.Int32)
extern "C"  void StereoBM_calib3d_StereoBM_setPreFilterCap_10_m1111276542 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___preFilterCap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_setPreFilterSize_10(System.IntPtr,System.Int32)
extern "C"  void StereoBM_calib3d_StereoBM_setPreFilterSize_10_m3638774931 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___preFilterSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_setPreFilterType_10(System.IntPtr,System.Int32)
extern "C"  void StereoBM_calib3d_StereoBM_setPreFilterType_10_m659224122 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___preFilterType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_setROI1_10(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void StereoBM_calib3d_StereoBM_setROI1_10_m235296327 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___roi1_x1, int32_t ___roi1_y2, int32_t ___roi1_width3, int32_t ___roi1_height4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_setROI2_10(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void StereoBM_calib3d_StereoBM_setROI2_10_m4046588296 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___roi2_x1, int32_t ___roi2_y2, int32_t ___roi2_width3, int32_t ___roi2_height4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_setSmallerBlockSize_10(System.IntPtr,System.Int32)
extern "C"  void StereoBM_calib3d_StereoBM_setSmallerBlockSize_10_m1953664859 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___blockSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_setTextureThreshold_10(System.IntPtr,System.Int32)
extern "C"  void StereoBM_calib3d_StereoBM_setTextureThreshold_10_m3275068325 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___textureThreshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_setUniquenessRatio_10(System.IntPtr,System.Int32)
extern "C"  void StereoBM_calib3d_StereoBM_setUniquenessRatio_10_m4012031948 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___uniquenessRatio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StereoBM::calib3d_StereoBM_delete(System.IntPtr)
extern "C"  void StereoBM_calib3d_StereoBM_delete_m3805985875 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
