#include "main.h"

/**
*reverse_array - reverse content of an array of integers
* @a: parameter 1 pointer
* @n: number of elements of the array
*/

void reverse_array(int *a, int n)
{
int temp;
int j;
int i;

i = n;

for (i--, j = 0; j < n / 2; j++, i--)
	temp = a[j], a[j] = a[i], a[i] = temp;
}
