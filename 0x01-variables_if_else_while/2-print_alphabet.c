#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char smallAlpha;

	for (smallAlpha = 'a'; smallAlpha <= 'z'; smallAlpha++)
		putchar(smallAlpha);
	putchar('\n');
	return (0);
}
