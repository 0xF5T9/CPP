/*
*	3.Floating Point Types
*/

#include <iostream> //	Input Output Stream - Standard C++ Library
#include <iomanip> //	Iostream Manipulator - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

/*
* 
* Trong C++, kiểu số chấm động đại diện cho số thực (Ví dụ: 69.9696, 3.14159, 0.00001 …),
* dùng để lưu trữ những số rất lớn hoặc rất nhỏ. Cấu trúc lưu trữ bên trong của số thực được thiết kế theo chuẩn số chấm động
* Số chấm động không có từ khóa unsigned. Có 3 kiểu số chấm động khác nhau trong C++: float, double, long double.
* 
* Chú ý: Một số môi trường lập trình đồng nhất kiểu long double với kiểu double nên kiểu này ít được sử dụng trong lập trình ứng dụng.
*/

int main() {

	/*
	*	double has higher precision, whereas floats take up less memoryand are faster.
	*	double có độ chính xác số cao hơn, trong khi float sử dụng ít bộ nhớ và nhanh hơn.
	*	thông thường chỉ sử dụng float trừ khi độ chính xác cần thiết là không đủ, khi đó dùng double hoặc cao hơn là long double.
	*/

	float giatri1 = 15.123456789;
	double giatri2 = 15.123456789101112131415;
	long double giatri3 = 15.123456789101112131415161718;

	/*
	*	fixed - hiển thị số thập phân sau dấu thập phân
	*	setprecision(số) - chỉ định độ chính xác tối thiểu
	*/
	cout << "Size of float value: " << sizeof(float) << " bytes - 16 bits" << endl;
	cout << fixed << setprecision(20) << giatri1 << endl; //	Output: 15.123456xxx - chỉ hiển thị đúng 6 số thập phân đầu

	cout << endl;

	cout << "Size of double value: " << sizeof(double) << " bytes - 64 bits" << endl;
	cout << fixed << setprecision(20) << giatri2 << endl; //	Output: 15.1234567891011xxx - chỉ hiện thị đúng 13 số thập phân đầu

	cout << endl;

	cout << "Size of long double value: " << sizeof(long double) << " bytes - 64 bits" << endl;
	cout << fixed << setprecision(40) << giatri3 << endl; 
	return 0;
}

/*
* Statements used:
* cout | iostream
* fixed, setprecision() | iomanip
* sizeof() | limits
*/