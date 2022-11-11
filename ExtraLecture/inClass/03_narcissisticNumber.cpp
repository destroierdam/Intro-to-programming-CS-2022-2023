#include <iostream>
int pow(int base, int power) {
	int result = 1;
	for (int i = 0; i < power; i++) {
		result *= base;
	}
	return result;
}
int numberOfDigits(int n) {
	int digitCount = 0;
	while (n > 0) {
		digitCount++;
		n /= 10;
	}
	return digitCount;
}
int sumPowersOfDigits(int n) {
	int digitCount = numberOfDigits(n);
	int digitSum = 0;
	while (n > 0) {
		digitSum += pow(n % 10, digitCount);
		n /= 10;
	}
	return digitSum;
}
int main() {
	int n;
	std::cin >> n;
	int digitSum = sumPowersOfDigits(n);
	if (digitSum == n) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}
	return 0;
}