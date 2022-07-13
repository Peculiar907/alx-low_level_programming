#include "main.h"

/**
 * swap_int - swaps the values of  integers
 * @a: integer one
 * @b: integer two
 */
void swap_int(int *a, int *b)
{
	int d = *a;

	*a = *b;
	*b = d;
}
