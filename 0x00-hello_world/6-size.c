#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

printf("Size of a char: %lu\n byte(s)", sizeof(a));
printf("Size of an int: %lu\n bytes(s)", sizeof(b));
printf("Size of a long int: %lu\n bytes(s)", sizeof(c));
printf("Size of a long long int: %lu\n bytes(s)", sizeof(d));
printf("Size of a float: %lu\n byte(s)", sizeof(f));

return (0);
}
