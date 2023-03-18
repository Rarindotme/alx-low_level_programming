#include <stdio.h>

/**
 * main - Entry point print all possible combinations
 * of digit numbers
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
	{	putchar((x % 10) + '0');
		if (x != 9)
		{	putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
