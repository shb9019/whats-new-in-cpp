/**
 * Check if a string starts or ends with a specific string.
 */

#include <iostream>
#include <string>

int main() {
    std::string s = "foobar";
    
    std::cout << std::boolalpha;
    std::cout << s << " starts with foo: " << s.starts_with("foo") << "\n";
    std::cout << s << " starts with fog: " << s.starts_with("fog") << "\n";
    std::cout << s << " ends with bar: " << s.ends_with("bar") << "\n";

    return 0;
}
