/*
 *  18.Vector | Get max product of adjacent elements
 */

#include <iostream>
#include <vector>
#include <algorithm>

void PrintVectorElements(std::vector<int>& INT_VECTOR)
{
    int sc = 0;
    for (auto x : INT_VECTOR)
    {
        sc++;
        std::cout << x;
        if (sc != INT_VECTOR.size()) std::cout << "-";
    }
    std::cout << std::endl;
}

int main()
{
    system("cls"); // Clear Vscode Ternimal
    std::srand((unsigned int)time(0));  // Set random seed based on current time

    std::vector<int> sInt;
    for (int i = 0; i < 10; i++)
    {
        int RandomInt = rand() % (100 + 1 - 0) + 0; // Generator a number between 0 - 100
        sInt.push_back(RandomInt);
    }
    std::cout << "Element values: ";
    PrintVectorElements(sInt);

    int MAX = sInt[0] * sInt[1];
    for (int i = 0; i < sInt.size() - 1; i++) // condition 'sInt.size() - 1' to prevent multiplication outside array range.
    {
        if (sInt[i] * sInt[i + 1] > MAX) MAX = sInt[i] * sInt[i + 1];
    }
    std::cout << MAX << std::endl;


    return 0;
}