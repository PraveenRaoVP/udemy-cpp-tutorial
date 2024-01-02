#include "Dog.h"
#include <iostream>

Dog::Dog() : Animal() {}

Dog::Dog(std::string name, int age) : Animal(name, age) {}

std::string Dog::say_hello() const {
    return "Woof";
}

int Dog::get_num_legs() const {
    return 4;
}