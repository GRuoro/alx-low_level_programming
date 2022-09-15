#include "main.h"

/**
 *print_line - draw line in terminal
 *@n: number of times to print _
*/

void print_line(int n)
{
int c;

for (c = 0; c < n; n++)
	{
	if (n < 0)
		_putchar('\n');
	_putchar('_');
	}
_putchar('\n');
}
