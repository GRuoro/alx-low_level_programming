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

for (i = 0; i < 98 ; i++)
{
	c = a + b;
	printf("%lu", c);

	if (i != 97)
		printf(", ");
	a = b;
	b = c;
}
printf("\n");
return (0);
}
