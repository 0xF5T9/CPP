/*
* 6.C++ Conditions - Learn more about condition in C++
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library
#include <Windows.h>	// WinAPI - Standard C++ Library

/*
* == Equality Test - Bằng nhau
* != Not Equal - Không bằng nhau
* < Less than - Ít hơn
* > Greater than - Nhiều hơn
* <= Less than or equal to - Ít hơn hoặc bằng
* >= Greater than or euqual to - Nhiều hơn hoặc bằng
*/

/*
* && - If And - Nếu Và
* || - If Or - Nếu Hoặc
*/

using namespace std; //	Using namespace 'std' - standard

int main() {
	int eValue1 = 100; //	Modify this value to test
	if (eValue1 == 100) {
		cout << "Equality Test: True" << endl;
	} else {
		cout << "Equality Test: False" << endl;
	}

	int neValue1 = 500; //	Modify this value to test
	if (neValue1 != 499) {
		cout << "Not Equal: True" << endl;
	} else {
		cout << "Not Equal: False" << endl;
	}

	int ltValue1 = 9; //	Modify this value to test
	if (ltValue1 < 10) {
		cout << "Lesser than: True" << endl;
	} else {
		cout << "Lesser than: False" << endl;
	}

	int gtValue1 = 30;
	if (gtValue1 > 20) {
		cout << "Greater than: True" << endl;
	} else {
		cout << "Greater than: False" << endl;
	}

	string iaValue1 = "Username01"; //	Modify this value to test
	string iaValue2 = "MyPass123"; //	Modify this value to test
	if (iaValue1 == "Username01" && iaValue2 == "MyPass123") {
		cout << "If And: True" << endl;
	} else {
		cout << "If And: False" << endl;
	}

	string ioValue = "7711095"; //	Modify this value to test
	if (ioValue == "8455112" || ioValue == "7711095") {
		cout << "If Or: True" << endl;
	} else {
		cout << "If Or: False" << endl;
	}

	/*
	* Bool Condition
	*/

	int Value1 = 10; //	Modify this value to test
	string Value2 = "test"; //	Modify this value to test

	//	3 ways to delcare, all have the same effect.
	bool condition1 = Value1 == 10 && Value2 == "test";
	bool condition2 = (Value1 == 10) && (Value2 == "test"); 
	bool condition3 = (Value1 == 10 && Value2 == "test");
	if (condition3) {
		cout << "Bool: True" << endl;
	} else {
		cout << "Bool: False" << endl;
	}

	/*
	* Example 1 - Login with Bool
	*/
	string taikhoandatabase = "truongvi2013"; //	Simulate user database
	string matkhaudatabase = "8455112"; //	Simulate user database
	string taikhoan;
	string matkhau;
	cout << "Enter ID: ";
	cin >> taikhoan;
	cout << "Enter Password: ";
	cin >> matkhau;
	cout << endl;
	bool dangnhapthanhcong = (taikhoan == taikhoandatabase && matkhau == matkhaudatabase);
	if (dangnhapthanhcong) {
		cout << "Login successfully." << endl;
	}
	else {
		cout << "Login failed." << endl;
	}
	return 0;
}

/*
* Statements used:
* string <variable name> | iostream
* cout | iostream
* cin | iostream
* system() | C++ Basic
* if() | C++ Basic
*/