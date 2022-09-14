#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */
  
void times_table(void)
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
