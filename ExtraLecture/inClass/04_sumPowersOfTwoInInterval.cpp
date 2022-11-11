#include <iostream>
bool isPowerOfTwo(unsigned int n) {
	while (n % 2 == 0) {
		n /= 2;
	}
	return n == 1;
}
unsigned int sumOfPowersOfTwoBetween(unsigned int a, unsigned int b) {
	int sum = 0;
	for (int i = a; i <= b; ++i) {
		if (isPowerOfTwo(i)) {
			sum += i;
		}
	}
	return sum;
}
int main() {
	unsigned int a, b;
	std::cin >> a >> b;
	std::cout << sumOfPowersOfTwoBetween(a, b) << std::endl;
	return 0;
}