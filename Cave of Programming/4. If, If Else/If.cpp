/*
*  4.If - Example 1
*/
#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

/*
* Simple login program on console
*/


int main() {
	string uid = "truongvi2013";	//	Declare string variable 'uid' | Simulate user database
	string pwd = "8455112";	//	Declare string variable 'pwd' | Simulate user database

	string inputuid; //	Declare string variable 'inputuid'
	string inputpwd; //	Declare string variable 'inputpwd'

	cout << "Enter your ID: ";
	cin >> inputuid; //	Get value to variable 'inputuid' via console
	system("cls");
	cout << "Enter your password: ";
	cin >> inputpwd; //	Get value to variable 'inputpwd' via console
	system("cls");

	if(inputuid == uid && inputpwd == pwd) { //	If ID & Password is match the database
		cout << "Welcome " << inputuid << endl;
		cout << "Login successfully!" << endl;
		system("pause");
		return 0;
	}
	if(inputuid != uid) { //	If ID doesn't match the database
		cout << "This ID doesn't exists." << endl;
		system("pause");
		return 0;
	}
	if (inputpwd != pwd) { //	If Password doesn't match the database
		cout << "The password is incorrect." << endl;
		system("pause");
		return 0;
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