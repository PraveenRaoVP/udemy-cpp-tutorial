#include "Account.h"
#include <iostream>

Account::Account(double amount, std::string name) {
    this->name = name;
    this->amount = amount;
}

Account::Account()
{
    std::cout << "Account constructor called" << std::endl;
    name = "";
    amount = 0.0;
}

Account::~Account()
{
    std::cout << "Account destructor called" << std::endl;
}

void Account::deposit(double amount)
{
    std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount)
{
    std::cout << "Account withdraw called with " << amount << std::endl;
}
