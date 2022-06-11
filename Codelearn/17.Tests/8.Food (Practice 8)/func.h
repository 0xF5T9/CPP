#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Food (Practice 8)\cannedfood.h"
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Food (Practice 8)\noncfood.h"

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int GetRandInt(int minium = 0, int maxium = 100)
{
	int ret = rand() % (maxium + 1 - minium) + minium;
	return ret;
}

double GetRandDouble(int minium = 0, int maxium = 100)
{
	int f = rand() % (maxium + 1 - minium) + minium;
	int l = rand() % (99 + 1 - 0) + 0;
	std::string s = std::to_string(f) + "." + std::to_string(l);
	double ret = std::stod(s);
	return ret;
}

void ShowVectorElements(const std::vector<CannedFood>& cf, std::string extra = "", bool border = 0)
{
	if (border == 1) std::cout << "--------------------------\n";
	if (extra != "") std::cout << extra << "\n";
	for (auto x : cf)
	{
		x.DisplayInfo();
	}
	if (border == 1) std::cout << "--------------------------" << std::endl;
}

void ShowVectorElements(const std::vector<NonCFood>& ncf, std::string extra = "", bool border = 0)
{
	if (border == 1) std::cout << "--------------------------\n";
	if (extra != "") std::cout << extra << "\n";
	for (auto x : ncf)
	{
		x.DisplayInfo();
	}
	if (border == 1) std::cout << "--------------------------" << std::endl;
}

void ShowVectorElements(const std::vector<Food*>& fs, std::string extra = "", bool border = 0)
{
	if (border == 1) std::cout << "--------------------------\n";
	if (extra != "") std::cout << extra << "\n";
	for (auto x : fs)
	{
		x->DisplayInfo();
	}
	if (border == 1) std::cout << "--------------------------" << std::endl;
}

void FreeMemory(std::vector<Food*> fs)
{
	for (auto x : fs)
	{
		delete x;
	}
}