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

// OpenCVForUnity.EM
struct EM_t4167876768;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3040734659;
// System.Double[]
struct DoubleU5BU5D_t2145413704;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3040734659.h"

// System.Void OpenCVForUnity.EM::.ctor(System.IntPtr)
extern "C"  void EM__ctor_m434058774 (EM_t4167876768 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::Dispose(System.Boolean)
extern "C"  void EM_Dispose_m1706848754 (EM_t4167876768 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.EM::getMeans()
extern "C"  Mat_t3763101966 * EM_getMeans_m426583132 (EM_t4167876768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.EM::getWeights()
extern "C"  Mat_t3763101966 * EM_getWeights_m3626657161 (EM_t4167876768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.EM OpenCVForUnity.EM::create()
extern "C"  EM_t4167876768 * EM_create_m2195595132 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TermCriteria OpenCVForUnity.EM::getTermCriteria()
extern "C"  TermCriteria_t3040734659 * EM_getTermCriteria_m2392837248 (EM_t4167876768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] OpenCVForUnity.EM::predict2(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  DoubleU5BU5D_t2145413704* EM_predict2_m4225266280 (EM_t4167876768 * __this, Mat_t3763101966 * ___sample0, Mat_t3763101966 * ___probs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainE(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainE_m148436916 (EM_t4167876768 * __this, Mat_t3763101966 * ___samples0, Mat_t3763101966 * ___means01, Mat_t3763101966 * ___covs02, Mat_t3763101966 * ___weights03, Mat_t3763101966 * ___logLikelihoods4, Mat_t3763101966 * ___labels5, Mat_t3763101966 * ___probs6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainE(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainE_m3035783767 (EM_t4167876768 * __this, Mat_t3763101966 * ___samples0, Mat_t3763101966 * ___means01, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainEM(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainEM_m1880552870 (EM_t4167876768 * __this, Mat_t3763101966 * ___samples0, Mat_t3763101966 * ___logLikelihoods1, Mat_t3763101966 * ___labels2, Mat_t3763101966 * ___probs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainEM(OpenCVForUnity.Mat)
extern "C"  bool EM_trainEM_m2988935429 (EM_t4167876768 * __this, Mat_t3763101966 * ___samples0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainM(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainM_m2261861532 (EM_t4167876768 * __this, Mat_t3763101966 * ___samples0, Mat_t3763101966 * ___probs01, Mat_t3763101966 * ___logLikelihoods2, Mat_t3763101966 * ___labels3, Mat_t3763101966 * ___probs4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::trainM(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  bool EM_trainM_m1843521871 (EM_t4167876768 * __this, Mat_t3763101966 * ___samples0, Mat_t3763101966 * ___probs01, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.EM::getClustersNumber()
extern "C"  int32_t EM_getClustersNumber_m4005334178 (EM_t4167876768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.EM::getCovarianceMatrixType()
extern "C"  int32_t EM_getCovarianceMatrixType_m2524213976 (EM_t4167876768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::getCovs(System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void EM_getCovs_m502001330 (EM_t4167876768 * __this, List_1_t836320222 * ___covs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::setClustersNumber(System.Int32)
extern "C"  void EM_setClustersNumber_m2010742641 (EM_t4167876768 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::setCovarianceMatrixType(System.Int32)
extern "C"  void EM_setCovarianceMatrixType_m4026854951 (EM_t4167876768 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::setTermCriteria(OpenCVForUnity.TermCriteria)
extern "C"  void EM_setTermCriteria_m643742585 (EM_t4167876768 * __this, TermCriteria_t3040734659 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.EM::ml_EM_getMeans_10(System.IntPtr)
extern "C"  IntPtr_t EM_ml_EM_getMeans_10_m183580404 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.EM::ml_EM_getWeights_10(System.IntPtr)
extern "C"  IntPtr_t EM_ml_EM_getWeights_10_m2628535585 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.EM::ml_EM_create_10()
extern "C"  IntPtr_t EM_ml_EM_create_10_m3330501820 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_getTermCriteria_10(System.IntPtr,System.Double[])
extern "C"  void EM_ml_EM_getTermCriteria_10_m3563585332 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_predict2_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double[])
extern "C"  void EM_ml_EM_predict2_10_m1713497440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___sample_nativeObj1, IntPtr_t ___probs_nativeObj2, DoubleU5BU5D_t2145413704* ___vals3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainE_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainE_10_m3055247772 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, IntPtr_t ___means0_nativeObj2, IntPtr_t ___covs0_nativeObj3, IntPtr_t ___weights0_nativeObj4, IntPtr_t ___logLikelihoods_nativeObj5, IntPtr_t ___labels_nativeObj6, IntPtr_t ___probs_nativeObj7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainE_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainE_11_m2886849717 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, IntPtr_t ___means0_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainEM_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainEM_10_m3328336149 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, IntPtr_t ___logLikelihoods_nativeObj2, IntPtr_t ___labels_nativeObj3, IntPtr_t ___probs_nativeObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainEM_11(System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainEM_11_m1719360330 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainM_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainM_10_m4111630088 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, IntPtr_t ___probs0_nativeObj2, IntPtr_t ___logLikelihoods_nativeObj3, IntPtr_t ___labels_nativeObj4, IntPtr_t ___probs_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.EM::ml_EM_trainM_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  bool EM_ml_EM_trainM_11_m1474496189 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, IntPtr_t ___probs0_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.EM::ml_EM_getClustersNumber_10(System.IntPtr)
extern "C"  int32_t EM_ml_EM_getClustersNumber_10_m3447292895 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.EM::ml_EM_getCovarianceMatrixType_10(System.IntPtr)
extern "C"  int32_t EM_ml_EM_getCovarianceMatrixType_10_m364151637 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_getCovs_10(System.IntPtr,System.IntPtr)
extern "C"  void EM_ml_EM_getCovs_10_m196306150 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___covs_mat_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_setClustersNumber_10(System.IntPtr,System.Int32)
extern "C"  void EM_ml_EM_setClustersNumber_10_m2206725146 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_setCovarianceMatrixType_10(System.IntPtr,System.Int32)
extern "C"  void EM_ml_EM_setCovarianceMatrixType_10_m731196132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_setTermCriteria_10(System.IntPtr,System.Int32,System.Int32,System.Double)
extern "C"  void EM_ml_EM_setTermCriteria_10_m1773042306 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val_type1, int32_t ___val_maxCount2, double ___val_epsilon3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.EM::ml_EM_delete(System.IntPtr)
extern "C"  void EM_ml_EM_delete_m1123668460 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
