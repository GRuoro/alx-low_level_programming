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

	for (ch = 'a'; ch = 'e' || 'q'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

return (0);
}
