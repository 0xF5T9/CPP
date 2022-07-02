#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stack>

std::string encodeString_Self(const std::string& str) // Self approach
{
	std::stack<char> st; // Create stack to stores char of previous for() loop
	std::string ret = ""; // Create ret string to stores result
	char temp_char = str[0]; // Create temp char variable to stores char under processing
	int count = 0;	// Count chars
	

	for (int i = 0; i < str.length(); i++) // Loop through every char in given string 'str'
	{
		/*
		* ↓ If the last char isn't matches the one in previous char on the last for() loop
		* (which stored in top of stack 'st')
		* 
		* Without this first if() loop, the last 2 results will never be added
		* because new char never be found so the adding result process never happended
		*/
		if (i == str.length() - 1 && st.top() != str[i]) // 1st if() - trigger on last loop only and last stack top isn't match the last char
		{
			ret += (char)temp_char;
			ret += std::to_string(count);
			ret += str[i];
			ret += "1";
			break;
		}

		/*
		* ↓ When new char is found (or on the last loop), adding results to return string and reset counter
		*/
		if (!st.empty() && st.top() != str[i] || i == str.length() - 1) // 2nd if() - trigger if last stack top isn't match the last char (or on the last loop)
		{
			if (i == str.length() - 1) count++; // +1 to counter if on last loop to correct the counter
			ret += (char)temp_char;
			ret += std::to_string(count);
			count = 0;
			temp_char = str[i];
		}
		count++;
		st.push(str[i]);
	}
	return ret;
}

std::string encodeString_CL(std::string str)
{
	str = str + '@';
	std::stack<char> st;
	std::string ret = "";
	for (int i = 0; i < str.length(); i++) {
		if (st.empty() || st.top() == str[i]) {
			st.push(str[i]);
		}
		else {
			int count = 0;
			ret = ret + st.top();
			while (!st.empty()) {
				count++;
				st.pop();
			}
			ret = ret + std::to_string(count);
			st.push(str[i]);
			count = 1;
		}
	}
	return ret;
}