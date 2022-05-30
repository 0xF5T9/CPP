/*
* 9.For Loop
*/

#include <iostream> //	Input Output Stream - Standard C++ Library
#include <Windows.h> // WinAPI - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

/*
* 
* for (initialization; condition; increment) {
* 	statement(s);
* }
*
* Initialization: This part is executed first and only once. Here, you declare and initialize loop control variables. The loop control variables can be more than one, and their values will change after every iteration. However, their values must be evaluated before an iteration runs.
*
* Condition: This part is executed next. For the loop body to be executed, this condition must be true. If the condition is false, execution will jump to statements immediately after the loop body. If the condition is false on the first evaluation, the loop body will never be executed.
* 
* Increment: Once the loop body has been executed, control jumps to the increment. You can leave out this part and use a semicolon instead.
* 
* Again, the condition is evaluated. If it’s true, the loop body is executed, and this continues. The loop terminates immediately the condition becomes false.
*/






int main() {

	for (int i = 0; i < 101; i++) {;				// <- chạy mãi miễn i dưới 100, i được cộng 1 mỗi lần chạy
		cout << "Loading (" << i << "%)";			// vòng lặp for() sẽ chạy mãi miễn đều kiện là true
		i = i + 7;									// <- tuỳ biến thêm
		Sleep(5);									// 
		system("cls");								//
	}												//

	cout << "Loading (100%)" << endl;				// Loading animation - Giả lập hoạt ảnh tải
	cout << endl;									//


	while (true) {

		// statements


		cout << "Loaded successfully!" << endl;
		system("pause");
	}
}

/*
* Statements used:
* cout | iostream
* cin | iostream
* while() | C++ Basic
* for() | C++ Basic
*/