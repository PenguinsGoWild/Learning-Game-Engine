#pragma once

#ifdef GM_PLATFORM_WINDOWS
    #ifdef GM_BUILD_DLL
        #define GERONIMO_API __declspec(dllexport)
    #else
        #define GERONIMO_API __declspec(dllimport)
    #endif

#else
    #error Geronimo only supports Windows!
#endif
