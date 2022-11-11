#include <iostream>

int main() {
	int n, cnt=0;
	int numbers[100];
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> numbers[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (numbers[i] > numbers[j]) {
				cnt++;
				std::cout << numbers[i] << ", " << numbers[j]<<std::endl;
			}
		}
	}
	std::cout << cnt;
	return 0;
}
