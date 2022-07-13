#include <stdio.h>
#include "main.h"

/**
* puts2 - returns characters of a string in 2's
* @str: char argument
* Return: null Success
*/

void puts2(char *str)
{
	int i, j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	for (j = 0 ; j < i ; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
