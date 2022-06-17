#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>

int GetRandInt(int minimum = 0, int maximum = 100)
{
	return rand() % (maximum + 1 - minimum) + minimum;
}

void ShowVectorElements(const std::vector<int>& vi, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	for (const auto& x : vi)
	{
		std::cout << x;
		if (&x != &vi.back()) std::cout << "-";
	}
	std::cout << " (Size: " << (int)vi.size() << ")" << std::endl;
}

std::string GetSmallestElement(const std::vector<int>& vi, int th = 1)
{
	if (th > (int)vi.size()) return "<Doesn't exists>"; // If 'th' is bigger than the size of given vector
	if (vi.empty()) return "The given vector is empty"; // If the given vector is empty

	// Create a int set and initialize with given vector's element values
	std::set<int> sti(vi.begin(), vi.end());
	// Create a set iterator point to the first element of the set
	std::set<int>::iterator it = sti.begin();

	if (th == 1 || (int)sti.size() == 1)
	{
		return std::to_string(*it);
	}

	else if (th >= 2)
	{
		std::advance(it, th - 1);
		return std::to_string(*it);
	}
}