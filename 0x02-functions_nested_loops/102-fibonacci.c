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

for (i = 0; i <= 50 ; i++)
{
	c = a + b;
	printf("%lu, ", c);
	a = b;
	b = c;
}
printf("\n");
return (0);
}
