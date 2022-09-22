#include "main.h"

/**
 * leet - translates string to 1337
 * @a: input string to be translated
 *
 * Return: a
 */

char *leet(char *a)
{
	int i, j;
	char key[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (a[i] == key[j])
				a[i] = leet[j];
	return (a);
}
