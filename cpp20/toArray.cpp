/**
 * Convert an "array-like" type to an array.
 */

#include <iostream>
#include <array>
#include <vector>

int main() {
    auto charArray = std::to_array("foo"); // returns `std::array<char, 4>`
    auto intArray = std::to_array<int>({1, 2, 3}); // returns `std::array<int, 3>`

    int a[] = {1, 2, 3};
    auto intArray2 = std::to_array(a); // returns `std::array<int, 3>`

    return 0;
}
