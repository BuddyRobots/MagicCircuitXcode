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

// OpenCVForUnity.GraphSegmentation
struct GraphSegmentation_t2687739006;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.GraphSegmentation::.ctor(System.IntPtr)
extern "C"  void GraphSegmentation__ctor_m4176405572 (GraphSegmentation_t2687739006 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::Dispose(System.Boolean)
extern "C"  void GraphSegmentation_Dispose_m1199238404 (GraphSegmentation_t2687739006 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.GraphSegmentation::getSigma()
extern "C"  double GraphSegmentation_getSigma_m1220825638 (GraphSegmentation_t2687739006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.GraphSegmentation::getK()
extern "C"  float GraphSegmentation_getK_m517982293 (GraphSegmentation_t2687739006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.GraphSegmentation::getMinSize()
extern "C"  int32_t GraphSegmentation_getMinSize_m3375015519 (GraphSegmentation_t2687739006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::processImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void GraphSegmentation_processImage_m524787622 (GraphSegmentation_t2687739006 * __this, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::setK(System.Single)
extern "C"  void GraphSegmentation_setK_m633173454 (GraphSegmentation_t2687739006 * __this, float ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::setMinSize(System.Int32)
extern "C"  void GraphSegmentation_setMinSize_m3829113622 (GraphSegmentation_t2687739006 * __this, int32_t ___min_size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::setSigma(System.Double)
extern "C"  void GraphSegmentation_setSigma_m3598543595 (GraphSegmentation_t2687739006 * __this, double ___sigma0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.GraphSegmentation::ximgproc_GraphSegmentation_getSigma_10(System.IntPtr)
extern "C"  double GraphSegmentation_ximgproc_GraphSegmentation_getSigma_10_m1278158331 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.GraphSegmentation::ximgproc_GraphSegmentation_getK_10(System.IntPtr)
extern "C"  float GraphSegmentation_ximgproc_GraphSegmentation_getK_10_m2386161208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.GraphSegmentation::ximgproc_GraphSegmentation_getMinSize_10(System.IntPtr)
extern "C"  int32_t GraphSegmentation_ximgproc_GraphSegmentation_getMinSize_10_m3348882494 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::ximgproc_GraphSegmentation_processImage_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void GraphSegmentation_ximgproc_GraphSegmentation_processImage_10_m3536334167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::ximgproc_GraphSegmentation_setK_10(System.IntPtr,System.Single)
extern "C"  void GraphSegmentation_ximgproc_GraphSegmentation_setK_10_m1436864221 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::ximgproc_GraphSegmentation_setMinSize_10(System.IntPtr,System.Int32)
extern "C"  void GraphSegmentation_ximgproc_GraphSegmentation_setMinSize_10_m1980684759 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___min_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::ximgproc_GraphSegmentation_setSigma_10(System.IntPtr,System.Double)
extern "C"  void GraphSegmentation_ximgproc_GraphSegmentation_setSigma_10_m1752600110 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___sigma1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.GraphSegmentation::ximgproc_GraphSegmentation_delete(System.IntPtr)
extern "C"  void GraphSegmentation_ximgproc_GraphSegmentation_delete_m3811682574 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
