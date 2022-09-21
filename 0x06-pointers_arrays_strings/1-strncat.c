#include "main.h"

/**
* *_strncat - function that concatenates two strings
*@dest: char parameter
*@src: char parameter
*@n: number of bytes
*Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{

char s1[20];
char s2[20];

int i = 0;
int j = 0;

dest = s1;
src = s2;

while (s1[i] != '\0')
	{
	dest++;
	++i;
	}

while (j < n && s2[j] != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	j++;
	}

return (dest);

}
