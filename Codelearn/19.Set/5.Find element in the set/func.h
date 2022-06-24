#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\5.Find element in the set\person.h"

int GetRandInt(int minimum = 0, int maximum = 100)
{
	return rand() % (maximum + 1 - minimum) + minimum;
}

void ShowSetElements(const std::set<int>& sti, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	std::set<int>::iterator it = sti.begin();
	std::advance(it, sti.size() - 1);

	for (const auto& x : sti)
	{
		std::cout << x;
		if (&x != &*it) std::cout << "-";
	}
	std::cout << " (Size: " << (int)sti.size() << ")" << std::endl;
}

void ShowSetElements(const std::set<std::string>& sts, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	std::set<std::string>::iterator it = sts.begin();
	std::advance(it, sts.size() - 1);

	for (const auto& x : sts)
	{
		std::cout << x;
		if (&x != &*it) std::cout << "-";
	}
	std::cout << " (Size: " << (int)sts.size() << ")" << std::endl;
}

void ShowSetElements(const std::set<Person>& stp, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	//std::set<Person>::iterator it = stp.begin();
	//std::advance(it, stp.size() - 1);

	for (const auto& x : stp)
	{
		x.Say();
		//if (&x != &*it) std::cout << "-";
	}
	//std::cout << " (Size: " << (int)stp.size() << ")" << std::endl;
}

bool FindSetElement(const std::set<int>& sti, int value)
{
	/*
	* '<setname>.find(x)' return an iterator that point to where x is found,
	* otherwise it will return an iterator point to <setname>.end()
	*/
	std::set<int>::iterator it = sti.find(value);

	if (it == sti.end()) // Nothing found
	{
		return false;
	}
	else
	{
		return true; // Found
	}
}

bool FindSetElement(const std::set<std::string>& sts, std::string value)
{
	std::set<std::string>::iterator it = sts.find(value);

	if (it == sts.end())
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool FindSetElement(const std::set<Person>& stp, std::string value_name, int value_age)
{
	std::set<Person>::iterator it = stp.find(Person(value_name, value_age)); // Remarkable (Check 'person.h')

	if (it == stp.end())
	{
		return false;
	}
	else
	{
		return true;
	}
}