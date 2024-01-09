#include<iostream>

#define SQUARE(x) ((x)*(x))


class MacroLesson {
    public:
        void run() {
            std::cout << "MacroLesson::run()" << std::endl;
            std::cout << SQUARE(5) << std::endl;
            std::cout << SQUARE(5+5) << std::endl;
            std::cout << SQUARE(5.5) << std::endl;
        }
    private:
        int x {5};
};