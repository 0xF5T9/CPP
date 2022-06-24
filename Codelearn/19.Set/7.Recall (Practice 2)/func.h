#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
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
		if (&x == &vi.back()) std::cout << std::endl;
	}
}

void ShowListElements(const std::list<int>& li, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	for (const auto& x : li)
	{
		std::cout << x;
		if (&x != &li.back()) std::cout << "-";
		if (&x == &li.back()) std::cout << std::endl;
	}
}

void ShowSetElements(const std::set<int>& si, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	std::set<int>::const_reverse_iterator it = si.crbegin();
	for (const auto& x : si)
	{
		std::cout << x;
		if (&x != &*it) std::cout << "-";
		if (&x == &*it) std::cout << std::endl;
	}
}

void InsertVectorElements(std::vector<int>& vi, int value, unsigned int position, bool debug = 0)
{
	if (position == 0 || position > vi.size() + 1)
	{
		if (debug == true) std::cout << "'" << position << "' is a invalid position (Valid range: 1 - " << (int)vi.size() << ")\n"
			<< "No changes has been made to the given vector\n";
		return;
	}

	if (position == vi.size() + 1)
	{
		if (debug == true) std::cout << "Using push_back() instead\n";
		vi.push_back(value);
		return;
	}

	std::vector<int>::iterator it = vi.begin();
	std::advance(it, position - 1);
	vi.insert(it, value);
}

void InsertListElements(std::list<int>& li, int value, unsigned int position, bool debug = 0)
{
	if (position == 0 || position > li.size() + 1)
	{
		if (debug == true) std::cout << "'" << position << "' is a invalid position (Valid range: 1 - " << (int)li.size() << ")\n"
			<< "No changes has been made to the given list\n";
		return;
	}

	if (position == li.size() + 1)
	{
		if (debug == true) std::cout << "Using push_back() instead\n";
		li.push_back(value);
		return;
	}

	if (position == 1)
	{
		if (debug == true) std::cout << "Using push_front() instead\n";
		li.push_front(value);
		return;
	}

	std::list<int>::iterator it = li.begin();
	std::advance(it, position - 1);
	li.insert(it, value);
}

void InsertSetElements(std::set<int>& si, int value)
{
	si.insert(value);
}