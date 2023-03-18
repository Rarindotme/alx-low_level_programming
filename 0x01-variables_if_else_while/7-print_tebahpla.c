#include <stdio.h>

/**
 * main - Entry point prints the lowercase alphabet in reverse
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	int l = 'z';

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
