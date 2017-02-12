#pragma once  

#ifdef CImgdll_EXPORTS  
#define CImgdll_API __declspec(dllexport)   
#else  
#define CImgdll_API __declspec(dllimport)   
#endif  

namespace CImgdll
{
	// This class is exported from the CImgdll.dll  
	class CImgc
	{
	public:
	
		//    
		static CImgdll_API double get();
	};
}