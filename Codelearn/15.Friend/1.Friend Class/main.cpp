/*
 *  15.Friend | 1.Friend Class
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Friend\Friend Class\line.h"

int main()
{
    system("cls"); // Clear Vscode Terminal

    // Create line1 instance
    Point p1(1.0, 3.0);
    Point p2(2.0, 4.0);
    Line* line1 = new Line(p1, p2);
    line1->getLength(true); // Exec

    // Create line2 instance
    Line* line2 = new Line(1.0, 3.0, 2.0, 4.0);
    line2->getLength(true); // Exec

    return 0;
}