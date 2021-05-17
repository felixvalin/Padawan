#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Padawan {


    class PADAWAN_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

    private: 
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    };

}

// Padawan Logging
#define pdwCoreError(...)   ::Padawan::Log::GetCoreLogger()->error(__VA_ARGS__)
#define pdwCoreWarn(...)    ::Padawan::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define pdwCoreInfo(...)    ::Padawan::Log::GetCoreLogger()->info(__VA_ARGS__)
#define pdwCoreTrace(...)   ::Padawan::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define pdwCoreFatal(...)   ::Padawan::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Logging
#define pdwError(...) ::Padawan::Log::GetClientLogger()->error(__VA_ARGS__)
#define pdwWarn(...) ::Padawan::Log::GetClientLogger()->warn(__VA_ARGS__)
#define pdwInfo(...) ::Padawan::Log::GetClientLogger()->info(__VA_ARGS__)
#define pdwTrace(...) ::Padawan::Log::GetClientLogger()->trace(__VA_ARGS__)
#define pdwFatal(...)   ::Padawan::Log::GetClientLogger()->fatal(__VA_ARGS__)