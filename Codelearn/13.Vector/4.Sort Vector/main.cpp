/*
 *  13.Vector | 4.Sort vector
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

    std::cout << "Before sort: ";
    PrintVectorElements(sInt);

    // std::sort() function from <algorithm> library support sorting vector array
    std::sort(sInt.begin(),sInt.end());
    std::cout << "After sort: ";
    PrintVectorElements(sInt);

    return 0;
}