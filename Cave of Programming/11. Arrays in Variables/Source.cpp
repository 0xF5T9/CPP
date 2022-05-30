/*
* 11.Arrays in Variables
*/

#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	int iValue[3]; // Khai báo biến int iValue có 3 mảng
	iValue[0] = 2; // Gán giá trị cho mảng 1
	iValue[1] = 7; // Gán giá trị cho mảng 2
	iValue[2] = 11; // Gán giá trị cho mảng 3
	cout << "Arrays of Integer: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << "iValue[" << i << "] = " << iValue[i] << endl;
	}
	
	cout << endl;

	double dValue[5] = {11.2, 16.5, 18.9, 22.4, 25.1}; // Khai báo biến double dValue có 5 mảng và gán giá trị lần lượt
	cout << "Arrays of Double: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "dValue[" << i << "] = " << dValue[i] << endl;
	}
	
	cout << endl;

	float fValue[3]; // Khai báo biến float fValue có 3 mảng
	cout << "Arrays of Float: " << endl;
	for (int i = 0; i < 3; i++) {
		fValue[i] = 55; // Một cách hay kết hợp biến đếm của vòng lặp for() để gán giá trị cho mảng
		cout << "fValue[" << i << "] = " << fValue[i] << endl;
	}

	cout << endl;

	string sValue[3] = {"Novartis", "Deferasirox", "Exjade"}; // Khai báo biến string sValue có 3 mảng và gán giá trị lần lượt
	cout << "Arrays of String: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << "sValue[" << i << "] = " << sValue[i] << endl;
	}

	cout << endl;

	int ssValue[][3] = { // Khai báo biến int ssValue là mảng 2 chiều có 3 cột và gán giá trị lần lượt
		{4, 5, 6},	// [0][0], [0][1], [0][2]
		{7, 8, 9}	// [1][0], [1][1], [1][2]
	};
	cout << "Two-Dimensional Array: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << ssValue[0][i];
	} 
	cout << "\n";
	for (int i = 0; i < 3; i++) {
		cout << ssValue[1][i];
	}
	return 0;
}

/*
* Statments used:
* string <variable name> + iostream
* cout | iostream
* for() | C++ Basic
* array variables | C++ Basic
*/