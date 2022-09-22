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

int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

return (dest);

}
