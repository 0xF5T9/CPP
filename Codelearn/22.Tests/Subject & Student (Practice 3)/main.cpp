/*
 *  22.Tests | Subject & Student (Practice 3)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Subject & Student (Practice 3)\func.h"

int main ()
{
    /* Overload Operators Test
    Subject s("", 0.0, 0, 0);
    std::cout << s;
    std::cin >> s;
    std::cout << s;
    
    std::vector<Subject> vs = {s};
    Student st("Vi", vs);
    std::cout << st;
    std::cin >> st;
    std::cout << st;
    */
    system("cls"); // Clear Vscode Terminal
    srand((unsigned int)time(0)); // Set random seed to generate random number
    std::cout << std::setprecision(2); // Set cout precision for double entities 585

    // Create 'Subject' vector
    std::vector<Subject> s = {
        Subject("Math", GetRand(), 3, 175000),
        Subject("Physic", GetRand(), 2, 30000),
        Subject("Chemistry", GetRand(), 5, 125000)
    };
    Student student1("Vi", s); // Pass 's' vector as 'pass by value'

    // 's' vector no longer needed, deallocate the vector memory
    s.clear();
    std::vector<Subject>().swap(s);

    // Display student info
    student1.display();

    return 0;
}