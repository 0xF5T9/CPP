/*
* 8.Do While Loop
*/

#include <iostream> //	Input Output Stream - Standard C++ Library
#include <Windows.h> // WinAPI - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {

	const string dbkey = "truongvi2013"; //	const - khai báo rằng biến này chỉ có thể đọc và không thể thay đổi giá trị (Read-only)
	string input;
	bool logfail = (input != dbkey);

	do {	// Unlike 'while loop', 'do while loop' will execute its code at least once before check for condition
		cout << "Enter key: ";
		cin >> input;
		if (input != dbkey) {
			cout << "The key is invalid." << endl;
		}
		else {
			logfail = false;
		}
	} while(logfail); // Repeat until the condition is false

	cout << "Success" << endl;
}

/*
* Statements used:
* string <variable name> | iostream
* cin | iostream
* if() | C++ Basic
* do while() | C++ Basic
*/