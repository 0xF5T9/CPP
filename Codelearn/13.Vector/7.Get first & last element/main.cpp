/*
 *  13.Vector | 7.Get first & last element
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
    system("cls"); // Clear Vscode Terminal

    // Create string vector & iterators
    std::vector<std::string> sString;
    std::vector<std::string>::iterator i1;
    std::vector<std::string>::iterator i2;

    sString.push_back("Apple");
    sString.push_back("Orange");
    sString.push_back("Grape");
    sString.push_back("Lemon");
    sString.push_back("Tomato");

    /*
     * front() member returns a reference to the first member of a list or vector.
     * back() member returns a reference to the last member of a list or vector.
     * begin() returns an iterator which point to the first member (works like a pointer)
     * end() returns an iterator which point to the member that after last member of the vector
     * attempt to call front(),back() on empty vector will cause access violation error.
     * https://stackoverflow.com/questions/9303110/the-difference-between-front-and-begin
     */
    i1 = sString.begin();
    i2 = sString.end();
    std::cout << "First element value of 'sString': " << sString.front() << "\n";
    std::cout << "Last element value of 'sString': " << sString.back() << std::endl;


    return 0;
}