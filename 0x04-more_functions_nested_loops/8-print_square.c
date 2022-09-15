#include "main.h"

/**
 *print_square - print square of number
 *@size: size of square
 *
*/

void print_square(int size)
{
int a, b;

a = b = size;

if (size < 1)
	_putchar('\n;);

while (a > 0)
{
	while (b > 0)
	{
		_putchar('#');
		b--;
	}
_putchar('#');
a--;
}
