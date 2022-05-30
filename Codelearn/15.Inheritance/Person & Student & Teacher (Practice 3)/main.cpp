/*
 *  15.Inheritance | Person & Student & Teacher (Practice 3)
 */

#include <iostream>
#include "C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student & Teacher (Practice 3)\func.h"

int main() 
{
    /*  Create object via function (func.h) */
    Student* StudentObj = CreateObjectStudent("Vi", 26, "Ho Chi Minh", 9.5);
    Teacher* TeacherObj = CreateObjectTeacher("Ngoc", 31, "Ha Noi", 1000);     

    std::cout << "--\n";
    StudentObj->display();
    TeacherObj->display();
    std::cout << "--" << std::endl;

    /*  Deallocate Objects Memory (func.h)   */
    FreeMemory(StudentObj);
    FreeMemory(TeacherObj);
    return 0;
}