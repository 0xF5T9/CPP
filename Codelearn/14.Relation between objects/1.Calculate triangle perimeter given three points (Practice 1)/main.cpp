/*
 *  14.Relation between objects | 1.Calculate triangle perimeter given three points (Practice 1)
 */

#include <iostream>
#include "C:\Users\truon\Desktop\C++\Codelearn\17.Relation between objects\Calculate triangle perimeter given three points (Practice 1)\func.h"

int main ()
{
    system("cls"); // Clear Vscode Ternimal

    // Create 'Point' instances array via new operator
    Point* p = new Point[3];
    p[0] = Point(1.0, 3.0);
    p[1] = Point(2.0, 3.0);
    p[2] = Point(4.0, 2.0);

    // Create 'Triangle' instances via new operator
    Triangle* tri1 = new Triangle(p[0], p[1], p[2]);
    Triangle* tri2 = new Triangle(1.0, 3.0, 2.0, 3.0, 4.0, 2.0);

    std::cout << "---------\n";
    tri1->CalculatePerimeter();
    tri2->CalculatePerimeter();
    std::cout << "---------\n";

    // Free Allocated Memories
    FreeMemory(p, 1);
    FreeMemory(tri1);
    FreeMemory(tri2);
    return 0;
}