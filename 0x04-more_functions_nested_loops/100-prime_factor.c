#include <stdio.h>
#include "main.h"

/**
 *main - prints the largest prime factor of 612852475143
 *
 *Return: always 0 (Success)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((b % a == 0) && (b != a))
			b = b / a;
	}

	printf("%lu\n", b);
	return (0);
}
