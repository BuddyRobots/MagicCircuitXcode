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

// OpenCVForUnity.ANN_MLP
struct ANN_MLP_t3423546721;
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

// System.Void OpenCVForUnity.ANN_MLP::.ctor(System.IntPtr)
extern "C"  void ANN_MLP__ctor_m2899170023 (ANN_MLP_t3423546721 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::Dispose(System.Boolean)
extern "C"  void ANN_MLP_Dispose_m190273409 (ANN_MLP_t3423546721 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.ANN_MLP::getLayerSizes()
extern "C"  Mat_t3763101966 * ANN_MLP_getLayerSizes_m119135008 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.ANN_MLP::getWeights(System.Int32)
extern "C"  Mat_t3763101966 * ANN_MLP_getWeights_m2278592431 (ANN_MLP_t3423546721 * __this, int32_t ___layerIdx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ANN_MLP OpenCVForUnity.ANN_MLP::create()
extern "C"  ANN_MLP_t3423546721 * ANN_MLP_create_m682846562 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TermCriteria OpenCVForUnity.ANN_MLP::getTermCriteria()
extern "C"  TermCriteria_t3040734659 * ANN_MLP_getTermCriteria_m215043945 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::getBackpropMomentumScale()
extern "C"  double ANN_MLP_getBackpropMomentumScale_m756776524 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::getBackpropWeightScale()
extern "C"  double ANN_MLP_getBackpropWeightScale_m1684515500 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::getRpropDW0()
extern "C"  double ANN_MLP_getRpropDW0_m4266197190 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::getRpropDWMax()
extern "C"  double ANN_MLP_getRpropDWMax_m2445256602 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::getRpropDWMin()
extern "C"  double ANN_MLP_getRpropDWMin_m2445485320 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::getRpropDWMinus()
extern "C"  double ANN_MLP_getRpropDWMinus_m766647910 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::getRpropDWPlus()
extern "C"  double ANN_MLP_getRpropDWPlus_m2884539526 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.ANN_MLP::getTrainMethod()
extern "C"  int32_t ANN_MLP_getTrainMethod_m3229435032 (ANN_MLP_t3423546721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setActivationFunction(System.Int32,System.Double,System.Double)
extern "C"  void ANN_MLP_setActivationFunction_m1626154404 (ANN_MLP_t3423546721 * __this, int32_t ___type0, double ___param11, double ___param22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setActivationFunction(System.Int32)
extern "C"  void ANN_MLP_setActivationFunction_m1351524268 (ANN_MLP_t3423546721 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setBackpropMomentumScale(System.Double)
extern "C"  void ANN_MLP_setBackpropMomentumScale_m2338653765 (ANN_MLP_t3423546721 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setBackpropWeightScale(System.Double)
extern "C"  void ANN_MLP_setBackpropWeightScale_m790306213 (ANN_MLP_t3423546721 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setLayerSizes(OpenCVForUnity.Mat)
extern "C"  void ANN_MLP_setLayerSizes_m203482995 (ANN_MLP_t3423546721 * __this, Mat_t3763101966 * ____layer_sizes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setRpropDW0(System.Double)
extern "C"  void ANN_MLP_setRpropDW0_m2768353805 (ANN_MLP_t3423546721 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setRpropDWMax(System.Double)
extern "C"  void ANN_MLP_setRpropDWMax_m2373426041 (ANN_MLP_t3423546721 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setRpropDWMin(System.Double)
extern "C"  void ANN_MLP_setRpropDWMin_m1125376203 (ANN_MLP_t3423546721 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setRpropDWMinus(System.Double)
extern "C"  void ANN_MLP_setRpropDWMinus_m2424336365 (ANN_MLP_t3423546721 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setRpropDWPlus(System.Double)
extern "C"  void ANN_MLP_setRpropDWPlus_m3419309323 (ANN_MLP_t3423546721 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setTermCriteria(OpenCVForUnity.TermCriteria)
extern "C"  void ANN_MLP_setTermCriteria_m2846373194 (ANN_MLP_t3423546721 * __this, TermCriteria_t3040734659 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setTrainMethod(System.Int32,System.Double,System.Double)
extern "C"  void ANN_MLP_setTrainMethod_m2200296135 (ANN_MLP_t3423546721 * __this, int32_t ___method0, double ___param11, double ___param22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::setTrainMethod(System.Int32)
extern "C"  void ANN_MLP_setTrainMethod_m3213973327 (ANN_MLP_t3423546721 * __this, int32_t ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getLayerSizes_10(System.IntPtr)
extern "C"  IntPtr_t ANN_MLP_ml_ANN_1MLP_getLayerSizes_10_m917260672 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getWeights_10(System.IntPtr,System.Int32)
extern "C"  IntPtr_t ANN_MLP_ml_ANN_1MLP_getWeights_10_m3885952817 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___layerIdx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_create_10()
extern "C"  IntPtr_t ANN_MLP_ml_ANN_1MLP_create_10_m2723186647 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getTermCriteria_10(System.IntPtr,System.Double[])
extern "C"  void ANN_MLP_ml_ANN_1MLP_getTermCriteria_10_m2942264217 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getBackpropMomentumScale_10(System.IntPtr)
extern "C"  double ANN_MLP_ml_ANN_1MLP_getBackpropMomentumScale_10_m2099077121 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getBackpropWeightScale_10(System.IntPtr)
extern "C"  double ANN_MLP_ml_ANN_1MLP_getBackpropWeightScale_10_m1202088097 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getRpropDW0_10(System.IntPtr)
extern "C"  double ANN_MLP_ml_ANN_1MLP_getRpropDW0_10_m2757194841 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getRpropDWMax_10(System.IntPtr)
extern "C"  double ANN_MLP_ml_ANN_1MLP_getRpropDWMax_10_m1927833453 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getRpropDWMin_10(System.IntPtr)
extern "C"  double ANN_MLP_ml_ANN_1MLP_getRpropDWMin_10_m2806991067 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getRpropDWMinus_10(System.IntPtr)
extern "C"  double ANN_MLP_ml_ANN_1MLP_getRpropDWMinus_10_m1043999353 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getRpropDWPlus_10(System.IntPtr)
extern "C"  double ANN_MLP_ml_ANN_1MLP_getRpropDWPlus_10_m4099239803 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_getTrainMethod_10(System.IntPtr)
extern "C"  int32_t ANN_MLP_ml_ANN_1MLP_getTrainMethod_10_m735449869 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setActivationFunction_10(System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setActivationFunction_10_m535302881 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___type1, double ___param12, double ___param23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setActivationFunction_11(System.IntPtr,System.Int32)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setActivationFunction_11_m3659054826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setBackpropMomentumScale_10(System.IntPtr,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setBackpropMomentumScale_10_m176706894 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setBackpropWeightScale_10(System.IntPtr,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setBackpropWeightScale_10_m801650222 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setLayerSizes_10(System.IntPtr,System.IntPtr)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setLayerSizes_10_m1084052463 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ____layer_sizes_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setRpropDW0_10(System.IntPtr,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setRpropDW0_10_m4230318820 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setRpropDWMax_10(System.IntPtr,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setRpropDWMax_10_m1922323256 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setRpropDWMin_10(System.IntPtr,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setRpropDWMin_10_m1898257446 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setRpropDWMinus_10(System.IntPtr,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setRpropDWMinus_10_m1353419140 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setRpropDWPlus_10(System.IntPtr,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setRpropDWPlus_10_m1500878984 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setTermCriteria_10(System.IntPtr,System.Int32,System.Int32,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setTermCriteria_10_m2496151527 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val_type1, int32_t ___val_maxCount2, double ___val_epsilon3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setTrainMethod_10(System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setTrainMethod_10_m546704188 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___method1, double ___param12, double ___param23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_setTrainMethod_11(System.IntPtr,System.Int32)
extern "C"  void ANN_MLP_ml_ANN_1MLP_setTrainMethod_11_m2314681797 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ANN_MLP::ml_ANN_1MLP_delete(System.IntPtr)
extern "C"  void ANN_MLP_ml_ANN_1MLP_delete_m1550274513 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
