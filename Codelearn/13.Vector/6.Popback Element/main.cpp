/*
 *  13.Vector | 6.Popback Element
 */

#include <iostream>
#include <vector>

void PrintVectorElements(std::vector<double>& INT_VECTOR)
{
    int sc = 0;
    for (auto x : INT_VECTOR)
    {
        sc++;
        std::cout << x;
        if (sc != INT_VECTOR.size()) std::cout << " ";
    }
    std::cout << std::endl;
}


int main()
{
    system("cls"); // Clear Vscode Terminal

    std::vector<double> sDouble;
    for (int i = 0; i < 5; i++)
    {
        sDouble.push_back((double)i + 0.5);
    }
    std::cout << "'SDouble' element values: ";
    PrintVectorElements(sDouble);

    // Pop back the last element in vector array | aka delete/deallocate it
    sDouble.pop_back();
    std::cout << "'SDouble' element values: ";
    PrintVectorElements(sDouble);

    return 0;
}