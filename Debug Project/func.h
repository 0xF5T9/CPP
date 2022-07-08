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

std::string DecodeString(std::string str) 
{
	std::string result = "";
	std::stack<int> st;
	std::stack<char> sc;
	std::string::iterator sit = str.begin();
	std::string temp_str1 = "";
	int size = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (*(sit + i) == '[') 
		{
			//-------[Get Size]-------//
			std::string temp_str = "";
			for (int x = 0; x < i; x++)
			{
				temp_str += str[x];
			}
			size = std::stoi(temp_str);
			//-------[Get Size]-------//


			//-------[Get Char]-------//
			for (int z = i + 1; z < str.length(); z++)
			{
				//if (*(sit + z) < '0' && *(sit + z) != '[' && *(sit + z) != ']' || *(sit + z) > '9' && *(sit + z) != '[' && *(sit + z) != ']') sc.push(*(sit + z));

				if (*(sit + z) == '[')
				{
					std::string::iterator m_it = (sit + z) - 1;

					std::string m_size = "";
					while (true)
					{
						if (*m_it < '0' || *m_it > '9') break;
						m_size += *m_it;
						m_it--;
					}
					std::reverse(m_size.begin(), m_size.end());

					std::string m_str = "";
					m_it = (sit + z + 1);
					while (true)
					{
						if (*m_it == ']') break;
						m_str += *m_it;
						m_it++;
					}

					std::string m_result = "";
					for (int l = 0; l < std::stoi(m_size); l++)
					{
						m_result += m_str;
					}
					result += m_result;
				}

				if (*(sit + z) == ']')
				{
					for (int x = z - 1; ; x--)
					{
						if (str[x] == '[') break;
						sc.push(str[x]);
					}

					while (!sc.empty())
					{
						temp_str1 += sc.top();
						sc.pop();
					}

					for (int a = 0; a < size; a++)
					{
						result += temp_str1;
					}
					size = 0;
					temp_str1 = "";
				}
			}
			//-------[Get Char]-------//
		}
	}

	return result;
}

/*
std::string DecodeString(std::string str)
{
	std::string result = "";
	std::stack<int> st;
	std::stack<char> sc;
	std::string::iterator sit = str.begin();
	int size = 0;
	std::string t_str = "";

	for (int i = 0; i < str.length(); i++)
	{
		std::string b_size = "";

		if (*(sit + i) == '[')
		{
			for (int x = 0; x < i; x++)
			{
				std::string temp_str = "";
				temp_str += str[x];
				st.push(std::stoi(temp_str));
			}

			while (!st.empty())
			{
				b_size += std::to_string(st.top());
				st.pop();
			}
			std::reverse(b_size.begin(), b_size.end());
			size = std::stoi(b_size);
		}

		/*if (*(sit + i) == '[')
		{
			std::string::iterator m_it = (sit + i) - 1;
			std::string m_size = "";
			while (true)
			{
				if (*m_it < '0' || *m_it > '9') break;
				m_size += *m_it;
				m_it--;
			}
			std::reverse(m_size.begin(), m_size.end());
			std::cout << m_size;
			exit(0);
		}

		if (*(sit + i) == ']')
		{
			for (int x = i - 1; ; x--)
			{
				if (str[x] == '[') break;
				sc.push(str[x]);
			}

			while (!sc.empty())
			{
				t_str += sc.top();
				sc.pop();
			}

			for (int a = 0; a < size; a++)
			{
				result += t_str;
			}
			size = 0;
			t_str = "";
		}
	}

	return result;
}*/