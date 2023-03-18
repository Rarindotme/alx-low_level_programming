#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point - print alpahbet in lowercase, uppercase, new line
 *
 * Return: Always (Success)
 *
*/

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
	putchar(l);
	l++;
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
	putchar(l);
	}
	putchar('\n');
	return (0);
}


