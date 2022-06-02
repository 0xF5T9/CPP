/*
 *  22.Tests | Student (Practice 2)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Student (Practice 2)\func.h"

int main()
{
    /* Testing Overload Operators
    Student s1;
    s1.displayInfo();
    std::cin >> s1;
    std::cout << s1;
    */
    srand((unsigned int)time(0)); // Set random seed to generate random numbers
    system("cls"); // Clear Vscode Terminal
    std::cout << std::setprecision(2); // Set cout precision for double entities

    // Create 'Student' vector with elements (Random generated double parameters)
    std::vector<Student> students = 
    {
        Student("Vi", GetRand(), GetRand(), GetRand()),
        Student("Hong", GetRand(), GetRand(), GetRand()),
        Student("Ngoc", GetRand(), GetRand(), GetRand()),
        Student("Quang", GetRand(), GetRand(), GetRand()),
        Student("Vinh", GetRand(), GetRand(), GetRand()),
        Student("Duong", GetRand(), GetRand(), GetRand()),
        Student("Vuong", GetRand(), GetRand(), GetRand()),
        Student("Hung", GetRand(), GetRand(), GetRand()),
        Student("Lam", GetRand(), GetRand(), GetRand()),
    };

    // Create 'Student' vector contain top students in aspects
    std::vector<Student> TopAverageList = Student::getHighestAverageStudents(students);
    std::vector<Student> TopMathList = Student::getHighestMathStudents(students);
    std::vector<Student> TopPhysicList = Student::getHighestPhysicStudents(students);
    std::vector<Student> TopChemistryList = Student::getHighestChemistryStudents(students);

    // Show vector elements
    ShowVectorElements(TopAverageList);
    ShowVectorElements(TopMathList);
    ShowVectorElements(TopPhysicList);
    ShowVectorElements(TopChemistryList);

    return 0;
}