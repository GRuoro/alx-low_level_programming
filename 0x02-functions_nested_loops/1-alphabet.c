#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


void print_alphabet(void)
{
char alph = 'a';

for (alph = 'a'; alph <= 'z'; alph++)
	{
	_putchar(alph);
	}
	_putchar('\n');

}

/**
 * main- print alphabet
 *
 * Return: always return 0
 */

int main()
{
print_alphabet();

return (0);
}
