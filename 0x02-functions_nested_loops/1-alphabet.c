#include "main.h"

/**
 *print_alphabet - alphabets in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	int smallAlpha;

	for (smallAlpha = 'a'; smallAlpha <= 'z'; smallAlpha++)
	{
		_putchar(smallAlpha);
	}

	_putchar('\n');
}
