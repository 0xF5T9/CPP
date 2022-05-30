/*
* 7.While Loop
*/

#include <iostream> //	Input Output Stream - Standard C++ Library
#include <Windows.h> // WinAPI - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	// Similate database
	string dbuser = "truongvi2013"; //
	string dbpwd = "8455112";		//
	string iuser;					// Declare variables
	string ipwd;					//
	int oValue;						//
	/*------------------------------*/

	while (true) {
		system("cls");
		cout << "Welcome to the while loop program, please login to continue" << endl;
		cout << "Enter your username: ";
		cin >> iuser;
		cout << "Enter your password: ";
		cin >> ipwd;
		bool loggedin = (iuser == dbuser && ipwd == dbpwd);
		bool failedlogin = (iuser != dbuser || ipwd != dbpwd);
		

		while (loggedin) {
			system("cls");
			cout << "Logged as " << iuser << "." << endl;
			cout << endl;
			cout << "1. Launch missile to United State" << endl;
			cout << "2. Launch missile to China" << endl;
			cout << "3. Launch missile to Russia" << endl;
			cout << "4. Launch missile to North Korea" << endl;
			cout << "5. Sign out" << endl;
			cout << "6. Exit the program" << endl;
			cout << endl;
			cout << "Select option: ";
			cin >> oValue;

			if (oValue < 1 || oValue > 6) {
				//cout << "Invalid option." << endl;
				cin.clear();				// Sửa lỗi vòng lặp cin khi nhập giá trị sai kiểu biến
				cin.ignore(10000, '\n');	// https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input
			}

			if (oValue == 1) {
				cout << "Lauching missile to United State\t";
				Sleep(750);
				cout << ".";
				Sleep(750);
				cout << ".";
				Sleep(750);
				cout << ". OK" << endl;
				system("pause");
			}

			if (oValue == 2) {
				cout << "Lauching missile to China\t";
				Sleep(750);
				cout << ".";
				Sleep(750);
				cout << ".";
				Sleep(750);
				cout << ". OK" << endl;
				system("pause");
			}

			if (oValue == 3) {
				cout << "Lauching missile to Russia\t";
				Sleep(750);
				cout << ".";
				Sleep(750);
				cout << ".";
				Sleep(750);
				cout << ". OK" << endl;
				system("pause");
			}

			if (oValue == 4) {
				cout << "Lauching missile to North Korea\t";
				Sleep(750);
				cout << ".";
				Sleep(750);
				cout << ".";
				Sleep(750);
				cout << ". OK" << endl;
				system("pause");
			}

			if (oValue == 5) {
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				loggedin = false;
			}

			if (oValue == 6) {
				cout << "Exiting the program\t";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ". OK" << endl;
				system("exit");
				return 0;
			}
		}


		if (failedlogin) {
			cout << endl;
			cout << "This user doesn't exists or the password is incorrect." << endl;
			cout << "Please try again in 3 seconds." << endl;
			Sleep(1000);
			cout << ".";
			Sleep(1000);
			cout << ".";
			Sleep(1000);
			cout << ".";
		}
	}
}

/*
* Statements used:
* string <variable name> | iostream
* cout | iostream
* cin, cin.clear(), cin.ignore() | iostream
* Sleep() | Windows.h
* system() | C++ Basic
* if() | C++ Basic
* while() | C++ Basic
*/