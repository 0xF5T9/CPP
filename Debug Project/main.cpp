/*
 *  Debug Project
 */

#include <iostream>
#include <vector>

void PrintVectorElements(std::vector<std::string>& STRING_VECTOR)
{
    int sc = 0;
    for (auto x : STRING_VECTOR)
    {
        sc++;
        std::cout << x;
        if (sc != STRING_VECTOR.size()) std::cout << "-";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<Authors> Authors;

    


    return 0;
}