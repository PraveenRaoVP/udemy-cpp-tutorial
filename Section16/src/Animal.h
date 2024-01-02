#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>

class Animal {
    private:
        std::string name;
        int age;
    public:
        Animal();
        Animal(const std::string name, int age) : name{name}, age{age} {}
        std::string get_name() const;
        int get_age() const;
        void set_name(std::string name);
        void set_age(int age);

        virtual std::string say_hello() const = 0;
        virtual int get_num_legs() const = 0;
};

#endif // _ANIMAL_H_