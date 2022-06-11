#pragma once
#include "C:\Users\truon\Desktop\C++\Codelearn\17.Relation between objects\Calculate triangle perimeter given three points (Practice 1)\shape.h"


void FreeMemory(Point* Pointer_POINTER, bool IsArray = false)
{
    if (IsArray == true)
    {
        delete[] Pointer_POINTER;
        std::cout << "[*] (Func) Pointer memory deallocated (Array)" << std::endl;
    }
    else
    {
        delete Pointer_POINTER;
        std::cout << "[*] (Func) Pointer memory deallocated" << std::endl;
    }
}

void FreeMemory(Triangle* Triangle_POINTER, bool IsArray = false)
{
    if (IsArray == true)
    {
        delete[] Triangle_POINTER;
        std::cout << "[*] (Func) Pointer memory deallocated (Array)" << std::endl;
    }
    else
    {
        delete Triangle_POINTER;
        std::cout << "[*] (Func) Pointer memory deallocated" << std::endl;
    }
}