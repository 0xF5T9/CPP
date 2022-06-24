#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <vector>

namespace c_stack {

	using std::string;
	using std::stack;
	using std::to_string;

	/*
	* Convert integer to binary formula:
	* 
	* To convert integer to binary, start with the integer in question and divide it by 2 keeping notice of the quotient and the remainder.
	* Continue dividing the quotient by 2 until you get a quotient of zero. 
	* Then just write out the remainders in the reverse order (<- this is where stack come in handy since its LIFO).
	*/

	string to_binary(int i)
	{
		string ret = "";
		stack<char> sc;
		while (i > 0)
		{
			sc.push(i % 2);
			i /= 2;
		}

		while (!sc.empty())
		{
			ret += to_string(sc.top());
			sc.pop();
		}
		return ret;
	}

	string to_binary(string s)
	{
		/*
		* string are basically chars, and chars are integers,
		* looping through and process each char in the string
		*/
		string ret = "";
		stack<char> sc;
		int loop_count = 1; // To count & check if the loop is the final loop

		for (auto x : s)
		{
			while (x > 0)
			{
				sc.push(x % 2);
				x /= 2;
			}

			while (!sc.empty())
			{
				ret += to_string(sc.top());
				sc.pop();
			}
			if (loop_count != s.size()) ret += " "; // If this loop is not the last one, adding space " " to the result string
			loop_count++;
		}

		return ret;
	}

	std::string reverse_binary(std::string binary)
	{
		/*
		* Looping through every chars of the given binary string
		* if space ' ' is found, load the 'temp' string to vector 'vs' and reset 'temp' (Each element in 'vs' represents a char)
		*/
		std::vector<std::string> vs;
		std::string temp = "";
		int count_loop = 0; // To count & check if the loop is the final loop
		for (auto x : binary)
		{
			count_loop++;
			if (x == 32) // Space found!
			{
				vs.push_back(temp); // Load temp string to vector
				temp = ""; // Reset temp
				continue; // Continue to the next loop
			}
			temp += x;
			if (count_loop == binary.length()) vs.push_back(temp); // Load the last temp string to vector
		}

		/*
		* Start reversing binaries to chars
		*/
		std::string ret = "";
		for (std::vector<std::string>::iterator it = vs.begin(); it != vs.end(); it++)
		{
			// Reverse the binary and append to result variable 'ret'
			ret += (char)std::stoi(*it, 0, 2); // Reversing binary to char(integer) using STL: stoi(*char array*, 0, 2);
		}
		return ret;
	}

}