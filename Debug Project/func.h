#pragma once
#include "car.h"
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