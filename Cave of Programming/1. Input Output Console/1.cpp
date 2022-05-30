/*
*	1.Input Output Console
*	Create a variable and set its value via Console
*/


#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	string text1; //	Declare string variable 'text1'
	
	cout << "Hay nhap gia tri cho text1: "; //	Output text on console
	cin >> text1; //	Get value for 'text' variable via console
	cout << "\n"; //	\n is an escape character for strings that is replaced with the new line
	cout << "Ban da nhap: " << text1; //	Output text & variable value to console
	return 0;
}

/*
* Statements used:
* string <variable name> | iostream
* cout | iostream
* cin | iostream
*/