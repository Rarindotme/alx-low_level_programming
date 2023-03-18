#include <stdio.h>

/**
 * main - Entry point prints all possible
 * combinations of two two-digit numbers 0-99
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 97 || j != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

