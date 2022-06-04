#pragma once
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
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