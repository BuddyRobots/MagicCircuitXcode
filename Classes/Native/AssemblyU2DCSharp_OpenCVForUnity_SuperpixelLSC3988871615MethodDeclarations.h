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

// OpenCVForUnity.SuperpixelLSC
struct SuperpixelLSC_t3988871615;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.SuperpixelLSC::.ctor(System.IntPtr)
extern "C"  void SuperpixelLSC__ctor_m2638182085 (SuperpixelLSC_t3988871615 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::Dispose(System.Boolean)
extern "C"  void SuperpixelLSC_Dispose_m3284385507 (SuperpixelLSC_t3988871615 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelLSC::getNumberOfSuperpixels()
extern "C"  int32_t SuperpixelLSC_getNumberOfSuperpixels_m1400869621 (SuperpixelLSC_t3988871615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::enforceLabelConnectivity(System.Int32)
extern "C"  void SuperpixelLSC_enforceLabelConnectivity_m3249886319 (SuperpixelLSC_t3988871615 * __this, int32_t ___min_element_size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::enforceLabelConnectivity()
extern "C"  void SuperpixelLSC_enforceLabelConnectivity_m1060559902 (SuperpixelLSC_t3988871615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::getLabelContourMask(OpenCVForUnity.Mat,System.Boolean)
extern "C"  void SuperpixelLSC_getLabelContourMask_m2416406627 (SuperpixelLSC_t3988871615 * __this, Mat_t3763101966 * ___image0, bool ___thick_line1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::getLabelContourMask(OpenCVForUnity.Mat)
extern "C"  void SuperpixelLSC_getLabelContourMask_m3938153434 (SuperpixelLSC_t3988871615 * __this, Mat_t3763101966 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::getLabels(OpenCVForUnity.Mat)
extern "C"  void SuperpixelLSC_getLabels_m316497031 (SuperpixelLSC_t3988871615 * __this, Mat_t3763101966 * ___labels_out0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::iterate(System.Int32)
extern "C"  void SuperpixelLSC_iterate_m677380344 (SuperpixelLSC_t3988871615 * __this, int32_t ___num_iterations0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::iterate()
extern "C"  void SuperpixelLSC_iterate_m3647032871 (SuperpixelLSC_t3988871615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_getNumberOfSuperpixels_10(System.IntPtr)
extern "C"  int32_t SuperpixelLSC_ximgproc_SuperpixelLSC_getNumberOfSuperpixels_10_m1262383377 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_enforceLabelConnectivity_10(System.IntPtr,System.Int32)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_enforceLabelConnectivity_10_m3295754881 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___min_element_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_enforceLabelConnectivity_11(System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_enforceLabelConnectivity_11_m1158861813 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_getLabelContourMask_10(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_getLabelContourMask_10_m3929534698 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, bool ___thick_line2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_getLabelContourMask_11(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_getLabelContourMask_11_m255689170 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_getLabels_10(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_getLabels_10_m3359518304 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___labels_out_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_iterate_10(System.IntPtr,System.Int32)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_iterate_10_m226826656 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___num_iterations1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_iterate_11(System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_iterate_11_m2217201270 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelLSC::ximgproc_SuperpixelLSC_delete(System.IntPtr)
extern "C"  void SuperpixelLSC_ximgproc_SuperpixelLSC_delete_m1291367440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
