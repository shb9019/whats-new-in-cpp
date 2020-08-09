/**
 * Designated initializers in C++
 */

#include <iostream>

struct S {
	int a;
	int b;
	int c;
};

void print(S s) {
	std::cout << "a: " << s.a << std::endl;
	std::cout << "b: " << s.b << std::endl;
	std::cout << "c: " << s.c << std::endl;
}

int main() {
	// This syntax is beautiful!
	// Note: This works with GNU G++ because of its extensions.
	S s {.a = 1, .b = 2, .c = 3};
	print(s);
	return 0;
}
