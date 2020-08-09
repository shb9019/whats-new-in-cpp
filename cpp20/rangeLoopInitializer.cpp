/**
 * Range loops can now have initializers.
 */

#include <iostream>
#include <vector>

int main() {
	for (std::vector v{10, 20, 35, 80}; auto& e : v) {
		e += 10;
		std::cout << e << " ";
	}
	std::cout << std::endl;
	return 0;
}
