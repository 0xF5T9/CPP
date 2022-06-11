#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Subject & Student (Practice 3)\subject.h"

// Class: Subject | Getters & Setters Definitions
void Subject::setNameSub(std::string nameSub)
{
    this->nameSub = nameSub;
}

std::string Subject::getNameSub()
{
    return this->nameSub;
}

void Subject::setPoint(double point)
{
    this->point = point;
}

double Subject::getPoint()
{
    return this->point;
}

void Subject::setNumberCredit(int numberCredit)
{
    this->numberCredit = numberCredit;
}

int Subject::getNumberCredit()
{
    return this->numberCredit;
}

void Subject::setMoneyPerCredit(long moneyPerCredit)
{
    this->moneyPerCredit = moneyPerCredit;
}

long Subject::getMoneyPerCredit()
{
    return this->moneyPerCredit;
}

// Class: Subject | Class Function Definitions
void Subject::display()
{
    std::cout << "Subject name: " << this->nameSub << "\n";
    std::cout << "Number credit: " << this->numberCredit << "\n";
    std::cout << "Price per credit: " << this->moneyPerCredit << "\n";
    std::cout << "Point: " << this->point << std::endl;
}