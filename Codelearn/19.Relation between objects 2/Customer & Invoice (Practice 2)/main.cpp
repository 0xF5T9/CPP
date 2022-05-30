/*
 *  19.Relation between objects | Customer & Invoice (Practice 2)
 */

#include <iostream>
#include <iomanip>
#include "C:\Users\truon\Desktop\C++\Codelearn\19.Relation between objects 2\Customer & Invoice (Practice 2)\invoice.h"

int main()
{
    system("cls"); // Clear Vscode Terminal

    // Create customer & invoice instances
    Customer customer1("Vi");           // Customer Vi with zero discount
    Customer customer2("Uyen", 20);     // Customer Uyen with 20% discount
    Customer customer3("Vuong", 10);    // Customer Vuong with 10% discount
    Invoice invoice1(customer1, 1000000.0);
    Invoice invoice2(customer2, 1000000.0);
    Invoice invoice3(69, customer3, 1000000.0); // Invoice that come with custom invoice id

    // Cout infos
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Customer " << invoice1.getCustomerName() << " with invoice " << invoice1.getId() << ", have to pay " << invoice1.getAmountAfterDiscount() << "$\n";
    std::cout << "Customer " << invoice2.getCustomerName() << " with invoice " << invoice2.getId() << ", have to pay " << invoice2.getAmountAfterDiscount() << "$\n";
    std::cout << "Customer " << invoice3.getCustomerName() << " with invoice " << invoice3.getId() << ", have to pay " << invoice3.getAmountAfterDiscount() << "$" << std::endl;

    std::cout << "\n";
    invoice1.getAmountAfterDiscount(1);
    invoice2.getAmountAfterDiscount(1);
    invoice3.getAmountAfterDiscount(1);

    return 0;
}