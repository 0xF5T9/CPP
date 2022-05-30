/*
* 10.Continue in While Loop
*/

#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	int i = 0;
	while (i < 10) { // Vòng lặp while chạy mãi cho đến khi biểu thức điều kiện i < 10 không còn được thoả mãn
		i += 1; // i được cộng 1 mỗi vòng lặp
		if (i == 4) {	// nếu biểu thức điều kiện i == 4 được thoả mãn, continue được kích hoạt, bỏ qua các câu lệnh tiếp theo
			continue;	// và quay về biểu thức điều kiện while trước khi tiếp tục vòng lặp của nó
		}				//
		cout << i << endl; // kết quả là 4 sẽ không được cout
	}	
	return 0;
}

/*
* Statements used:
* cout | iostream
* while() | C++ Basic
* if() | C++ Basic
* continue; | C++ Basic
*/