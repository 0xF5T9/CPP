/*
*	1.Input Output Console
*	Create a variable and set its value
*/

#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	string text1 = "Hello "; //	Declare string variable 'text1' and set its value
	string text2; //	Declare string variable 'text2'
	text2 = "world"; //	Set value for string variable 'text2'


	/*	Output text & variable to console	*/
	cout << "Hello world [1]";
	cout << "Hello " << "world [2]";
	cout << endl;
	cout << "Hello\n";
	cout << "World [3]";
	cout << "\n";
	cout << "Hello " << endl;
	cout << "world [4]\n";
	cout << text1;
	cout << text2 << "[5]";
	cout << endl;
	cout << text1 << text2 << "[6]";
	return 0;
}

/*
* Statements used:
* string <variable name> | iostream
* cout | iostream
* cin | iostream
*/