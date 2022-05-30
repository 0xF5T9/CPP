/*
* 13.Function (Method)
*/

#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int tinhtong(int num1, int num2) {	// Tạo hàm mang tên tinhtong để tính tổng 2 biến int và trả về giá trị int
	return num1 + num2;				//
}

int main() {
	int x, y;
	x = 10;
	y = 10;
	cout << tinhtong(5, 5) << endl;	// Tính tổng của 5 và 5
	cout << tinhtong(x, y) << endl;	// Tính tổng của x và y
}
// Output:
//	10
//	20