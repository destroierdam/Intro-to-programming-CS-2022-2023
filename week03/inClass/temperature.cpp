#include <iostream>
#include <iomanip>

int main()
{
	double C;
	double F;
	double Temp; 
	char inputTempType;
	std::cout << "TempType:";
	std::cin >> inputTempType;
	std::cout << "temp"; 
	std::cin >> Temp; 
	
	if (inputTempType == 'C')
	{
		F = ((Temp - 32) * 5) / 9;
		std::cout << F;
	}
	else if (inputTempType == 'F')
	{
		C = (((Temp * 9) / 5) + 32);
		std::cout << C;
	}
	else 
	{
		std::cout << "error";
		return 0; 
	
	}

	

	return 0;
}
 