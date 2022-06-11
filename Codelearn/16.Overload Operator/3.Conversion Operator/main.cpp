/*
 *  16.Overload Operator | 3.Conversion Operator
 */

#include <iostream>
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\21.Overload Operator\Conversion Operator\point.h"


int main()
{
    system("cls"); // Clear Vscode Terminal

    // Create Point instances
    Point p1(1.7, 2.3);
    Point p2(7.9, 4.4);

    // Using conversion operator (expression defined in 'point.h' & 'point.cpp')
    double d = p1; // d = 1.7 + 2.3
    std::cout << d << std::endl;
    d = p1 + p2; // d = (1.7 + 2.3) + (7.9 + 4.4)
    std::cout << d << std::endl;

    return 0;
}