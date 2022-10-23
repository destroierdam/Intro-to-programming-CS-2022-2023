#include <iostream>
#include <cmath>

int main()
{
	unsigned int m, n, a;
	std::cin >> m >> n >> a;
	const int width = std::ceil((float)m / a);
	const int height = std::ceil((float)n / a);
	const int result = width * height;
	std::cout << result;

	return 0;
}
 