#pragma once

#if defined(_MSC_VER)
#define EXPORT __declspec(dllexport)
#define IMPORT __declspec(dllimport)
#elif defined(__GNUC__)
#define EXPORT __attribute__((visibility("default")))
#define IMPORT
#else
#define EXPORT
#define IMPORT
#pragma warning Unknown dynamic link import/export semantics.
#endif
#if BUILD_DLL
#define FUSION_API EXPORT
#else
#define FUSION_API IMPORT
#endif

#ifdef PLA
//hallo
#endif

namespace LibraryTemplate{
    //void FUSION_API hello();
}