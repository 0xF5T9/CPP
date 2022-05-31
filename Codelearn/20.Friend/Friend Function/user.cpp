#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Friend\Friend Function\user.h"

/* Class: User | Static Definitions  */
int User::UserCount = 0;

/* Class: User | Getters & Setters Definitions */
void User::setId(int id)
{
    this->id = id;
}

int User::getId()
{
    return this->id;
}

void User::setUsername(std::string username)
{
    this->username = username;
}

std::string User::getUsername()
{
    return this->username;
}

void User::setPassword(std::string password)
{
    this->password = password;
}

std::string User::getPassword()
{
    return this->password;
}

/* Class: User | Class Function Definitions */
void User::ShowUserInfo()
{
    // Class's private properties can be accessed directly within class
    std::cout << "ID: " << this->id << "\n";
    std::cout << "Username: " << this->username << "\n";
    std::cout << "Password: " << this->password << std::endl;
}