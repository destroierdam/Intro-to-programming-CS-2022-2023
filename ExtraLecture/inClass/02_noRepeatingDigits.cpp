#include <iostream>
bool containsDigitMoreThanOnce(int number) {
	int arr[10] = { 0 };
	while (number > 0) {
		int lastDigit = number % 10;
		number = number / 10;
		arr[lastDigit]++;
		if (arr[lastDigit] > 1) {
			return true;
		}
	}
	return false;
}
bool containsDigitNotMoreThanOnce(int n) {
	return containsDigitMoreThanOnce(n) == false;
}
int main() {
	int n;
	std::cin >> n;
	for (int j = 1; j <= n; j++) {
		if (containsDigitNotMoreThanOnce(j * j)) {
			std::cout << j << " " << j * j << std::endl;
		}
	}
	return 0;
}