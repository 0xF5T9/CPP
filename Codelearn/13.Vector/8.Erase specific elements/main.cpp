/*
 *  13.Vector | 8.Erase specific element
 */

#include <iostream>
#include <vector>

void PrintVectorElements(std::vector<int>& INT_VECTOR)
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
    std::vector<int> sInt = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Inline vector initialize;
    std::cout << "'sInt' element values: ";
    PrintVectorElements(sInt);

    // Delete first element
    sInt.erase(sInt.begin());
    std::cout << "'sInt' element values: ";
    PrintVectorElements(sInt);

    // Delete first 2 elements
    sInt.erase(sInt.begin(), sInt.begin() + 2);
    std::cout << "'sInt' element values: ";
    PrintVectorElements(sInt);

    // Delete last 2 elements
    sInt.erase(sInt.end() - 2, sInt.end());
    std::cout << "'sInt' element values: ";
    PrintVectorElements(sInt);

    // Delete 5 6 7
    sInt.erase(sInt.begin() + 1, sInt.begin() + 4);
    std::cout << "'sInt' element values: ";
    PrintVectorElements(sInt);


    return 0;
};