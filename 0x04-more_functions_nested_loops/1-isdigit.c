#include "main.h"

/**
 *_isdigit - checks for digit btwn 0 & 9
 *@c: int type parameter
 *
 *Return: 1 if digit else 0
*/

int _isdigit(int c)
{
if (c >= 0 || c <= 9)
	return (1);

return (0);
}
