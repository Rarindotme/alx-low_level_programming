#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 *
 * Return: bytes of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int b = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
