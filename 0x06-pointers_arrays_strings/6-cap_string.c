#include "main.h"

/**
* *string_toupper - changes lowercase letters of a string to uppercase.
* @a: parameter char
*Return: a
*/

char *string_toupper(char *a)
{
int i;

if (a[0] > 96 && a[0] < 123)
	a[0] -= 32;

for (i = 0; a[i] != '\0'; i++)
	{
	switch (a[i])
		{
		case ' ': case '\n': case '\t': case ',':
		case ';': case '.': case '!': case '?': case '"':
		case '(': case ')': case '{': case '}':

			if (a[i + 1] > 96 && a[i + 1] < 123)
				a[i + 1] -= 32;
		}
	}
return (a);
}
