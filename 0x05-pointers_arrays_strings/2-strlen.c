#include "main.h"

/**
 *_strlen - returns the length of a string.
 *@s: char parameter
*/

int _strlen(char *s)
{
int c;

while (*s != \0)
	{
	s++;
	c++;
	}

return (c);
}
