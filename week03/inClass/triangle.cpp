#include <iostream>
int main()
{
	int a, b, c;
	bool sushtestvuva = true;
	std::cin >> a >> b >> c;

	if (a <= 0 || b <= 0 || c <= 0) {
		sushtestvuva = false;
		std::cout << "Nekorekten vhod :(";
		return 0;
	}
	if (a + c <= b) {
		sushtestvuva = false;
	}
	if (a + b <= c) {
		sushtestvuva = false;
	}
	if (c + b <= a) {
		sushtestvuva = false;
	}
	
	if (sushtestvuva) {
		std::cout << "Ima takuv";
	}
	else {
		std::cout << "Nqma takuv";
	}
}