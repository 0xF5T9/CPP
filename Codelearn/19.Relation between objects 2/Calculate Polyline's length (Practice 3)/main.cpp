/*
 *  19.Relation between objects | Calculate Polyline's length (Practice 3)
 */

#include <iostream>
#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Calculate Polyline's length (Practice 3)\Polyline.h"

int main()
{
    system("cls"); // Clear Vscode Terminal

    Point p1(1, 1);
    Polyline Polyline1;

    // Append points to the Polyline1 instance
    Polyline1.appendPoint(p1);
    Polyline1.appendPoint(Point(2, 3));
    Polyline1.appendPoint(3, 0);
    Polyline1.appendPoint(4, 2);

    // Get length of the polyline1
    Polyline1.getLength(1);
    std::cout << Polyline1.getLength() << std::endl;

    return 0;
}