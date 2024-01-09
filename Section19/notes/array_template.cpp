#include <iostream>
#include <vector>

template <typename T, size_t size>
class Array {
private:
    T items[size];

public:
    Array() {
        for (size_t i = 0; i < size; i++) {
            items[i] = 0;
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const Array<T, size>& arr) {
        os << "[ ";
        for (const auto& item : arr.items) {
            os << item << " ";
        }
        os << "]" << std::endl;
        return os;
    }

    // Display items in the array from specific indices as [] format
    // Eg. [ 1 2 3 4 5 6 7 8 9 10 ]
    // arr(0,3) => [ 1 2 3 ] using operator overloading
    std::vector<T> operator()(size_t start = 0, size_t end = size - 1) {
        std::vector<T> result;
        if(end > size - 1) {
            std::cerr << "Index out of bounds" << std::endl;
            throw std::out_of_range("Index out of bounds");
        }
        for (size_t i = start; i <= end && i < size; i++) {
            result.push_back(items[i]);
        }
        return result;
    }

    void setItems(T arr[]) {
        for (size_t i = 0; i < size; i++) {
            items[i] = arr[i];
        }
    }

    void fill(T value) {
        for (size_t i = 0; i < size; i++) {
            items[i] = value;
        }
    }

    T& operator[](size_t index) {
        if (index >= size) {
            std::cerr << "Index out of bounds" << std::endl;
            throw std::out_of_range("Index out of bounds");
        }
        return items[index];
    }
};

int main() {
    Array<int, 10> arr;
    int arrItems[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Create a named array variable
    arr.setItems(arrItems); // Pass the named array variable to setItems()
    std::cout << arr << std::endl;

    // Use operator() to display a subset of the array
    std::vector<int> subset = arr(1, 5);
    std::cout << "[ ";
    for (const auto& item : subset) {
        std::cout << item << " ";
    }
    std::cout << "]" << std::endl;

    std::vector<int> subset2 = arr(3);
    std::cout << "[ ";
    for (const auto& item : subset2) {
        std::cout << item << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
