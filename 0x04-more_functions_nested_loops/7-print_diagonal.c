#include "main.h"

/**
 *print_diagonal - prints diagonal line
 *@n: number of times to print \
*/
void print_diagonal(int n)
{
	int n;
	int s = 0;

	while (n > 0)
	{
	s = n;
		while (s > 0)
		{
		_putchar(' ');
		s--;
		}
		_putchar('\\');
		_putchar('\n');
		s++;
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
