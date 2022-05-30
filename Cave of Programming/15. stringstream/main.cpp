/*
* 15.stringstream
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library
#include <sstream>	//	String Stream - Standard C++ Library

int main() {
	int selectOption = 3;
	switch (selectOption) {
	case 1: {
		/*	Không sử dụng stringstream	*/
		std::string line = "My name is ";
		std::string line2 = "My age is ";
		std::string name = "Vi";
		int old = 22;

		std::cout << line << name << std::endl;
		std::cout << line2 << old << std::endl;
		break;
	}
	case 2: {
		/*	Sử dụng stringstream trực tiếp	*/
		std::string line = "My name is ";
		std::string line2 = "My age is ";
		std::string name = "Vi";
		int old = 22;
		std::stringstream ss;
		ss << old;	//	Đẩy dữ liệu gốc vào object stringstream

		std::string output = line + name;
		std::string output2 = line2 + ss.str();	//	Sử dụng trực tiếp object của stringstream như một string
		std::cout << output << "\n" << output2 << std::endl;
		break;
	}
	case 3: {
		/*	Sử dụng stringstream gián tiếp	*/
		std::string line = "My name is ";
		std::string line2 = "My age is ";
		std::string name = "Vi";
		int old = 22;
		std::stringstream ss;
		ss << old;	//	Đẩy dữ liệu gốc vào object stringstream
		std::string old2 = ss.str(); // Đẩy dữ liệu object stringstream vào biến mới

		std::string output = line + name;
		std::string output2 = line2 + old2;	//	Sử dụng biến string như bình thường
		std::cout << output << "\n" << output2 << std::endl;
	}
	}
	return 0;
}