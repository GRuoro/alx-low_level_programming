#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */

void times_table(void)
{
int j, i, n;

for(i = 0; i <= 9; i++)
	{
	for(j = 0; j <= 9; j++)
		{
		n = i * j;
		_putchar(n/10);
		_putchar(n%10 + '0');

		if (j != 0 && i != 0)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
_putchar('\n');
}
