#pragma once
#ifdef MD_PLATFORM_WINDOWS
	#ifdef MD_BUILD_DLL
		#define MACADEMIA_API __declspec(dllexport)
	#else
		#define MACADEMIA_API __declspec(dllimport)
	#endif
#else
	#error Macademia only supports Windows
#endif
