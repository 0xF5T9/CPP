#pragma once
#include <iostream>
#include <vector>
#include <stack>

void ShowElements(const std::vector<int>& vi, std::string extra = "")
{
	if (extra != "") std::cout << extra;

	for (const auto& x : vi)
	{
		std::cout << x;
		if (&x != &vi.back()) std::cout << "-";
		if (&x == &vi.back()) std::cout << std::endl;
	}
}

void PopMin(std::vector<int>& vi)
{
	std::vector<int> ret;
	std::stack<int> st;
	st.push(vi.front());
	for (const auto& x : vi)
	{
		if (st.top() <= x) st.push(st.top());
		else st.push(x);
	}

	while (!st.empty())
	{
		ret.push_back(st.top());
		st.pop();
	}
	vi = ret;
}