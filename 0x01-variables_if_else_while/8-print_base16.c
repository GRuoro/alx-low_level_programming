#include <stdio.h>
/**
 * main - print all base 16 numbers
 *
 * Return: always 0
 *
*/

int main(void)
{

int n;
int ch;

	for (n = 0; n <= 10 ; n++)
	{
	putchar((n % 16) + '0');
		{
		for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
		}
	}
	putchar('\n');

return (0);
}
