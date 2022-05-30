/*
 *  11.Bitwise (Get a specific bit)
 */

#include <iostream>

using namespace std;

int main() {
	int a;  // Number
    int n;  // Location
	std::cin >> a >> n;
	if ((a & (1 << (n - 1))) == 0) {
		std::cout << 0;
	}
	else {
		std::cout << 1;
	}
	return 0;
}