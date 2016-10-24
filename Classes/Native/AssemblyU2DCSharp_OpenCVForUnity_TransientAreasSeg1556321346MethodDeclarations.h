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

// OpenCVForUnity.TransientAreasSegmentationModule
struct TransientAreasSegmentationModule_t1556321346;
// OpenCVForUnity.Size
struct Size_t4100163289;
// System.String
struct String_t;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "mscorlib_System_String7231557.h"

// System.Void OpenCVForUnity.TransientAreasSegmentationModule::.ctor(System.IntPtr)
extern "C"  void TransientAreasSegmentationModule__ctor_m3621816888 (TransientAreasSegmentationModule_t1556321346 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::Dispose(System.Boolean)
extern "C"  void TransientAreasSegmentationModule_Dispose_m2186941072 (TransientAreasSegmentationModule_t1556321346 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.TransientAreasSegmentationModule::getSize()
extern "C"  Size_t4100163289 * TransientAreasSegmentationModule_getSize_m17383710 (TransientAreasSegmentationModule_t1556321346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.TransientAreasSegmentationModule::printSetup()
extern "C"  String_t* TransientAreasSegmentationModule_printSetup_m3765351765 (TransientAreasSegmentationModule_t1556321346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::clearAllBuffers()
extern "C"  void TransientAreasSegmentationModule_clearAllBuffers_m2628454233 (TransientAreasSegmentationModule_t1556321346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::getSegmentationPicture(OpenCVForUnity.Mat)
extern "C"  void TransientAreasSegmentationModule_getSegmentationPicture_m3022297907 (TransientAreasSegmentationModule_t1556321346 * __this, Mat_t3763101966 * ___transientAreas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::run(OpenCVForUnity.Mat,System.Int32)
extern "C"  void TransientAreasSegmentationModule_run_m1910129485 (TransientAreasSegmentationModule_t1556321346 * __this, Mat_t3763101966 * ___inputToSegment0, int32_t ___channelIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::run(OpenCVForUnity.Mat)
extern "C"  void TransientAreasSegmentationModule_run_m2090701258 (TransientAreasSegmentationModule_t1556321346 * __this, Mat_t3763101966 * ___inputToSegment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::setup(System.String,System.Boolean)
extern "C"  void TransientAreasSegmentationModule_setup_m1800752082 (TransientAreasSegmentationModule_t1556321346 * __this, String_t* ___segmentationParameterFile0, bool ___applyDefaultSetupOnFailure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::setup()
extern "C"  void TransientAreasSegmentationModule_setup_m1032664087 (TransientAreasSegmentationModule_t1556321346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::write(System.String)
extern "C"  void TransientAreasSegmentationModule_write_m3117497001 (TransientAreasSegmentationModule_t1556321346 * __this, String_t* ___fs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_getSize_10(System.IntPtr,System.Double[])
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_getSize_10_m2627608677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_printSetup_10(System.IntPtr)
extern "C"  IntPtr_t TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_printSetup_10_m1484992123 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_clearAllBuffers_10(System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_clearAllBuffers_10_m3735318995 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_getSegmentationPicture_10(System.IntPtr,System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_getSegmentationPicture_10_m3324839114 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___transientAreas_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_run_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_run_10_m3028069450 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___inputToSegment_nativeObj1, int32_t ___channelIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_run_11(System.IntPtr,System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_run_11_m1440742732 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___inputToSegment_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_setup_10(System.IntPtr,System.String,System.Boolean)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_setup_10_m1663172432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___segmentationParameterFile1, bool ___applyDefaultSetupOnFailure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_setup_11(System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_setup_11_m3576868848 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_write_10(System.IntPtr,System.String)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_write_10_m1173659119 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___fs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.TransientAreasSegmentationModule::bioinspired_TransientAreasSegmentationModule_delete(System.IntPtr)
extern "C"  void TransientAreasSegmentationModule_bioinspired_TransientAreasSegmentationModule_delete_m2276619783 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
