#include <iostream>

// generic programming with function templates
template <typename T>
T max(T a, T b) {
    return a>b ? a : b;
}

struct Person {
    std::string name;
    int age;
    bool operator>(const Person& rhs) const {
        return this->age > rhs.age;
    }
};

std::ostream& operator<<(std::ostream& os, const Person& p) {
    os << p.name;
    return os;
}

int main() {
    std::cout << max<int>(2, 3) << std::endl;
    std::cout << max<double>(2.0, 3.0) << std::endl;
    std::cout << max<char>('a', 'b') << std::endl;
    std::cout << max<std::string>("Hello", "Hello") << std::endl;

    Person p1 {"Larry", 18};    
    Person p2 {"Moe", 20};
    Person p3 = max(p1, p2);
    std::cout << p3.name << " is older" << std::endl;
    return 0;
}
