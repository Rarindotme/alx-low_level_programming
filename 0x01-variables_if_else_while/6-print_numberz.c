#include <stdio.h>

/**
 * main - Entry point prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
