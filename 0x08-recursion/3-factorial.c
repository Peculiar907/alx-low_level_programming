#include "main.h"
/**
 * factorial -  function that returns the factorial of a given number
 * @n: lower than 0 , the function should return -1 to indicate an error
 *
 * Return: the value factorial
 */

int factorial(int n)
{
	int fac = n;

	if (n < 0)

		return (-1);

	else if (n >= 0 && n <= 1)

		return (1);

	else

		fac *= factorial(n - 1);

	return (fac);
}
