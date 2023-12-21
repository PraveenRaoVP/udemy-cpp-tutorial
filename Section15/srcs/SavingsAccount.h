#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class SavingsAccount: public Account{ 
    public:
        SavingsAccount();
        ~SavingsAccount();
        void deposit(double amount);
        void withdraw(double amount);
};

#endif // _SAVINGS_ACCOUNT_H_
