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
	if (isupper(c))
		return (0);
	else
		return (1);
}
