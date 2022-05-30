/*
* 10.Break in While Loop
*/

#include <iostream> //	Input Output Stream - Standard C++ Library

using namespace std; //	Using namespace 'std' - standard

int main() {
	int i = 0;
	while (true) { // Vòng lặp while vĩnh cữu
		if (i == 100) {	//
			break;		// Break khỏi vòng lặp while() khi điều kiện i == 100 được thoả mãn
		}				//
		i += 1;
		cout << i << endl;
	}
	cout << "Loop breaks!";
	return 0;
}

/*
* Statements used:
* cout | iostream
* while() | C++ Basic
* if() | C++ Basic
* break; | C++ Basic
*/