#include "main.h"

/**
 *print_most_numbers - print 0 - 9 except 2
 *
 *Return: always 0
*/

void print_most_numbers(void)
{
int a;

for (a = 0; a <= 9; a++)
	{
	if ((a != 2) && (a != 4)
		_putchar(a + '0');
	}
_putchar('\n');
}
