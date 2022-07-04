#include <stdio.h>

/**
 *main - Entry poimt
 *
 *Return: Always 0
 */
int main(void)
{
	char smallAlpha;

	for (smallAlpha = 'a'; smallAlpha <= 'z'; smallAlpha++)
		putchar(smallAlpha);
	for (smallAlpha = 'A'; smallAlpha <= 'Z'; smallAlpha++)
		putchar(smallAlpha);
	putchar('\n');
	return (0);
}
