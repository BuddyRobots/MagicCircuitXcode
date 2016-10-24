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

// OpenCVForUnity.LogisticRegression
struct LogisticRegression_t727605465;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3040734659;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3040734659.h"

// System.Void OpenCVForUnity.LogisticRegression::.ctor(System.IntPtr)
extern "C"  void LogisticRegression__ctor_m1277740431 (LogisticRegression_t727605465 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::Dispose(System.Boolean)
extern "C"  void LogisticRegression_Dispose_m1678476249 (LogisticRegression_t727605465 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.LogisticRegression::get_learnt_thetas()
extern "C"  Mat_t3763101966 * LogisticRegression_get_learnt_thetas_m2241876512 (LogisticRegression_t727605465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.LogisticRegression OpenCVForUnity.LogisticRegression::create()
extern "C"  LogisticRegression_t727605465 * LogisticRegression_create_m782806318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TermCriteria OpenCVForUnity.LogisticRegression::getTermCriteria()
extern "C"  TermCriteria_t3040734659 * LogisticRegression_getTermCriteria_m1968304551 (LogisticRegression_t727605465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.LogisticRegression::getLearningRate()
extern "C"  double LogisticRegression_getLearningRate_m411497242 (LogisticRegression_t727605465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.LogisticRegression::predict(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  float LogisticRegression_predict_m2947141305 (LogisticRegression_t727605465 * __this, Mat_t3763101966 * ___samples0, Mat_t3763101966 * ___results1, int32_t ___flags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.LogisticRegression::predict(OpenCVForUnity.Mat)
extern "C"  float LogisticRegression_predict_m4206553389 (LogisticRegression_t727605465 * __this, Mat_t3763101966 * ___samples0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LogisticRegression::getIterations()
extern "C"  int32_t LogisticRegression_getIterations_m4119843549 (LogisticRegression_t727605465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LogisticRegression::getMiniBatchSize()
extern "C"  int32_t LogisticRegression_getMiniBatchSize_m52772831 (LogisticRegression_t727605465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LogisticRegression::getRegularization()
extern "C"  int32_t LogisticRegression_getRegularization_m2071380847 (LogisticRegression_t727605465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LogisticRegression::getTrainMethod()
extern "C"  int32_t LogisticRegression_getTrainMethod_m3947257444 (LogisticRegression_t727605465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::setIterations(System.Int32)
extern "C"  void LogisticRegression_setIterations_m4054781996 (LogisticRegression_t727605465 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::setLearningRate(System.Double)
extern "C"  void LogisticRegression_setLearningRate_m1472208863 (LogisticRegression_t727605465 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::setMiniBatchSize(System.Int32)
extern "C"  void LogisticRegression_setMiniBatchSize_m1039964786 (LogisticRegression_t727605465 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::setRegularization(System.Int32)
extern "C"  void LogisticRegression_setRegularization_m3127494334 (LogisticRegression_t727605465 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::setTermCriteria(OpenCVForUnity.TermCriteria)
extern "C"  void LogisticRegression_setTermCriteria_m3279925234 (LogisticRegression_t727605465 * __this, TermCriteria_t3040734659 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::setTrainMethod(System.Int32)
extern "C"  void LogisticRegression_setTrainMethod_m1656955383 (LogisticRegression_t727605465 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.LogisticRegression::ml_LogisticRegression_get_1learnt_1thetas_10(System.IntPtr)
extern "C"  IntPtr_t LogisticRegression_ml_LogisticRegression_get_1learnt_1thetas_10_m3550386509 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.LogisticRegression::ml_LogisticRegression_create_10()
extern "C"  IntPtr_t LogisticRegression_ml_LogisticRegression_create_10_m3874643100 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::ml_LogisticRegression_getTermCriteria_10(System.IntPtr,System.Double[])
extern "C"  void LogisticRegression_ml_LogisticRegression_getTermCriteria_10_m4273871636 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.LogisticRegression::ml_LogisticRegression_getLearningRate_10(System.IntPtr)
extern "C"  double LogisticRegression_ml_LogisticRegression_getLearningRate_10_m2197093776 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.LogisticRegression::ml_LogisticRegression_predict_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  float LogisticRegression_ml_LogisticRegression_predict_10_m2893876413 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, IntPtr_t ___results_nativeObj2, int32_t ___flags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.LogisticRegression::ml_LogisticRegression_predict_11(System.IntPtr,System.IntPtr)
extern "C"  float LogisticRegression_ml_LogisticRegression_predict_11_m2214937963 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LogisticRegression::ml_LogisticRegression_getIterations_10(System.IntPtr)
extern "C"  int32_t LogisticRegression_ml_LogisticRegression_getIterations_10_m170556819 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LogisticRegression::ml_LogisticRegression_getMiniBatchSize_10(System.IntPtr)
extern "C"  int32_t LogisticRegression_ml_LogisticRegression_getMiniBatchSize_10_m855952593 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LogisticRegression::ml_LogisticRegression_getRegularization_10(System.IntPtr)
extern "C"  int32_t LogisticRegression_ml_LogisticRegression_getRegularization_10_m1761450277 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LogisticRegression::ml_LogisticRegression_getTrainMethod_10(System.IntPtr)
extern "C"  int32_t LogisticRegression_ml_LogisticRegression_getTrainMethod_10_m2683373782 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::ml_LogisticRegression_setIterations_10(System.IntPtr,System.Int32)
extern "C"  void LogisticRegression_ml_LogisticRegression_setIterations_10_m3594213350 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::ml_LogisticRegression_setLearningRate_10(System.IntPtr,System.Double)
extern "C"  void LogisticRegression_ml_LogisticRegression_setLearningRate_10_m3242799541 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::ml_LogisticRegression_setMiniBatchSize_10(System.IntPtr,System.Int32)
extern "C"  void LogisticRegression_ml_LogisticRegression_setMiniBatchSize_10_m3909167780 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::ml_LogisticRegression_setRegularization_10(System.IntPtr,System.Int32)
extern "C"  void LogisticRegression_ml_LogisticRegression_setRegularization_10_m1827039380 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::ml_LogisticRegression_setTermCriteria_10(System.IntPtr,System.Int32,System.Int32,System.Double)
extern "C"  void LogisticRegression_ml_LogisticRegression_setTermCriteria_10_m879162978 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val_type1, int32_t ___val_maxCount2, double ___val_epsilon3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::ml_LogisticRegression_setTrainMethod_10(System.IntPtr,System.Int32)
extern "C"  void LogisticRegression_ml_LogisticRegression_setTrainMethod_10_m2213217855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LogisticRegression::ml_LogisticRegression_delete(System.IntPtr)
extern "C"  void LogisticRegression_ml_LogisticRegression_delete_m3553000908 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
