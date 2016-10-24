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

// OpenCVForUnity.SVM
struct SVM_t3763107352;
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

// System.Void OpenCVForUnity.SVM::.ctor(System.IntPtr)
extern "C"  void SVM__ctor_m2952485982 (SVM_t3763107352 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::Dispose(System.Boolean)
extern "C"  void SVM_Dispose_m3683075754 (SVM_t3763107352 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.SVM::getClassWeights()
extern "C"  Mat_t3763101966 * SVM_getClassWeights_m1154763435 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.SVM::getSupportVectors()
extern "C"  Mat_t3763101966 * SVM_getSupportVectors_m527509961 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.SVM::getUncompressedSupportVectors()
extern "C"  Mat_t3763101966 * SVM_getUncompressedSupportVectors_m2437108291 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.SVM OpenCVForUnity.SVM::create()
extern "C"  SVM_t3763107352 * SVM_create_m1987530242 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TermCriteria OpenCVForUnity.SVM::getTermCriteria()
extern "C"  TermCriteria_t3040734659 * SVM_getTermCriteria_m3159005138 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::getC()
extern "C"  double SVM_getC_m1133291454 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::getCoef0()
extern "C"  double SVM_getCoef0_m1442530846 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::getDecisionFunction(System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  double SVM_getDecisionFunction_m4187874156 (SVM_t3763107352 * __this, int32_t ___i0, Mat_t3763101966 * ___alpha1, Mat_t3763101966 * ___svidx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::getDegree()
extern "C"  double SVM_getDegree_m3296469491 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::getGamma()
extern "C"  double SVM_getGamma_m304413954 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::getNu()
extern "C"  double SVM_getNu_m772698414 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::getP()
extern "C"  double SVM_getP_m1133303947 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SVM::getKernelType()
extern "C"  int32_t SVM_getKernelType_m3706515187 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SVM::getType()
extern "C"  int32_t SVM_getType_m2297981078 (SVM_t3763107352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setC(System.Double)
extern "C"  void SVM_setC_m3458571539 (SVM_t3763107352 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setClassWeights(OpenCVForUnity.Mat)
extern "C"  void SVM_setClassWeights_m673576894 (SVM_t3763107352 * __this, Mat_t3763101966 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setCoef0(System.Double)
extern "C"  void SVM_setCoef0_m3619052339 (SVM_t3763107352 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setDegree(System.Double)
extern "C"  void SVM_setDegree_m264519872 (SVM_t3763107352 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setGamma(System.Double)
extern "C"  void SVM_setGamma_m3171677903 (SVM_t3763107352 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setKernel(System.Int32)
extern "C"  void SVM_setKernel_m3514354628 (SVM_t3763107352 * __this, int32_t ___kernelType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setNu(System.Double)
extern "C"  void SVM_setNu_m4060789221 (SVM_t3763107352 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setP(System.Double)
extern "C"  void SVM_setP_m1116594534 (SVM_t3763107352 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setTermCriteria(OpenCVForUnity.TermCriteria)
extern "C"  void SVM_setTermCriteria_m2172553665 (SVM_t3763107352 * __this, TermCriteria_t3040734659 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::setType(System.Int32)
extern "C"  void SVM_setType_m1713858881 (SVM_t3763107352 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.SVM::ml_SVM_getClassWeights_10(System.IntPtr)
extern "C"  IntPtr_t SVM_ml_SVM_getClassWeights_10_m32157211 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.SVM::ml_SVM_getSupportVectors_10(System.IntPtr)
extern "C"  IntPtr_t SVM_ml_SVM_getSupportVectors_10_m1830617657 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.SVM::ml_SVM_getUncompressedSupportVectors_10(System.IntPtr)
extern "C"  IntPtr_t SVM_ml_SVM_getUncompressedSupportVectors_10_m445275315 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.SVM::ml_SVM_create_10()
extern "C"  IntPtr_t SVM_ml_SVM_create_10_m1138781584 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_getTermCriteria_10(System.IntPtr,System.Double[])
extern "C"  void SVM_ml_SVM_getTermCriteria_10_m3006216776 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::ml_SVM_getC_10(System.IntPtr)
extern "C"  double SVM_ml_SVM_getC_10_m3191563463 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::ml_SVM_getCoef0_10(System.IntPtr)
extern "C"  double SVM_ml_SVM_getCoef0_10_m3536089255 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::ml_SVM_getDecisionFunction_10(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  double SVM_ml_SVM_getDecisionFunction_10_m1653399417 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___i1, IntPtr_t ___alpha_nativeObj2, IntPtr_t ___svidx_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::ml_SVM_getDegree_10(System.IntPtr)
extern "C"  double SVM_ml_SVM_getDegree_10_m2553603826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::ml_SVM_getGamma_10(System.IntPtr)
extern "C"  double SVM_ml_SVM_getGamma_10_m3087785867 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::ml_SVM_getNu_10(System.IntPtr)
extern "C"  double SVM_ml_SVM_getNu_10_m996990381 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.SVM::ml_SVM_getP_10(System.IntPtr)
extern "C"  double SVM_ml_SVM_getP_10_m803363732 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SVM::ml_SVM_getKernelType_10(System.IntPtr)
extern "C"  int32_t SVM_ml_SVM_getKernelType_10_m569103336 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SVM::ml_SVM_getType_10(System.IntPtr)
extern "C"  int32_t SVM_ml_SVM_getType_10_m1395825739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setC_10(System.IntPtr,System.Double)
extern "C"  void SVM_ml_SVM_setC_10_m2828696634 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setClassWeights_10(System.IntPtr,System.IntPtr)
extern "C"  void SVM_ml_SVM_setClassWeights_10_m3552891456 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___val_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setCoef0_10(System.IntPtr,System.Double)
extern "C"  void SVM_ml_SVM_setCoef0_10_m1233308826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setDegree_10(System.IntPtr,System.Double)
extern "C"  void SVM_ml_SVM_setDegree_10_m1826278167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setGamma_10(System.IntPtr,System.Double)
extern "C"  void SVM_ml_SVM_setGamma_10_m899439742 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setKernel_10(System.IntPtr,System.Int32)
extern "C"  void SVM_ml_SVM_setKernel_10_m3732654923 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___kernelType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setNu_10(System.IntPtr,System.Double)
extern "C"  void SVM_ml_SVM_setNu_10_m1871895314 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setP_10(System.IntPtr,System.Double)
extern "C"  void SVM_ml_SVM_setP_10_m210700359 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setTermCriteria_10(System.IntPtr,System.Int32,System.Int32,System.Double)
extern "C"  void SVM_ml_SVM_setTermCriteria_10_m2566568342 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val_type1, int32_t ___val_maxCount2, double ___val_epsilon3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_setType_10(System.IntPtr,System.Int32)
extern "C"  void SVM_ml_SVM_setType_10_m1759304238 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SVM::ml_SVM_delete(System.IntPtr)
extern "C"  void SVM_ml_SVM_delete_m95335168 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
