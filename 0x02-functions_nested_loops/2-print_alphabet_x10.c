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

void print_alphabet_x10(void)
{

char alph = 'a';
int counter = 0;

for (counter = 0; counter <= 9; counter ++)
	{
	for (alph = 'a'; alph <= 'z'; alph++)
		{
		_putchar(alph);
		}

	_putchar('\n');
	}
}

/**
 * main - invoke all functions
 *
 * Return: always retuen 0
 */

int main(void)
{
print_alphabet_x10();

return (0);
}
