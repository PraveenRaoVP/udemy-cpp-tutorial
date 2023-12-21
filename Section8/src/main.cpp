#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int cents;
  int dollars, quarters, dimes, nickels, pennies;
  cout << "Enter the amount in cents: ";
  cin >> cents;
  cout << "You can provide the change as follows: " << endl;
  dollars = cents / 100;
  cents %= 100;
  quarters = cents / 25;
  cents %= 25;
  dimes = cents / 10;
  cents %= 10;
  nickels = cents / 5;
  cents %= 5;
  pennies = cents;

  cout << "Dollars: " << dollars << endl;
  cout << "Quarters: " << quarters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Nickels: " << nickels << endl;
  cout << "Pennies: " << pennies << endl;
  return 0;
}
