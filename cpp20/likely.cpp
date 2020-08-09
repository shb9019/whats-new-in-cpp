/**
 * Add likely and unlikely hints to help compiler perform optimizations.
 */

#include <iostream>
#include <algorithm>
#include <chrono>
#include <random>

int main() {
	std::random_device device;
	std::mt19937 rng(device());
	std::uniform_real_distribution<double> dis(0.0, 1.0);

	int upperHalfCount = 0;
	int exactCount = 0;

	// Note: In this particular case, the effect is not visible
	// due to branch predictions.
	auto test = [&]() {
		double value = dis(rng); 

		if (value >= 0.5) [[likely]] {
			upperHalfCount++;
		} else if (value == 0 || value == 1) [[unlikely]] {
			exactCount++;
		}
	};

	int repetetions = 10000000;
	while (repetetions--) {
		test();
	}

	std::cout << upperHalfCount << " " << exactCount << std::endl;
	return 0;
}
