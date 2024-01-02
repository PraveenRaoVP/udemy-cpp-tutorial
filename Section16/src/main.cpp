#include <iostream>
#include "Dog.h"
#include "Animal.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    Animal *dog = new Dog("Fido", 3);
    cout << dog->say_hello() << endl;
    cout << dog->get_num_legs() << endl;
    return 0;
}
