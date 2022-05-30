/*
 * 5.Pointer & Array
 */

#include <iostream>

void ShowArrayInfo(int *INT)
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Value: " << INT[i] << ", Address: " << &INT[i] << " (" << (uintptr_t)&INT[i] << ")" << std::endl;
    }
    system("pause");
    system("cls");
}

int main()
{
    int sInt[5] = {15, 20, 25, 30, 35}; //  Create int array with 5 elements
    int *iPtr = &sInt[0];               //  Point the pointer to first element of 'sInt' array.
    /*                                  //  ↑ "int* iPtr = &sInt[0];  " is the same as "int* iPtr = sInt;  " */

    ShowArrayInfo(iPtr);

    //* cout iPtr's info before increment | iPtr is pointing to sInt[0] address
    std::cout << "Value: " << *iPtr << ", Address: " << iPtr << " (" << (uintptr_t)iPtr << ")" << std::endl;
    
    iPtr += 1;
    /*
     * Assuming 'iPtr' is pointing to address: 204654771312 (Which is also 'sInt[0]' element address)
     * iPtr += 1 equal to 204654771312 + 4 (4 because iPtr is a int pointer, sizeof 'int' is 4 bytes)
     * Therefore iPtr += 3 equal to 204654771312 + (4*3)
     */

    //* cout iPtr's info after increment | iPtr is now pointing to sInt[1] address
    std::cout << "Value: " << *iPtr << ", Address: " << iPtr << " (" << (uintptr_t)iPtr << ")" << std::endl;

    return 0;
}