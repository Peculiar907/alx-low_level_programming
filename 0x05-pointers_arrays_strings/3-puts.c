#include <stdio.h>
#include "main.h"


/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
