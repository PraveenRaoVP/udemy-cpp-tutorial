#ifndef _DOG_H_
#define _DOG_H_
#include "Animal.h"

class Dog: public Animal {
    public:
        Dog();
        Dog(std::string name, int age);
        std::string say_hello() const override;
        int get_num_legs() const override;
};


#endif // _DOG_H_