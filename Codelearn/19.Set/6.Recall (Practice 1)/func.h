#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>

int GetRandInt(int minimum = 0, int maximum = 100)
{
	return rand() % (maximum + 1 - minimum) + minimum;
}

struct cmp
{
	bool operator()(int l, int r) const
	{
		return l > r;
	}
};