#pragma once
#include "children.h"
#include "adult.h"

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void ShowVectorElements(const std::vector<Book>& b)
{
	for (auto x : b)
	{
		x.Display();
	}
}

void FreeMemory(std::vector<Person*> p)
{
	for (auto x : p)
	{
		delete x;
	}
}