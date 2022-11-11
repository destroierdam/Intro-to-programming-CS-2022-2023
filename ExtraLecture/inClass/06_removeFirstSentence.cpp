#include <iostream>
int getIndexOfSentence(char arr[]) {
	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] == '.' || arr[i] == '!' || arr[i] == '?')
			return i;
	}
	return -1;
}
void removeFirstSentence(char arr[]) {
	int indexOfEnd = getIndexOfSentence(arr);
	if (indexOfEnd == -1) {
		// Eventualno, ako iskame:
		// arr[0] = '\0';
		return;
	}
	for (int i = 0; arr[i + indexOfEnd] != '\0'; i++) {
		arr[i] = arr[i + indexOfEnd + 1];
	}
}

void print(char arr[]) {
	std::cout << "\"" << arr << "\"";
}

int main() {
	char arr[] = "Hi."; // Hello, World!Have a nice day.";
	removeFirstSentence(arr);
	print(arr);
	return 0;
}