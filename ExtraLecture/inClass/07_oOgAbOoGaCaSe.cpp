#include <iostream>
int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		++i;
	}
	return i;
}
bool isAlpha(char c) {
	return ('A' <= c && c <= 'Z') ||
		('a' <= c && c <= 'z');
}
char toLower(char c) {
	if ('A' <= c && c <= 'Z') {
		return c + ('a' - 'A');
	}
	return c;
}
char toUpper(char c) {
	if ('a' <= c && c <= 'z') {
		return c - ('a' - 'A');
	}
	return c;
}
void OogaBoogaCase(char str[]) {
	int length = strlen(str);
	bool isUpper = false;
	for (int i = 0; i < length; i++)
	{
		if (isAlpha(str[i])) {
			if (isUpper) {
				str[i] = toUpper(str[i]);
			}
			else {
				str[i] = toLower(str[i]);
			}
			isUpper = !isUpper;
		}

		/* Neraboteshto
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!isUpper)
			{
				str[i] += ('a' - 'A');
			}
			isUpper = !isUpper;
		}
		
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (isUpper)
			{
				str[i] -= ('a' - 'A');
			}
			isUpper = !isUpper;
		}*/
		
	}

	std::cout << str;
}

int main() {
	char str[100];
	std::cin.getline(str, sizeof(str));
	OogaBoogaCase(str);
	return 0;
}
