/*
 *   2.Dereference Pointer
 */

#include <iostream>
#include <string>

void Test(std::string *string)
{
    std::cout << "Reference (Address): " << string << std::endl;          //	Memory address
    std::cout << "Dereference (Method 1): " << *string << std::endl;      //	Hello
    std::cout << "Dereference (Method 2): " << (*string) << std::endl;    //	Hello
    std::cout << "Dereference (Method 3): " << (*string)[0] << std::endl; //	H
}

int main()
{
    std::string s = "Hello";
    std::cout << "'s' variable value: " << s << std::endl; //	Hello
    std::cout << "s[0]: " << s[0] << std::endl;            //	H
    std::cout << std::endl;
    Test(&s);
    return 0;
}