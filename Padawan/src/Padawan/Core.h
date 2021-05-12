#pragma once

#ifdef PDW_PLATFORM_WINDOWS
    #ifdef PDW_BUILD_DLL
        #define PADAWAN_API __declspec(dllexport)
    #else
        #define PADAWAN_API __declspec(dllimport)
    #endif
#else
    #error Padawn only supports Windows!
#endif