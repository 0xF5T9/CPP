/*
 *	20.Stack | 2.Convert integers, string to binary and vice-versa
 */

/*
* Libaries: 
- <iostream>
- <string> | to_string()
- <stack> | 'stack' datatype
- <vector> | 'vector' datatype
*/

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Stack\2.Convert integers, string to binary and vice-versa\func.h"

using std::getline;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	system("cls"); // Clear Vscode Terminal
	const int testcase = 4; // Select test case

	switch (testcase)
	{
		case 1:
		{
			{
				// Converting integers to binary
				cout << c_stack::to_binary(13) << endl;
			}
			break;
		}

		case 2:
		{
			{
				// Converting string to binary
				cout << c_stack::to_binary("~!@#$%^&*, truyenhaunhan@gmail.com, C++") << endl;
			}
			break;
		}

		case 3:
		{
			{
				// Reverse binary
				string sBinary = "1111110 100001 1000000 100011 100100 100101 1011110 100110 101010 101100 100000 1110100 1110010 1110101 1111001 1100101 1101110 1101000 1100001 1110101 1101110 1101000 1100001 1101110 1000000 1100111 1101101 1100001 1101001 1101100 101110 1100011 1101111 1101101 101100 100000 1000011 101011 101011";
				cout << c_stack::reverse_binary(sBinary) << endl;
			}
			break;
		}

		case 4:
		{
			{
				// Extra tests
				string some_string;

				cout << "Enter string: ";
				getline(cin, some_string);

				// Convert entered string to binaries
				some_string = c_stack::to_binary(some_string);
				cout << "Binaries: " << some_string << endl;

				// Reverse the binaries back to string
				some_string = c_stack::reverse_binary(some_string);
				cout << "Reversed: " << some_string << endl;
			}
			break;
		}

		default:
		{
			break;
		}
	}
	
	return 0;
}