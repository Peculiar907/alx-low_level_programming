#include "main.h"

/**
 *print_line - print lines
 *@n: number of times
 *
 *Return: none
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
