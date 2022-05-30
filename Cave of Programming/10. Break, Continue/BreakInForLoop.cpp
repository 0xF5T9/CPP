/*
* 10.Break in While Loop
*/

#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	int i;
	for (i = 0; i <= 100; i++) { // Vòng lặp for sẽ chạy đến khi biểu thức điều kiện i <= 100 không còn thoả mãn nữa mới kết thúc.
		cout << i << endl;
		if (i == 50) {			//
			break;				// Break khỏi vòng lặp for() khi biểu thức điều kiện i == 50 được thoả mãn.
		}						//
	}
	cout << "Loop breaks!";
	return 0;
}

/*
* Statements used:
* cout | iostream
* for() | C++ Basic
* if() | C++ Basic
* break; | C++ Basic
*/