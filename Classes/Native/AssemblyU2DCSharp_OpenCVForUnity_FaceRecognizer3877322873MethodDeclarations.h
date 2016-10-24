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

// OpenCVForUnity.FaceRecognizer
struct FaceRecognizer_t3877322873;
// System.String
struct String_t;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.MatOfInt
struct MatOfInt_t2359161200;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Double[]
struct DoubleU5BU5D_t2145413704;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "mscorlib_System_String7231557.h"

// System.Void OpenCVForUnity.FaceRecognizer::.ctor(System.IntPtr)
extern "C"  void FaceRecognizer__ctor_m4058642735 (FaceRecognizer_t3877322873 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::Dispose(System.Boolean)
extern "C"  void FaceRecognizer_Dispose_m1914842169 (FaceRecognizer_t3877322873 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.FaceRecognizer::getLabelInfo(System.Int32)
extern "C"  String_t* FaceRecognizer_getLabelInfo_m3990203225 (FaceRecognizer_t3877322873 * __this, int32_t ___label0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.FaceRecognizer::predict(OpenCVForUnity.Mat)
extern "C"  int32_t FaceRecognizer_predict_m2927670863 (FaceRecognizer_t3877322873 * __this, Mat_t3763101966 * ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MatOfInt OpenCVForUnity.FaceRecognizer::getLabelsBystring(System.String)
extern "C"  MatOfInt_t2359161200 * FaceRecognizer_getLabelsBystring_m2875175916 (FaceRecognizer_t3877322873 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::load(System.String)
extern "C"  void FaceRecognizer_load_m3717369469 (FaceRecognizer_t3877322873 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::predict(OpenCVForUnity.Mat,System.Int32[],System.Double[])
extern "C"  void FaceRecognizer_predict_m3000779502 (FaceRecognizer_t3877322873 * __this, Mat_t3763101966 * ___src0, Int32U5BU5D_t3230847821* ___label1, DoubleU5BU5D_t2145413704* ___confidence2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::save(System.String)
extern "C"  void FaceRecognizer_save_m1019343110 (FaceRecognizer_t3877322873 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::setLabelInfo(System.Int32,System.String)
extern "C"  void FaceRecognizer_setLabelInfo_m1141575116 (FaceRecognizer_t3877322873 * __this, int32_t ___label0, String_t* ___strInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::train(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat)
extern "C"  void FaceRecognizer_train_m2505744233 (FaceRecognizer_t3877322873 * __this, List_1_t836320222 * ___src0, Mat_t3763101966 * ___labels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::update(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat)
extern "C"  void FaceRecognizer_update_m2123357734 (FaceRecognizer_t3877322873 * __this, List_1_t836320222 * ___src0, Mat_t3763101966 * ___labels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_getLabelInfo_10(System.IntPtr,System.Int32)
extern "C"  IntPtr_t FaceRecognizer_face_FaceRecognizer_getLabelInfo_10_m3732053521 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___label1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_predict_10(System.IntPtr,System.IntPtr)
extern "C"  int32_t FaceRecognizer_face_FaceRecognizer_predict_10_m3473174800 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_getLabelsByString_10(System.IntPtr,System.String)
extern "C"  IntPtr_t FaceRecognizer_face_FaceRecognizer_getLabelsByString_10_m3217432873 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_load_10(System.IntPtr,System.String)
extern "C"  void FaceRecognizer_face_FaceRecognizer_load_10_m3344448561 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_predict_11(System.IntPtr,System.IntPtr,System.Double[],System.Double[])
extern "C"  void FaceRecognizer_face_FaceRecognizer_predict_11_m1951400277 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_nativeObj1, DoubleU5BU5D_t2145413704* ___label_out2, DoubleU5BU5D_t2145413704* ___confidence_out3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_save_10(System.IntPtr,System.String)
extern "C"  void FaceRecognizer_face_FaceRecognizer_save_10_m3601538248 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_setLabelInfo_10(System.IntPtr,System.Int32,System.String)
extern "C"  void FaceRecognizer_face_FaceRecognizer_setLabelInfo_10_m3730457764 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___label1, String_t* ___strInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_train_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void FaceRecognizer_face_FaceRecognizer_train_10_m133479167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_mat_nativeObj1, IntPtr_t ___labels_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_update_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void FaceRecognizer_face_FaceRecognizer_update_10_m3062865396 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_mat_nativeObj1, IntPtr_t ___labels_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FaceRecognizer::face_FaceRecognizer_delete(System.IntPtr)
extern "C"  void FaceRecognizer_face_FaceRecognizer_delete_m3531276750 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
