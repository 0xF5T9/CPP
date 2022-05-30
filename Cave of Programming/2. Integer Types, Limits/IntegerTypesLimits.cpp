/*
*	2.Integer types & Limits, Optimize memory
*/

#include <iostream> //	Input Output Stream - Standard C++ Library
#include <limits> //	Limits - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {

	cout << "Min int value: " << INT_MIN << endl; //	Output: -2147483648
	cout << "Max int value: " << INT_MAX << endl; //	Output 2147483647
	int giatri1 = 1464087618; //	Declare int variable 'giatri1' and set its value 1464087618, Valid because it in limit range: -2147483648 to 2147483647
	cout << giatri1 << " - int" << endl;
	cout << endl;

	cout << "Min long value: " << LONG_MIN << endl; //	Output: -2147483648 | The difference between int and long is that int is 32 bits in width while long is 64 bits in width.
	cout << "Max long value: " << LONG_MAX << endl; //	Output: 2147483647 | The difference between int and long is that int is 32 bits in width while long is 64 bits in width.
	long giatri2 = 1034193884; //	Declare long int variable 'giatri2' and set its value 1034193884, Valid because it in limit range: -2147483648 to -2147483647
	cout << giatri2 << " - long" << endl;
	cout << endl;

	cout << "Min short value: " << SHRT_MIN << endl; //	Output: -32768
	cout << "Max short value: " << SHRT_MAX << endl; //	Output: 32767
	short giatri3 = 6828; //	Declare short int variable 'giatri3' and set its value 6828, Valid because it in limit range: -32768 to 32767
	cout << giatri3 << " - short" << endl;
	cout << endl;

	cout << "Min long long value: " << LLONG_MIN << endl; //	Output: -9223372036854775808
	cout << "Max long long value: " << LLONG_MAX << endl; //	Output: 9223372036854775807
	long long giatri4 = -2162738617924190007; //	Declare long long int variable 'giatri4'  and set its value -2162738617924190007, Valid because it in limit range: -9223372036854775808 to 9223372036854775807
	cout << giatri4 << " - long long" << endl;
	cout << endl;

	cout << "----------------------------------------------" << endl;
	//
	// 1 byte = 8 bits
	//
	cout << "Size of int: " << sizeof(int) << " bytes" << endl; //Output: 4 - int uses 4 bytes - equal 32 bits
	cout << "Size of short: " << sizeof(short) << " bytes" << endl; //Output: 2 - short uses 2 bytes - equal 16 bits
	cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;// Output: 8 - long long uses 8 bytes - equal 64 bits

	cout << "----------------------------------------------" << endl;
	//
	// unsigned mean the variable can only have positive values and not the negative values.
	// aka sacrifice negative values to have a bigger positive values.
	//
	cout << "Max unsigned int value: " << UINT_MAX << endl; //Output: 4294967295
	unsigned int giatri5 = 100; //	Declare unsigned int variable 'giatri5' and set its value 100, Valid because it in limit range: 0 to 4294967295
	cout << giatri5 << " - unsigned int" << endl;
	//	The same can be applied to others like: short, long, long long..
	cout << endl;
	system("pause");
	return 0;
}

/*
* Statements used:
* cout | iostream
* INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, SHRT_MIN, SHRT_MAX, LLONG_MIN, LLONG_MAX | limits
* sizeof() | limits
*/