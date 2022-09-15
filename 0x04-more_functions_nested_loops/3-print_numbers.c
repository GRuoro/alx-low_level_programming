#include "main.h"

/**
 *print_numbers - prints numbers then newline
 *
 *Return:always return a
*/

void print_numbers(void)
{
	int a;

	a = 0;

	while (a < 10 )
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
