#include "main.h"

/**
* *_strcat - function that concatenates two strings
* @dest: char parameter
* @src: char parameter
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{

char s1[20];
char s2[20];

int i = 0;
int j = 0;

dest = s1;
src = s2;

while(s1[i] != '\0')
	{
	dest++;
	++i;
	}

while(s2[j] != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	j++;
	}

return (dest);

}
