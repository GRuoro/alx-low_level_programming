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

for (i = 0; i < 49 ; i++)
	{
	if ((b < 4000000) && (b % 2 == 0))
		c = a + b;	

	printf("%lu", c);
	
	a = b;
	b = c;

	while (i != 49)
		printf(", ");
	}
printf("\n");
return (0);
}
