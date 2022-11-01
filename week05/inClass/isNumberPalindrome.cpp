#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int startN = n;
	int newN = 0;
	while (n!=0)
	{
		newN *= 10;
		newN += n % 10;
		n /= 10;
	}
	std::cout << (startN == newN);
	return 0;
}
