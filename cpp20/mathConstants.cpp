/**
 * C++ 20 has inbuilt numerical constants in <numbers>.
 */

#include <iostream>
#include <iomanip>
#include <numbers>

int main() {
    std::cout << std::fixed << std::setprecision(20);

    std::cout << "e:\t" << std::numbers::e << std::endl;
    std::cout << "log2e:\t" << std::numbers::log2e << std::endl;
    std::cout << "log10e:\t" << std::numbers::log10e << std::endl;
    std::cout << "pi:\t" << std::numbers::pi << std::endl;
    std::cout << "phi:\t" << std::numbers::phi << std::endl;

    return 0;
}
