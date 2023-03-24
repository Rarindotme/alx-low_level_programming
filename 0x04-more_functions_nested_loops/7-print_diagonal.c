#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}


