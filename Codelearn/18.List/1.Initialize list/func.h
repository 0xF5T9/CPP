#include <iostream>

int GetRandInt(int minimum = 0, int maximum = 100)
{
    return rand() % (maximum + 1 - minimum) + minimum;
}