/*
 *  18.Vector | Iterator in Vector
 */

#include <iostream>
#include <vector>

int main()
{
    system("cls"); // Clear Vscode terminal

    /*
     * Iterator is an object use to browse elements of struct data like: vector, map, set, list...
     * Its like a pointer point to the elements of these datas
     * i.e: 
     * 
     * std::vector<int> sInt;
     * sInt.push_back(15);
     * sInt.push_back(25);
     * sInt.push_back(35);
     * 
     * std::vector<int>::iterator i;
     * i = sInt.begin(); | Have 'i' point to the first element of 'sInt' vector
     * i = sInt.end();   | Have 'i' point to the element that behind last element of 'sInt' vector
     * i++               | Have 'i' point to the next element of 'sInt'
     * *i                | get value of the element it pointing to
     * *i = 145          | assign new value 145 for the element it pointing to
     *  for (i = sInt.begin(); i != sInt.end(); i++)    | 'i != sInt.end()' check if the iterator is pointing pass the last element
     *  {
     *      ...
     *  }
     */
    std::vector<std::string> sString;
    sString.push_back("Apple");
    sString.push_back("Orange");
    sString.push_back("Grape");

    // Check if 'sString' vector array have element that matches "Orange"
    {
        std::vector<std::string>::iterator i;
        for (i = sString.begin(); i != sString.end(); i++) 
        {
            if (*i == "Orange") std::cout << "Orange found!" << std::endl;
        }
    }

    
    std::vector<int> sInt;   
    for (int i = 0; i < 10; i++) {sInt.push_back(i + 1);}

    // Print odd numbers in 'sInt' vector array
    std::cout << "Odd numbers in the vector (sInt): ";
    {
        std::vector<int>::iterator i;
        for (i = sInt.begin(); i != sInt.end(); i++) 
        {
            if (*i % 2 != 0)
            {
                std::cout << *i;
                if (i != sInt.end()) std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    // Print even numbers in 'sInt' vector array
    std::cout << "Even numbers in the vector (sInt): ";
    {
        std::vector<int>::iterator i;
        for (i = sInt.begin(); i != sInt.end(); i++) 
        {
            if (*i % 2 == 0)
            {
                std::cout << *i;
                if (i != sInt.end() - 1) std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    // Quick way to print all vector element values
    std::cout << "'sInt' element values: ";
    for (auto x : sInt) 
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}