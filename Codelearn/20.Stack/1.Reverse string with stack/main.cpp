/*
 *  20.Stack | 1.Reverse string with stack
 */

/*
* Libraries:
- <iostream>
- <stack> | 'stack' datatype
*/

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Stack\1.Reverse string with stack\func.h"

using std::string;
using std::cout;
using std::endl;

int main()
{
	system("cls"); // Clear Vscode Terminal

	{
		string sText = "Hello world!";
		cout << sText << endl;
		c_stack::reverse_string(sText);
		cout << sText << endl;
	}

	return 0;
}