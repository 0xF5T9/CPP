#include "geometry.h"

// Class: Geometry | Class Function Definitions
void Geometry::display(bool border)
{
	if (border == 1) std::cout << "--------------------\n";
	std::cout << "Type: " << this->getType(1) << "\n";
	std::cout << "Perimeter: " << this->getPerimeter() << "\n";
	std::cout << "Area: " << this->getArea() << std::endl;
	if (border == 1) std::cout << "--------------------" << std::endl;
}