/*
 *  6.Array & New Operator (Mảng Cấp Phát Động) | 1.1D Array & New Operator
 */

#include <iostream>
#include "func.h"

int main()
{
    int n = 5;
    int *MyInt = CreateArray(n); // Create int array via function (func.h)

    ShowArrayInfo(MyInt, n); //  Show array values & addresses (Before deallocate memory)

    FreeMemory(MyInt, 1);   //  Deallocate pointer memory
    std::cout << std::endl;

    ShowArrayInfo(MyInt, n); //  Show array values & addresses (After deallocate memory)
    /*
     * The implementation is allowed to do whatever it wants with the memory once you give it back
     * Including leaving it as whatever it already was. The pointer shouldn't be accessed after deallocated
     */

    system("pause");
    return 0;
}