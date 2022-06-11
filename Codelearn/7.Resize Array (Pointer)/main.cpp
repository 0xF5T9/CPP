/*
 *  7.Resize Array (Pointer)
 */

#include <iostream>
#include "func.h"

int main()
{
    int nElements = 5;              //  ↓ Total elements
    int *iPtr = new int[nElements]; //  Create 'iPtr' int array via new operator

    SetValue(iPtr, nElements, 55); //  Set value '55' for elements of 'iPtr' array
    ShowArrayInfo(iPtr, 10);       //  Show array infos (values, addresses)
    ResizeArray(iPtr, 10);         //  Resize the array to 10 elements

    std::cout << "----------" << std::endl;
    SetValue(iPtr, 10, 69);  //  Set value '69' for elements of 'iPtr' array
    ShowArrayInfo(iPtr, 10); //  Show array infos (values, addresses)

    system("pause");
    return 0;
}