/**
 * This example demonstrates using multiple concepts
 * for the same argument.
 */

#include <iostream>
#include <concepts>
#include <vector>

// Concept to check if T is an arithmetic
template<typename T>
concept arithmetic = std::is_arithmetic<T>::value;

template<std::incrementable T>
T increment(T t) requires arithmetic<T> {
	++t;
	return t;
}

int main() {
	int two = increment(1);
	char b = increment('a');
	std::cout << two << " " << b << std::endl;

	// Though vector iterator is incrementable,
	// it is not an arithmetic and hence
	// does not compile

	// std::vector<int> a({1, 2, 3, 4, 5});
	// auto it = a.begin();
	// auto jt = increment(it);
	
	return 0;
}
