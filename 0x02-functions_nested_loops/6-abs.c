#include "main.h"

/**
 * _abs - print absolute value
 *
 * Return: always return 0
 */

int _abs(int r)
{

if (r < 0)
	{
	return (-r);
	}
else if (r > 0)
	{
	return (r);
	}

return (0);
}
