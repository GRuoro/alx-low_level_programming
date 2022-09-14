#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}

/*int main(void)
{
unsigned long a = 0;
unsigned long b = 1;
unsigned long c;
int i;

for (i = 0; i < 49 ; i++)
	{
	c = a + b;

	if ((c < 4000000) && (b % 2 == 0))

	printf("%lu", c);
	
	a = b;
	b = c;

	while (i != 49)
		printf(", ");
	}
printf("\n");
return (0);*/i
}
