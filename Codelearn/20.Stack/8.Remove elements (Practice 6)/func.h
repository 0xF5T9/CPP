#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

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

std::vector<int> RemoveElements(std::vector<int> arr, int k, bool debug = 0)
{
    /*
    * The task is to removing first 'k' elements
    * Using while loop (loop till k = 0, minus k by 1 each loop)
    */
	while (k != 0)
	{
		std::vector<int>::iterator it = arr.begin(); // Renew iterator to first element each loop
		if (*it < *(it + 1)) // Delete arr[0] via iterator if arr[0] < arr[1]
        { 
            if (debug == 1) std::cout << "Removing " << *it << std::endl;
            arr.erase(it);
            k--; // Minus k by 1
        }
		else // Else (arr[1] < arr[0]) delete arr[1] via iterator
        { 
            if (debug == 1) std::cout << "Removing " << *(it + 1) << std::endl; 
            arr.erase(it + 1);
            k--; // Minus k by 1
        }
	}

	return arr; // Return results
}

std::vector<int> RemoveElements_S(std::vector<int> arr, int k, bool debug = 0)
{
    if (debug == true) std::cout << "[Debug] -=[------------------------]=-\n";
    std::stack<int> st;
    std::vector<int> ret;
    if (debug == true)
    {
        std::cout << "stack<int> 'st' initialized\n";
        std::cout << "vector<int> 'ret' initialized\n";
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (debug == true)
        {
            std::cout << "* For loop(i) " << i << ":\n";
            std::cout << "- Current primary (element of 'arr'): " << arr[i] << "\n";
        }
        if (st.empty() || arr[i] <= st.top())
        {
            if (debug == true)
            {
                if (st.empty()) std::cout << "- Stack is empty, adding current-arr '" << arr[i] << "' to the stack\n";
                else std::cout << "- Current-arr is less than or equals to stack top: '" << arr[i] << "' <= '" << st.top() << "'\n, adding current-arr '" << arr[i] << "' to the stack\n";
            }
            st.push(arr[i]);
        }
        else
        {
            while (!st.empty() && st.top() < arr[i] && k > 0)
            {
                if (debug == 1)
                {
                    std::cout << "- Stack top is less than current-arr and k higher than 0 (" << k << "): '" << st.top() << "' < '" << arr[i] << "'\n";
                    std::cout << "- Popping stack top '" << st.top() << "' out of the stack\n";
                    std::cout << "- Minus k by 1, new k: " << k - 1 << "\n";
                }
                st.pop();
                k--;
            }
        }
        if (k == 0)
        {
            if (debug == 1) std::cout << "- k is now equals to 0, loading all stack elements into return vector 'ret'\n";
            while (!st.empty())
            {
                ret.push_back(st.top());
                st.pop();
            }
            if (debug == 1) std::cout << "- reversed the return vector\n";
            reverse(ret.begin(), ret.end());
            for (int j = i; j < arr.size(); j++)
            {
                if (debug == 1)
                {
                    std::cout << "* For loop(j = i) " << j << ":\n";
                    std::cout << "- Current primary (element of 'arr'): " << arr[j] << "\n";
                    std::cout << "- Adding current-arr(j) '" << arr[j] << "' to the stack\n";
                }
                ret.push_back(arr[j]);
            }
            break;
        }
        if (st.empty())
        {
            if (debug == 1) std::cout << "- Stack is empty, adding current-arr '" << arr[i] << "' to the stack\n";
            st.push(arr[i]);
        }  
    }
    if (debug == true) std::cout << "[Debug] -=[------------------------]=-\n";
    return ret; // Return result
}