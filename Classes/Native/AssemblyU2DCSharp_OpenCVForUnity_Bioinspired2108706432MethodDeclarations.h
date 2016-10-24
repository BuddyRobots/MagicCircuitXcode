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

// OpenCVForUnity.Bioinspired
struct Bioinspired_t2108706432;
// OpenCVForUnity.Retina
struct Retina_t3419076915;
// OpenCVForUnity.Size
struct Size_t4100163289;
// OpenCVForUnity.RetinaFastToneMapping
struct RetinaFastToneMapping_t41192147;
// OpenCVForUnity.TransientAreasSegmentationModule
struct TransientAreasSegmentationModule_t1556321346;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Bioinspired::.ctor()
extern "C"  void Bioinspired__ctor_m2768700494 (Bioinspired_t2108706432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Retina OpenCVForUnity.Bioinspired::createRetina(OpenCVForUnity.Size,System.Boolean,System.Int32,System.Boolean,System.Single,System.Single)
extern "C"  Retina_t3419076915 * Bioinspired_createRetina_m2044332257 (Il2CppObject * __this /* static, unused */, Size_t4100163289 * ___inputSize0, bool ___colorMode1, int32_t ___colorSamplingMethod2, bool ___useRetinaLogSampling3, float ___reductionFactor4, float ___samplingStrenght5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Retina OpenCVForUnity.Bioinspired::createRetina(OpenCVForUnity.Size,System.Boolean)
extern "C"  Retina_t3419076915 * Bioinspired_createRetina_m2212857361 (Il2CppObject * __this /* static, unused */, Size_t4100163289 * ___inputSize0, bool ___colorMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Retina OpenCVForUnity.Bioinspired::createRetina(OpenCVForUnity.Size)
extern "C"  Retina_t3419076915 * Bioinspired_createRetina_m1966503916 (Il2CppObject * __this /* static, unused */, Size_t4100163289 * ___inputSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RetinaFastToneMapping OpenCVForUnity.Bioinspired::createRetinaFastToneMapping(OpenCVForUnity.Size)
extern "C"  RetinaFastToneMapping_t41192147 * Bioinspired_createRetinaFastToneMapping_m2960146804 (Il2CppObject * __this /* static, unused */, Size_t4100163289 * ___inputSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TransientAreasSegmentationModule OpenCVForUnity.Bioinspired::createTransientAreasSegmentationModule(OpenCVForUnity.Size)
extern "C"  TransientAreasSegmentationModule_t1556321346 * Bioinspired_createTransientAreasSegmentationModule_m2882193100 (Il2CppObject * __this /* static, unused */, Size_t4100163289 * ___inputSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createRetina_10(System.Double,System.Double,System.Boolean,System.Int32,System.Boolean,System.Single,System.Single)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createRetina_10_m2133181107 (Il2CppObject * __this /* static, unused */, double ___inputSize_width0, double ___inputSize_height1, bool ___colorMode2, int32_t ___colorSamplingMethod3, bool ___useRetinaLogSampling4, float ___reductionFactor5, float ___samplingStrenght6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createRetina_11(System.Double,System.Double,System.Boolean)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createRetina_11_m3428032612 (Il2CppObject * __this /* static, unused */, double ___inputSize_width0, double ___inputSize_height1, bool ___colorMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createRetina_12(System.Double,System.Double)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createRetina_12_m1839992216 (Il2CppObject * __this /* static, unused */, double ___inputSize_width0, double ___inputSize_height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createRetinaFastToneMapping_10(System.Double,System.Double)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createRetinaFastToneMapping_10_m287723108 (Il2CppObject * __this /* static, unused */, double ___inputSize_width0, double ___inputSize_height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Bioinspired::bioinspired_Bioinspired_createTransientAreasSegmentationModule_10(System.Double,System.Double)
extern "C"  IntPtr_t Bioinspired_bioinspired_Bioinspired_createTransientAreasSegmentationModule_10_m1858345385 (Il2CppObject * __this /* static, unused */, double ___inputSize_width0, double ___inputSize_height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
