/*
 *  13.Vector | 3.Resize vector
 */

#include <iostream>
#include <vector>

void PrintVectorElements(std::vector<int>& INT_VECTOR, bool ExtraText = true)
{
    int sc = 0;
    std::cout << "Element values: ";
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
    system("cls"); // Clear Vscode Ternimal


    // Create vector array with 10 elements
    std::vector<int> sInt;
    for (int i = 0; i < 10; i++)
    {
        sInt.push_back(i + 1);
    }
    PrintVectorElements(sInt);

    // Resize vector array to 5 elements
    sInt.resize(5);
    PrintVectorElements(sInt);

    // Resize vector array to 10 elements and set uninitialized elements value to 15
    sInt.resize(10, 15);
    PrintVectorElements(sInt);

    // Resize vector array to 15 elements, uninitialized elements will have 0 as default value
    sInt.resize(15);
    PrintVectorElements(sInt);

    return 0;
}