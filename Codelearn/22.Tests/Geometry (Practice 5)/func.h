#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Geometry (Practice 5)\triangle.h"
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Geometry (Practice 5)\rectangle.h"
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Geometry (Practice 5)\circle.h"
#include <iomanip>

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void FreeMemory(Geometry* Geometry_POINTER, bool IsArray = 0)
{
	if (IsArray == true) delete[] Geometry_POINTER;
	else if (IsArray == false) delete Geometry_POINTER;
}