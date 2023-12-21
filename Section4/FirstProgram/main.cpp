#include <iostream>
#include "summa.h"

int main() 
{
    int favorite_number;
    printSumma();
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    
    return 0;
}
