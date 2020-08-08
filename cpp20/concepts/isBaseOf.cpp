/**
 * Example to check if a class inherits from
 * another class.
 */

#include <iostream>
#include <concepts>
#include <typeinfo>

// This concept checks if the class U inherits T
template <class T, class U>
concept Derived = std::is_base_of<U, T>::value;

class BaseClass {
	int a;
};

class DerivedClass : BaseClass {
	int b;
};

class DoesNotDeriveClass {
	int c;
};

// Add template constraint to only accept classes inheriting BaseClass
template<Derived<BaseClass> T>
void f(T t) {
	// typeid will print the mangled class name
	std::cout << typeid(t).name() << " inherits from BaseClass!\n";
}

int main() {
	DerivedClass d;
	f(d);

	// Will not compile since concepts are runtime checks
	// DoesNotDeriveClass e;
	// f(e);
	return 0;
}
