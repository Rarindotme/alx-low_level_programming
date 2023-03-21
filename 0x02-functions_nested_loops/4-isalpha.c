#include <ctype.h>
#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: conditional character
 *
 * Return: 1 if letter, lower or upper case, otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
