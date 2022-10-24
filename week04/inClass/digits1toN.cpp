#include <iostream>
int main() {
	int n;
	std::cin >> n;
	/*while (n != 0)
	{
		std::cout << n << std::endl;
		n--;
	} */
	for (int i = 1; i <= n; i++)
	{
		std::cout << i << " ";
	}
	return 0;
}