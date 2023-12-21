#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>

class Account{
    public:
        double amount;
        std::string name;
        Account();
        Account(double amount, std::string name);
        ~Account();
        void deposit(double amount);
        void withdraw(double amount);
};

#endif // _ACCOUNT_H_