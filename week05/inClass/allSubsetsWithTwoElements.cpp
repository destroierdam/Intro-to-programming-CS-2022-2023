#include <iostream>
int main() {
	const int MAX_N = 100;
	int arr[MAX_N], n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
		std::cin >> arr[i];

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
			std::cout << " {" << arr[i] << " , " << arr[j] << " }" << std::endl;
	}
	return 0;
}
