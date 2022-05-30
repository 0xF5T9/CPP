/*
* 16.Function Prototype
*/

#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std;	//	Using namespace 'std' - standard

int TinhTong(int x, int y);	// Khai báo hàm prototype, bảo compiler rằng hàm này sẽ được định nghĩa chi tiết sau

int main() {
	cout << TinhTong(5, 10) << endl;
}

int TinhTong(int x, int y) {	// Định nghĩa chi tiết của hàm TinhTong()
	int i;
	i = x + y;
	return i;
}
//	Output: 15
