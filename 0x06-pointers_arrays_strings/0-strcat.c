#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: - char
 * @src: - char
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int l = 0;

	while (dest[l])
	{
		l++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
