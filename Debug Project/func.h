#pragma once
#include "triangle.h"
#include <iomanip>

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}