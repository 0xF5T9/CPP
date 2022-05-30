/*
 *  6.Pointer & Array 2
 */

#include <iostream>

void ShowArrayInfo(short* SHORT) 
{
    for (int i = 0; i < 5; i++) 
    {
        std::cout << (uintptr_t)&SHORT[i];
        if (i != 5 - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    system("pause");
    system("cls");
}

int main() 
{
    int sInt[5] = {1, 7, 4, 5, 3};      //* Create int array with 5 elements
    short* shPtr = (short*)&sInt[0];    //* Create short pointer and point it to first element of 'sInt' array

    std::cout << "Addresses: ";
    ShowArrayInfo(shPtr);

    //* cout iPtr's info before increment | iPtr is pointing to sInt[0] address
    std::cout << "Value: " << *shPtr << ", Address: " << shPtr << " (" << (uintptr_t)shPtr << ")" << std::endl;

    shPtr += 1;
    /*
     *  Assuming 'shPtr' is pointing to address: 641892088480 (Which is also 'sInt[0]' element address)
     * shPtr += 1 equal to 641892088480 + 2 (2 because shPtr is a short pointer)
     */

    //* The value is invalid since pointer is pointing to an int array (Which is 4 bytes per element), it need to increase 2 more bytes in order to access the next element)
    std::cout << "Value: " << *shPtr << ", Address: " << shPtr << " (" << (uintptr_t)shPtr << ")" << std::endl;

    //* Increase 2 more bytes
    shPtr += 1;

    //* shPtr is now pointing to sInt[1] address
    std::cout << "Value: " << *shPtr << ", Address: " << shPtr << " (" << (uintptr_t)shPtr << ")" << std::endl;

    //* Increase 4 bytes
    shPtr += 2;

    //* shPtr is now pointing to sInt[2] address
    std::cout << "Value: " << *shPtr << ", Address: " << shPtr << " (" << (uintptr_t)shPtr << ")" << std::endl;

    return 0;
}