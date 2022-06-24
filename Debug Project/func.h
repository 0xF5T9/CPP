#pragma once
#include <iostream>
#include <stack>

namespace c_stack
{
	void reverse_string(std::string& str)
	{
		std::string ret = "";
		std::stack<char> st;
		for (auto x : str)
		{
			st.push(x);
		}

		while (!st.empty())
		{
			ret += st.top();
			st.pop();
		}
		str = ret;
	}
}