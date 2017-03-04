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

// NgFile
struct NgFile_t2478064049;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void NgFile::.ctor()
extern "C"  void NgFile__ctor_m1209230444 (NgFile_t2478064049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::PathSeparatorNormalize(System.String)
extern "C"  String_t* NgFile_PathSeparatorNormalize_m3254274156 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::CombinePath(System.String,System.String)
extern "C"  String_t* NgFile_CombinePath_m2006815245 (Il2CppObject * __this /* static, unused */, String_t* ___path10, String_t* ___path21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::CombinePath(System.String,System.String,System.String)
extern "C"  String_t* NgFile_CombinePath_m3411609227 (Il2CppObject * __this /* static, unused */, String_t* ___path10, String_t* ___path21, String_t* ___path32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::GetSplit(System.String,System.Int32)
extern "C"  String_t* NgFile_GetSplit_m2173281706 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___nIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::GetFilename(System.String)
extern "C"  String_t* NgFile_GetFilename_m1708756164 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::GetFilenameExt(System.String)
extern "C"  String_t* NgFile_GetFilenameExt_m1437433673 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::GetFileExt(System.String)
extern "C"  String_t* NgFile_GetFileExt_m2375118760 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::TrimFilenameExt(System.String)
extern "C"  String_t* NgFile_TrimFilenameExt_m440219305 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::TrimFileExt(System.String)
extern "C"  String_t* NgFile_TrimFileExt_m1981924860 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::TrimLastFolder(System.String)
extern "C"  String_t* NgFile_TrimLastFolder_m522553869 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgFile::GetLastFolder(System.String)
extern "C"  String_t* NgFile_GetLastFolder_m2094949501 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NgFile::CompareExtName(System.String,System.String,System.Boolean)
extern "C"  bool NgFile_CompareExtName_m319083784 (Il2CppObject * __this /* static, unused */, String_t* ___srcPath0, String_t* ___tarLowerExt1, bool ___bCheckCase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
