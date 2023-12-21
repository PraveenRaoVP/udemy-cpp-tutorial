#include<iostream>

#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
    private:
        char *str;

    public:
        MyString();
        MyString(const char *s);
        void display() const;
        int get_length() const;
        const char *get_str() const;
        ~MyString();

        // Copy constructor
        MyString(const MyString &source);

        // Copy assignment
        MyString &operator=(const MyString &rhs);
        MyString &operator-() const; // lowercase
        MyString &operator+(const MyString &rhs) const; // concatenate
        bool operator==(const MyString &rhs) const; // equals
        bool operator>(const MyString &rhs) const; // greater than
        bool operator<(const MyString &rhs) const; // less than
        MyString &operator*(int n) const; //repeat operator

};

#endif // _MYSTRING_H_