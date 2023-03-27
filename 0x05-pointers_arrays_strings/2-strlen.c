#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character pointer
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
