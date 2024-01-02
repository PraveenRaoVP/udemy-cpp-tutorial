#include "Animal.h"

Animal::Animal() : name{"Unknown"}, age{0} {}

std::string Animal::get_name() const {
    return name;
}

int Animal::get_age() const {
    return age;
}

void Animal::set_name(std::string name) {
    this->name = name;
}

void Animal::set_age(int age) {
    this->age = age;
}

std::string Animal::say_hello() const {
    return "Animal says hello!";   
}

int Animal::get_num_legs() const {
    return 0;
}   