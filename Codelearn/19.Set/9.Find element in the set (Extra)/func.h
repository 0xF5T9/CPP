#pragma once
#include <iostream>
#include <string>
#include <set>

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

void SetLowerBound(const std::set<int>& si, int search)
{
    std::set<int>::iterator it = si.lower_bound(search);
    if (it != si.end())
    {
        std::cout << "(Lower Bound) Target found: " << *it << "\n";
    }
    else 
    {
        std::cout << "(Lower Bound) Nothing found.\n";
    }
}

void SetUpperBound(const std::set<int>& si, int search)
{
    std::set<int>::iterator it = si.upper_bound(search);
    if (it != si.end())
    {
        std::cout << "(Upper Bound) Target found: " << *it << "\n";
    }
    else 
    {
        std::cout << "(Upper Bound) Nothing found.\n";
    }
}