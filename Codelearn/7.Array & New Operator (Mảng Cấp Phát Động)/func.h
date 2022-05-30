#pragma once
#include <iostream>

int *CreateArray(int nElements)
{
    int *sInt = new int[nElements]; //* Create int array via new operator
    for (int i = 0; i < nElements; i++)
    {
        sInt[i] = i + 100;
    }
    return sInt; //* Return the pointer
}

void ShowArrayInfo(int *INT_POINTER, int nElements)
{
    for (int i = 0; i < nElements; i++)
    {
        std::cout << "[" << i << "]"
                  << "Value: " << INT_POINTER[i] << " | Address: " << &INT_POINTER[i] << " (" << (uintptr_t)&INT_POINTER[i] << ")" << std::endl;
    }
    std::cout << std::endl;
}

void FreeMemory(int *INT_POINTER, bool IsArray = false)
{
    if (IsArray == true)
    {
        delete[] INT_POINTER;
        std::cout << "Pointer memory deallocated (Array)" << std::endl;
    }
    else if (IsArray == false)
    {
        delete INT_POINTER;
        std::cout << "Pointer memory deallocated" << std::endl;
    }
}