#include "main.h"
#include <stddef.h>


/**
 * *_strpbrk - searches a string for
 * any set of bytes
 * @s: char
 * @accept: char
 *
 * Return: pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
