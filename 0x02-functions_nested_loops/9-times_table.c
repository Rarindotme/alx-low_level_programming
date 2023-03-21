#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int n = 0, i, j, m;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			m = n * j;
			if (m <= 9)
				_putchar(' ');
			else
				_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');
		}
		_putchar('\n');
		n++;
	}
}



