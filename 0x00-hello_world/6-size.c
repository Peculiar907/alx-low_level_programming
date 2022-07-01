#include <stdio.h>

/**
 *main - Entry point of any C program by javapoint
 *Return: Consistently 0 which indiace Success
 */
int main(void)
{
	int a;
	long int b;
	long long int e;
	float d;
	char c;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(e));
	printf("Size of a float: %ld byte(s)\n", sizeof(d));
	return (0);

}
