#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */

int main(void)
{

int num;

	for (num = 0; num < 10; num++)
		{
		putchar("%d\n", num);
		putchar('\n');
		getch();
		}

return (0);
}