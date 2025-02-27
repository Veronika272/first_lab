#include <iostream>
#include "utils.hpp"

int main() {
	int a, b;
	std::cout << "Your 1 number";
	std::cin >> a;
	std::cout << "Your 2 number";
	std::cin >> b;

	std::cout << add(a, b) << std::endl;
	std::cout << sub(a, b) << std::endl;

	int result = multiply(a, b);
	std::cout << "Resultat: " << result << std::endl;

	return 0;
}
