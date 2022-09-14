#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */

void times_table(void)
{

int x = 0; /* factor */
int y; /* count  */
int z; /* computed value */

while (x < 10)
{
	y = 0;
	while (y < 10)
	{
		z = x * y;

		if (z > 9)
			{
			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
			}
		else if (y != 0)
			{
			_putchar(' ');
			_putchar(z + '0');
			}
		else
			{
			_putchar(z + '0');
			}

		if (y != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		y++;
	}
	_putchar('\n');
	x++;
	}
}

/**void times_table(void)
{
int j, i, n;

for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 9; j++)
		{
		n = i * j;
		if (n > 9)
			{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			}
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}**/
