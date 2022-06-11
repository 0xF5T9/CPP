/*
 *  15.Friend | 2.Friend Function
 */

#include <iostream>
#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Friend\Friend Function\user.h"

int main()
{
    system("cls"); // Clear Vscode Terminal

    // Create 'User' instance
    User user01("user01","pwd01");

    // Execute class function (Access class private properties within class)
    user01.ShowUserInfo();

    std::cout << "--\n";

    // Access class private properties via Getters/Setters
    std::cout << "ID: " << user01.getId() << "\n";
    std::cout << "Username: " << user01.getUsername() << "\n";
    std::cout << "Password: " << user01.getPassword() << std::endl;

    std::cout << "--\n";
    
    // Execute friend function (Access class private properties directly as a class friend)
    ShowUserInfo(user01);
    std::cout << "--\n";
    ChangeUserInfo(user01, "user99", "mypwd99");
    ShowUserInfo(user01);

    return 0;
}