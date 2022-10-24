#include <iostream>
int main() {
	int number, sum = 0;
	
	do
	{
		std::cin >> number;
		sum += number;
	} while (number != 0);
	
	/*
	for ( ; std::cin >> number, number; ) {
		sum += number;
	}
	*/

	/*std::cin >> number;
	sum += number;
	while (number != 0)
	{
		std::cin >> number;
		sum += number;
	} */
	std::cout << sum << std::endl;
	return 0;
}