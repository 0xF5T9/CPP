/*
 *  17.Tests | 5.Geometry (Practice 5)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Geometry (Practice 5)\func.h"

int main()
{
    system("cls"); // Clear Vscode Terminal
    std::cout << std::fixed << std::setprecision(2); // Set cout precision for double entities

    // Create geometry instances (Up-casting)
    Geometry* g1 = new Triangle(5, 5, 5);
    Geometry* g2 = new Rectangle(15, 25);
    Geometry* g3 = new Circle(30);

    // Display geometry info
    g1->display(1);
    g2->display(1);
    g3->display(1);

    // Deallocate instance memories
    FreeMemory(g1);
    FreeMemory(g2);
    FreeMemory(g3);
    return 0;
}