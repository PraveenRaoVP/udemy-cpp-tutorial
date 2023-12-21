#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    cout << "Account class " << endl;
    cout << "================" << endl;
    Account acc {};
    acc.deposit(100);
    acc.withdraw(50);  

    cout << endl;

    Account *p_account {nullptr};
    p_account = new Account();
    p_account->deposit(1000);
    p_account->withdraw(500);
    delete p_account;

    cout << endl << "Savings Account class " << endl;

    SavingsAccount sav_acc {};
    sav_acc.deposit(1000);
    sav_acc.withdraw(500);

    cout << endl;

    SavingsAccount *p_sav_account {nullptr};
    p_sav_account = new SavingsAccount();
    p_sav_account->deposit(1000);
    p_sav_account->withdraw(500);
    delete p_sav_account;

    cout << endl;


    return 0;
}
