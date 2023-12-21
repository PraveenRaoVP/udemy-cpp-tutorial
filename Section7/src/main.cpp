#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> vector1, vector2;
  vector1.push_back(10);
  vector1.push_back(20);
  cout << "vector 1: " << vector1.at(0) << " " << vector1.at(1) << endl;
  cout << "Size of Vector 1: " << vector1.size() << endl;

  vector2.push_back(100);
  vector2.push_back(200);

  cout << "Vector 2: " << vector2.at(0) << " " << vector2.at(1) << endl;
  cout << "Size of Vector 2: " << vector2.size() << endl;

  vector<vector<int>> vector_2d;

  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout << "Vector 2D: " << endl;
  for (auto i : vector_2d) {
    cout << "{ ";
    for (auto j : i) {
      cout << j << " ";
    }
    cout << "}, ";
  }

  vector1.at(0) = 1000;

  cout << endl << "Vector 2D: " << endl;
  for (auto i : vector_2d) {
    cout << "{ ";
    for (auto j : i) {
      cout << j << " ";
    }
    cout << "}, ";
  }

  cout << endl << "Vector 1: " << vector1.at(0) << " " << vector1.at(1) << endl;

  return 0;
}
