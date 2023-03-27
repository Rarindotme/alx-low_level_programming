#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer first
 * @b: integer second
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
