#include <iostream>

class Employee {
public:
    Employee();
    ~Employee();
};

Employee::Employee() {
    std::cout << "Employee constructor called" << std::endl;
}

Employee::~Employee() {
    std::cout << "Employee destructor called" << std::endl;
}
