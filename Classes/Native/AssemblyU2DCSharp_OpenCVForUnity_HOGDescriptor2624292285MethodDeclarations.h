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

// OpenCVForUnity.HOGDescriptor
struct HOGDescriptor_t2624292285;
// OpenCVForUnity.Size
struct Size_t4100163289;
// System.String
struct String_t;
// OpenCVForUnity.MatOfFloat
struct MatOfFloat_t1088010333;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.MatOfPoint
struct MatOfPoint_t1097329553;
// OpenCVForUnity.MatOfDouble
struct MatOfDouble_t2722206390;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3527744841;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfFloat1088010333.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint1097329553.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDouble2722206390.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfRect3527744841.h"

// System.Void OpenCVForUnity.HOGDescriptor::.ctor(System.IntPtr)
extern "C"  void HOGDescriptor__ctor_m2187161667 (HOGDescriptor_t2624292285 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::.ctor(OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Size,System.Int32,System.Int32,System.Double,System.Int32,System.Double,System.Boolean,System.Int32,System.Boolean)
extern "C"  void HOGDescriptor__ctor_m2489335545 (HOGDescriptor_t2624292285 * __this, Size_t4100163289 * ____winSize0, Size_t4100163289 * ____blockSize1, Size_t4100163289 * ____blockStride2, Size_t4100163289 * ____cellSize3, int32_t ____nbins4, int32_t ____derivAperture5, double ____winSigma6, int32_t ____histogramNormType7, double ____L2HysThreshold8, bool ____gammaCorrection9, int32_t ____nlevels10, bool ____signedGradient11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::.ctor(OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.Size,System.Int32)
extern "C"  void HOGDescriptor__ctor_m883436010 (HOGDescriptor_t2624292285 * __this, Size_t4100163289 * ____winSize0, Size_t4100163289 * ____blockSize1, Size_t4100163289 * ____blockStride2, Size_t4100163289 * ____cellSize3, int32_t ____nbins4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::.ctor(System.String)
extern "C"  void HOGDescriptor__ctor_m2642930417 (HOGDescriptor_t2624292285 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::.ctor()
extern "C"  void HOGDescriptor__ctor_m293731249 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::Dispose(System.Boolean)
extern "C"  void HOGDescriptor_Dispose_m1592814757 (HOGDescriptor_t2624292285 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::checkDetectorSize()
extern "C"  bool HOGDescriptor_checkDetectorSize_m3747394058 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::load(System.String,System.String)
extern "C"  bool HOGDescriptor_load_m3960917041 (HOGDescriptor_t2624292285 * __this, String_t* ___filename0, String_t* ___objname1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::load(System.String)
extern "C"  bool HOGDescriptor_load_m1882358965 (HOGDescriptor_t2624292285 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::getWinSigma()
extern "C"  double HOGDescriptor_getWinSigma_m1171595659 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.HOGDescriptor::getDescriptorSize()
extern "C"  int64_t HOGDescriptor_getDescriptorSize_m1799228870 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MatOfFloat OpenCVForUnity.HOGDescriptor::getDaimlerPeopleDetector()
extern "C"  MatOfFloat_t1088010333 * HOGDescriptor_getDaimlerPeopleDetector_m1651637843 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MatOfFloat OpenCVForUnity.HOGDescriptor::getDefaultPeopleDetector()
extern "C"  MatOfFloat_t1088010333 * HOGDescriptor_getDefaultPeopleDetector_m3077985916 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::compute(OpenCVForUnity.Mat,OpenCVForUnity.MatOfFloat,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.MatOfPoint)
extern "C"  void HOGDescriptor_compute_m2420131047 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ___img0, MatOfFloat_t1088010333 * ___descriptors1, Size_t4100163289 * ___winStride2, Size_t4100163289 * ___padding3, MatOfPoint_t1097329553 * ___locations4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::compute(OpenCVForUnity.Mat,OpenCVForUnity.MatOfFloat)
extern "C"  void HOGDescriptor_compute_m2348130221 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ___img0, MatOfFloat_t1088010333 * ___descriptors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::computeGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Size,OpenCVForUnity.Size)
extern "C"  void HOGDescriptor_computeGradient_m2265335559 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ___img0, Mat_t3763101966 * ___grad1, Mat_t3763101966 * ___angleOfs2, Size_t4100163289 * ___paddingTL3, Size_t4100163289 * ___paddingBR4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::computeGradient(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void HOGDescriptor_computeGradient_m2749630651 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ___img0, Mat_t3763101966 * ___grad1, Mat_t3763101966 * ___angleOfs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::detect(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint,OpenCVForUnity.MatOfDouble,System.Double,OpenCVForUnity.Size,OpenCVForUnity.Size,OpenCVForUnity.MatOfPoint)
extern "C"  void HOGDescriptor_detect_m2085023760 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ___img0, MatOfPoint_t1097329553 * ___foundLocations1, MatOfDouble_t2722206390 * ___weights2, double ___hitThreshold3, Size_t4100163289 * ___winStride4, Size_t4100163289 * ___padding5, MatOfPoint_t1097329553 * ___searchLocations6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::detect(OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint,OpenCVForUnity.MatOfDouble)
extern "C"  void HOGDescriptor_detect_m2221472282 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ___img0, MatOfPoint_t1097329553 * ___foundLocations1, MatOfDouble_t2722206390 * ___weights2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::detectMultiScale(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfDouble,System.Double,OpenCVForUnity.Size,OpenCVForUnity.Size,System.Double,System.Double,System.Boolean)
extern "C"  void HOGDescriptor_detectMultiScale_m2489913438 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ___img0, MatOfRect_t3527744841 * ___foundLocations1, MatOfDouble_t2722206390 * ___foundWeights2, double ___hitThreshold3, Size_t4100163289 * ___winStride4, Size_t4100163289 * ___padding5, double ___scale6, double ___finalThreshold7, bool ___useMeanshiftGrouping8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::detectMultiScale(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfDouble)
extern "C"  void HOGDescriptor_detectMultiScale_m1424700735 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ___img0, MatOfRect_t3527744841 * ___foundLocations1, MatOfDouble_t2722206390 * ___foundWeights2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::save(System.String,System.String)
extern "C"  void HOGDescriptor_save_m3525279790 (HOGDescriptor_t2624292285 * __this, String_t* ___filename0, String_t* ___objname1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::save(System.String)
extern "C"  void HOGDescriptor_save_m2067351410 (HOGDescriptor_t2624292285 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::setSVMDetector(OpenCVForUnity.Mat)
extern "C"  void HOGDescriptor_setSVMDetector_m1836124102 (HOGDescriptor_t2624292285 * __this, Mat_t3763101966 * ____svmdetector0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.HOGDescriptor::get_winSize()
extern "C"  Size_t4100163289 * HOGDescriptor_get_winSize_m1211536214 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.HOGDescriptor::get_blockSize()
extern "C"  Size_t4100163289 * HOGDescriptor_get_blockSize_m4109237575 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.HOGDescriptor::get_blockStride()
extern "C"  Size_t4100163289 * HOGDescriptor_get_blockStride_m2851477727 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.HOGDescriptor::get_cellSize()
extern "C"  Size_t4100163289 * HOGDescriptor_get_cellSize_m2350315564 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::get_nbins()
extern "C"  int32_t HOGDescriptor_get_nbins_m2151964402 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::get_derivAperture()
extern "C"  int32_t HOGDescriptor_get_derivAperture_m3031154662 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::get_winSigma()
extern "C"  double HOGDescriptor_get_winSigma_m4273257768 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::get_histogramNormType()
extern "C"  int32_t HOGDescriptor_get_histogramNormType_m1683113298 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::get_L2HysThreshold()
extern "C"  double HOGDescriptor_get_L2HysThreshold_m710812430 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::get_gammaCorrection()
extern "C"  bool HOGDescriptor_get_gammaCorrection_m679788983 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MatOfFloat OpenCVForUnity.HOGDescriptor::get_svmDetector()
extern "C"  MatOfFloat_t1088010333 * HOGDescriptor_get_svmDetector_m3652546221 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::get_nlevels()
extern "C"  int32_t HOGDescriptor_get_nlevels_m3369909781 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::get_signedGradient()
extern "C"  bool HOGDescriptor_get_signedGradient_m3062995644 (HOGDescriptor_t2624292285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_HOGDescriptor_10(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Int32,System.Double,System.Boolean,System.Int32,System.Boolean)
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_HOGDescriptor_10_m1730292294 (Il2CppObject * __this /* static, unused */, double ____winSize_width0, double ____winSize_height1, double ____blockSize_width2, double ____blockSize_height3, double ____blockStride_width4, double ____blockStride_height5, double ____cellSize_width6, double ____cellSize_height7, int32_t ____nbins8, int32_t ____derivAperture9, double ____winSigma10, int32_t ____histogramNormType11, double ____L2HysThreshold12, bool ____gammaCorrection13, int32_t ____nlevels14, bool ____signedGradient15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_HOGDescriptor_11(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_HOGDescriptor_11_m1937588542 (Il2CppObject * __this /* static, unused */, double ____winSize_width0, double ____winSize_height1, double ____blockSize_width2, double ____blockSize_height3, double ____blockStride_width4, double ____blockStride_height5, double ____cellSize_width6, double ____cellSize_height7, int32_t ____nbins8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_HOGDescriptor_12(System.String)
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_HOGDescriptor_12_m3165506740 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_HOGDescriptor_13()
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_HOGDescriptor_13_m3921771727 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_checkDetectorSize_10(System.IntPtr)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_checkDetectorSize_10_m2110140489 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_load_10(System.IntPtr,System.String,System.String)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_load_10_m2831979182 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, String_t* ___objname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_load_11(System.IntPtr,System.String)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_load_11_m265119121 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_getWinSigma_10(System.IntPtr)
extern "C"  double HOGDescriptor_objdetect_HOGDescriptor_getWinSigma_10_m2341908234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_getDescriptorSize_10(System.IntPtr)
extern "C"  int64_t HOGDescriptor_objdetect_HOGDescriptor_getDescriptorSize_10_m3754726661 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_getDaimlerPeopleDetector_10()
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_getDaimlerPeopleDetector_10_m3217640844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_getDefaultPeopleDetector_10()
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_getDefaultPeopleDetector_10_m1146656963 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_compute_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_compute_10_m3865117119 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___descriptors_mat_nativeObj2, double ___winStride_width3, double ___winStride_height4, double ___padding_width5, double ___padding_height6, IntPtr_t ___locations_mat_nativeObj7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_compute_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_compute_11_m3032060512 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___descriptors_mat_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_computeGradient_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_computeGradient_10_m3056207631 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___grad_nativeObj2, IntPtr_t ___angleOfs_nativeObj3, double ___paddingTL_width4, double ___paddingTL_height5, double ___paddingBR_width6, double ___paddingBR_height7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_computeGradient_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_computeGradient_11_m548023102 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___grad_nativeObj2, IntPtr_t ___angleOfs_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_detect_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_detect_10_m2118812963 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___foundLocations_mat_nativeObj2, IntPtr_t ___weights_mat_nativeObj3, double ___hitThreshold4, double ___winStride_width5, double ___winStride_height6, double ___padding_width7, double ___padding_height8, IntPtr_t ___searchLocations_mat_nativeObj9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_detect_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_detect_11_m3940095432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___foundLocations_mat_nativeObj2, IntPtr_t ___weights_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_detectMultiScale_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_detectMultiScale_10_m2796238207 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___foundLocations_mat_nativeObj2, IntPtr_t ___foundWeights_mat_nativeObj3, double ___hitThreshold4, double ___winStride_width5, double ___winStride_height6, double ___padding_width7, double ___padding_height8, double ___scale9, double ___finalThreshold10, bool ___useMeanshiftGrouping11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_detectMultiScale_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_detectMultiScale_11_m1725429113 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___foundLocations_mat_nativeObj2, IntPtr_t ___foundWeights_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_save_10(System.IntPtr,System.String,System.String)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_save_10_m2858980433 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, String_t* ___objname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_save_11(System.IntPtr,System.String)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_save_11_m3852710004 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_setSVMDetector_10(System.IntPtr,System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_setSVMDetector_10_m1948964472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ____svmdetector_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1winSize_10(System.IntPtr,System.Double[])
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_get_1winSize_10_m2854112235 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1blockSize_10(System.IntPtr,System.Double[])
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_get_1blockSize_10_m2184096796 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1blockStride_10(System.IntPtr,System.Double[])
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_get_1blockStride_10_m770822644 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1cellSize_10(System.IntPtr,System.Double[])
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_get_1cellSize_10_m2086600851 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1nbins_10(System.IntPtr)
extern "C"  int32_t HOGDescriptor_objdetect_HOGDescriptor_get_1nbins_10_m3159969308 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1derivAperture_10(System.IntPtr)
extern "C"  int32_t HOGDescriptor_objdetect_HOGDescriptor_get_1derivAperture_10_m729035024 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1winSigma_10(System.IntPtr)
extern "C"  double HOGDescriptor_objdetect_HOGDescriptor_get_1winSigma_10_m913633564 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1histogramNormType_10(System.IntPtr)
extern "C"  int32_t HOGDescriptor_objdetect_HOGDescriptor_get_1histogramNormType_10_m1630311292 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1L2HysThreshold_10(System.IntPtr)
extern "C"  double HOGDescriptor_objdetect_HOGDescriptor_get_1L2HysThreshold_10_m1044015874 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1gammaCorrection_10(System.IntPtr)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_get_1gammaCorrection_10_m1941850477 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1svmDetector_10(System.IntPtr)
extern "C"  IntPtr_t HOGDescriptor_objdetect_HOGDescriptor_get_1svmDetector_10_m3310985689 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1nlevels_10(System.IntPtr)
extern "C"  int32_t HOGDescriptor_objdetect_HOGDescriptor_get_1nlevels_10_m1195438527 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_get_1signedGradient_10(System.IntPtr)
extern "C"  bool HOGDescriptor_objdetect_HOGDescriptor_get_1signedGradient_10_m1953057710 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.HOGDescriptor::objdetect_HOGDescriptor_delete(System.IntPtr)
extern "C"  void HOGDescriptor_objdetect_HOGDescriptor_delete_m3275727201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
