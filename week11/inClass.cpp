#include <iostream>
#include <cassert>
#include <typeinfo>
void swap(int* left, int* right) {
	int c = *left;
	*left = *right;
	*right = c;
}
int exchange(int *a, int *b) {
	int temp = *a;
	*a = *b;
	return temp;
}

void print(int* begin, int* end) {
	while (begin != end) {
		std::cout << *begin << " ";
		begin++; 
	}
}
void print(int * arr, std::size_t size) {
	for (std::size_t i = 0; i < size; ++i) {
		std::cout << arr[i] << ' ';
	}
}
int main() {
	int arr[5]={ 1, 2, 3, 4, 5 };
	int* begin = arr;   // &arr[0];
	int* end = arr + 5; // &arr[5];

	// print(begin, end);
	print(arr, 5);
	std::cout << sizeof(begin) << '\n';
	std::cout << typeid(begin).name() << '\n';
	return 0; 
} 


/*
	int arr[5]={ 1, 2, 3, 4, 5 };
	int* begin = arr;   //&arr[0];
	int* end = arr + 5; // &arr[5];
	// print(begin, end);

	std::cout << sizeof(begin) << '\n';
	std::cout << typeid(begin).name() << '\n';
	// -------------------------------
	int n = 5, nn = 55;

	int* pn = &n;
	int const m = 15;
	const int m = 15;
	//const int* pm = &m;
	int const * pm = &m;

	int * const cpn;
	const int* pcn;
	cpn = &nn;

	pm = &n;
	*pn = 66;
	std::cout << *pm;
*/
