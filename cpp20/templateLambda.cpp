/**
 * We can now use template variables for lambda
 * expression parameters
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

template<typename T>
concept Arithmetic = std::is_arithmetic<T>::value;

int main() {
	// Greater control with the use of template variables
	auto iterateAndPrint = []<Arithmetic T>(std::vector<T> const& v) {
		std::for_each(v.begin(), v.end(), [](auto& el) {
			std::cout << el << " ";
		});
		std::cout << std::endl;
	};

	// Does not work since String is not an Arithmetic
	// std::vector<std::string> strings({"A", "B", "C", "D", "E"});
	// iterateAndPrint(strings);

	std::vector ints{8, 3, 5, 6, 1};
	iterateAndPrint(ints);
	return 0;
}
