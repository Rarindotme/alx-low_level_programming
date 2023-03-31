#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @c: char
 *
 * Return: char
 */

char *leet(char *c)
{
	int i = 0;
	int j;
	char leet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (c[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (c[i] == leet[j] ||
					c[i] - 32 == leet[j])
				c[i] = j + '0';
		}
		i++;
	}
	return (c);
}
