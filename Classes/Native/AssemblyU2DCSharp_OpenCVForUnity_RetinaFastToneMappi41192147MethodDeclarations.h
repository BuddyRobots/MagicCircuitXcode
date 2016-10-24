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

// OpenCVForUnity.RetinaFastToneMapping
struct RetinaFastToneMapping_t41192147;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.RetinaFastToneMapping::.ctor(System.IntPtr)
extern "C"  void RetinaFastToneMapping__ctor_m1983936729 (RetinaFastToneMapping_t41192147 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::Dispose(System.Boolean)
extern "C"  void RetinaFastToneMapping_Dispose_m3222574159 (RetinaFastToneMapping_t41192147 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::applyFastToneMapping(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void RetinaFastToneMapping_applyFastToneMapping_m495522347 (RetinaFastToneMapping_t41192147 * __this, Mat_t3763101966 * ___inputImage0, Mat_t3763101966 * ___outputToneMappedImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::setup(System.Single,System.Single,System.Single)
extern "C"  void RetinaFastToneMapping_setup_m2561243423 (RetinaFastToneMapping_t41192147 * __this, float ___photoreceptorsNeighborhoodRadius0, float ___ganglioncellsNeighborhoodRadius1, float ___meanLuminanceModulatorK2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::setup()
extern "C"  void RetinaFastToneMapping_setup_m3928560598 (RetinaFastToneMapping_t41192147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::bioinspired_RetinaFastToneMapping_applyFastToneMapping_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void RetinaFastToneMapping_bioinspired_RetinaFastToneMapping_applyFastToneMapping_10_m854130610 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___inputImage_nativeObj1, IntPtr_t ___outputToneMappedImage_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::bioinspired_RetinaFastToneMapping_setup_10(System.IntPtr,System.Single,System.Single,System.Single)
extern "C"  void RetinaFastToneMapping_bioinspired_RetinaFastToneMapping_setup_10_m3589997010 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___photoreceptorsNeighborhoodRadius1, float ___ganglioncellsNeighborhoodRadius2, float ___meanLuminanceModulatorK3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::bioinspired_RetinaFastToneMapping_setup_11(System.IntPtr)
extern "C"  void RetinaFastToneMapping_bioinspired_RetinaFastToneMapping_setup_11_m2436360450 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RetinaFastToneMapping::bioinspired_RetinaFastToneMapping_delete(System.IntPtr)
extern "C"  void RetinaFastToneMapping_bioinspired_RetinaFastToneMapping_delete_m594987929 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
