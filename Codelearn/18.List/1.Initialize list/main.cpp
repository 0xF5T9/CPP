/*
 *  18.List | 1.Initialize list
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\18.List\1.Initialize list\func.h"
#include <list>

int main()
{
    system("cls"); // Clear Vscode Terminal
    srand((unsigned int)time(0)); // Set random seed for rand()
    const int testcase = 3;

    switch(testcase)
    {
        case 1:
        {
            {
                int ini_size = GetRandInt(1, 10);
                int ini_value = GetRandInt(0, 100);
                std::list<int> sList(ini_size, ini_value); // Create int list 'sList' (Inline initialization)
                /*
                 * Alternative: 
                 * std::list<int> sList;
                 * sList.resize(5, 99);
                 */
                
                
                /*
                 * Create a list iterator & pointing to the last element of 'sList'
                 * 'sList.end()' pointing to the element that behind the last element
                 * therefore sList.end() - 1 = last element if 'sList' 
                 * (still *.end() - 1 won't work because list::end() returns a bidirectional iterator which does not support such operation.)
                 * Do the operation via iterator instead: c--;
                 * Or: use prev()
                 * std::prev(*.end());
                 */
                std::list<int>::iterator c = std::prev(sList.end()); // or std::prev(sList.end(), 1);
                //std::list<int>::iterator c = sList.end();
                //c--;

                // Browsing through the list via iterator                        
                for (std::list<int>::iterator i = sList.begin(); i != sList.end(); i++)
                {
                    std::cout << *i;
                    if (i != c) std::cout << "-"; // Without 'c' Alternative: if (i != std::prev(sList.end())) std::cout << "-";
                }
                std::cout << std::endl;
            }   // End of the scope, all local variables will be destroyed
        }

        case 2:
        {
            {
                // Create int list 'sList' with 5 random int elements
                std::list<int> sList = {GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt()};

                /*
                 *  Browsing through the list via const iterator
                 *  Using const iterator for read-only tasks
                 */
                for (std::list<int>::const_iterator i = sList.cbegin(); i != sList.cend(); i ++) // Use cbegin() & cend() for const_iterator
                {
                    // *i = 147; | Error, you can't do write tasks while browsing via const iterator
                    std::cout << *i;
                    if (i != std::prev(sList.cend())) std::cout << "-";
                }
            }   // End of the scope, all local variables will be destroyed
        }

        case 3:
        {
            {
                // Create int list 'sList' with 5 random int elements
                std::list<int> sList = {GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt(), GetRandInt()};

                // Browsing through the list via iterator (Default iterator: left->right)
                std::cout << "Browsing via default iterator: ";                       
                for (std::list<int>::iterator i = sList.begin(); i != sList.end(); i++)
                {
                    std::cout << *i;
                    if (i != std::prev(sList.end())) std::cout << "-";
                }
                std::cout << std::endl;

                // Browsing through the list via reverse iterator (Reverse iterator: right->left)
                std::cout << "Browsing via reverse iterator: ";
                for (std::list<int>::reverse_iterator i = sList.rbegin(); i != sList.rend(); i++) // Use rbegin() & rend() for reverse_iterator
                {
                    std::cout << *i;
                    if (i != std::prev(sList.rend())) std::cout << "-";
                }
                std::cout << std::endl;
            }
        }
    }
    

    return 0;
}