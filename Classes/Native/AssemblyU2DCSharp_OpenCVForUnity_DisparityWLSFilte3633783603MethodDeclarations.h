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

// OpenCVForUnity.DisparityWLSFilter
struct DisparityWLSFilter_t3633783603;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.Rect
struct Rect_t4100128956;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.DisparityWLSFilter::.ctor(System.IntPtr)
extern "C"  void DisparityWLSFilter__ctor_m1794369641 (DisparityWLSFilter_t3633783603 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::Dispose(System.Boolean)
extern "C"  void DisparityWLSFilter_Dispose_m3711449791 (DisparityWLSFilter_t3633783603 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.DisparityWLSFilter::getConfidenceMap()
extern "C"  Mat_t3763101966 * DisparityWLSFilter_getConfidenceMap_m4158431891 (DisparityWLSFilter_t3633783603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Rect OpenCVForUnity.DisparityWLSFilter::getROI()
extern "C"  Rect_t4100128956 * DisparityWLSFilter_getROI_m1251877445 (DisparityWLSFilter_t3633783603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.DisparityWLSFilter::getLambda()
extern "C"  double DisparityWLSFilter_getLambda_m4165788585 (DisparityWLSFilter_t3633783603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.DisparityWLSFilter::getSigmaColor()
extern "C"  double DisparityWLSFilter_getSigmaColor_m253233632 (DisparityWLSFilter_t3633783603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DisparityWLSFilter::getDepthDiscontinuityRadius()
extern "C"  int32_t DisparityWLSFilter_getDepthDiscontinuityRadius_m774766010 (DisparityWLSFilter_t3633783603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DisparityWLSFilter::getLRCthresh()
extern "C"  int32_t DisparityWLSFilter_getLRCthresh_m3389113422 (DisparityWLSFilter_t3633783603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::setDepthDiscontinuityRadius(System.Int32)
extern "C"  void DisparityWLSFilter_setDepthDiscontinuityRadius_m1975640841 (DisparityWLSFilter_t3633783603 * __this, int32_t ____disc_radius0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::setLRCthresh(System.Int32)
extern "C"  void DisparityWLSFilter_setLRCthresh_m2768970081 (DisparityWLSFilter_t3633783603 * __this, int32_t ____LRC_thresh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::setLambda(System.Double)
extern "C"  void DisparityWLSFilter_setLambda_m3160470768 (DisparityWLSFilter_t3633783603 * __this, double ____lambda0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::setSigmaColor(System.Double)
extern "C"  void DisparityWLSFilter_setSigmaColor_m2707139737 (DisparityWLSFilter_t3633783603 * __this, double ____sigma_color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_getConfidenceMap_10(System.IntPtr)
extern "C"  IntPtr_t DisparityWLSFilter_ximgproc_DisparityWLSFilter_getConfidenceMap_10_m1686465594 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_getROI_10(System.IntPtr,System.Double[])
extern "C"  void DisparityWLSFilter_ximgproc_DisparityWLSFilter_getROI_10_m2128340611 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_getLambda_10(System.IntPtr)
extern "C"  double DisparityWLSFilter_ximgproc_DisparityWLSFilter_getLambda_10_m2525715319 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_getSigmaColor_10(System.IntPtr)
extern "C"  double DisparityWLSFilter_ximgproc_DisparityWLSFilter_getSigmaColor_10_m1611429550 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_getDepthDiscontinuityRadius_10(System.IntPtr)
extern "C"  int32_t DisparityWLSFilter_ximgproc_DisparityWLSFilter_getDepthDiscontinuityRadius_10_m3781833352 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_getLRCthresh_10(System.IntPtr)
extern "C"  int32_t DisparityWLSFilter_ximgproc_DisparityWLSFilter_getLRCthresh_10_m3003090344 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_setDepthDiscontinuityRadius_10(System.IntPtr,System.Int32)
extern "C"  void DisparityWLSFilter_ximgproc_DisparityWLSFilter_setDepthDiscontinuityRadius_10_m2437581585 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ____disc_radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_setLRCthresh_10(System.IntPtr,System.Int32)
extern "C"  void DisparityWLSFilter_ximgproc_DisparityWLSFilter_setLRCthresh_10_m1000339629 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ____LRC_thresh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_setLambda_10(System.IntPtr,System.Double)
extern "C"  void DisparityWLSFilter_ximgproc_DisparityWLSFilter_setLambda_10_m3065899100 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ____lambda1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_setSigmaColor_10(System.IntPtr,System.Double)
extern "C"  void DisparityWLSFilter_ximgproc_DisparityWLSFilter_setSigmaColor_10_m2836601555 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ____sigma_color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityWLSFilter::ximgproc_DisparityWLSFilter_delete(System.IntPtr)
extern "C"  void DisparityWLSFilter_ximgproc_DisparityWLSFilter_delete_m2188189770 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
