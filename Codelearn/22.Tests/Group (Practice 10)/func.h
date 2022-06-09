#pragma once
#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Group (Practice 10)\group.h"

void ClearCinBuffer()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int GetRandInt(int maximum = 80, int minimum = 25)
{
	int ret = rand() % (maximum + 1 - minimum) + minimum;
	return ret;
}

void ShowVectorElements(Group& g, std::string extra = "", bool extraendl = 0)
{
	if (extra != "") std::cout << extra << "\n";
	g.display();
	if (extraendl == 1) std::cout << std::endl;
}

void ShowVectorElements(std::vector<People>& p, std::string extra = "")
{
	if (extra != "") std::cout << extra << "\n";
	std::cout << "============================\n";
	for (auto x : p)
	{
		x.display();
		if (x.getId() != p.back().getId()) std::cout << "--\n";
	}
	std::cout << "============================" << std::endl;
}