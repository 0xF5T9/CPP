#include <iostream>

class Account {
private:
    int id;
    std::string name;
    int balance;
public:
    Account(int id, std::string name) {
        this->id = id;
        this->name = name;
    }
    Account(int id, std::string name, int balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
    int getId() {
        return this->id;
    }
    void setName(std::string name) {
        this->name = name;
    }
    std::string getName() {
        return this->name;
    }
    int getBalance() {
        return this->balance;
    }
    void deposit(int amount) {
        this->balance += amount;
    }
    void withdraw(int amount) {
        if (this->balance < amount) 
        {
            std::cout << "That amount exceeds your current balance." << std::endl;
        }
        else 
        {
            this->balance -= amount;
        }
        
    }
    void display() {
        std::cout << "Id: " << this->id << std::endl;
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Balance: " << this->balance << std::endl;
    }
};