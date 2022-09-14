#include <stdio.h>

/**
 * main - print fibonacci
 *
 *Return: always return 0
*/

int main(void)
{
int a = 0;
int b = 1;

int i, c;

for (i = 0; i < 50 ; i++)
{
	c = a + b;
	a = b;
	b = c;
	printf("%d, ", c);
}

return (0);
}
