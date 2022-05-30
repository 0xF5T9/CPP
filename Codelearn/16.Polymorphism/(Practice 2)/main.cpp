/*
 *  16.Polymorphism | (Practice 2)
 * https://stackoverflow.com/questions/3829220/is-there-no-way-to-upcast-into-an-abstract-class-and-not-modify-it-each-time-a-c
 */

#include "C:\Users\truon\Desktop\C++\Codelearn\16.Polymorphism\(Practice 2)\shape.h"

int main()
{
    system("cls"); // Clear Vscode Terminal

    /*  Create "Rectangle" objects via "Shape" pointer (Up-casting)  */
    Shape* rec1 = new Rectangle(2.3, 4.5);
    Shape* rec2 = new Rectangle();
    Rectangle* rec3 = new Rectangle();

    rec1->CalculateArea();
    rec1->CalculatePerimeter();
    rec2->CalculateArea();
    rec2->CalculatePerimeter();

    /*
     *  rec2->setLength(5.0); 
     *  rec2->setWidth(5.0); 
     *  You can't access derived class's members directly while up-casting
     *  But can be done using static cast (static_cast)
     */
    static_cast<Rectangle*>(rec2)->setLength(5.0);
    static_cast<Rectangle*>(rec2)->setWidth(5.0);
    rec2->CalculateArea();
    rec2->CalculatePerimeter();

    rec3->setLength(2.0);
    rec3->setWidth(2.0);
    std::cout << rec3->CalculateArea(0) << " " << rec3->CalculatePerimeter(0) << std::endl;

    delete rec1;
    delete rec2;
    delete rec3;
    return 0;
}