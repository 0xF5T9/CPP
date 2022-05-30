/*
 *  12.Bitwise (Get a specific bit)
 */

#include <iostream>

int main() 
{
    int a = 100;    // Int
	int n = 4;      // Location

	a = a & (~(1 << (n - 1)));
	std::cout << a;

    return 0;
}