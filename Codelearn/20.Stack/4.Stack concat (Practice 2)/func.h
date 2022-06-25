#pragma once
#include <iostream>
#include <vector>
#include <stack>

using std::stack;

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

std::vector<int> stackConcat(std::vector<int> a, std::vector<int> b)
{
    stack<int> st1, st2;
    std::vector<int> v;
    for (int i = 0; i < a.size(); i++) {
        st1.push(a[i]);
    }
    for (int i = 0; i < b.size(); i++) {
        st2.push(b[i]);
    }
    stack<int> st3;

    while (st1.empty() == 0 && st2.empty() == 0)
    {
        if (st1.top() >= st2.top())
        {
            if (!st1.empty()) st3.push(st1.top());
            if (!st1.empty()) st1.pop();
        }
        else
        {
            if (!st2.empty()) st3.push(st2.top());
            if (!st2.empty()) st2.pop();
        }
    }

    if (!st1.empty()) { st3.push(st1.top()), st1.pop(); }
    if (!st2.empty()) { st3.push(st2.top()), st2.pop(); }

    while (!st3.empty()) {
        v.push_back(st3.top());
        st3.pop();
    }
    return v;
}