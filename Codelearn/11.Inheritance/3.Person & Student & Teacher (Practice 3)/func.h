#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student & Teacher (Practice 3)\student.h"
#include "C:\Users\truon\Desktop\C++\Codelearn\15.Inheritance\Person & Student & Teacher (Practice 3)\teacher.h"


/*  Create object functions (Class: Student, Teacher)   */
Student* CreateObjectStudent(std::string name, int age, std::string address, double gpa) 
{
    Student* Object = new Student(name, age, address, gpa);
    return Object;
}

Teacher* CreateObjectTeacher(std::string name, int age, std::string address, int salary) 
{
    Teacher* Object = new Teacher(name, age, address, salary);
    return Object;
}

/*  Free object memory functions (Class: Student, Teacher)   */
void FreeMemory(Student *STUDENT_POINTER) 
{
    delete STUDENT_POINTER;
}

void FreeMemory(Teacher *TEACHER_POINTER) 
{
    delete TEACHER_POINTER;
}