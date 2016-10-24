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

// OpenCVForUnity.SuperpixelSEEDS
struct SuperpixelSEEDS_t3880506917;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.SuperpixelSEEDS::.ctor(System.IntPtr)
extern "C"  void SuperpixelSEEDS__ctor_m2487249067 (SuperpixelSEEDS_t3880506917 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::Dispose(System.Boolean)
extern "C"  void SuperpixelSEEDS_Dispose_m3669605181 (SuperpixelSEEDS_t3880506917 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelSEEDS::getNumberOfSuperpixels()
extern "C"  int32_t SuperpixelSEEDS_getNumberOfSuperpixels_m2011461211 (SuperpixelSEEDS_t3880506917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::getLabelContourMask(OpenCVForUnity.Mat,System.Boolean)
extern "C"  void SuperpixelSEEDS_getLabelContourMask_m977823945 (SuperpixelSEEDS_t3880506917 * __this, Mat_t3763101966 * ___image0, bool ___thick_line1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::getLabelContourMask(OpenCVForUnity.Mat)
extern "C"  void SuperpixelSEEDS_getLabelContourMask_m166820916 (SuperpixelSEEDS_t3880506917 * __this, Mat_t3763101966 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::getLabels(OpenCVForUnity.Mat)
extern "C"  void SuperpixelSEEDS_getLabels_m2572627297 (SuperpixelSEEDS_t3880506917 * __this, Mat_t3763101966 * ___labels_out0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::iterate(OpenCVForUnity.Mat,System.Int32)
extern "C"  void SuperpixelSEEDS_iterate_m3481213617 (SuperpixelSEEDS_t3880506917 * __this, Mat_t3763101966 * ___img0, int32_t ___num_iterations1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::iterate(OpenCVForUnity.Mat)
extern "C"  void SuperpixelSEEDS_iterate_m410683366 (SuperpixelSEEDS_t3880506917 * __this, Mat_t3763101966 * ___img0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_getNumberOfSuperpixels_10(System.IntPtr)
extern "C"  int32_t SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_getNumberOfSuperpixels_10_m2137910533 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_getLabelContourMask_10(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_getLabelContourMask_10_m1198656734 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, bool ___thick_line2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_getLabelContourMask_11(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_getLabelContourMask_11_m3885333598 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_getLabels_10(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_getLabels_10_m1380427756 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___labels_out_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_iterate_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_iterate_10_m1342318086 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, int32_t ___num_iterations2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_iterate_11(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_iterate_11_m2697683472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSEEDS::ximgproc_SuperpixelSEEDS_delete(System.IntPtr)
extern "C"  void SuperpixelSEEDS_ximgproc_SuperpixelSEEDS_delete_m4124928924 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
