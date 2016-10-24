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

// OpenCVForUnity.Optflow
struct Optflow_t3972420751;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// System.String
struct String_t;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3527744841;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfRect3527744841.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Optflow::.ctor()
extern "C"  void Optflow__ctor_m2399742751 (Optflow_t3972420751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Optflow::readOpticalFlow(System.String)
extern "C"  Mat_t3763101966 * Optflow_readOpticalFlow_m3735565271 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Optflow::writeOpticalFlow(System.String,OpenCVForUnity.Mat)
extern "C"  bool Optflow_writeOpticalFlow_m3774811881 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Mat_t3763101966 * ___flow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Optflow::calcGlobalOrientation(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  double Optflow_calcGlobalOrientation_m3953875951 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___orientation0, Mat_t3763101966 * ___mask1, Mat_t3763101966 * ___mhi2, double ___timestamp3, double ___duration4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcMotionGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double,System.Int32)
extern "C"  void Optflow_calcMotionGradient_m1734992346 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___mhi0, Mat_t3763101966 * ___mask1, Mat_t3763101966 * ___orientation2, double ___delta13, double ___delta24, int32_t ___apertureSize5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcMotionGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Optflow_calcMotionGradient_m1127109149 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___mhi0, Mat_t3763101966 * ___mask1, Mat_t3763101966 * ___orientation2, double ___delta13, double ___delta24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::segmentMotion(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,System.Double,System.Double)
extern "C"  void Optflow_segmentMotion_m2682989256 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___mhi0, Mat_t3763101966 * ___segmask1, MatOfRect_t3527744841 * ___boundingRects2, double ___timestamp3, double ___segThresh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::updateMotionHistory(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Double)
extern "C"  void Optflow_updateMotionHistory_m4130759756 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___silhouette0, Mat_t3763101966 * ___mhi1, double ___timestamp2, double ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcOpticalFlowSF(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double)
extern "C"  void Optflow_calcOpticalFlowSF_m423771241 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___from0, Mat_t3763101966 * ___to1, Mat_t3763101966 * ___flow2, int32_t ___layers3, int32_t ___averaging_block_size4, int32_t ___max_flow5, double ___sigma_dist6, double ___sigma_color7, int32_t ___postprocess_window8, double ___sigma_dist_fix9, double ___sigma_color_fix10, double ___occ_thr11, int32_t ___upscale_averaging_radius12, double ___upscale_sigma_dist13, double ___upscale_sigma_color14, double ___speed_up_thr15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcOpticalFlowSF(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Int32)
extern "C"  void Optflow_calcOpticalFlowSF_m2945785873 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___from0, Mat_t3763101966 * ___to1, Mat_t3763101966 * ___flow2, int32_t ___layers3, int32_t ___averaging_block_size4, int32_t ___max_flow5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcOpticalFlowSparseToDense(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,System.Single,System.Boolean,System.Single,System.Single)
extern "C"  void Optflow_calcOpticalFlowSparseToDense_m174314917 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___from0, Mat_t3763101966 * ___to1, Mat_t3763101966 * ___flow2, int32_t ___grid_step3, int32_t ___k4, float ___sigma5, bool ___use_post_proc6, float ___fgs_lambda7, float ___fgs_sigma8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::calcOpticalFlowSparseToDense(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Optflow_calcOpticalFlowSparseToDense_m3254098141 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___from0, Mat_t3763101966 * ___to1, Mat_t3763101966 * ___flow2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Optflow::optflow_Optflow_readOpticalFlow_10(System.String)
extern "C"  IntPtr_t Optflow_optflow_Optflow_readOpticalFlow_10_m3682454686 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Optflow::optflow_Optflow_writeOpticalFlow_10(System.String,System.IntPtr)
extern "C"  bool Optflow_optflow_Optflow_writeOpticalFlow_10_m1814886028 (Il2CppObject * __this /* static, unused */, String_t* ___path0, IntPtr_t ___flow_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Optflow::optflow_Optflow_calcGlobalOrientation_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  double Optflow_optflow_Optflow_calcGlobalOrientation_10_m19419166 (Il2CppObject * __this /* static, unused */, IntPtr_t ___orientation_nativeObj0, IntPtr_t ___mask_nativeObj1, IntPtr_t ___mhi_nativeObj2, double ___timestamp3, double ___duration4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcMotionGradient_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Optflow_optflow_Optflow_calcMotionGradient_10_m1192861651 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhi_nativeObj0, IntPtr_t ___mask_nativeObj1, IntPtr_t ___orientation_nativeObj2, double ___delta13, double ___delta24, int32_t ___apertureSize5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcMotionGradient_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Optflow_optflow_Optflow_calcMotionGradient_11_m932120675 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhi_nativeObj0, IntPtr_t ___mask_nativeObj1, IntPtr_t ___orientation_nativeObj2, double ___delta13, double ___delta24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_segmentMotion_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Optflow_optflow_Optflow_segmentMotion_10_m1631236882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___mhi_nativeObj0, IntPtr_t ___segmask_nativeObj1, IntPtr_t ___boundingRects_mat_nativeObj2, double ___timestamp3, double ___segThresh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_updateMotionHistory_10(System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void Optflow_optflow_Optflow_updateMotionHistory_10_m2755523184 (Il2CppObject * __this /* static, unused */, IntPtr_t ___silhouette_nativeObj0, IntPtr_t ___mhi_nativeObj1, double ___timestamp2, double ___duration3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcOpticalFlowSF_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double)
extern "C"  void Optflow_optflow_Optflow_calcOpticalFlowSF_10_m1264513306 (Il2CppObject * __this /* static, unused */, IntPtr_t ___from_nativeObj0, IntPtr_t ___to_nativeObj1, IntPtr_t ___flow_nativeObj2, int32_t ___layers3, int32_t ___averaging_block_size4, int32_t ___max_flow5, double ___sigma_dist6, double ___sigma_color7, int32_t ___postprocess_window8, double ___sigma_dist_fix9, double ___sigma_color_fix10, double ___occ_thr11, int32_t ___upscale_averaging_radius12, double ___upscale_sigma_dist13, double ___upscale_sigma_color14, double ___speed_up_thr15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcOpticalFlowSF_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Optflow_optflow_Optflow_calcOpticalFlowSF_11_m2821044163 (Il2CppObject * __this /* static, unused */, IntPtr_t ___from_nativeObj0, IntPtr_t ___to_nativeObj1, IntPtr_t ___flow_nativeObj2, int32_t ___layers3, int32_t ___averaging_block_size4, int32_t ___max_flow5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcOpticalFlowSparseToDense_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Single,System.Boolean,System.Single,System.Single)
extern "C"  void Optflow_optflow_Optflow_calcOpticalFlowSparseToDense_10_m1511037790 (Il2CppObject * __this /* static, unused */, IntPtr_t ___from_nativeObj0, IntPtr_t ___to_nativeObj1, IntPtr_t ___flow_nativeObj2, int32_t ___grid_step3, int32_t ___k4, float ___sigma5, bool ___use_post_proc6, float ___fgs_lambda7, float ___fgs_sigma8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Optflow::optflow_Optflow_calcOpticalFlowSparseToDense_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Optflow_optflow_Optflow_calcOpticalFlowSparseToDense_11_m2263622947 (Il2CppObject * __this /* static, unused */, IntPtr_t ___from_nativeObj0, IntPtr_t ___to_nativeObj1, IntPtr_t ___flow_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
