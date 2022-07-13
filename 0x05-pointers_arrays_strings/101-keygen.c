#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, b, y;
	int pass[100];

	b = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		b += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - b) - '0' < 78)
		{
			y = 2772 - b - '0';
			b += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}
