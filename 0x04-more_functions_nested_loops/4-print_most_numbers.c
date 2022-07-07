#include "main.h"

/**
 *print_most_numbers - print numbers
 *Return: null success
 */
void print_most_numbers(void)
{
	int num;

	for (num = 50; num <= 59; num++)
	{
		if (num != 52 && num != 54)
		{
			_putchar(num);
		}
	}

	_putchar('\n');
}
