#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		{
		printf("%d is positive\n", n);
		}
	else if (n == 0)
		{
		printf("%d is zero\n", n);
		}
	else
		{
		printf("%lu is negative\n", n);
		}

	return (0);
}
