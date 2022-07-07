#include "main.h"

/**
 *print_most_numbers - print numbers
 *Return: 0 success
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}

	_putchar('\n');
}
