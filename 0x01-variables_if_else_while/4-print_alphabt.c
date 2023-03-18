#include <stdio.h>

/**
 * main - Entry point prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	int l = 'a';

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');
	return (0);

}
