#include <iostream>
unsigned int strlen(char str[]) {
	unsigned int counter = 0;
	for (; str[counter] != '\0'; ++counter) {}
	/*while (str[counter] != '\0') {
		++counter;
	}*/
	return counter;
}

void strcpy(char target[], char source[]) {
	int i = 0;
	while (source[i] != '\0') {
		target[i] = source[i];
		++i;
	}
	target[i] = '\0';
}

void strcat(char dest[], char src[]) {
	int destLen = strlen(dest);
	int i = 0;
	while(src[i] != '\0') {
		dest[destLen + i] = src[i];
		++i;
	}
	dest[destLen + i] = '\0';
}

void removeConsecutiveWS(char str[]) {
	//char result[100] = "";
	////  populvame result
	//strcpy(str, result);
	int length = strlen(str);
	for (int i = 1; i < length; ++i)
	{
		if (str[i-1] == ' ' && str[i] == ' ')
		{
			for (int j = i; j < length; j++)
			{
				str[j] = str[j + 1];
			}
			--i;
		}
	}
}

int main() {
	char str[100];
	std::cin.getline(str, sizeof(str));
	removeConsecutiveWS(str);
	std::cout << "\"" << str << "\"\n";
	return 0;
}