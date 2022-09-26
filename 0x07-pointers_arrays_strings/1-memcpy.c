#include "main.h"

/**
 * _memcpy - copy a memory area
 * @dest: memory area place copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 * Return: pointer to copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	*(dest + i) = *(src + i);

return (dest);
}
