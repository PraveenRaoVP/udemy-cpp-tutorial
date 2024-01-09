// c++ starter code

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
    public:
        Person() = default;
        Person(std::string name, int age) : name {name}, age {age} {}
        bool operator<(const Person &rhs) const{
            return this->age < rhs.age;
        }
        bool operator==(const Person &rhs) const {
            return (this->name == rhs.name  && this->age == rhs.age);
        }
        std::string get_name() {
            return name;
        }
        int get_age() {
            return age;
        }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

void display2(const std::vector<int> &vec) {
    std::cout << "[ ";
    for (auto const &i: vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void display3(const std::vector<int> &vec) {
    std::cout << "[ ";
    std::for_each(vec.begin(), vec.end(), [](int x) { 
        std::cout << x << " "; 
    });
    std::cout << "]" << std::endl;
}

template <typename T>
void display4(const std::vector<T> &vec) {
    std::cout << "[ ";
    std::for_each(vec.begin(), vec.end(), [](T x) {
        std::cout << x << " ";
    });
    std::cout << "]" << std::endl;
}



int main() {
    std::vector<int> vec1 {1,2,3,4,5};
    display3(vec1);
    display2(vec1);

    std::vector<Person> vec_person {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}
    };
    Person p {"Frank", 18};
    std::cout << p << std::endl;
    display4(vec_person);
    return 0;
}

