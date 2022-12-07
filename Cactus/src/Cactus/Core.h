#pragma once

#ifdef _WIN64
	#ifdef CS_BUILD_DLL
		#define CACTUS_API __declspec(dllexport)
	#else
		#define CACTUS_API __declspec(dllimport)
	#endif
#else
	#error Windows support only
#endif

