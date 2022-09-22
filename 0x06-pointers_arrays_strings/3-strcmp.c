#include "main.h"

/**
* _strcmp - compares two strings
*@s1: char parameter 1
*@s2: char parameter 2
*Return: 0 when '\0' else -1
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
	{
	if ((*s1 == '\0') || (*s2 == '\0'))
		break;

	s1++;
	s2++;
	}

if ((*s1 == '\0') && (*s2 == '\0'))
	return (s1 - s2);
else
	return (-1);
}
