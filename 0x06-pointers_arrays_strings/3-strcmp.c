#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char
 * @s2: char
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
