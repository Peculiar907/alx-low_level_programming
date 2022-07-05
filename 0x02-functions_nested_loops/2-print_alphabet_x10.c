#include "main.h"

/**
 *print_alphabet_x10 - prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int smallAlpha;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (smallAlpha = 'a'; smallAlpha <= 'z'; smallAlpha++)
		{
			_putchar(smallAlpha);
		}

		_putchar('\n');
	}
}
