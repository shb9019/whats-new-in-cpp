/**
 * Spans are for vectors and arrays, what
 * string_view is for string.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <span>

void incrementAll(std::span<int> v, int index) {
    if (v.size() == index) return;
    v[index]++;
    return incrementAll(v, index + 1);
}

int main() {
    std::vector<int> v;
    v.resize(100000, 1);
    incrementAll(v, 0);
    return 0;
}
