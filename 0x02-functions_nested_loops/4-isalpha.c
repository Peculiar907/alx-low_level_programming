#include "main.h"

/**
 *_isalpha - checks for alphabetical letters
 *@c: a charter to be checked on
 *Return: returns 1 if alphabet is lower or uppercase, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
