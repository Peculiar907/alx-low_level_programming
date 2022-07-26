#include "main.h"
#include <stdlib.h>
/**
 * _strdup -pointer to a new string which is a duplicate of the string str
 *
 * @str: string to copy
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int a, b;
	char *s;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		;
		a++;
	s = malloc(a * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
	s[b] = str[b];
	}
	return (s);
}
