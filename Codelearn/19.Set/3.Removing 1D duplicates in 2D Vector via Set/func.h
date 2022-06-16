#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\3.Removing 1D duplicates in 2D Vector via Set\person.h"

void ShowVectorElements(const std::vector<std::vector<int> >& vvi, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	for (const auto& x : vvi)
	{
		for (const auto& a : x)
		{
			std::cout << a;
			if (&a != &x.back()) std::cout << "-";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void ShowVectorElements(const std::vector<std::vector<std::string> >& vvs, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	for (const auto& x : vvs)
	{
		for (const auto& a : x)
		{
			std::cout << a;
			if (&a != &x.back()) std::cout << "-";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void ShowVectorElements(const std::vector<std::vector<Person> >& vvp, std::string extra = "")
{
	if (extra != "") std::cout << extra;
	for (const auto& x : vvp)
	{
		for (const auto& a : x)
		{
			a.Say();
		}
	}
	std::cout << std::endl;
}

void RemoveVectorDuplicates(std::vector<std::vector<int> >& vvi)
{
	std::vector<std::vector<int> > ret; // Create a vector to store final results
	std::set<std::vector<int> > stvi;	// Create a set to store results (Duplicates filtered by set)

	for (auto& x : vvi)
	{
		/*
		 * <setname>.count(x) returns a bool
		 * return true if x already existed in <setname>
		 * false if x is not existed in <setname>
		 */
		if (!stvi.count(x)) // Check if 'x' is already existed in 'stvi'
		{
			stvi.insert(x); // If not existed, insert this x element to the set
			ret.push_back(x); // Also insert this x element to 'ret' vector
		}
	}
	vvi = ret; // Paste final results from 'ret' to 'vvi'
}

void RemoveVectorDuplicates(std::vector<std::vector<std::string> >& vvs)
{
	std::vector<std::vector<std::string> > ret; // Create a vector to store final results
	std::set<std::vector<std::string> > stvs;	// Create a set to store results (Duplicates filtered by set)

	for (auto& x : vvs)
	{
		/*
		 * <setname>.count(x) returns a bool
		 * return true if x already existed in <setname>
		 * false if x is not existed in <setname>
		 */
		if (!stvs.count(x)) // Check if 'x' is already existed in 'stvi'
		{
			stvs.insert(x); // If not existed, insert this x element to the set
			ret.push_back(x); // Also insert this x element to 'ret' vector
		}
	}
	vvs = ret; // Paste final results from 'ret' to 'vvi'
}

void RemoveVectorDuplicates(std::vector<std::vector<Person> >& vvp)
{
	std::vector<std::vector<Person> > ret; // Create a vector to store final results
	std::set<std::vector<Person> > stvp;	// Create a set to store results (Duplicates filtered by set)

	for (auto& x : vvp)
	{
		/*
		 * <setname>.count(x) returns a bool
		 * return true if x already existed in <setname>
		 * false if x is not existed in <setname>
		 */
		if (!stvp.count(x)) // Check if 'x' is already existed in 'stvi'
		{
			stvp.insert(x); // If not existed, insert this x element to the set
			ret.push_back(x); // Also insert this x element to 'ret' vector
		}
	}
	vvp = ret; // Paste final results from 'ret' to 'vvi'
}

int GetRandInt(int minimum = 0, int maximum = 100)
{
	return rand() % (maximum + 1 - minimum) + minimum;
}