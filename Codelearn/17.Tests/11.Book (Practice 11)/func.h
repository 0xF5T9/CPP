#pragma once
#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Book (Practice 11)\children.h"
#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Book (Practice 11)\adult.h"

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void ShowVectorElements(const std::vector<Person*>& p, std::string extra = "", bool extracout = 0)
{
	if (extra != "") std::cout << extra << "\n";
	for (auto x : p)
	{
		x->Display();
		if (x->getName() != p.back()->getName()) std::cout << "--\n";
	}
	if (extracout == 1) std::cout << std::endl;
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