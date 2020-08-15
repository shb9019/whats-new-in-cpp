/**
 * consteval can now be used to generate constant values
 * definitely in compile time.
 */

#include <iostream>
#include <vector>

consteval int power(int base, int pow) {
    if (pow == 0) return 1;
    if (pow == 1) return base;

    int hp = power(base, pow/2);
    int result = hp*hp;

    if (pow%2) result *= base;

    return result;
}

int main() {
    constexpr int twoPowerTen = power(2, 10);
    static_assert(twoPowerTen == 1024);
    std::cout << twoPowerTen << std::endl;
    return 0;
}
