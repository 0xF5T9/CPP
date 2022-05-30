/*
 *  15.Inheritance | Person & Student (Practice 2)
 *  Example 2 (*check .h files)
 */

#include <iostream>
#include "student.h"

int main() 
{
    
    Student std1("Vi", 1997, 9.5);
    std::cout << "--\n";
    std1.Info();
    std::cout << "--" << std::endl;

    return 0;
}