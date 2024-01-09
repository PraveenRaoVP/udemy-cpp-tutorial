// c++ starter code

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <deque>

int main() {

    std::string s1;
    std::cin >> s1;

    std::deque<std::string> d1;
    for(char s: s1) {
        d1.push_back(std::string(1, s));
    }
    std::deque<std::string> d2;
    std::copy(d1.begin(), d1.end(), std::front_inserter(d2));
    std::cout << std::endl;

    if(d1 == d2) {
        std::cout << "The Given String is a palindrome" << std::endl;
    } else{
        std::cout << "The Given String is not a palindrome" << std::endl;
    }

    return 0;
}