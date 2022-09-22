#include "main.h"
/**
 * print_number - prints # using _putchar function
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
if (n < 0)
	{
	_putchar('-');
	_putchar(n / 10);
	_putchar(n % 10 + '0');
	n = -n;
	}
_putchar('\n');

if (n /10)
	{
	_putchar(n / 10);
	_putchar(n % 10 + '0');
	}
_putchar('\n');
}
