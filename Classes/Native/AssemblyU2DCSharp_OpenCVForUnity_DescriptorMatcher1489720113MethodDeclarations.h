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

// OpenCVForUnity.DescriptorMatcher
struct DescriptorMatcher_t1489720113;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>
struct List_1_t4058413430;
// OpenCVForUnity.MatOfDMatch
struct MatOfDMatch_t2690227878;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDMatch2690227878.h"
#include "mscorlib_System_String7231557.h"

// System.Void OpenCVForUnity.DescriptorMatcher::.ctor(System.IntPtr)
extern "C"  void DescriptorMatcher__ctor_m2904439479 (DescriptorMatcher_t1489720113 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::Dispose(System.Boolean)
extern "C"  void DescriptorMatcher_Dispose_m2553814449 (DescriptorMatcher_t1489720113 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DescriptorMatcher::empty()
extern "C"  bool DescriptorMatcher_empty_m3234964436 (DescriptorMatcher_t1489720113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DescriptorMatcher::isMaskSupported()
extern "C"  bool DescriptorMatcher_isMaskSupported_m2739381855 (DescriptorMatcher_t1489720113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DescriptorMatcher OpenCVForUnity.DescriptorMatcher::create(System.Int32)
extern "C"  DescriptorMatcher_t1489720113 * DescriptorMatcher_create_m2192872115 (Il2CppObject * __this /* static, unused */, int32_t ___matcherType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DescriptorMatcher OpenCVForUnity.DescriptorMatcher::clone(System.Boolean)
extern "C"  DescriptorMatcher_t1489720113 * DescriptorMatcher_clone_m1694567120 (DescriptorMatcher_t1489720113 * __this, bool ___emptyTrainData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DescriptorMatcher OpenCVForUnity.DescriptorMatcher::clone()
extern "C"  DescriptorMatcher_t1489720113 * DescriptorMatcher_clone_m1691202841 (DescriptorMatcher_t1489720113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat> OpenCVForUnity.DescriptorMatcher::getTrainDescriptors()
extern "C"  List_1_t836320222 * DescriptorMatcher_getTrainDescriptors_m1748202527 (DescriptorMatcher_t1489720113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::add(System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void DescriptorMatcher_add_m230535889 (DescriptorMatcher_t1489720113 * __this, List_1_t836320222 * ___descriptors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::clear()
extern "C"  void DescriptorMatcher_clear_m2058447112 (DescriptorMatcher_t1489720113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::knnMatch(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,System.Int32,OpenCVForUnity.Mat,System.Boolean)
extern "C"  void DescriptorMatcher_knnMatch_m2750792997 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, Mat_t3763101966 * ___trainDescriptors1, List_1_t4058413430 * ___matches2, int32_t ___k3, Mat_t3763101966 * ___mask4, bool ___compactResult5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::knnMatch(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,System.Int32)
extern "C"  void DescriptorMatcher_knnMatch_m3813837555 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, Mat_t3763101966 * ___trainDescriptors1, List_1_t4058413430 * ___matches2, int32_t ___k3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::knnMatch(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,System.Int32,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Boolean)
extern "C"  void DescriptorMatcher_knnMatch_m1490204484 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, List_1_t4058413430 * ___matches1, int32_t ___k2, List_1_t836320222 * ___masks3, bool ___compactResult4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::knnMatch(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,System.Int32)
extern "C"  void DescriptorMatcher_knnMatch_m3613031218 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, List_1_t4058413430 * ___matches1, int32_t ___k2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::match(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfDMatch,OpenCVForUnity.Mat)
extern "C"  void DescriptorMatcher_match_m1634506398 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, Mat_t3763101966 * ___trainDescriptors1, MatOfDMatch_t2690227878 * ___matches2, Mat_t3763101966 * ___mask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::match(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfDMatch)
extern "C"  void DescriptorMatcher_match_m3070153069 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, Mat_t3763101966 * ___trainDescriptors1, MatOfDMatch_t2690227878 * ___matches2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::match(OpenCVForUnity.Mat,OpenCVForUnity.MatOfDMatch,System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void DescriptorMatcher_match_m3875923125 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, MatOfDMatch_t2690227878 * ___matches1, List_1_t836320222 * ___masks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::match(OpenCVForUnity.Mat,OpenCVForUnity.MatOfDMatch)
extern "C"  void DescriptorMatcher_match_m1255572942 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, MatOfDMatch_t2690227878 * ___matches1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::radiusMatch(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,System.Single,OpenCVForUnity.Mat,System.Boolean)
extern "C"  void DescriptorMatcher_radiusMatch_m2124618286 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, Mat_t3763101966 * ___trainDescriptors1, List_1_t4058413430 * ___matches2, float ___maxDistance3, Mat_t3763101966 * ___mask4, bool ___compactResult5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::radiusMatch(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,System.Single)
extern "C"  void DescriptorMatcher_radiusMatch_m587919932 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, Mat_t3763101966 * ___trainDescriptors1, List_1_t4058413430 * ___matches2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::radiusMatch(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,System.Single,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Boolean)
extern "C"  void DescriptorMatcher_radiusMatch_m3186244799 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, List_1_t4058413430 * ___matches1, float ___maxDistance2, List_1_t836320222 * ___masks3, bool ___compactResult4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::radiusMatch(OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfDMatch>,System.Single)
extern "C"  void DescriptorMatcher_radiusMatch_m2170412247 (DescriptorMatcher_t1489720113 * __this, Mat_t3763101966 * ___queryDescriptors0, List_1_t4058413430 * ___matches1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::read(System.String)
extern "C"  void DescriptorMatcher_read_m3319230789 (DescriptorMatcher_t1489720113 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::train()
extern "C"  void DescriptorMatcher_train_m134455811 (DescriptorMatcher_t1489720113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::write(System.String)
extern "C"  void DescriptorMatcher_write_m2400119592 (DescriptorMatcher_t1489720113 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_empty_10(System.IntPtr)
extern "C"  bool DescriptorMatcher_features2d_DescriptorMatcher_empty_10_m2053865744 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_isMaskSupported_10(System.IntPtr)
extern "C"  bool DescriptorMatcher_features2d_DescriptorMatcher_isMaskSupported_10_m3092542363 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_create_10(System.Int32)
extern "C"  IntPtr_t DescriptorMatcher_features2d_DescriptorMatcher_create_10_m2566920739 (Il2CppObject * __this /* static, unused */, int32_t ___matcherType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_clone_10(System.IntPtr,System.Boolean)
extern "C"  IntPtr_t DescriptorMatcher_features2d_DescriptorMatcher_clone_10_m4233545276 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, bool ___emptyTrainData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_clone_11(System.IntPtr)
extern "C"  IntPtr_t DescriptorMatcher_features2d_DescriptorMatcher_clone_11_m282207488 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_getTrainDescriptors_10(System.IntPtr)
extern "C"  IntPtr_t DescriptorMatcher_features2d_DescriptorMatcher_getTrainDescriptors_10_m413629302 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_add_10(System.IntPtr,System.IntPtr)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_add_10_m973422526 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___descriptors_mat_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_clear_10(System.IntPtr)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_clear_10_m2186338908 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_knnMatch_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Boolean)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_knnMatch_10_m838818007 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___trainDescriptors_nativeObj2, IntPtr_t ___matches_mat_nativeObj3, int32_t ___k4, IntPtr_t ___mask_nativeObj5, bool ___compactResult6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_knnMatch_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_knnMatch_11_m1735078297 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___trainDescriptors_nativeObj2, IntPtr_t ___matches_mat_nativeObj3, int32_t ___k4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_knnMatch_12(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Boolean)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_knnMatch_12_m2881520583 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___matches_mat_nativeObj2, int32_t ___k3, IntPtr_t ___masks_mat_nativeObj4, bool ___compactResult5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_knnMatch_13(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_knnMatch_13_m1710716521 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___matches_mat_nativeObj2, int32_t ___k3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_match_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_match_10_m3189104396 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___trainDescriptors_nativeObj2, IntPtr_t ___matches_mat_nativeObj3, IntPtr_t ___mask_nativeObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_match_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_match_11_m3083705629 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___trainDescriptors_nativeObj2, IntPtr_t ___matches_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_match_12(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_match_12_m1153086524 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___matches_mat_nativeObj2, IntPtr_t ___masks_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_match_13(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_match_13_m1395234957 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___matches_mat_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_radiusMatch_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.IntPtr,System.Boolean)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_radiusMatch_10_m3818370014 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___trainDescriptors_nativeObj2, IntPtr_t ___matches_mat_nativeObj3, float ___maxDistance4, IntPtr_t ___mask_nativeObj5, bool ___compactResult6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_radiusMatch_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_radiusMatch_11_m2508180176 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___trainDescriptors_nativeObj2, IntPtr_t ___matches_mat_nativeObj3, float ___maxDistance4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_radiusMatch_12(System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.IntPtr,System.Boolean)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_radiusMatch_12_m4210641966 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___matches_mat_nativeObj2, float ___maxDistance3, IntPtr_t ___masks_mat_nativeObj4, bool ___compactResult5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_radiusMatch_13(System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_radiusMatch_13_m1700836032 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___queryDescriptors_nativeObj1, IntPtr_t ___matches_mat_nativeObj2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_read_10(System.IntPtr,System.String)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_read_10_m3381230317 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_train_10(System.IntPtr)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_train_10_m1790952791 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_write_10(System.IntPtr,System.String)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_write_10_m1221759786 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorMatcher::features2d_DescriptorMatcher_delete(System.IntPtr)
extern "C"  void DescriptorMatcher_features2d_DescriptorMatcher_delete_m979386690 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
