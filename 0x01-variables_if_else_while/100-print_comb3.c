#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 0; b < 9; a++)
	{
	for (a = 0; b < 10; b++)
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');
	if (a == 8 && b == 9)
	continue;
	putchar(',');
	putchar(' ');
	}

	putchar('\n');

return (0);
}