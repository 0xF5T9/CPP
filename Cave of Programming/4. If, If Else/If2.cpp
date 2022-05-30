/*
*  4.If - Example 2
*/

#include <iostream> //	Input Output Stream - Standard C++ Library
#include <Windows.h> //	WinAPI - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	cout << "Initializing";
	Sleep(200);
	cout << ".";
	Sleep(200);
	cout << ".";
	Sleep(200);
	cout << "." << endl;
	system("cls");
	 

	cout << "1. Shutdown the PC in 1 hour" << endl;
	cout << "2. Shutdown the PC in 2 hour" << endl;
	cout << "3. Shutdown the PC in 3 hour" << endl;
	cout << "4. Shutdown the PC in 4 hour" << endl;
	cout << "5. Enter a specific time (In seconds)" << endl;
	cout << "6. Cancel the current shutdown schedule" << endl;
	cout << "7. Exit the program" << endl;
	cout << flush;
	//if (true) cout << endl;
	int oValue;
	cout << "Select option: ";
	cin >> oValue;

	if(oValue == 1) {
		system("shutdown -a");
		system("shutdown -s -t 3600");
		system("cls");
		cout << "The PC will be shutdown in 1 hour." << endl;
		Sleep(1000);
		system("exit");
		return 0;
	}

	if (oValue == 2) {
		system("shutdown -a");
		system("shutdown -s -t 7200");
		system("cls");
		cout << "The PC will be shutdown in 2 hour." << endl;
		Sleep(1000);
		system("exit");
		return 0;
	}

	if (oValue == 3) {
		system("shutdown -a");
		system("shutdown -s -t 10800");
		system("cls");
		cout << "The PC will be shutdown in 3 hour." << endl;
		Sleep(1000);
		system("exit");
		return 0;
	}

	if (oValue == 4) {
		system("shutdown -a");
		system("shutdown -s -t 14400");
		system("cls");
		cout << "The PC will be shutdown in 4 hour." << endl;
		Sleep(1000);
		system("exit");
		return 0;
	}

	if (oValue == 5) {
		system("cls");
		string cValue;
		cout << "Enter specific time in seconds: ";
		cin >> cValue;
		system("shutdown -a");
		system("cls");
		system(("shutdown -s -t " + cValue).c_str());
		system("cls");
		cout << "The PC will be shutdown in " << cValue << " seconds." << endl;
		Sleep(1000);
		system("exit");
		return 0;
	}

	if (oValue == 6) {
		system("shutdown -a");
		system("cls");
		cout << "The shutdown schedule has been canceled." << endl;
		Sleep(1000);
		system("exit");
		return 0;
	}

	if (oValue == 7) {
		system("cls");
		cout << "Exiting the program..." << endl;
		Sleep(1000);
		system("exit");
		return 0;
	}

	if (oValue < 1 || oValue > 7) {
		system("cls");
		cout << "Invalid option." << endl;
		cout << "Exiting the program..." << endl;
		Sleep(1000);
		system("exit");
		return 0;
	}
}

/*
* Statements used:
* string <variable name> | iostream
* cout | iostream
* cin | iostream
* Sleep() | Windows.h
* System() | C++ Basic
* if() | C++ Basic
* 
* system(("shutdown -s -t " + cValue).c_str()); - Cách thêm biến vào system();
*/