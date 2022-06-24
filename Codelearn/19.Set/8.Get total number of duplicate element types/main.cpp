/*
 *  19.Set | 8.Get total number of duplicate element types
 */

#include <iostream>
#include <string>
#include <vector>
#include <set>

int main()
{
    system("cls");  // Clear Vscode Terminal

    {
        std::vector<int> vi {1, 2, 3, 1, 2, 3, 4, 5, 7, 0};
        std::vector<int> vi_2 {1, 3, 2, 3, 5, 9};

        {
            std::set<int> si(vi.begin(), vi.end());
            unsigned short total = vi.size() - si.size();

            std::cout << total << std::endl;
        } // 3

        {
            std::set<int> si(vi_2.begin(), vi_2.end());
            unsigned short total = vi_2.size() - si.size();

            std::cout << total << std::endl;
        } // 1
    }

    return 0;
}