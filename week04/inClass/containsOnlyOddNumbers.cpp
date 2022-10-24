#include <iostream>
int main() {
	int n;
	std::cin >> n;
	bool containsOnlyOddNumbers = true;
	for (int i = 0; i < n; i++)
	{
		int currentNumber;
		std::cin >> currentNumber;
		if (currentNumber % 2 == 0)
		{
			containsOnlyOddNumbers = false;
		}
		
	}
	if (containsOnlyOddNumbers)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return 0;
}