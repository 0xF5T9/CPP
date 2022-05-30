/*
* 12.Switch
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library
#include <Windows.h> //	WinAPI - Standard C++ Library
#include <string>	//	string - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

void menu() {
	cout << "1. Schedule shutdown the PC in 1 hour" << endl;
	cout << "2. Schedule shutdown the PC in 2 hour" << endl;
	cout << "3. Schedule shutdown the PC in 4 hour" << endl;
	cout << "4. Schedule shutdown the PC (Specific)" << endl;
	cout << "5. Cancel current shutdown schedule" << endl;
	cout << "6. Exit the program" << endl;
}

int main() {
	int iOption;
	bool start = true;
	while (start == true) {
		menu();
		cout << endl;
		cout << "Select option: ";
		cin >> iOption;
		switch (iOption) { // Cấu trúc switch
		case 1:
			system("shutdown -a");
			system("cls");
			system("shutdown -s -t 3600");
			cout << "The PC will be shutdown in 1 hours." << endl;
			system("pause");
			system("cls");
			cin.clear();
			cin.ignore(10000, '\n');
			break;
		case 2:
			system("shutdown -a");
			system("cls");
			system("shutdown -s -t 7200");
			cout << "The PC will be shutdown in 2 hours." << endl;
			system("pause");
			system("cls");
			cin.clear();
			cin.ignore(10000, '\n');
			break;
		case 3:
			system("shutdown -a");
			system("cls");
			system("shutdown -s -t 14400");
			cout << "The PC will be shutdown in 4 hours." << endl;
			system("pause");
			system("cls");
			cin.clear();
			cin.ignore(10000, '\n');
			break;
		case 4: { // ← Sử dụng {} tránh gặp lỗi khi khai báo string trong case
			system("shutdown -a");
			system("cls");
			int i, h;
			cout << "Enter specific hour: ";
			cin >> i;
			while (i < 1 || i > 24) {
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Invalid, must be between 1 - 24" << endl;
				cout << "Enter specific hour: ";
				cin >> i;
			}
			h = i * 3600;
			string ph = to_string(h);
			system(("shutdown -s -t " + ph).c_str());
			if (i == 1) {
				cout << "The PC will be shutdown in " << i << " hour" << endl;
			}
			else {
				cout << "The PC will be shutdown in " << i << " hours" << endl;
			}
			system("pause");
			system("cls");
			cin.clear();
			cin.ignore(10000, '\n');
			break;
		}
		case 5:
			system("shutdown -a");
			system("cls");
			cout << "Current shutdown schedule has been canceled." << endl;
			system("pause");
			system("cls");
			cin.clear();
			cin.ignore(10000, '\n');
			break;
		case 6:
			system("cls");
			cout << "Exiting the program";
			Sleep(100);
			cout << ".";
			Sleep(100);
			cout << ".";
			Sleep(100);
			cout << ".";
			start = false;
			break;
		default:
			system("cls");
			cin.clear();
			cin.ignore(10000, '\n');
			break;
		}
	}
	return 0;
}

/*
* Statements used:
* string <variable name> | iostream
* cout | iostream
* cin, cin.clear(), cin.ignore() | iostream
* while() | C++ Basic
* switch() | C++ Basic
* break; | C++ Basic
* system() | C++ Basic
*/