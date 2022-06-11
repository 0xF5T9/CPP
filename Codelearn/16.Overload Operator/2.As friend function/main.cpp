/*
 *  16.Overload Operator | 2.As friend function
 */

#include <iostream>
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\21.Overload Operator\As friend function\point.h"

int main()
{
    system("cls"); // Clear Vscode Terminal

    // Create Point instances
    Point p1(1.7, 2.3);
    Point p2(7.9, 4.4);

    // Using overload operator (expression defined in 'point.h')
    Point p3 = p1 + p2;
    std::cout << "P3(x, y) = " << p3.getX() << " " << p3.getY() << std::endl;

    Point p4 = p1 + 2.0;
    std::cout << "P4(x, y) = " << p4.getX() << " " << p4.getY() << std::endl;

    Point p5 = 2.0 + p1;
    std::cout << "P5(x, y) = " << p5.getX() << " " << p5.getY() << std::endl;

    return 0;
}