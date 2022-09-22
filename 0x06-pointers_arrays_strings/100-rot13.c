#include "main.h"
/**
 * rot13 - translates string to ROT13
 * @a: input string to be translated
 *
 * Return: string after conversion of ROT13
 */
char *rot13(char *a)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_it[] =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (a[i] == alphabet[j])
				a[i] = rot_it[j], j = 52;
	return (a);
}
