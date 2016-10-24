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

// OpenCVForUnity.Face
struct Face_t4099767605;
// OpenCVForUnity.BasicFaceRecognizer
struct BasicFaceRecognizer_t205719901;
// OpenCVForUnity.LBPHFaceRecognizer
struct LBPHFaceRecognizer_t2096094055;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Face::.ctor()
extern "C"  void Face__ctor_m96484361 (Face_t4099767605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BasicFaceRecognizer OpenCVForUnity.Face::createEigenFaceRecognizer(System.Int32,System.Double)
extern "C"  BasicFaceRecognizer_t205719901 * Face_createEigenFaceRecognizer_m2853495000 (Il2CppObject * __this /* static, unused */, int32_t ___num_components0, double ___threshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BasicFaceRecognizer OpenCVForUnity.Face::createEigenFaceRecognizer()
extern "C"  BasicFaceRecognizer_t205719901 * Face_createEigenFaceRecognizer_m3264786571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BasicFaceRecognizer OpenCVForUnity.Face::createFisherFaceRecognizer(System.Int32,System.Double)
extern "C"  BasicFaceRecognizer_t205719901 * Face_createFisherFaceRecognizer_m1623502679 (Il2CppObject * __this /* static, unused */, int32_t ___num_components0, double ___threshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.BasicFaceRecognizer OpenCVForUnity.Face::createFisherFaceRecognizer()
extern "C"  BasicFaceRecognizer_t205719901 * Face_createFisherFaceRecognizer_m2639405002 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.LBPHFaceRecognizer OpenCVForUnity.Face::createLBPHFaceRecognizer(System.Int32,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  LBPHFaceRecognizer_t2096094055 * Face_createLBPHFaceRecognizer_m621209115 (Il2CppObject * __this /* static, unused */, int32_t ___radius0, int32_t ___neighbors1, int32_t ___grid_x2, int32_t ___grid_y3, double ___threshold4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.LBPHFaceRecognizer OpenCVForUnity.Face::createLBPHFaceRecognizer()
extern "C"  LBPHFaceRecognizer_t2096094055 * Face_createLBPHFaceRecognizer_m1266495943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Face::face_Face_createEigenFaceRecognizer_10(System.Int32,System.Double)
extern "C"  IntPtr_t Face_face_Face_createEigenFaceRecognizer_10_m423360224 (Il2CppObject * __this /* static, unused */, int32_t ___num_components0, double ___threshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Face::face_Face_createEigenFaceRecognizer_11()
extern "C"  IntPtr_t Face_face_Face_createEigenFaceRecognizer_11_m1749763156 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Face::face_Face_createFisherFaceRecognizer_10(System.Int32,System.Double)
extern "C"  IntPtr_t Face_face_Face_createFisherFaceRecognizer_10_m1191336581 (Il2CppObject * __this /* static, unused */, int32_t ___num_components0, double ___threshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Face::face_Face_createFisherFaceRecognizer_11()
extern "C"  IntPtr_t Face_face_Face_createFisherFaceRecognizer_11_m1866492985 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Face::face_Face_createLBPHFaceRecognizer_10(System.Int32,System.Int32,System.Int32,System.Int32,System.Double)
extern "C"  IntPtr_t Face_face_Face_createLBPHFaceRecognizer_10_m106571795 (Il2CppObject * __this /* static, unused */, int32_t ___radius0, int32_t ___neighbors1, int32_t ___grid_x2, int32_t ___grid_y3, double ___threshold4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Face::face_Face_createLBPHFaceRecognizer_11()
extern "C"  IntPtr_t Face_face_Face_createLBPHFaceRecognizer_11_m3938063504 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
