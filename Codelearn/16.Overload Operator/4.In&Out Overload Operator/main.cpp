/*
 *  16.Overload Operator | 4.In&Out Overload Operator
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\21.Overload Operator\In&Out Overload Operator\customer.h"

int main ()
{
    system("cls"); // Clear Vscode Terminal

    // Create customer1 instance and cout its properties via getters & setters
    Customer customer1("TEST");
    std::cout << "Name: " << customer1.getName() << "\nDiscount: " << customer1.getDiscount() << "%\n";
    
    // Set customer1 properties value using In Overload Operator (Expression defined in 'customer.h')
    std::cin >> customer1;
    std::cout << "Name: " << customer1.getName() << "\nDiscount: " << customer1.getDiscount() << "%\n";

    // Create customer2 instance and cout its properties via Out Overload Operator (Expression defined in 'customer.h')
    Customer customer2("");
    std::cout << customer2;

    return 0;
}