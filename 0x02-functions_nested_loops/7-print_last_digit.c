#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: Always 0.
 */


int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}

/**int print_last_digit(int n)
{

n = n % 10;

if (n < 0)
	{
	n = -n;
	_putchar(n + '0');
	return(n);
	}
else if (n == 0)
	{
	_putchar(n + '0');
	}
else if (n > 0)
	{
	_putchar(n + '0');
	}
return (0);
}**/
