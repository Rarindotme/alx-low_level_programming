#include <stdio.h>

/**
 * main - Entry point prints all possible different combinations of two digits
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i != 9 && j != 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}