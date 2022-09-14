#include "main.h"

void print_times_table(int n)
{
int a, b;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
	n =a * b;
	_putchar(n);
	}	 
_putchar(\n);
}
