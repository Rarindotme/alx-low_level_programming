#include <ctype.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: conditional character
 *
 * Return: if char then 1 otherwise 0
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
