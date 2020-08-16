/**
 * Check if a map or set contains a key.
 */

#include <iostream>
#include <map>
#include <set>

int main() {
    std::cout << std::boolalpha;

    // Also applies to unordered_map
    std::map<int, char> map {{1, 'a'}, {2, 'b'}};
    std::cout << "Map contains key 2: " << map.contains(2) << "\n";
    std::cout << "Map contains key 123: " << map.contains(123) << "\n";

    // Also applies to unordered_set
    std::set<int> set {1, 2, 3};
    std::cout << "Set contains key 2: " << set.contains(2) << "\n";

    return 0;
}
