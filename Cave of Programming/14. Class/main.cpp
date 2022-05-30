/*
* 14.Class
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library
#include "Header.h"

using namespace std;

int main() {
	program programObj;	// Tạo object từ class program

	programObj.Welcome(); // Sử dụng các function thông qua object được tạo

	int x = 20;
	cout << "15 + x = " << programObj.TinhTong(15, x) << endl;

	double duongkinh = 20.0;
	double chuvi = duongkinh * programObj.SoPI();
	cout << "Chu Vi: " << chuvi << endl;

	string secretcode = programObj.Code();
	cout << "Code: " << secretcode << endl;
}