#include<iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() {
    std::cout << "SavingsAccount constructor called" << std::endl;
}

SavingsAccount::~SavingsAccount() {
    std::cout << "SavingsAccount destructor called" << std::endl;
}

void SavingsAccount::deposit(double amount) {
    std::cout << "SavingsAccount deposit called with " << amount << std::endl;
}

void SavingsAccount::withdraw(double amount) {
    std::cout << "SavingsAccount withdraw called with " << amount << std::endl;
}
