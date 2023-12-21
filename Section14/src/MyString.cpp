#include "MyString.h"
#include <cstring>
#include <iostream>

MyString::MyString() {
    str = nullptr;
}

MyString::MyString(const char* s) {
    if (s == nullptr) {
        str = nullptr;
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

MyString::~MyString() {
    std::cout << "Destructor called for: " << str << std::endl;
    delete [] str;
}

void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int MyString::get_length() const {
    return std::strlen(str);
}

const char* MyString::get_str() const {
    return str;
}

// Copy constructor
MyString::MyString(const MyString &source) : MyString(source.str) {
    std::cout << "Copy constructor used" << std::endl;

    if(source.str == nullptr) {
        str = nullptr;
    } else {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
    }
}

// Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    if(this == &rhs) {
        return *this;
    }

    delete [] str;

    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);

    return *this;
} 

// Make lowercase
MyString &MyString::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);

    for(size_t i {0}; i < std::strlen(str)+1; i++) {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp {buff};
    delete [] buff;
    return temp;
}

// Concatenate
MyString &MyString::operator+(const MyString &rhs)  {
    char *buff = new char[std::strlen(this->str) + std::strlen(rhs.str)+1];
    std::strcpy(buff, this->str);
    std::strcat(buff,rhs.str);

    delete [] this->str;
    str = buff;
    return *this;
}

// Equals
bool MyString::operator==(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

// Greater than
bool MyString::operator>(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) > 0);
}

// less than
bool MyString::operator<(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str) < 0);
}

// Repeat operator
MyString &MyString::operator*(int n) const {
    char *buff = new char[std::strlen(str) * n + 1];
    std::strcpy(buff, str);

    for(int i{1}; i < n; i++) {
        std::strcat(buff, str);
    }

    MyString temp {buff};
    delete [] buff;
    return temp;
}

