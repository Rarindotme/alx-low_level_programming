#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @c: char
 *
 * Return: char
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;

		i++;
	}
	return (c);
}
