// CImgClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  
#include "CImgdll.h"   
#include "CImg.h"

using namespace std;
using namespace cimg_library;

int main(int argc, char* argv[])
{
	char* str1 = argv[1];  // "C:\\xampp\\htdocs\\drupal751\\sites\\default\\files\\logo.jpg";  // 

	CImg<unsigned char> image(str1);
	cout << "Width=" <<
		image.width() << endl;
	cout << "Height=" <<
		image.height() << endl; 

    return 0;
}

