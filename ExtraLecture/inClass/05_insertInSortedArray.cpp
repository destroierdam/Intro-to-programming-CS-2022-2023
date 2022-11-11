#include <iostream>

int main() {
	int n, k;
	int numbers[100];
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> numbers[i];
	}
	std::cin >> k;
	int i;
	for (i = 0; i < n; i++) {
		if (numbers[i] > k) {
			for (int j = n; j > i; j--) {
				numbers[j] = numbers[j - 1];
			}
			numbers[i] = k;
			break;
		}
	}
	if (i == n) {
		numbers[n] = k;
	}
	for (int i = 0; i < n + 1; i++) {
		std::cout << numbers[i] << " ";
	}
	return 0;
}