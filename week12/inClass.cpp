#include <iostream>
#include <cassert>

void read(int* begin, int* end)
{
	while (begin != end)
	{
		std::cin >> *begin;
		begin++;
	}
}

std::size_t read(int* arr, std::size_t MAX_SIZE)
{
	std::size_t size;
	std::cin >> size;
	for (std::size_t i = 0; i < MAX_SIZE && i < size; ++i) {
		std::cin >> arr[i];
	}
	return size;
}
void print(int* begin, int* end) {
	while (begin != end)
	{
		std::cout << *begin << " ";
		begin++;
	}
}

void multiplyArr(int* arr, std::size_t size, int multiplier, int newArray[]) {
	for (std::size_t i = 0; i < size; ++i) {
		newArray[i] = arr[i] * multiplier;
	}
}


const std::size_t MAX_ROWS = 50;
const std::size_t MAX_COLS = 50;

void readMatrix(int matrix[][MAX_COLS], std::size_t& rows, size_t& cols) {
	std::cin >> rows >> cols;
	for (std::size_t i = 0; i < rows; ++i) {
		for (std::size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

int* myFind(int* const arr, const std::size_t size, const int elementToFind) {
	int* begin = arr;
	int* const end = arr + size;
	while (begin != end) {
		if (*begin == elementToFind) {
			return begin;
		}
		begin++;
	}
	return nullptr;

	/*
	for(std::size_t i = 0; i < size; ++i) {
		if(arr[i] == elementToFind) {
			return &arr[i];
		}
	}
	return nullptr;
	*/
}
int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

bool isAlpha(char c) {
	return ('A' <= c && c <= 'Z') ||
		('a' <= c && c <= 'z');
}
char* longestWord(char* str, std::size_t* length) {
	char* result = str;
	std::size_t letterCounter = 0;
	std::size_t longestWord = 0;
	while (*str != '\0')
	{
		++letterCounter;
		if (longestWord < letterCounter) {
			longestWord = letterCounter;
			result = str - longestWord + 1;
			*length = longestWord - 1;
		}
		if (isAlpha(*str) == false) {
			letterCounter = 0;
		}
		++str;
	}
	return result;
}

int main() {
	char str[] = "This is a testtttttttta of a very looong wooord.";
	std::size_t lengthOfLongestWord;
	char* p = longestWord(str, &lengthOfLongestWord);
	assert(lengthOfLongestWord == 13);
	for (std::size_t i = 0; i < lengthOfLongestWord; ++i) {
		std::cout << p[i];
	}
	//int arr[5] = { 10, 20, 30 };
	//int * ptr = myFind(arr, 3, 20);
	//*ptr = 50;
	//assert(arr[1] == 50);
	//assert(myFind(arr, 3, 100) == nullptr);

	//int matrix[MAX_ROWS][MAX_COLS] = { { 0 } };
	//std::size_t rows, cols;
	//readMatrix(matrix, rows, cols);


	//int newArr[50];
	//multiplyArr(arr, 3, 5, newArr);

	//std::size_t size = read(arr, sizeof(arr) / sizeof(int));


	//int* begin = arr;
	//int* end = arr + size; 
	//read(begin, end); 
	//print(arr, arr + 3); 

	return 0;
}
