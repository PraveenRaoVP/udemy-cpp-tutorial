// c++ starter code

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <cctype>

class Person {
    std::string name;
    int age;
    public:
        Person() = default;
        Person(std::string name, int age)
            : name{name}, age{age} {}
        bool operator<(const Person &rhs) const {
            return this->age < rhs.age;
        }
        bool operator==(const Person &rhs) const {
            return (this->name == rhs.name && this->age == rhs.age);
        }
};

// find an element in a container using the find function std::find(container.begin(), container.end(), value)
void find_a_number(int num) {
    std::vector<int> vec {1,2,3,4,5};
    auto location = std::find(vec.begin(), vec.end(), num);

    if(location != vec.end()) {
        std::cout << num << " found at position " << (location - vec.begin()) << std::endl;
    } else{
        std::cout << num << " not found" << std::endl;
    }
}

// to test the count function std::count(container.begin(), container.end(), value)
void count(int num) {
    std::vector<int> vec {1,2,3,4,5,1,2,1};
    int num_occurences = std::count(vec.begin(), vec.end(), num);
    std::cout << num << " occurs " << num_occurences << " times" << std::endl;   
}

// to test the count_if function std::count_if(container.begin(), container.end(), predicate)
void count_if_even() {
    std::vector<int> vec {1,2,3,4,5,1,2,1};
    int num_of_even_numbers = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0;});
    std::cout << "There are " << num_of_even_numbers << " even numbers" << std::endl;
}

// to test the replace function std::replace(container.begin(), container.end(), old_value, new_value)
void replace_test() {
    std::vector<int> vec {1,2,3,4,5,1,2,1};
    for(auto i: vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::replace(vec.begin(), vec.end(), 1, 100);
    for(auto i: vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

}

// test the all_of function which returns true if all the elements in the container satisfy the predicate
void all_of_test() {
    std::vector<int> vec {1,2,3,4,5,1,2,1};
    if(std::all_of(vec.begin(), vec.end(), [](int x) { return x > 3; })) {
        std::cout << "All the elements are > 3" << std::endl;
    } else {
        std::cout << "Not all the elements are > 3" << std::endl;
    }
}

// std::transform(container.begin(), container.end(), container.begin(), function (unary or binary))
void string_transform_test() {
    std::string str1 {"This is a test"};
    std::cout << "Before transform: " << str1 << std::endl; 
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::cout << "After transform: " << str1 << std::endl;
}

int main() {
    // replace_test();
    // all_of_test();
    string_transform_test();
    return 0;
}