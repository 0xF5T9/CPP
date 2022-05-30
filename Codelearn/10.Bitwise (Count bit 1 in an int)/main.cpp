/*
 *  10.Bitwise (Count bit 1 in an int)
 */

#include <iostream>

int main() 
{
    int n = 27;
    int count = 0;
    while (n != 0) 
    {
        if (n & 1) 
        {
            count++;
        }
        n = n >> 1;
        std::cout << n << std::endl;
    }
    std::cout << count << std::endl;
    
    return 0;
}