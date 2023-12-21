#include <cctype>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

char menu() {
  char option;
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "Q - Quit" << endl;
  cout << "Enter your choice: ";
  cin >> option;
  return option;
}

int main() {
  vector<int> v;

  char option = menu();
  option = toupper(option);

  switch (option) {
  case 'P':
    cout << "Printing Numbers:-" << endl;
    break;
  case 'A':
    int number;
    cout << "Enter a number:-";
    cin >> number;
    v.push_back(number);
    cout << number << " added." << endl;
    break;
  case 'M':
    cout << "Mean of the numbers = " << endl;
    break;
  }

  return 0;
}
