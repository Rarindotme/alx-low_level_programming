#include <stdio.h>

/**
 * main - Entry point prints all the numbers of base 16 in lowercase
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	int n = 0;
	char l = 'a';

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
