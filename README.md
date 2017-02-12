# CImg DLL and its Client Part using C ++
This includs two projects: CImgdll and CImgClient. CImgdll makes CImg library a C++ DLL. CImgClient calls the function of CImgdll.

They are built on Microsoft Visual Studio 2015.

You can download Visual Studio here:
https://www.visualstudio.com/downloads/

I used Visual Studio Community to build these projects. This version is free to download.

Requirements:

In order to make it work properly, your computer needs to have ImageMagick installed. You can download ImageMagick at the link as below since CImg is based on ImageMagick. 
https://www.imagemagick.org/script/download.php. Otherwise it will show errors like failed format, gm is not an internal command etc.  

How to use them:

1, copy CImgdll.dll and CImgClient.exe in the working folder, You can download them at Debug folder.
2, use command line: CImgClient filepath//filename. e.g.: one windows,  CImgClient C:\\folder\\image.jpg. It will show the height and width of the image on the screen. 

Btw, you can put more functions from CImg in CImgClient. Here I just put two. 
