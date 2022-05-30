/*
* 13.Function (Method)
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

double soPI(void) { // Tạo hàm tên soPI để trả về số thực PI
	return 3.141592;
}

int main() {
	cout << "So PI la: " << soPI() << endl;
	double DuongKinhHinhTron = 20; // cm
	double ChuVi;
	ChuVi = DuongKinhHinhTron * soPI(); // Chu vi hình tròn = Đường kính nhân cho số PI
	cout << "Chu vi cua hinh tron la: " << ChuVi << "cm" << endl;
}
// Output:
//	So PI la: 3.14159
//  Chu vi cua hinh tron la: 62.8318cm