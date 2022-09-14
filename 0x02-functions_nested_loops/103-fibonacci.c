#include <stdio.h>

/**
 * main - print fibonacci
 *
 *Return: always return 0
*/

int main(void)
{
unsigned long a = 0;
unsigned long b = 1;
unsigned long c;
int i;

for (i = 0; ; i++)
{
	c = a + b;

	if ((c < 4000000) && (c % 2 == 0))
		printf("%lu", c);

	a = b;
	b = c;
}
printf("\n");
return (0);
}
