#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
if (*s == c)
	return (s);

else if (*s == '\0' && *s != c)
	return (0);
}