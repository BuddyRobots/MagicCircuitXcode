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

// OpenCVForUnity.TrainData
struct TrainData_t97127744;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.TrainData::.ctor(System.IntPtr)
extern "C"  void TrainData__ctor_m58251142 (TrainData_t97127744 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::Dispose(System.Boolean)
extern "C"  void TrainData_Dispose_m3001424514 (TrainData_t97127744 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getCatMap()
extern "C"  Mat_t3763101966 * TrainData_getCatMap_m873259462 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getCatOfs()
extern "C"  Mat_t3763101966 * TrainData_getCatOfs_m875258342 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getClassLabels()
extern "C"  Mat_t3763101966 * TrainData_getClassLabels_m1102440857 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getDefaultSubstValues()
extern "C"  Mat_t3763101966 * TrainData_getDefaultSubstValues_m1451867842 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getMissing()
extern "C"  Mat_t3763101966 * TrainData_getMissing_m1671938088 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getNormCatResponses()
extern "C"  Mat_t3763101966 * TrainData_getNormCatResponses_m3806139352 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getResponses()
extern "C"  Mat_t3763101966 * TrainData_getResponses_m915528660 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getSampleWeights()
extern "C"  Mat_t3763101966 * TrainData_getSampleWeights_m2895900467 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getSamples()
extern "C"  Mat_t3763101966 * TrainData_getSamples_m1541104139 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getSubVector(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  Mat_t3763101966 * TrainData_getSubVector_m2364149537 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___vec0, Mat_t3763101966 * ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTestNormCatResponses()
extern "C"  Mat_t3763101966 * TrainData_getTestNormCatResponses_m191483018 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTestResponses()
extern "C"  Mat_t3763101966 * TrainData_getTestResponses_m480356194 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTestSampleIdx()
extern "C"  Mat_t3763101966 * TrainData_getTestSampleIdx_m3060232067 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTestSampleWeights()
extern "C"  Mat_t3763101966 * TrainData_getTestSampleWeights_m664748993 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTrainNormCatResponses()
extern "C"  Mat_t3763101966 * TrainData_getTrainNormCatResponses_m3035490210 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTrainResponses()
extern "C"  Mat_t3763101966 * TrainData_getTrainResponses_m2797295434 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTrainSampleIdx()
extern "C"  Mat_t3763101966 * TrainData_getTrainSampleIdx_m1082204011 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTrainSampleWeights()
extern "C"  Mat_t3763101966 * TrainData_getTrainSampleWeights_m2886647721 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTrainSamples(System.Int32,System.Boolean,System.Boolean)
extern "C"  Mat_t3763101966 * TrainData_getTrainSamples_m4129962418 (TrainData_t97127744 * __this, int32_t ___layout0, bool ___compressSamples1, bool ___compressVars2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getTrainSamples()
extern "C"  Mat_t3763101966 * TrainData_getTrainSamples_m1543062273 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getVarIdx()
extern "C"  Mat_t3763101966 * TrainData_getVarIdx_m3861029430 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.TrainData::getVarType()
extern "C"  Mat_t3763101966 * TrainData_getVarType_m4061930243 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::getCatCount(System.Int32)
extern "C"  int32_t TrainData_getCatCount_m2697346334 (TrainData_t97127744 * __this, int32_t ___vi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::getLayout()
extern "C"  int32_t TrainData_getLayout_m2369566750 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::getNAllVars()
extern "C"  int32_t TrainData_getNAllVars_m1979905555 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::getNSamples()
extern "C"  int32_t TrainData_getNSamples_m3456052143 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::getNTestSamples()
extern "C"  int32_t TrainData_getNTestSamples_m2701332669 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::getNTrainSamples()
extern "C"  int32_t TrainData_getNTrainSamples_m3718635485 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::getNVars()
extern "C"  int32_t TrainData_getNVars_m683160936 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::getResponseType()
extern "C"  int32_t TrainData_getResponseType_m26653071 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::getSample(OpenCVForUnity.Mat,System.Int32,System.Single)
extern "C"  void TrainData_getSample_m226568651 (TrainData_t97127744 * __this, Mat_t3763101966 * ___varIdx0, int32_t ___sidx1, float ___buf2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::getValues(System.Int32,OpenCVForUnity.Mat,System.Single)
extern "C"  void TrainData_getValues_m3487875771 (TrainData_t97127744 * __this, int32_t ___vi0, Mat_t3763101966 * ___sidx1, float ___values2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::setTrainTestSplit(System.Int32,System.Boolean)
extern "C"  void TrainData_setTrainTestSplit_m2356220926 (TrainData_t97127744 * __this, int32_t ___count0, bool ___shuffle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::setTrainTestSplit(System.Int32)
extern "C"  void TrainData_setTrainTestSplit_m4158680479 (TrainData_t97127744 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::setTrainTestSplitRatio(System.Double,System.Boolean)
extern "C"  void TrainData_setTrainTestSplitRatio_m959794554 (TrainData_t97127744 * __this, double ___ratio0, bool ___shuffle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::setTrainTestSplitRatio(System.Double)
extern "C"  void TrainData_setTrainTestSplitRatio_m2478304163 (TrainData_t97127744 * __this, double ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::shuffleTrainTest()
extern "C"  void TrainData_shuffleTrainTest_m1102354391 (TrainData_t97127744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getCatMap_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getCatMap_10_m1391642670 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getCatOfs_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getCatOfs_10_m1531775054 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getClassLabels_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getClassLabels_10_m1650617497 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getDefaultSubstValues_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getDefaultSubstValues_10_m3373358890 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getMissing_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getMissing_10_m1467476776 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getNormCatResponses_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getNormCatResponses_10_m2395370816 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getResponses_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getResponses_10_m2217114580 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getSampleWeights_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getSampleWeights_10_m1654180659 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getSamples_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getSamples_10_m3840501515 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getSubVector_10(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getSubVector_10_m1622788531 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vec_nativeObj0, IntPtr_t ___idx_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTestNormCatResponses_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTestNormCatResponses_10_m3000070130 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTestResponses_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTestResponses_10_m257836386 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTestSampleIdx_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTestSampleIdx_10_m2591665027 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTestSampleWeights_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTestSampleWeights_10_m2459246017 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTrainNormCatResponses_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTrainNormCatResponses_10_m636795298 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTrainResponses_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTrainResponses_10_m4030562738 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTrainSampleIdx_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTrainSampleIdx_10_m2069424083 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTrainSampleWeights_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTrainSampleWeights_10_m1037939217 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTrainSamples_10(System.IntPtr,System.Int32,System.Boolean,System.Boolean)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTrainSamples_10_m3691949294 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___layout1, bool ___compressSamples2, bool ___compressVars3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getTrainSamples_11(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getTrainSamples_11_m364259912 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getVarIdx_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getVarIdx_10_m3956910238 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TrainData::ml_TrainData_getVarType_10(System.IntPtr)
extern "C"  IntPtr_t TrainData_ml_TrainData_getVarType_10_m2251896835 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::ml_TrainData_getCatCount_10(System.IntPtr,System.Int32)
extern "C"  int32_t TrainData_ml_TrainData_getCatCount_10_m3405189917 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___vi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::ml_TrainData_getLayout_10(System.IntPtr)
extern "C"  int32_t TrainData_ml_TrainData_getLayout_10_m146189579 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::ml_TrainData_getNAllVars_10(System.IntPtr)
extern "C"  int32_t TrainData_ml_TrainData_getNAllVars_10_m3320309440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::ml_TrainData_getNSamples_10(System.IntPtr)
extern "C"  int32_t TrainData_ml_TrainData_getNSamples_10_m4166870108 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::ml_TrainData_getNTestSamples_10(System.IntPtr)
extern "C"  int32_t TrainData_ml_TrainData_getNTestSamples_10_m2795841770 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::ml_TrainData_getNTrainSamples_10(System.IntPtr)
extern "C"  int32_t TrainData_ml_TrainData_getNTrainSamples_10_m2497640888 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::ml_TrainData_getNVars_10(System.IntPtr)
extern "C"  int32_t TrainData_ml_TrainData_getNVars_10_m1538076739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.TrainData::ml_TrainData_getResponseType_10(System.IntPtr)
extern "C"  int32_t TrainData_ml_TrainData_getResponseType_10_m3612403132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::ml_TrainData_getSample_10(System.IntPtr,System.IntPtr,System.Int32,System.Single)
extern "C"  void TrainData_ml_TrainData_getSample_10_m2666106065 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___varIdx_nativeObj1, int32_t ___sidx2, float ___buf3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::ml_TrainData_getValues_10(System.IntPtr,System.Int32,System.IntPtr,System.Single)
extern "C"  void TrainData_ml_TrainData_getValues_10_m3610351989 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___vi1, IntPtr_t ___sidx_nativeObj2, float ___values3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::ml_TrainData_setTrainTestSplit_10(System.IntPtr,System.Int32,System.Boolean)
extern "C"  void TrainData_ml_TrainData_setTrainTestSplit_10_m3239568037 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___count1, bool ___shuffle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::ml_TrainData_setTrainTestSplit_11(System.IntPtr,System.Int32)
extern "C"  void TrainData_ml_TrainData_setTrainTestSplit_11_m3485526617 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::ml_TrainData_setTrainTestSplitRatio_10(System.IntPtr,System.Double,System.Boolean)
extern "C"  void TrainData_ml_TrainData_setTrainTestSplitRatio_10_m3981642315 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___ratio1, bool ___shuffle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::ml_TrainData_setTrainTestSplitRatio_11(System.IntPtr,System.Double)
extern "C"  void TrainData_ml_TrainData_setTrainTestSplitRatio_11_m631829137 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::ml_TrainData_shuffleTrainTest_10(System.IntPtr)
extern "C"  void TrainData_ml_TrainData_shuffleTrainTest_10_m1696901390 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TrainData::ml_TrainData_delete(System.IntPtr)
extern "C"  void TrainData_ml_TrainData_delete_m1143409616 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
