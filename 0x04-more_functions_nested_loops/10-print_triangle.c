#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: integer
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(32);
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

