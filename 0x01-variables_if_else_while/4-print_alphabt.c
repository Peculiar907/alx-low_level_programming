#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char smallAlpha;

	for (smallAlpha = 'a'; smallAlpha <= 'z'; smallAlpha++)
	{
		if (smallAlpha != 'q' && smallAlpha != 'e')
		{
			putchar(smallAlpha);
		}
	}

	putchar(10);

	return (0);
}	
