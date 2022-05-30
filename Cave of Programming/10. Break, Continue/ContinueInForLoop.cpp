/*
* 10.Continue in For Loop
*/

#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	int i;
	for (i = 1; i <= 10; i++) { // Vòng lặp for sẽ chạy đến khi biểu thức điều kiện i <= 10 không còn thoả mãn nữa mới kết thúc.
		if (i == 4) {	// nếu biểu thức điều kiện i == 4 được thoả mãn, continue được kích hoạt, bỏ qua các câu lệnh tiếp theo
			continue;	// và quay về biểu thức điều kiện while trước khi tiếp tục vòng lặp của nó
		}				//
		cout << i << endl; // kết quả là 4 sẽ không được cout
	}
	cout << "For loop end!" << endl;
	return 0;
}

/*
* Statements used:
* cout | iostream
* for() | C++ Basic
* if() | C++ Basic
* continue; | C++ Basic
*/