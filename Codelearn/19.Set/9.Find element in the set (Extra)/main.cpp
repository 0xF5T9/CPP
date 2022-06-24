/*
 *  19.Set | 8.Find element in the set (extra)
 */

/*
 * Remarkables:
 * 1. <set>.lower_bound(x);
 * 2. <set>.upper_bound(x);
 * 
 * lower_bound(x) returns an iterator pointing to the element in the container which is equivalent to 'x'.
 * In case 'x' is not present in the set container, the function returns an iterator pointing to the immediate next element
 * which is just greater than 'x'. If the key passed in the parameter exceeds the maximum value in the container,
 * then the iterator returned points to the element beyond last element in the set container. (<set>.end()) 
 * 
 * upper_bound(x) returns an iterator pointing to the immediate next element which is just greater than 'x'.
 * If the key passed in the parameter exceeds the maximum key in the container,
 * then the iterator returned points to next of last element in the set container. (<set>.end()) 
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Set\9.Find element in the set (Extra)\func.h"

int main ()
{
    system("cls");  // Clear Vscode Terminal

    {
        std::set<int> si {1, 2, 3, 4, 5};
        ShowSetElements(si);

        SetLowerBound(si, 4);
        SetLowerBound(si, 5);
        SetLowerBound(si, 9);

        SetUpperBound(si, 1);
        SetUpperBound(si, 3);
        SetUpperBound(si, 5);
    }

    return 0;
}