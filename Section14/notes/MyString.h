#include<iostream>

class MyString {
    // Friend declarations
    friend bool operator==(const MyString &lhs, const MyString &rhs); 
    friend MyString operator-(const MyString &obj);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);

    private:
     char *str;
    public:
        MyString();
        MyString(const char *s);
        MyString(const MyString &source);
        ~MyString();
        void display() const;
        int get_length() const;
        const char *get_str() const;

        MyString& operator=(const MyString &rhs);
        MyString& operator+=(const MyString &rhs);
        // MyString& operator=(MyString &&rhs);
        // bool operator==(const MyString &rhs);
        // MyString operator-() const;
};