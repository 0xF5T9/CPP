/*
 *  15.Inheritance | Person & Student (Practice 1)
 *  Example 1 (*check .h files)
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