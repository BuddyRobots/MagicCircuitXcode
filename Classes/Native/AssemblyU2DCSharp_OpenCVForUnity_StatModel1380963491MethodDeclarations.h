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

// OpenCVForUnity.StatModel
struct StatModel_t1380963491;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.StatModel::.ctor(System.IntPtr)
extern "C"  void StatModel__ctor_m764256937 (StatModel_t1380963491 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StatModel::Dispose(System.Boolean)
extern "C"  void StatModel_Dispose_m3165214847 (StatModel_t1380963491 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.StatModel::empty()
extern "C"  bool StatModel_empty_m1671218850 (StatModel_t1380963491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.StatModel::isClassifier()
extern "C"  bool StatModel_isClassifier_m2381660952 (StatModel_t1380963491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.StatModel::isTrained()
extern "C"  bool StatModel_isTrained_m2819802994 (StatModel_t1380963491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.StatModel::train(OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat)
extern "C"  bool StatModel_train_m3032359030 (StatModel_t1380963491 * __this, Mat_t3763101966 * ___samples0, int32_t ___layout1, Mat_t3763101966 * ___responses2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.StatModel::predict(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  float StatModel_predict_m3514495815 (StatModel_t1380963491 * __this, Mat_t3763101966 * ___samples0, Mat_t3763101966 * ___results1, int32_t ___flags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.StatModel::predict(OpenCVForUnity.Mat)
extern "C"  float StatModel_predict_m3243361723 (StatModel_t1380963491 * __this, Mat_t3763101966 * ___samples0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StatModel::getVarCount()
extern "C"  int32_t StatModel_getVarCount_m3670099225 (StatModel_t1380963491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.StatModel::ml_StatModel_empty_10(System.IntPtr)
extern "C"  bool StatModel_ml_StatModel_empty_10_m1240166308 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.StatModel::ml_StatModel_isClassifier_10(System.IntPtr)
extern "C"  bool StatModel_ml_StatModel_isClassifier_10_m2161211710 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.StatModel::ml_StatModel_isTrained_10(System.IntPtr)
extern "C"  bool StatModel_ml_StatModel_isTrained_10_m1462524276 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.StatModel::ml_StatModel_train_10(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  bool StatModel_ml_StatModel_train_10_m266758936 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, int32_t ___layout2, IntPtr_t ___responses_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.StatModel::ml_StatModel_predict_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  float StatModel_ml_StatModel_predict_10_m3499708147 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, IntPtr_t ___results_nativeObj2, int32_t ___flags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.StatModel::ml_StatModel_predict_11(System.IntPtr,System.IntPtr)
extern "C"  float StatModel_ml_StatModel_predict_11_m4063796469 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.StatModel::ml_StatModel_getVarCount_10(System.IntPtr)
extern "C"  int32_t StatModel_ml_StatModel_getVarCount_10_m718328975 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.StatModel::ml_StatModel_delete(System.IntPtr)
extern "C"  void StatModel_ml_StatModel_delete_m2878400726 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
