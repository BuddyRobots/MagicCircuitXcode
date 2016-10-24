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

// OpenCVForUnity.DisparityFilter
struct DisparityFilter_t1971426561;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.Rect
struct Rect_t4100128956;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect4100128956.h"

// System.Void OpenCVForUnity.DisparityFilter::.ctor(System.IntPtr)
extern "C"  void DisparityFilter__ctor_m4011022983 (DisparityFilter_t1971426561 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::Dispose(System.Boolean)
extern "C"  void DisparityFilter_Dispose_m614018017 (DisparityFilter_t1971426561 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::filter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Rect,OpenCVForUnity.Mat)
extern "C"  void DisparityFilter_filter_m2147014449 (DisparityFilter_t1971426561 * __this, Mat_t3763101966 * ___disparity_map_left0, Mat_t3763101966 * ___left_view1, Mat_t3763101966 * ___filtered_disparity_map2, Mat_t3763101966 * ___disparity_map_right3, Rect_t4100128956 * ___ROI4, Mat_t3763101966 * ___right_view5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::filter(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void DisparityFilter_filter_m4208785428 (DisparityFilter_t1971426561 * __this, Mat_t3763101966 * ___disparity_map_left0, Mat_t3763101966 * ___left_view1, Mat_t3763101966 * ___filtered_disparity_map2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::ximgproc_DisparityFilter_filter_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr)
extern "C"  void DisparityFilter_ximgproc_DisparityFilter_filter_10_m1754504775 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___disparity_map_left_nativeObj1, IntPtr_t ___left_view_nativeObj2, IntPtr_t ___filtered_disparity_map_nativeObj3, IntPtr_t ___disparity_map_right_nativeObj4, int32_t ___ROI_x5, int32_t ___ROI_y6, int32_t ___ROI_width7, int32_t ___ROI_height8, IntPtr_t ___right_view_nativeObj9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::ximgproc_DisparityFilter_filter_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DisparityFilter_ximgproc_DisparityFilter_filter_11_m199106826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___disparity_map_left_nativeObj1, IntPtr_t ___left_view_nativeObj2, IntPtr_t ___filtered_disparity_map_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DisparityFilter::ximgproc_DisparityFilter_delete(System.IntPtr)
extern "C"  void DisparityFilter_ximgproc_DisparityFilter_delete_m2071098452 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
