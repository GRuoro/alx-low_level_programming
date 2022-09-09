#include <stdio.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */

int main(void)
{
int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	putchar('\n');
	getc();
	}

return (0);
}
