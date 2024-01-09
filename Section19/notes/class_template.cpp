#include<iostream>

template <typename T>
class Item {
    private:
        std::string name;
        T value;

    public:
        Item(std::string name, T value) : name {name}, value {value} {

        }

        std::string get_name() const {
            return name;
        }
        T get_value() const {
            return value;
        }
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Item<T>& item) {
    os << item.get_name() << " " << item.get_value() << std::endl;
    return os;
}

int main() {
    Item<int> item1 {"Frank", 100};
    std::cout << item1;
    Item<float> item2 {"Frank", 100.5};
    std::cout << item2;
    Item<std::string> item3 {"Frank", "Professor"};
    std::cout << item3;
    return 0;
}