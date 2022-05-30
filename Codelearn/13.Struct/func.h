#pragma once
#include <iostream>
#include <limits>
#include "student.h"

// Free memory
void FreeMemory(Students *STUDENT_POINTER) 
{
    delete[] STUDENT_POINTER;
}
