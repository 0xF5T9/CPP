/*
 *  Debug Project
 */

#include "func.h"

int main()
{
    /* Overload Operator Test
    Transport t1("", "", 0, 0);
    std::cout << t1;
    std::cin >> t1;
    std::cout << t1;
    */
    /* Overload Operator Test
    Car c1("Vina", "X01", 2000, 60, 0, "");
    std::cout << c1;
    std::cin >> c1;
    std::cout << c1;
    */
    system("cls"); // Clear Vscode Terminal
    std::cout << std::fixed << std::setprecision(2); // Set precision for double entities

    // Create 'Car' instance via 'Transport' pointer (Up-casting)
    Transport* c1 = new Car("Vinfast", "LUX SA2.0", 2021, 240, 4, "vEngine-2.0");
    c1->display(1);
    delete c1;

    // Create 'Car' vector with cars
    std::vector<Car> c = {
        Car("Vinfast", "LUX SA2.0", 2021, 240, 2, "vEngine-2.0"),
        Car("Vinfast", "SUV SA1.0", 2017, 190, 4, "vEngine-1.0"),
        Car("Vinfast", "PLUS SS1.0", 2020, 230, 4, "vEngine-2.0"),
        Car("Vinfast", "VIP RE4.0", 2022, 270, 1, "vEngine-3.0"),
        Car("Vinfast", "VIP RE3.0", 2022, 270, 1, "vEngine-2.0"),
        Car("Vinfast", "ZET IN5.0", 2019, 270, 4, "vEngine-2.0")
    };

    // Get vector containing cars with the most seats
    std::vector<Car> topseatcars = Car::getTopSeatCars(c);
    std::cout << "==[TOP SEAT CARS]==\n";
    ShowVectorElements(topseatcars);

    // Get vector containing cars with the most high speed
    std::vector<Car> topspeedcar = Car::getTopSpeedCars(c);
    std::cout << "==[TOP SPEED CARS]==\n";
    ShowVectorElements(topspeedcar);

    return 0;
}