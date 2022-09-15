#include "main.h"

/**
 *more_numbers - print 0-14 x10
 *
 *Return: always 0
*/

void more_numbers(void)
{
int a, b;

for (a = 0; a <= 10; a++)
	{
	for (b = 0; b <= 14; b++)
		{
		_putchar(b);
		}
	_putchar(\'n');
	}
_putchar('\n');
}
