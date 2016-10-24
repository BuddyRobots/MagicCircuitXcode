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

// OpenCVForUnity.DTrees
struct DTrees_t3002505257;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.DTrees::.ctor(System.IntPtr)
extern "C"  void DTrees__ctor_m2266039519 (DTrees_t3002505257 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::Dispose(System.Boolean)
extern "C"  void DTrees_Dispose_m2095792777 (DTrees_t3002505257 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.DTrees::getPriors()
extern "C"  Mat_t3763101966 * DTrees_getPriors_m4068731860 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DTrees OpenCVForUnity.DTrees::create()
extern "C"  DTrees_t3002505257 * DTrees_create_m1510604750 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DTrees::getTruncatePrunedTree()
extern "C"  bool DTrees_getTruncatePrunedTree_m1313861179 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DTrees::getUse1SERule()
extern "C"  bool DTrees_getUse1SERule_m2481572213 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DTrees::getUseSurrogates()
extern "C"  bool DTrees_getUseSurrogates_m2653657735 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.DTrees::getRegressionAccuracy()
extern "C"  float DTrees_getRegressionAccuracy_m3496441071 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DTrees::getCVFolds()
extern "C"  int32_t DTrees_getCVFolds_m3658337066 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DTrees::getMaxCategories()
extern "C"  int32_t DTrees_getMaxCategories_m2820355595 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DTrees::getMaxDepth()
extern "C"  int32_t DTrees_getMaxDepth_m2910989398 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DTrees::getMinSampleCount()
extern "C"  int32_t DTrees_getMinSampleCount_m3623308010 (DTrees_t3002505257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setCVFolds(System.Int32)
extern "C"  void DTrees_setCVFolds_m2225294269 (DTrees_t3002505257 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setMaxCategories(System.Int32)
extern "C"  void DTrees_setMaxCategories_m689058718 (DTrees_t3002505257 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setMaxDepth(System.Int32)
extern "C"  void DTrees_setMaxDepth_m4202176165 (DTrees_t3002505257 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setMinSampleCount(System.Int32)
extern "C"  void DTrees_setMinSampleCount_m3168864441 (DTrees_t3002505257 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setPriors(OpenCVForUnity.Mat)
extern "C"  void DTrees_setPriors_m3755437987 (DTrees_t3002505257 * __this, Mat_t3763101966 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setRegressionAccuracy(System.Single)
extern "C"  void DTrees_setRegressionAccuracy_m3199236572 (DTrees_t3002505257 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setTruncatePrunedTree(System.Boolean)
extern "C"  void DTrees_setTruncatePrunedTree_m3197092298 (DTrees_t3002505257 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setUse1SERule(System.Boolean)
extern "C"  void DTrees_setUse1SERule_m2928101252 (DTrees_t3002505257 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::setUseSurrogates(System.Boolean)
extern "C"  void DTrees_setUseSurrogates_m4291313510 (DTrees_t3002505257 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DTrees::ml_DTrees_getPriors_10(System.IntPtr)
extern "C"  IntPtr_t DTrees_ml_DTrees_getPriors_10_m1318685933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DTrees::ml_DTrees_create_10()
extern "C"  IntPtr_t DTrees_ml_DTrees_create_10_m371915036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DTrees::ml_DTrees_getTruncatePrunedTree_10(System.IntPtr)
extern "C"  bool DTrees_ml_DTrees_getTruncatePrunedTree_10_m3639629633 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DTrees::ml_DTrees_getUse1SERule_10(System.IntPtr)
extern "C"  bool DTrees_ml_DTrees_getUse1SERule_10_m465711227 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DTrees::ml_DTrees_getUseSurrogates_10(System.IntPtr)
extern "C"  bool DTrees_ml_DTrees_getUseSurrogates_10_m3100625193 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.DTrees::ml_DTrees_getRegressionAccuracy_10(System.IntPtr)
extern "C"  float DTrees_ml_DTrees_getRegressionAccuracy_10_m2715006965 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DTrees::ml_DTrees_getCVFolds_10(System.IntPtr)
extern "C"  int32_t DTrees_ml_DTrees_getCVFolds_10_m3690333900 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DTrees::ml_DTrees_getMaxCategories_10(System.IntPtr)
extern "C"  int32_t DTrees_ml_DTrees_getMaxCategories_10_m536622381 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DTrees::ml_DTrees_getMaxDepth_10(System.IntPtr)
extern "C"  int32_t DTrees_ml_DTrees_getMaxDepth_10_m3273278812 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DTrees::ml_DTrees_getMinSampleCount_10(System.IntPtr)
extern "C"  int32_t DTrees_ml_DTrees_getMinSampleCount_10_m2434516592 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setCVFolds_10(System.IntPtr,System.Int32)
extern "C"  void DTrees_ml_DTrees_setCVFolds_10_m2758708489 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setMaxCategories_10(System.IntPtr,System.Int32)
extern "C"  void DTrees_ml_DTrees_setMaxCategories_10_m50949576 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setMaxDepth_10(System.IntPtr,System.Int32)
extern "C"  void DTrees_ml_DTrees_setMaxDepth_10_m4172009789 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setMinSampleCount_10(System.IntPtr,System.Int32)
extern "C"  void DTrees_ml_DTrees_setMinSampleCount_10_m1446508329 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setPriors_10(System.IntPtr,System.IntPtr)
extern "C"  void DTrees_ml_DTrees_setPriors_10_m1776063122 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___val_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setRegressionAccuracy_10(System.IntPtr,System.Single)
extern "C"  void DTrees_ml_DTrees_setRegressionAccuracy_10_m4087556186 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setTruncatePrunedTree_10(System.IntPtr,System.Boolean)
extern "C"  void DTrees_ml_DTrees_setTruncatePrunedTree_10_m2307652292 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setUse1SERule_10(System.IntPtr,System.Boolean)
extern "C"  void DTrees_ml_DTrees_setUse1SERule_10_m1132490314 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_setUseSurrogates_10(System.IntPtr,System.Boolean)
extern "C"  void DTrees_ml_DTrees_setUseSurrogates_10_m463315340 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DTrees::ml_DTrees_delete(System.IntPtr)
extern "C"  void DTrees_ml_DTrees_delete_m203221836 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
