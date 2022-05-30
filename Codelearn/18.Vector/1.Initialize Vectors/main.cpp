/*
 *  18.Vector | Initialize Vectors
 */

#include <iostream>
#include <vector>

int main()
{
    system("cls"); // Clear Vscode Terminal

    // Create vector arrays
    std::vector<int> sInt;              // int
    std::vector<float> sFloat;          // float
    std::vector<double> sDouble;        // double
    std::vector<std::string> sString;   //  string

    /* 
     *  Push values into vector array
     * i.e:
     *  sInt.push_back(15);
     * sInt.push_back(25);
     * std::cout << sInt[0] << " " << std::cout << sInt[1];
     * Output: 15 25
     */
    sInt.push_back(10);
    sInt.push_back(20);
    sInt.push_back(30);

    sFloat.push_back(1.1);
    sFloat.push_back(2.2);

    sDouble.push_back(5.2);
    sDouble.push_back(7.8);
    sDouble.push_back(9.4);
    sDouble.push_back(11.6);

    sString.push_back("Apple");
    sString.push_back("Orange");
    sString.push_back("Grape");
    sString.push_back("Strawberry");
    sString.push_back("Lemon");

    // Get total elements of vector array by using size()
    // i.e: 'size(sInt);' or 'sInt.size()'
    std::cout << "'sInt' vector array have total " << sInt.size() << " elements\n"; // 'sInt.size()' is the same as 'size(sInt)'
    std::cout << "'sFloat' vector array have total " << size(sFloat) << " elements\n";
    std::cout << "'sDouble' vector array have total " << size(sDouble) << " elements\n";
    std::cout << "'sString' vector array have total " << size(sString) << " elements" << std::endl;

    // Cout vector elements
    std::cout << "'sInt' element values: ";
    for (int i = 0; i < size(sInt); i++)
    {
        std::cout << sInt[i];
        if (i < size(sInt) - 1) std::cout << " ";
    }
    std::cout << std::endl;

    std::cout << "'sFloat' element values: ";
    for (int i = 0; i < size(sFloat); i++)
    {
        std::cout << sFloat[i];
        if (i < size(sFloat) - 1) std::cout << " ";
    }
    std::cout << std::endl;

    std::cout << "'sDouble' element values: ";
    for (int i = 0; i < size(sDouble); i++)
    {
        std::cout << sDouble[i];
        if (i < size(sDouble) - 1) std::cout << " ";
    }
    std::cout << std::endl;

    std::cout << "'sString' element values: ";
    for (int i = 0; i < size(sString); i++)
    {
        std::cout << sString[i];
        if (i < size(sString) - 1) std::cout << " ";
    }
    std::cout << std::endl;

    return 0;
}