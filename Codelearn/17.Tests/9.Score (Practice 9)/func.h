#pragma once
#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Score (Practice 9)\naturalscore.h"
#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Score (Practice 9)\socialscore.h"
#include <iomanip>

// Global Function Definitions
void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void ShowVectorElements(std::vector<Score*> s, std::string extra = "", bool border = 0)
{
	if (border == 1) std::cout << "-----------------------\n";
	if (extra != "") std::cout << extra << "\n";
	for (auto x : s)
	{
		x->DisplayInfo();
		if (x != s.back()) std::cout << "--\n";
	}
	if (border == 1) std::cout << "-----------------------" << std::endl;
}

int GetRandInt(int maximum = 100, int minimum = 0)
{
	int ret = rand() % (maximum + 1 - minimum) + minimum;
	return ret;
}

double GetRandDouble(int maximum = 10, int minimum = 0)
{
	std::string f = std::to_string(GetRandInt(maximum, minimum));
	std::string l = std::to_string(GetRandInt(9, 0));
	std::string fl = f + "." + l;
	double ret = std::stod(fl);
	if (ret > (double)maximum) ret = (double)maximum;
	return ret;
}

void FreeMemory(std::vector<Score*> s)
{
	for (auto x : s)
	{
		delete x;
	}
}