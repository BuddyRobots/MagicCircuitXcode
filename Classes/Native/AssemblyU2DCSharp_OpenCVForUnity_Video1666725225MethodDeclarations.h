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

// OpenCVForUnity.Video
struct Video_t1666725225;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.BackgroundSubtractorKNN
struct BackgroundSubtractorKNN_t1268362644;
// OpenCVForUnity.BackgroundSubtractorMOG2
struct BackgroundSubtractorMOG2_t4072529290;
// OpenCVForUnity.DualTVL1OpticalFlow
struct DualTVL1OpticalFlow_t861555985;
// OpenCVForUnity.RotatedRect
struct RotatedRect_t1355722907;
// OpenCVForUnity.Rect
struct Rect_t4100128956;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3040734659;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;
// OpenCVForUnity.Size
struct Size_t4100163289;
// OpenCVForUnity.MatOfPoint2f
struct MatOfPoint2f_t3946375813;
// OpenCVForUnity.MatOfByte
struct MatOfByte_t3527287917;
// OpenCVForUnity.MatOfFloat
struct MatOfFloat_t1088010333;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect4100128956.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3040734659.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint2f3946375813.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfByte3527287917.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfFloat1088010333.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Video::.ctor()
extern "C"  void Video__ctor_m2907293061 (Video_t1666725225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Video::estimateRigidTransform(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Boolean)
extern "C"  Mat_t3763101966 * Video_estimateRigidTransform_m2008721857 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, bool ___fullAffine2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BackgroundSubtractorKNN OpenCVForUnity.Video::createBackgroundSubtractorKNN(System.Int32,System.Double,System.Boolean)
extern "C"  BackgroundSubtractorKNN_t1268362644 * Video_createBackgroundSubtractorKNN_m2370946687 (Il2CppObject * __this /* static, unused */, int32_t ___history0, double ___dist2Threshold1, bool ___detectShadows2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BackgroundSubtractorKNN OpenCVForUnity.Video::createBackgroundSubtractorKNN()
extern "C"  BackgroundSubtractorKNN_t1268362644 * Video_createBackgroundSubtractorKNN_m1202564209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BackgroundSubtractorMOG2 OpenCVForUnity.Video::createBackgroundSubtractorMOG2(System.Int32,System.Double,System.Boolean)
extern "C"  BackgroundSubtractorMOG2_t4072529290 * Video_createBackgroundSubtractorMOG2_m657227431 (Il2CppObject * __this /* static, unused */, int32_t ___history0, double ___varThreshold1, bool ___detectShadows2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BackgroundSubtractorMOG2 OpenCVForUnity.Video::createBackgroundSubtractorMOG2()
extern "C"  BackgroundSubtractorMOG2_t4072529290 * Video_createBackgroundSubtractorMOG2_m96798537 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DualTVL1OpticalFlow OpenCVForUnity.Video::createOptFlow_DualTVL1()
extern "C"  DualTVL1OpticalFlow_t861555985 * Video_createOptFlow_DualTVL1_m1596548059 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RotatedRect OpenCVForUnity.Video::CamShift(OpenCVForUnity.Mat,OpenCVForUnity.Rect,OpenCVForUnity.TermCriteria)
extern "C"  RotatedRect_t1355722907 * Video_CamShift_m2314415307 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___probImage0, Rect_t4100128956 * ___window1, TermCriteria_t3040734659 * ___criteria2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::findTransformECC(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.TermCriteria,OpenCVForUnity.Mat)
extern "C"  double Video_findTransformECC_m812115761 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___templateImage0, Mat_t3763101966 * ___inputImage1, Mat_t3763101966 * ___warpMatrix2, int32_t ___motionType3, TermCriteria_t3040734659 * ___criteria4, Mat_t3763101966 * ___inputMask5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::findTransformECC(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  double Video_findTransformECC_m4149145406 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___templateImage0, Mat_t3763101966 * ___inputImage1, Mat_t3763101966 * ___warpMatrix2, int32_t ___motionType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::findTransformECC(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double Video_findTransformECC_m984306233 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___templateImage0, Mat_t3763101966 * ___inputImage1, Mat_t3763101966 * ___warpMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::buildOpticalFlowPyramid(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Size,System.Int32,System.Boolean,System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Video_buildOpticalFlowPyramid_m426698072 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___img0, List_1_t836320222 * ___pyramid1, Size_t4100163289 * ___winSize2, int32_t ___maxLevel3, bool ___withDerivatives4, int32_t ___pyrBorder5, int32_t ___derivBorder6, bool ___tryReuseInputImage7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::buildOpticalFlowPyramid(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Size,System.Int32)
extern "C"  int32_t Video_buildOpticalFlowPyramid_m2818506264 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___img0, List_1_t836320222 * ___pyramid1, Size_t4100163289 * ___winSize2, int32_t ___maxLevel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::meanShift(OpenCVForUnity.Mat,OpenCVForUnity.Rect,OpenCVForUnity.TermCriteria)
extern "C"  int32_t Video_meanShift_m3932042550 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___probImage0, Rect_t4100128956 * ___window1, TermCriteria_t3040734659 * ___criteria2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::calcOpticalFlowFarneback(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Int32)
extern "C"  void Video_calcOpticalFlowFarneback_m1457854807 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___prev0, Mat_t3763101966 * ___next1, Mat_t3763101966 * ___flow2, double ___pyr_scale3, int32_t ___levels4, int32_t ___winsize5, int32_t ___iterations6, int32_t ___poly_n7, double ___poly_sigma8, int32_t ___flags9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::calcOpticalFlowPyrLK(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfByte,OpenCVForUnity.MatOfFloat,OpenCVForUnity.Size,System.Int32,OpenCVForUnity.TermCriteria,System.Int32,System.Double)
extern "C"  void Video_calcOpticalFlowPyrLK_m2269405456 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___prevImg0, Mat_t3763101966 * ___nextImg1, MatOfPoint2f_t3946375813 * ___prevPts2, MatOfPoint2f_t3946375813 * ___nextPts3, MatOfByte_t3527287917 * ___status4, MatOfFloat_t1088010333 * ___err5, Size_t4100163289 * ___winSize6, int32_t ___maxLevel7, TermCriteria_t3040734659 * ___criteria8, int32_t ___flags9, double ___minEigThreshold10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::calcOpticalFlowPyrLK(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfByte,OpenCVForUnity.MatOfFloat,OpenCVForUnity.Size,System.Int32)
extern "C"  void Video_calcOpticalFlowPyrLK_m1217820967 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___prevImg0, Mat_t3763101966 * ___nextImg1, MatOfPoint2f_t3946375813 * ___prevPts2, MatOfPoint2f_t3946375813 * ___nextPts3, MatOfByte_t3527287917 * ___status4, MatOfFloat_t1088010333 * ___err5, Size_t4100163289 * ___winSize6, int32_t ___maxLevel7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::calcOpticalFlowPyrLK(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfPoint2f,OpenCVForUnity.MatOfByte,OpenCVForUnity.MatOfFloat)
extern "C"  void Video_calcOpticalFlowPyrLK_m523425930 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___prevImg0, Mat_t3763101966 * ___nextImg1, MatOfPoint2f_t3946375813 * ___prevPts2, MatOfPoint2f_t3946375813 * ___nextPts3, MatOfByte_t3527287917 * ___status4, MatOfFloat_t1088010333 * ___err5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_estimateRigidTransform_10(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  IntPtr_t Video_video_Video_estimateRigidTransform_10_m121879926 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, bool ___fullAffine2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createBackgroundSubtractorKNN_10(System.Int32,System.Double,System.Boolean)
extern "C"  IntPtr_t Video_video_Video_createBackgroundSubtractorKNN_10_m983217536 (Il2CppObject * __this /* static, unused */, int32_t ___history0, double ___dist2Threshold1, bool ___detectShadows2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createBackgroundSubtractorKNN_11()
extern "C"  IntPtr_t Video_video_Video_createBackgroundSubtractorKNN_11_m221767697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createBackgroundSubtractorMOG2_10(System.Int32,System.Double,System.Boolean)
extern "C"  IntPtr_t Video_video_Video_createBackgroundSubtractorMOG2_10_m1172067098 (Il2CppObject * __this /* static, unused */, int32_t ___history0, double ___varThreshold1, bool ___detectShadows2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createBackgroundSubtractorMOG2_11()
extern "C"  IntPtr_t Video_video_Video_createBackgroundSubtractorMOG2_11_m1839320375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Video::video_Video_createOptFlow_1DualTVL1_10()
extern "C"  IntPtr_t Video_video_Video_createOptFlow_1DualTVL1_10_m2548443136 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_CamShift_10(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Double[],System.Int32,System.Int32,System.Double,System.Double[])
extern "C"  void Video_video_Video_CamShift_10_m139551806 (Il2CppObject * __this /* static, unused */, IntPtr_t ___probImage_nativeObj0, int32_t ___window_x1, int32_t ___window_y2, int32_t ___window_width3, int32_t ___window_height4, DoubleU5BU5D_t2145413704* ___window_out5, int32_t ___criteria_type6, int32_t ___criteria_maxCount7, double ___criteria_epsilon8, DoubleU5BU5D_t2145413704* ___vals9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::video_Video_findTransformECC_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double,System.IntPtr)
extern "C"  double Video_video_Video_findTransformECC_10_m1807631509 (Il2CppObject * __this /* static, unused */, IntPtr_t ___templateImage_nativeObj0, IntPtr_t ___inputImage_nativeObj1, IntPtr_t ___warpMatrix_nativeObj2, int32_t ___motionType3, int32_t ___criteria_type4, int32_t ___criteria_maxCount5, double ___criteria_epsilon6, IntPtr_t ___inputMask_nativeObj7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::video_Video_findTransformECC_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  double Video_video_Video_findTransformECC_11_m1783758188 (Il2CppObject * __this /* static, unused */, IntPtr_t ___templateImage_nativeObj0, IntPtr_t ___inputImage_nativeObj1, IntPtr_t ___warpMatrix_nativeObj2, int32_t ___motionType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Video::video_Video_findTransformECC_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double Video_video_Video_findTransformECC_12_m1930640042 (Il2CppObject * __this /* static, unused */, IntPtr_t ___templateImage_nativeObj0, IntPtr_t ___inputImage_nativeObj1, IntPtr_t ___warpMatrix_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::video_Video_buildOpticalFlowPyramid_10(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Boolean,System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Video_video_Video_buildOpticalFlowPyramid_10_m3211275192 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj0, IntPtr_t ___pyramid_mat_nativeObj1, double ___winSize_width2, double ___winSize_height3, int32_t ___maxLevel4, bool ___withDerivatives5, int32_t ___pyrBorder6, int32_t ___derivBorder7, bool ___tryReuseInputImage8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::video_Video_buildOpticalFlowPyramid_11(System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  int32_t Video_video_Video_buildOpticalFlowPyramid_11_m3263862713 (Il2CppObject * __this /* static, unused */, IntPtr_t ___img_nativeObj0, IntPtr_t ___pyramid_mat_nativeObj1, double ___winSize_width2, double ___winSize_height3, int32_t ___maxLevel4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Video::video_Video_meanShift_10(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Double[],System.Int32,System.Int32,System.Double)
extern "C"  int32_t Video_video_Video_meanShift_10_m3945140468 (Il2CppObject * __this /* static, unused */, IntPtr_t ___probImage_nativeObj0, int32_t ___window_x1, int32_t ___window_y2, int32_t ___window_width3, int32_t ___window_height4, DoubleU5BU5D_t2145413704* ___window_out5, int32_t ___criteria_type6, int32_t ___criteria_maxCount7, double ___criteria_epsilon8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_calcOpticalFlowFarneback_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Int32)
extern "C"  void Video_video_Video_calcOpticalFlowFarneback_10_m3441748356 (Il2CppObject * __this /* static, unused */, IntPtr_t ___prev_nativeObj0, IntPtr_t ___next_nativeObj1, IntPtr_t ___flow_nativeObj2, double ___pyr_scale3, int32_t ___levels4, int32_t ___winsize5, int32_t ___iterations6, int32_t ___poly_n7, double ___poly_sigma8, int32_t ___flags9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_calcOpticalFlowPyrLK_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Double,System.Int32,System.Double)
extern "C"  void Video_video_Video_calcOpticalFlowPyrLK_10_m2389136816 (Il2CppObject * __this /* static, unused */, IntPtr_t ___prevImg_nativeObj0, IntPtr_t ___nextImg_nativeObj1, IntPtr_t ___prevPts_mat_nativeObj2, IntPtr_t ___nextPts_mat_nativeObj3, IntPtr_t ___status_mat_nativeObj4, IntPtr_t ___err_mat_nativeObj5, double ___winSize_width6, double ___winSize_height7, int32_t ___maxLevel8, int32_t ___criteria_type9, int32_t ___criteria_maxCount10, double ___criteria_epsilon11, int32_t ___flags12, double ___minEigThreshold13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_calcOpticalFlowPyrLK_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Video_video_Video_calcOpticalFlowPyrLK_11_m2988026600 (Il2CppObject * __this /* static, unused */, IntPtr_t ___prevImg_nativeObj0, IntPtr_t ___nextImg_nativeObj1, IntPtr_t ___prevPts_mat_nativeObj2, IntPtr_t ___nextPts_mat_nativeObj3, IntPtr_t ___status_mat_nativeObj4, IntPtr_t ___err_mat_nativeObj5, double ___winSize_width6, double ___winSize_height7, int32_t ___maxLevel8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Video::video_Video_calcOpticalFlowPyrLK_12(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Video_video_Video_calcOpticalFlowPyrLK_12_m432063862 (Il2CppObject * __this /* static, unused */, IntPtr_t ___prevImg_nativeObj0, IntPtr_t ___nextImg_nativeObj1, IntPtr_t ___prevPts_mat_nativeObj2, IntPtr_t ___nextPts_mat_nativeObj3, IntPtr_t ___status_mat_nativeObj4, IntPtr_t ___err_mat_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
