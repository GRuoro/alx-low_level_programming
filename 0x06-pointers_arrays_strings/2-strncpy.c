#include "main.h"

/**
* *_strncpy - function that copies a string
*@dest: parameter char
*@src: parameter char
*@n: parameter int
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
char s1[n];
char s2[n];

dest = s1;
src = s2;

while (s1[n] != '\0')
	{
	s2[n] = s1[n];
	}

s2[n] = '\0';

return (dest);
}
