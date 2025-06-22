#ifndef POKEPLUS_ENGINE_DEFS_HPP
#define POKEPLUS_ENGINE_DEFS_HPP
#ifdef __GNUC__
    #define PRAGMA(x) _Pragma (#x)
    #define WARNING(x) PRAGMA(warning #x)
    #define MESSAGE(x) PRAGMA(message #x)
#endif
#ifdef _WIN32
    #define WARNING(x) __pragma(message(__PRAGMA_LOC__ ": warning: " #x))
    #define MESSAGE(x) __pragma(message(__PRAGMA_LOC__ ": message : " #x))
#endif
#if defined(_MSC_VER)
    #define EXPORT __declspec(dllexport)
    #define INTERN
    #define IMPORT __declspec(dllimport)
#elif defined(__GNUC__)
    #define EXPORT __attribute__((visibility("default")))
    #define INTERN __attribute__((visibility("hidden")))
    #define IMPORT
#else
    #define EXPORT
    #define INTERN
    #define IMPORT
    PRAGMA_WARNING( Unknown dynamic link import/export semantics.)
#endif
#endif //POKEPLUS_ENGINE_DEFS_HPP
