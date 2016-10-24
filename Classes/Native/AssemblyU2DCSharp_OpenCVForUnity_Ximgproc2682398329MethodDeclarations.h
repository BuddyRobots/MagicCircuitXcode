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

// OpenCVForUnity.Ximgproc
struct Ximgproc_t2682398329;
// OpenCVForUnity.AdaptiveManifoldFilter
struct AdaptiveManifoldFilter_t2168392214;
// OpenCVForUnity.DTFilter
struct DTFilter_t3908381792;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.DisparityWLSFilter
struct DisparityWLSFilter_t3633783603;
// OpenCVForUnity.EdgeAwareInterpolator
struct EdgeAwareInterpolator_t2474240246;
// OpenCVForUnity.FastGlobalSmootherFilter
struct FastGlobalSmootherFilter_t1905624458;
// OpenCVForUnity.GraphSegmentation
struct GraphSegmentation_t2687739006;
// OpenCVForUnity.GuidedFilter
struct GuidedFilter_t2105942104;
// OpenCVForUnity.RFFeatureGetter
struct RFFeatureGetter_t671993115;
// OpenCVForUnity.StructuredEdgeDetection
struct StructuredEdgeDetection_t3583597477;
// System.String
struct String_t;
// OpenCVForUnity.SuperpixelLSC
struct SuperpixelLSC_t3988871615;
// OpenCVForUnity.SuperpixelSEEDS
struct SuperpixelSEEDS_t3880506917;
// OpenCVForUnity.SuperpixelSLIC
struct SuperpixelSLIC_t2509103158;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_RFFeatureGetter671993115.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Ximgproc::.ctor()
extern "C"  void Ximgproc__ctor_m2178681669 (Ximgproc_t2682398329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.AdaptiveManifoldFilter OpenCVForUnity.Ximgproc::createAMFilter(System.Double,System.Double,System.Boolean)
extern "C"  AdaptiveManifoldFilter_t2168392214 * Ximgproc_createAMFilter_m3996819598 (Il2CppObject * __this /* static, unused */, double ___sigma_s0, double ___sigma_r1, bool ___adjust_outliers2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.AdaptiveManifoldFilter OpenCVForUnity.Ximgproc::createAMFilter(System.Double,System.Double)
extern "C"  AdaptiveManifoldFilter_t2168392214 * Ximgproc_createAMFilter_m2439074575 (Il2CppObject * __this /* static, unused */, double ___sigma_s0, double ___sigma_r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DTFilter OpenCVForUnity.Ximgproc::createDTFilter(OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  DTFilter_t3908381792 * Ximgproc_createDTFilter_m913013114 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, double ___sigmaSpatial1, double ___sigmaColor2, int32_t ___mode3, int32_t ___numIters4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DTFilter OpenCVForUnity.Ximgproc::createDTFilter(OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  DTFilter_t3908381792 * Ximgproc_createDTFilter_m927568026 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, double ___sigmaSpatial1, double ___sigmaColor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DisparityWLSFilter OpenCVForUnity.Ximgproc::createDisparityWLSFilterGeneric(System.Boolean)
extern "C"  DisparityWLSFilter_t3633783603 * Ximgproc_createDisparityWLSFilterGeneric_m4180918157 (Il2CppObject * __this /* static, unused */, bool ___use_confidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.EdgeAwareInterpolator OpenCVForUnity.Ximgproc::createEdgeAwareInterpolator()
extern "C"  EdgeAwareInterpolator_t2474240246 * Ximgproc_createEdgeAwareInterpolator_m3340773673 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.FastGlobalSmootherFilter OpenCVForUnity.Ximgproc::createFastGlobalSmootherFilter(OpenCVForUnity.Mat,System.Double,System.Double,System.Double,System.Int32)
extern "C"  FastGlobalSmootherFilter_t1905624458 * Ximgproc_createFastGlobalSmootherFilter_m3923951661 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, double ___lambda1, double ___sigma_color2, double ___lambda_attenuation3, int32_t ___num_iter4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.FastGlobalSmootherFilter OpenCVForUnity.Ximgproc::createFastGlobalSmootherFilter(OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  FastGlobalSmootherFilter_t1905624458 * Ximgproc_createFastGlobalSmootherFilter_m908418286 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, double ___lambda1, double ___sigma_color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.GraphSegmentation OpenCVForUnity.Ximgproc::createGraphSegmentation(System.Double,System.Single,System.Int32)
extern "C"  GraphSegmentation_t2687739006 * Ximgproc_createGraphSegmentation_m580803513 (Il2CppObject * __this /* static, unused */, double ___sigma0, float ___k1, int32_t ___min_size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.GraphSegmentation OpenCVForUnity.Ximgproc::createGraphSegmentation()
extern "C"  GraphSegmentation_t2687739006 * Ximgproc_createGraphSegmentation_m2248687401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.GuidedFilter OpenCVForUnity.Ximgproc::createGuidedFilter(OpenCVForUnity.Mat,System.Int32,System.Double)
extern "C"  GuidedFilter_t2105942104 * Ximgproc_createGuidedFilter_m394836033 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, int32_t ___radius1, double ___eps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RFFeatureGetter OpenCVForUnity.Ximgproc::createRFFeatureGetter()
extern "C"  RFFeatureGetter_t671993115 * Ximgproc_createRFFeatureGetter_m3652265481 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.StructuredEdgeDetection OpenCVForUnity.Ximgproc::createStructuredEdgeDetection(System.String,OpenCVForUnity.RFFeatureGetter)
extern "C"  StructuredEdgeDetection_t3583597477 * Ximgproc_createStructuredEdgeDetection_m924981317 (Il2CppObject * __this /* static, unused */, String_t* ___model0, RFFeatureGetter_t671993115 * ___howToGetFeatures1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.StructuredEdgeDetection OpenCVForUnity.Ximgproc::createStructuredEdgeDetection(System.String)
extern "C"  StructuredEdgeDetection_t3583597477 * Ximgproc_createStructuredEdgeDetection_m3197255641 (Il2CppObject * __this /* static, unused */, String_t* ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelLSC OpenCVForUnity.Ximgproc::createSuperpixelLSC(OpenCVForUnity.Mat,System.Int32,System.Single)
extern "C"  SuperpixelLSC_t3988871615 * Ximgproc_createSuperpixelLSC_m2020102926 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___image0, int32_t ___region_size1, float ___ratio2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelLSC OpenCVForUnity.Ximgproc::createSuperpixelLSC(OpenCVForUnity.Mat)
extern "C"  SuperpixelLSC_t3988871615 * Ximgproc_createSuperpixelLSC_m1458942894 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelSEEDS OpenCVForUnity.Ximgproc::createSuperpixelSEEDS(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  SuperpixelSEEDS_t3880506917 * Ximgproc_createSuperpixelSEEDS_m4174449923 (Il2CppObject * __this /* static, unused */, int32_t ___image_width0, int32_t ___image_height1, int32_t ___image_channels2, int32_t ___num_superpixels3, int32_t ___num_levels4, int32_t ___prior5, int32_t ___histogram_bins6, bool ___double_step7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelSEEDS OpenCVForUnity.Ximgproc::createSuperpixelSEEDS(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  SuperpixelSEEDS_t3880506917 * Ximgproc_createSuperpixelSEEDS_m3745051226 (Il2CppObject * __this /* static, unused */, int32_t ___image_width0, int32_t ___image_height1, int32_t ___image_channels2, int32_t ___num_superpixels3, int32_t ___num_levels4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelSLIC OpenCVForUnity.Ximgproc::createSuperpixelSLIC(OpenCVForUnity.Mat,System.Int32,System.Int32,System.Single)
extern "C"  SuperpixelSLIC_t2509103158 * Ximgproc_createSuperpixelSLIC_m784602643 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___image0, int32_t ___algorithm1, int32_t ___region_size2, float ___ruler3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SuperpixelSLIC OpenCVForUnity.Ximgproc::createSuperpixelSLIC(OpenCVForUnity.Mat)
extern "C"  SuperpixelSLIC_t2509103158 * Ximgproc_createSuperpixelSLIC_m2495939534 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::amFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Boolean)
extern "C"  void Ximgproc_amFilter_m2092823549 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___joint0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, double ___sigma_s3, double ___sigma_r4, bool ___adjust_outliers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::amFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Ximgproc_amFilter_m1812295552 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___joint0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, double ___sigma_s3, double ___sigma_r4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::covarianceEstimation(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32)
extern "C"  void Ximgproc_covarianceEstimation_m2836141535 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, int32_t ___windowRows2, int32_t ___windowCols3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::dtFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Ximgproc_dtFilter_m2241270340 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, double ___sigmaSpatial3, double ___sigmaColor4, int32_t ___mode5, int32_t ___numIters6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::dtFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Ximgproc_dtFilter_m586519012 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, double ___sigmaSpatial3, double ___sigmaColor4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::fastGlobalSmootherFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_fastGlobalSmootherFilter_m4253347757 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, double ___lambda3, double ___sigma_color4, double ___lambda_attenuation5, int32_t ___num_iter6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::fastGlobalSmootherFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Ximgproc_fastGlobalSmootherFilter_m1612111214 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, double ___lambda3, double ___sigma_color4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::guidedFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Int32)
extern "C"  void Ximgproc_guidedFilter_m1868445672 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, int32_t ___radius3, double ___eps4, int32_t ___dDepth5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::guidedFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double)
extern "C"  void Ximgproc_guidedFilter_m3789634895 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___guide0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, int32_t ___radius3, double ___eps4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::jointBilateralFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_jointBilateralFilter_m612430314 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___joint0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, int32_t ___d3, double ___sigmaColor4, double ___sigmaSpace5, int32_t ___borderType6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::jointBilateralFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double)
extern "C"  void Ximgproc_jointBilateralFilter_m328099853 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___joint0, Mat_t3763101966 * ___src1, Mat_t3763101966 * ___dst2, int32_t ___d3, double ___sigmaColor4, double ___sigmaSpace5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::l0Smooth(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Ximgproc_l0Smooth_m2459654701 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, double ___lambda2, double ___kappa3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::l0Smooth(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Ximgproc_l0Smooth_m44551093 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::niBlackThreshold(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32,System.Int32,System.Double)
extern "C"  void Ximgproc_niBlackThreshold_m1555156152 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ____src0, Mat_t3763101966 * ____dst1, double ___maxValue2, int32_t ___type3, int32_t ___blockSize4, double ___delta5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::rollingGuidanceFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Ximgproc_rollingGuidanceFilter_m2410250785 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, int32_t ___d2, double ___sigmaColor3, double ___sigmaSpace4, int32_t ___numOfIter5, int32_t ___borderType6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::rollingGuidanceFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_rollingGuidanceFilter_m1481427574 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, int32_t ___d2, double ___sigmaColor3, double ___sigmaSpace4, int32_t ___numOfIter5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::rollingGuidanceFilter(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Ximgproc_rollingGuidanceFilter_m402706446 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createAMFilter_10(System.Double,System.Double,System.Boolean)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createAMFilter_10_m1218343829 (Il2CppObject * __this /* static, unused */, double ___sigma_s0, double ___sigma_r1, bool ___adjust_outliers2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createAMFilter_11(System.Double,System.Double)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createAMFilter_11_m1757765255 (Il2CppObject * __this /* static, unused */, double ___sigma_s0, double ___sigma_r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createDTFilter_10(System.IntPtr,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createDTFilter_10_m3801803450 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, double ___sigmaSpatial1, double ___sigmaColor2, int32_t ___mode3, int32_t ___numIters4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createDTFilter_11(System.IntPtr,System.Double,System.Double)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createDTFilter_11_m2637200185 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, double ___sigmaSpatial1, double ___sigmaColor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createDisparityWLSFilterGeneric_10(System.Boolean)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createDisparityWLSFilterGeneric_10_m2414661343 (Il2CppObject * __this /* static, unused */, bool ___use_confidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createEdgeAwareInterpolator_10()
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createEdgeAwareInterpolator_10_m1790013340 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createFastGlobalSmootherFilter_10(System.IntPtr,System.Double,System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createFastGlobalSmootherFilter_10_m680836567 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, double ___lambda1, double ___sigma_color2, double ___lambda_attenuation3, int32_t ___num_iter4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createFastGlobalSmootherFilter_11(System.IntPtr,System.Double,System.Double)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createFastGlobalSmootherFilter_11_m2232785635 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, double ___lambda1, double ___sigma_color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createGraphSegmentation_10(System.Double,System.Single,System.Int32)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createGraphSegmentation_10_m1188081316 (Il2CppObject * __this /* static, unused */, double ___sigma0, float ___k1, int32_t ___min_size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createGraphSegmentation_11()
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createGraphSegmentation_11_m297802965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createGuidedFilter_10(System.IntPtr,System.Int32,System.Double)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createGuidedFilter_10_m3729724921 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, int32_t ___radius1, double ___eps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createRFFeatureGetter_10()
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createRFFeatureGetter_10_m2822308503 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createStructuredEdgeDetection_10(System.String,System.IntPtr)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createStructuredEdgeDetection_10_m1853996707 (Il2CppObject * __this /* static, unused */, String_t* ___model0, IntPtr_t ___howToGetFeatures_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createStructuredEdgeDetection_11(System.String)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createStructuredEdgeDetection_11_m2397128628 (Il2CppObject * __this /* static, unused */, String_t* ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelLSC_10(System.IntPtr,System.Int32,System.Single)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelLSC_10_m2033315867 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj0, int32_t ___region_size1, float ___ratio2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelLSC_11(System.IntPtr)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelLSC_11_m3546292384 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelSEEDS_10(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelSEEDS_10_m2306701951 (Il2CppObject * __this /* static, unused */, int32_t ___image_width0, int32_t ___image_height1, int32_t ___image_channels2, int32_t ___num_superpixels3, int32_t ___num_levels4, int32_t ___prior5, int32_t ___histogram_bins6, bool ___double_step7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelSEEDS_11(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelSEEDS_11_m2988356895 (Il2CppObject * __this /* static, unused */, int32_t ___image_width0, int32_t ___image_height1, int32_t ___image_channels2, int32_t ___num_superpixels3, int32_t ___num_levels4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelSLIC_10(System.IntPtr,System.Int32,System.Int32,System.Single)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelSLIC_10_m3383540605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj0, int32_t ___algorithm1, int32_t ___region_size2, float ___ruler3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_createSuperpixelSLIC_11(System.IntPtr)
extern "C"  IntPtr_t Ximgproc_ximgproc_Ximgproc_createSuperpixelSLIC_11_m4291868951 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_amFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Boolean)
extern "C"  void Ximgproc_ximgproc_Ximgproc_amFilter_10_m1335203058 (Il2CppObject * __this /* static, unused */, IntPtr_t ___joint_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, double ___sigma_s3, double ___sigma_r4, bool ___adjust_outliers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_amFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_amFilter_11_m4089141258 (Il2CppObject * __this /* static, unused */, IntPtr_t ___joint_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, double ___sigma_s3, double ___sigma_r4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_covarianceEstimation_10(System.IntPtr,System.IntPtr,System.Int32,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_covarianceEstimation_10_m2634300425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, int32_t ___windowRows2, int32_t ___windowCols3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_dtFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_dtFilter_10_m3098324015 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, double ___sigmaSpatial3, double ___sigmaColor4, int32_t ___mode5, int32_t ___numIters6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_dtFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_dtFilter_11_m2736844910 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, double ___sigmaSpatial3, double ___sigmaColor4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_fastGlobalSmootherFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_fastGlobalSmootherFilter_10_m2390094882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, double ___lambda3, double ___sigma_color4, double ___lambda_attenuation5, int32_t ___num_iter6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_fastGlobalSmootherFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_fastGlobalSmootherFilter_11_m2107603704 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, double ___lambda3, double ___sigma_color4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_guidedFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_guidedFilter_10_m2014309651 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, int32_t ___radius3, double ___eps4, int32_t ___dDepth5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_guidedFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_guidedFilter_11_m3406115205 (Il2CppObject * __this /* static, unused */, IntPtr_t ___guide_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, int32_t ___radius3, double ___eps4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_jointBilateralFilter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_jointBilateralFilter_10_m1685736661 (Il2CppObject * __this /* static, unused */, IntPtr_t ___joint_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, int32_t ___d3, double ___sigmaColor4, double ___sigmaSpace5, int32_t ___borderType6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_jointBilateralFilter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_jointBilateralFilter_11_m166795459 (Il2CppObject * __this /* static, unused */, IntPtr_t ___joint_nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, int32_t ___d3, double ___sigmaColor4, double ___sigmaSpace5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_l0Smooth_10(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_l0Smooth_10_m4174506923 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, double ___lambda2, double ___kappa3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_l0Smooth_11(System.IntPtr,System.IntPtr)
extern "C"  void Ximgproc_ximgproc_Ximgproc_l0Smooth_11_m58954194 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_niBlackThreshold_10(System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Double)
extern "C"  void Ximgproc_ximgproc_Ximgproc_niBlackThreshold_10_m4158762560 (Il2CppObject * __this /* static, unused */, IntPtr_t ____src_nativeObj0, IntPtr_t ____dst_nativeObj1, double ___maxValue2, int32_t ___type3, int32_t ___blockSize4, double ___delta5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_rollingGuidanceFilter_10(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_rollingGuidanceFilter_10_m3254818549 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, int32_t ___d2, double ___sigmaColor3, double ___sigmaSpace4, int32_t ___numOfIter5, int32_t ___borderType6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_rollingGuidanceFilter_11(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double,System.Int32)
extern "C"  void Ximgproc_ximgproc_Ximgproc_rollingGuidanceFilter_11_m3111111553 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, int32_t ___d2, double ___sigmaColor3, double ___sigmaSpace4, int32_t ___numOfIter5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Ximgproc::ximgproc_Ximgproc_rollingGuidanceFilter_12(System.IntPtr,System.IntPtr)
extern "C"  void Ximgproc_ximgproc_Ximgproc_rollingGuidanceFilter_12_m3677799160 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
