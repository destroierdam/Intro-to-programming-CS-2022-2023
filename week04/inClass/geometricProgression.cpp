#include <iostream>
int main() {
	double a, num, sum = 1;
	int n;
	std::cin >> a >> n;
	num = a;
	for (int i = 1; i <= n; ++i)
	{
		sum += num;
		num *= a;
	}
	std::cout << sum;
	return 0;
}