#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"



namespace Cactus {

	class CACTUS_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;


	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	};

}


// Core (Cactus) log macros

#define CS_CORE_TRACE(...)   ::Cactus::Log::GetCoreLogger() -> trace(__VA_ARGS__)
#define CS_CORE_INFO(...)    ::Cactus::Log::GetCoreLogger() -> info(__VA_ARGS__)
#define CS_CORE_WARN(...)    ::Cactus::Log::GetCoreLogger() -> warn(__VA_ARGS__)
#define CS_CORE_ERROR(...)   ::Cactus::Log::GetCoreLogger() -> error(__VA_ARGS__)
//#define CS_CORE_FATAL(...)   ::Cactus::Log::GetCoreLogger() -> fatal(__VA_ARGS__)

// Client log macros
#define CS_TRACE(...)		 ::Cactus::Log::GetCoreLogger() -> trace(__VA_ARGS__)
#define CS_INFO(...)		 ::Cactus::Log::GetCoreLogger() -> info(__VA_ARGS__)
#define CS_WARN(...)		 ::Cactus::Log::GetCoreLogger() -> warn(__VA_ARGS__)
#define CS_ERROR(...)		 ::Cactus::Log::GetCoreLogger() -> error(__VA_ARGS__)
//#define CS_FATAL(...)		 ::Cactus::Log::GetCoreLogger() -> fatal(__VA_ARGS__)
