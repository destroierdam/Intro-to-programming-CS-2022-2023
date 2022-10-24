#include <iostream>
int main() {
	int n;
	std::cin >> n;

	int sum = 0;
	while (n != 0) {
		int digit = n % 10;
		sum += digit;
		n /= 10;
	}

	std::cout << sum << std::endl;
	return 0;
}