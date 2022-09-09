#include <stdio.h>

/**
 * main - Prints alphabet except e and q
 * followed by a new line
 *
 * Return: Always 1.
 */

int main(void)
{
int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');

return (0);
}
