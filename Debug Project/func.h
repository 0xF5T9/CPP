#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "person.h"

/*
* struct 'cmp' must be defined before 'void ShowSetElements(const std::set<int, cmp>& sti, std::string extra = "")'
* not even prototype will works..
* otherwise it will be treated as 'incompleted struct' and won't be accepted by set
* Read more: https://stackoverflow.com/questions/10894804/forward-declaration-of-struct
*/
struct cmp
{
	/*
	 *  use 'const' if there is any errors (Compiler issues)
	 * Readmore: https://stackoverflow.com/questions/19816139/expression-having-type-const-comparevptrs-would-lose-some-const-volatile-quali
	 */
	bool operator()(int l, int r) const
	{
		return l > r;
	}
};

void ShowSetElements(const std::set<Person>& stp, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	for (auto x : stp)
	{
		x.Say();
	}
	std::cout << std::endl;
}

void ShowSetElements(const std::set<int>& sti, std::string extra = "")
{
	if (extra != "") std::cout << extra;

	std::set<int>::const_iterator it = sti.begin(); // Create a iterator and point to first element of the given set 'sti'
	std::advance(it, (int)sti.size() - 1);	// Advance the iterator to the last element of the given set 'sti'

	for (const auto& x : sti)
	{
		std::cout << x;
		if (&x != &*it) std::cout << "-"; // Cout '-' if 'x' is not the last element of the given set 'sti'
	}
	std::cout << std::endl;
}

void ShowSetElements(const std::set<int, cmp>& sti, std::string extra = "")
{
	if (extra != "") std::cout << extra;

	std::set<int>::const_iterator it = sti.begin(); // Create a iterator and point to first element of the given set 'sti'
	std::advance(it, (int)sti.size() - 1);	// Advance the iterator to the last element of the given set 'sti'

	for (const auto& x : sti)
	{
		std::cout << x;
		if (&x != &*it) std::cout << "-"; // Cout '-' if 'x' is not the last element of the given set 'sti'
	}
	std::cout << std::endl;
}

int GetRandInt(int minimum = 0, int maximum = 100)
{
	return rand() % (maximum + 1 - minimum) + minimum;
}

/*
* This will cause errors because struct 'cmp' must be defined before 'void ShowSetElements(const std::set<int, cmp>& sti, std::string extra = "")'
* Readmore aboves
struct cmp
{
	bool operator()(int l, int r) const
	{
		return l > r;
	}
};
*
*/