/**
 * C++ 20 allows one to have class type as non-type template paramters.
 * But, the class has to be structural.
 */

#include <iostream>
#include <string>

class Soldier {
// private:
    // Cannot have private members,
    // the class will not be structural.
    // int u;
public:
    int x, y, z;
    // Since non-type templates are resolved during compile time,
    // a constexpr constructor is needed.
    constexpr Soldier(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};

// This can take a class type as a non-type template argument in C++20
template<Soldier soldier>
class Printer {
public:
    void print() {
        std::cout << soldier.x << " " << soldier.y << " " << soldier.z << std::endl;
    }
};

int main() {
    Printer<Soldier{18, 20, 25}> printer;
    printer.print();
    return 0;
}
