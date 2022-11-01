#include <iostream>
int main() 
{
	int n;
	std::cout << "number";
	std::cin >> n;
	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < n; j++)
			if ((j == 0 && i == (n - 1)) || 
				(j == (n - 1) && (i == 0)) || 
				(i == 0 && j == 0) || 
				(i == (n - 1) && j == (n - 1 ))) 
				std::cout << "+"; 
			else 
			{
				std::cout << "#"; 
			}
		std::cout << std::endl; 
	}



	return 0;
}
