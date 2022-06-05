/*
 *  22.Tests | Person & Employees (Practice 6)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Person & Employees (Practice 6)\func.h"

int main()
{
    system("cls"); // Clear Vscode Terminal
    {
        /* 
         * Create a vector that contain 'Person' pointers, each point to a 'EmployeePT' object(Up - casting)
         * Why pointers and not objects directly? - "Object Slice" issues with abstract classes
         * Readmore: https://stackoverflow.com/questions/8777724/store-derived-class-objects-in-base-class-variables
         */ 
        std::vector<Person*> p;
        p = {
            new EmployeePT("Vi", 26, "Ho Chi Minh", "09771**", "Male", 8, 70000),
            new EmployeePT("Hung", 33, "Hanoi", "09840**", "Male", 8, 90000),
            new EmployeePT("Duc", 17, "Kien Giang", "09331**", "Male", 8, 65000),
            new EmployeePT("Giau", 19, "Hanoi", "09439**", "Female", 8, 75000),
            new EmployeePT("Linh", 23, "Vung Tau", "09773**", "Female", 8, 90000),
        };
        ShowVectorElements(p, 1, "List of part time employees: ");

        std::vector<Person*> pfhn = Person::getPersonFromHanoi(p);
        ShowVectorElements(pfhn, 1, "List of part time employees from Hanoi: ");

        // The objects initialized by pointers via 'new' operator, therefore must be deallocated with 'delete'
        FreeMemory(p);
    }   // End of the scope, vector 'p' (std::vector<Person*> p) will be destroyed
    
    {
        // Create a vector that contain 'EmployeePT' objects
        std::vector<EmployeePT> p;
        p = {
            EmployeePT("Vi", 26, "Ho Chi Minh", "09771**", "Male", 8, 70000),
            EmployeePT("Hung", 33, "Hanoi", "09840**", "Male", 8, 90000),
            EmployeePT("Duc", 17, "Kien Giang", "09331**", "Male", 8, 65000),
            EmployeePT("Giau", 19, "Hanoi", "09439**", "Female", 8, 75000),
            EmployeePT("Linh", 23, "Vung Tau", "09773**", "Female", 8, 90000),
        };
        ShowVectorElements(p, 1, "List of part time employees: ");

        std::vector<EmployeePT> ewhs = EmployeePT::getMaxSalary(p);
        ShowVectorElements(ewhs, 1, "Part time employees with highest salary: ");

        p.clear(); // Empty the vector 'p', this will trigger destructors of the elements
    }   // End of the scope, vector 'p' (std::vector<EmployeePT> p) will be destroyed
    
    {
        // Create a vector that contain 'EmployeePT' objects
        std::vector<EmployeeFT> p;
        p = {
            EmployeeFT("Vi", 26, "Ho Chi Minh", "09771**", "Male", 30, 1680000),
            EmployeeFT("Hung", 33, "Hanoi", "09840**", "Male", 30, 2700000),
            EmployeeFT("Duc", 17, "Kien Giang", "09331**", "Male", 30, 1950000),
            EmployeeFT("Giau", 19, "Hanoi", "09439**", "Female", 30, 2250000),
            EmployeeFT("Linh", 23, "Vung Tau", "09773**", "Female", 30, 2700000),
        };
        ShowVectorElements(p, 1, "List of full time employees: ");

        std::vector<EmployeeFT> ewhs = EmployeeFT::getMaxSalary(p);
        ShowVectorElements(ewhs, 1, "Full time employees with highest salary: ");

        p.clear(); // Empty the vector 'p', this will trigger destructors of the elements
    }   // End of the scope, vector 'p' (std::vector<EmployeeFT> p) will be destroyed

    return 0;
}