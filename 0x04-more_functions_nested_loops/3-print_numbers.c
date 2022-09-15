#include "main.h"

/**
 *print_numbers - prints numbers then newline
 *
 *Return:always return a
*/

void print_numbers(void)
{
int a;

for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
_putchar('\n');

return (a);
}
