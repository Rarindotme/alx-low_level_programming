#include "main.h"

/**
 * rev_string - function that rev_string
 * @s: parameter
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char k;

	while (s[j++])
		i++;

	for (j = i - 1; j >= i / 2; j--)
	{
		k = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = k;
	}
}

