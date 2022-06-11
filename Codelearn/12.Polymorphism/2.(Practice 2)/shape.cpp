#include "C:\Users\truon\Desktop\C++\Codelearn\16.Polymorphism\(Practice 2)\shape.h"

/*  Rectangle: (Getters & Setters)  */
void Rectangle::setWidth(double width) 
{
    this->width = width;
}

double Rectangle::getWidth() 
{
    return this->width;
}

void Rectangle::setLength(double length) 
{
    this->length = length;
}

double Rectangle::getLength()
{
    return this->length;
}
/*  Rectangle: (Functions)  */
double Rectangle::CalculateArea(bool cout)
{
    if (cout == true) std::cout << this->getWidth() * this->getLength() << std::endl;
    return this->getWidth() * this->getLength();
}

double Rectangle::CalculatePerimeter(bool cout) 
{
    if (cout == true) std::cout << 2 * (this->getLength() + this->getWidth()) << std::endl;
    return 2 * (this->getLength() + this->getWidth());
}