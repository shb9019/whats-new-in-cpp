/**
 * This example illustrates overloading of concepts.
 */

#include <concepts>
#include <type_traits>
#include <iostream>

template <class T>
concept Integral = std::is_integral<T>::value;
template <class T>
concept SignedIntegral = Integral<T> && std::is_signed<T>::value;
template <class T>
concept UnsignedIntegral = Integral<T> && !SignedIntegral<T>;

template<SignedIntegral T>
void printType(T t) {
	std::cout << t << " is a signed integral.\n";
}

template<UnsignedIntegral T>
void printType(T t) {
	std::cout << t << " is an unsigned integral.\n";
}

int main() {
	int a = -100;
	int b = 10;
	uint c = 100;

	printType(a);
	printType(b);
	printType(c);
}
