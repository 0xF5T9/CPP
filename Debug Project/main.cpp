/*
*	Debug Project
*/

#include "func.h"

using std::string;
using std::cout;
using std::endl;

int main()
{
	{
		string sText = "Hello world!";
		cout << sText << endl;
		c_stack::reverse_string(sText);
		cout << sText << endl;
	}

	return 0;
}