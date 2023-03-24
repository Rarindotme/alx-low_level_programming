#include "main.h"

/**
 * _isdigit - checks for a digit 0 - 9
 * @c: integer parameter
 *
 * Return: 1 if upper, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

