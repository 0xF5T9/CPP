/*
* 13.Function (Method)
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

void Menu(void) { // Tạo hàm void tên Menu để thực thi 1 loạt lệnh được thiết lập sẵn
	cout << "1. Add new record.." << endl;
	cout << "2. Edit record.." << endl;
	cout << "3. Delete record.." << endl;
	cout << "4. Quit the program.." << endl;
}

int main() {
	Menu();
}
// Output:
//	1. Add new record..
//	2. Edit record..
//	3. Delete record..
//	4. Quit the program..