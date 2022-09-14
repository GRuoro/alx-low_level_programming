#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */

void times_table(void)
{
int j,i;

for(i = 0; i <= 9; i++)
	{
	for(j = 0; j <= 9; j++)
		{
		_putchar('%d', i*j);
		}
	}
_putchar('\n');
}
