#pragma once
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Subject & Student (Practice 3)\student.h"
#include <iomanip>

double GetRand() // Generate random double in range of 0 > 9.9
{
    int f = rand() % (9 + 1 - 0) + 0;
    int l = rand() % (9 + 1 - 0) + 0;
    std::string t = std::to_string(f) + "." + std::to_string(l);
    double ret = stod(t);
    return ret;
}