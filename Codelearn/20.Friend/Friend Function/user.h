#pragma once
#include <iostream>

class User
{
private:

    /*  Static Properties (Private)  */
    static int UserCount;

private:

    /* Class Properties (Private)  */
    int id;
    std::string username;
    std::string password;

public:

    /*  Constructors & Destructor  */
    User(std::string username, std::string password): id(UserCount), username(username), password(password) {UserCount++;};
    ~User() {UserCount--;};

public:

    /*  Getters & Setters  */
    void setId(int id);
    int getId();
    void setUsername(std::string username);
    std::string getUsername();
    void setPassword(std::string password);
    std::string getPassword();

public:

    /*  Class Functions  */
    void ShowUserInfo();

public:

    /*  Class Friends  */
    /*
     * Recognize "ShowUserInfo(User user)" function as a friend and alllow it to access class private properties
     * "ShowUserInfo(User user)" is not a member of class "User" and is a standalone function
     */
    friend void ShowUserInfo(User user);
    friend void ChangeUserInfo(User& user, std::string username, std::string password); 

};

/*
 * This cause "Multiply definitions error"
 * https://stackoverflow.com/questions/45667393/include-issue-multiple-definition-first-defined-here
 * https://stackoverflow.com/questions/17904643/error-with-multiple-definitions-of-function
void ShowUserInfo(User user) 
{
    std::cout << "ID: " << user.id << "\n";
    std::cout << "Username: " << user.username << "\n";
    std::cout << "Password: " << user.password << std::endl;
}
*/


// Inline allows the function to be declared in multiple translation units.
inline void ShowUserInfo(User user) 
{
    /*
     * The function can access class private properties directly without getters/setters because it is a friend function of the class
     */
    std::cout << "ID: " << user.id << "\n";
    std::cout << "Username: " << user.username << "\n";
    std::cout << "Password: " << user.password << std::endl;
}

// Change class private properties value directly | "User user" for read-only and "User& user" for read & write tasks
inline void ChangeUserInfo(User& user, std::string username, std::string password)
{
    user.username = username;
    user.password = password;
}