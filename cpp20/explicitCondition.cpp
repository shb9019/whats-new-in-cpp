/**
 * Explicit keyword can now have conditions
 */

#include <iostream>

template <typename T>
class Player {
public:
    T x;

    explicit(!std::is_integral_v<T>) Player(T px) {
        x = px;
    }
};

int main() {
    Player player1 = 10;
    std::cout << player1.x << std::endl;
    
    // Implicit conversion is blocked. Does not work.
    // Player player2 = "My name is Jeff";
    // std::cout << player2.x << std::endl;

    Player player2 = Player("My name is Jeff");
    std::cout << player2.x << std::endl;
    return 0;
}
