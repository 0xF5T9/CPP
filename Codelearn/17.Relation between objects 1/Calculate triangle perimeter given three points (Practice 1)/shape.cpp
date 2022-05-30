#include "C:\Users\truon\Desktop\C++\Codelearn\17.Relation between objects\Calculate triangle perimeter given three points (Practice 1)\shape.h"

double Triangle::CalculatePerimeter(bool cout)
{
    // Calculcate sides's length
    double AB = std::sqrt(pow(this->vertical2.getX() - this->vertical1.getX(), 2) + pow(this->vertical2.getY() - this->vertical1.getY(), 2) * 1.0);
    double AC = std::sqrt(pow(this->vertical3.getX() - this->vertical1.getX(), 2) + pow(this->vertical3.getY() - this->vertical1.getY(), 2) * 1.0);
    double BC = std::sqrt(pow(this->vertical2.getX() - this->vertical3.getX(), 2) + pow(this->vertical2.getY() - this->vertical3.getY(), 2) * 1.0);
    if (cout == true) std::cout << "Triangle's perimeter is: " << AB + AC + BC << std::endl;
    return (double)AB + AC + BC;
}

/*
            A(1)
      
        AC      AB

    C(3)    BC      B(2)

*/