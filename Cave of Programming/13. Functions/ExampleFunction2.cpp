/*
* 13.Function (Method)
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

void printNum(int num) { // Tạo hàm void tên printNum để cout 1 biến int
	cout << num;		 // Hàm void không thể trả bất kỳ giá trị nào về
}

int main() {
	int x = 25;
	printNum(x); // Thực thi hàm printNum với biến x
}
// Output:
//	25