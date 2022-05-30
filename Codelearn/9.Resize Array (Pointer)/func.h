#pragma once

#include <iostream>

void SetValue(int *INT_POINTER, int nElements, int Value)
{
    for (int i = 0; i < nElements; i++)
    {
        INT_POINTER[i] = Value;
    }
}

void ShowArrayInfo(int *INT_POINTER, int nElements)
{
    for (int i = 0; i < nElements; i++)
    {
        std::cout << "[" << i << "]" << "Value: " << INT_POINTER[i] << " | Address: " << &INT_POINTER[i] << " (" << (uintptr_t)&INT_POINTER[i] << ")" << std::endl;
    }
}

void ResizeArray(int* &INT_POINTER, int NewSize) 
{
    delete[] INT_POINTER;
    INT_POINTER = new int[NewSize];
}