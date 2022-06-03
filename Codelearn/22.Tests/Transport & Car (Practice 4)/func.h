#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Transport & Car (Practice 4)\car.h"
#include <iomanip>
#include <limits>

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void ShowVectorElements(std::vector<Car> c)
{
	for (auto x : c)
	{
		x.display(1);
	}
}