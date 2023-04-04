#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: integer
 * @size: integer
 *
 * Return: zero
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		k += a[i];
		a -= size;
	}

	printf("%d, %d\n", j, k);
}
