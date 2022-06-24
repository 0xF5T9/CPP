#pragma once
#include <iostream>
#include <stack>

namespace c_stack
{
    using std::string;
    using std::stack;

	void reverse_string(string& str)
	{
		string ret = "";
		stack<char> st;
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