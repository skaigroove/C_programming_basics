#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //getchar() putchar()

int main() {

	char ch;

	while ((ch = getchar()) != '\n')
	{
		putchar(ch);
	}

	return 0;
}
