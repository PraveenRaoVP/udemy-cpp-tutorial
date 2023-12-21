#include <iostream>
#include "MyString.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    MyString larry {"larry"};

    larry.display();
    larry = -larry;
    larry.display();

    MyString moe {"moe"};
    MyString stooge = larry + "moe";
    stooge.display();

    cout << (larry == moe) << endl;
    cout << (larry > moe) << endl;



    return 0;
}
