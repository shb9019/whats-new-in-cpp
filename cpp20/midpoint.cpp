/**
 * Calculate midpoint between two numbers without overflow.
 */

#include <iostream>
#include <climits>
#include <numeric>

int main() {
    int a = INT_MAX - 2;
    int b = INT_MAX;
    std::cout << "Midpoint of " << a << " " << b << " = "
              << std::midpoint(a, b) << "\n";
    return 0;
}
