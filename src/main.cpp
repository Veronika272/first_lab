#include <iostream>
#include "utils.hpp"

int main() {
	int a, b;
	std::cout << "Your first number";
	std::cin >> a;
	std::cout << "Your second number";
	std::cin >> b;

	std::cout << add(a, b) << std::endl;
	std::cout << sub(a, b) << std::endl;

	return 0;
}
