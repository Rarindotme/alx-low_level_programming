#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: char
 * @src: char
 * @n: integer
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];

	return (dest);
}
