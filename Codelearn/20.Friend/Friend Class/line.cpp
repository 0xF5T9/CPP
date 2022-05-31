#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Friend\Friend Class\line.h"

/* Class: Line | Class Function Definitions */
double Line::getLength(bool cout)
{
    // The function can access 'Point' class private properties directly because class 'Line' is a friend of class 'Point'
    double temp_length = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) * 1.0);
    if (cout == true)
        std::cout << "The line length is: " << temp_length << std::endl;
    return  temp_length;
}