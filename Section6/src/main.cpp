#include <iostream>

int main() {
    std::cout << "Frank's Carpet Cleaning Service!" << std::endl;
    std::cout << "Charges:\n\t$25 per small room\n\t$35 per large room\n";
    std::cout << "Sales tax rate is 6%\n";
    std::cout << "Estimates are valid for 30 days\n";

    int small_rooms = 0;
    int large_rooms = 0;

    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> small_rooms;
    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> large_rooms;

    const double small_price = 25.0;
    const double large_price = 35.0;

    const double tax = 0.06;


    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "No. of Small Rooms: " << small_rooms << std::endl;
    std::cout << "No. of Large Rooms: " << large_rooms << std::endl;
    std::cout << "Price per Small Room: $" << small_price << std::endl;
    std::cout << "Price per Large Room: $" << large_price << std::endl;
    double cost = (small_rooms * small_price) + (large_rooms * large_price) ;
    double total = cost + (cost * tax);
    std::cout << "Cost: $" << cost << std::endl;
    std::cout << "Tax: " << tax * cost<< std::endl;
    std::cout << "Total: " << total << std::endl;
    std::cout << "This estimate is valid for 30 days" << std::endl;
    return 0;
}
