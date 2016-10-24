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

// OpenCVForUnity.NormalBayesClassifier
struct NormalBayesClassifier_t3820446096;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.NormalBayesClassifier::.ctor(System.IntPtr)
extern "C"  void NormalBayesClassifier__ctor_m1455223766 (NormalBayesClassifier_t3820446096 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.NormalBayesClassifier::Dispose(System.Boolean)
extern "C"  void NormalBayesClassifier_Dispose_m1979767858 (NormalBayesClassifier_t3820446096 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.NormalBayesClassifier OpenCVForUnity.NormalBayesClassifier::create()
extern "C"  NormalBayesClassifier_t3820446096 * NormalBayesClassifier_create_m3883581890 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.NormalBayesClassifier::predictProb(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  float NormalBayesClassifier_predictProb_m3465691380 (NormalBayesClassifier_t3820446096 * __this, Mat_t3763101966 * ___inputs0, Mat_t3763101966 * ___outputs1, Mat_t3763101966 * ___outputProbs2, int32_t ___flags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.NormalBayesClassifier::predictProb(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  float NormalBayesClassifier_predictProb_m2451009731 (NormalBayesClassifier_t3820446096 * __this, Mat_t3763101966 * ___inputs0, Mat_t3763101966 * ___outputs1, Mat_t3763101966 * ___outputProbs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.NormalBayesClassifier::ml_NormalBayesClassifier_create_10()
extern "C"  IntPtr_t NormalBayesClassifier_ml_NormalBayesClassifier_create_10_m1359742336 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.NormalBayesClassifier::ml_NormalBayesClassifier_predictProb_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  float NormalBayesClassifier_ml_NormalBayesClassifier_predictProb_10_m2856311030 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___inputs_nativeObj1, IntPtr_t ___outputs_nativeObj2, IntPtr_t ___outputProbs_nativeObj3, int32_t ___flags4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.NormalBayesClassifier::ml_NormalBayesClassifier_predictProb_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float NormalBayesClassifier_ml_NormalBayesClassifier_predictProb_11_m1272321184 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___inputs_nativeObj1, IntPtr_t ___outputs_nativeObj2, IntPtr_t ___outputProbs_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.NormalBayesClassifier::ml_NormalBayesClassifier_delete(System.IntPtr)
extern "C"  void NormalBayesClassifier_ml_NormalBayesClassifier_delete_m2000287088 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
