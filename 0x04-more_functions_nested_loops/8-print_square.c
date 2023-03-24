#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: integer
 *
 * Return: 0
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

