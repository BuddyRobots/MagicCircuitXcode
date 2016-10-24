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

// OpenCVForUnity.Features2d
struct Features2d_t4017827463;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.MatOfKeyPoint
struct MatOfKeyPoint_t1212576982;
// OpenCVForUnity.Scalar
struct Scalar_t3445295492;
// OpenCVForUnity.MatOfDMatch
struct MatOfDMatch_t2690227878;
// OpenCVForUnity.MatOfByte
struct MatOfByte_t3527287917;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>
struct List_1_t4058413430;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfByte>
struct List_1_t600506173;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfKeyPoint1212576982.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3445295492.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDMatch2690227878.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfByte3527287917.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Features2d::.ctor()
extern "C"  void Features2d__ctor_m3159759095 (Features2d_t4017827463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawKeypoints(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.Scalar,System.Int32)
extern "C"  void Features2d_drawKeypoints_m4147165500 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___image0, MatOfKeyPoint_t1212576982 * ___keypoints1, Mat_t3763101966 * ___outImage2, Scalar_t3445295492 * ___color3, int32_t ___flags4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawKeypoints(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat)
extern "C"  void Features2d_drawKeypoints_m3997399904 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___image0, MatOfKeyPoint_t1212576982 * ___keypoints1, Mat_t3763101966 * ___outImage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawMatches(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.MatOfDMatch,OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Scalar,OpenCVForUnity.MatOfByte,System.Int32)
extern "C"  void Features2d_drawMatches_m3068699723 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___img10, MatOfKeyPoint_t1212576982 * ___keypoints11, Mat_t3763101966 * ___img22, MatOfKeyPoint_t1212576982 * ___keypoints23, MatOfDMatch_t2690227878 * ___matches1to24, Mat_t3763101966 * ___outImg5, Scalar_t3445295492 * ___matchColor6, Scalar_t3445295492 * ___singlePointColor7, MatOfByte_t3527287917 * ___matchesMask8, int32_t ___flags9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawMatches(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.MatOfDMatch,OpenCVForUnity.Mat)
extern "C"  void Features2d_drawMatches_m225197290 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___img10, MatOfKeyPoint_t1212576982 * ___keypoints11, Mat_t3763101966 * ___img22, MatOfKeyPoint_t1212576982 * ___keypoints23, MatOfDMatch_t2690227878 * ___matches1to24, Mat_t3763101966 * ___outImg5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawMatches2(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,OpenCVForUnity.Mat,OpenCVForUnity.Scalar,OpenCVForUnity.Scalar,System.Collections.Generic.List`1<OpenCVForUnity.MatOfByte>,System.Int32)
extern "C"  void Features2d_drawMatches2_m1723606773 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___img10, MatOfKeyPoint_t1212576982 * ___keypoints11, Mat_t3763101966 * ___img22, MatOfKeyPoint_t1212576982 * ___keypoints23, List_1_t4058413430 * ___matches1to24, Mat_t3763101966 * ___outImg5, Scalar_t3445295492 * ___matchColor6, Scalar_t3445295492 * ___singlePointColor7, List_1_t600506173 * ___matchesMask8, int32_t ___flags9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::drawMatches2(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,OpenCVForUnity.Mat)
extern "C"  void Features2d_drawMatches2_m1264106982 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___img10, MatOfKeyPoint_t1212576982 * ___keypoints11, Mat_t3763101966 * ___img22, MatOfKeyPoint_t1212576982 * ___keypoints23, List_1_t4058413430 * ___matches1to24, Mat_t3763101966 * ___outImg5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawKeypoints_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void Features2d_features2d_Features2d_drawKeypoints_10_m4045399108 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj0, IntPtr_t ___keypoints_mat_nativeObj1, IntPtr_t ___outImage_nativeObj2, double ___color_val03, double ___color_val14, double ___color_val25, double ___color_val36, int32_t ___flags7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawKeypoints_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Features2d_features2d_Features2d_drawKeypoints_11_m1277074914 (Il2CppObject * __this /* static, unused */, IntPtr_t ___image_nativeObj0, IntPtr_t ___keypoints_mat_nativeObj1, IntPtr_t ___outImage_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawMatches_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Int32)
extern "C"  void Features2d_features2d_Features2d_drawMatches_10_m3875985739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img1_nativeObj0, IntPtr_t ___keypoints1_mat_nativeObj1, IntPtr_t ___img2_nativeObj2, IntPtr_t ___keypoints2_mat_nativeObj3, IntPtr_t ___matches1to2_mat_nativeObj4, IntPtr_t ___outImg_nativeObj5, double ___matchColor_val06, double ___matchColor_val17, double ___matchColor_val28, double ___matchColor_val39, double ___singlePointColor_val010, double ___singlePointColor_val111, double ___singlePointColor_val212, double ___singlePointColor_val313, IntPtr_t ___matchesMask_mat_nativeObj14, int32_t ___flags15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawMatches_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Features2d_features2d_Features2d_drawMatches_11_m3365256381 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img1_nativeObj0, IntPtr_t ___keypoints1_mat_nativeObj1, IntPtr_t ___img2_nativeObj2, IntPtr_t ___keypoints2_mat_nativeObj3, IntPtr_t ___matches1to2_mat_nativeObj4, IntPtr_t ___outImg_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawMatches2_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr,System.Int32)
extern "C"  void Features2d_features2d_Features2d_drawMatches2_10_m2456194175 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img1_nativeObj0, IntPtr_t ___keypoints1_mat_nativeObj1, IntPtr_t ___img2_nativeObj2, IntPtr_t ___keypoints2_mat_nativeObj3, IntPtr_t ___matches1to2_mat_nativeObj4, IntPtr_t ___outImg_nativeObj5, double ___matchColor_val06, double ___matchColor_val17, double ___matchColor_val28, double ___matchColor_val39, double ___singlePointColor_val010, double ___singlePointColor_val111, double ___singlePointColor_val212, double ___singlePointColor_val313, IntPtr_t ___matchesMask_mat_nativeObj14, int32_t ___flags15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Features2d::features2d_Features2d_drawMatches2_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Features2d_features2d_Features2d_drawMatches2_11_m170312201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img1_nativeObj0, IntPtr_t ___keypoints1_mat_nativeObj1, IntPtr_t ___img2_nativeObj2, IntPtr_t ___keypoints2_mat_nativeObj3, IntPtr_t ___matches1to2_mat_nativeObj4, IntPtr_t ___outImg_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
