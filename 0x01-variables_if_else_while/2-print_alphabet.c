#include <stdio.h>

/**
 * main - Entry point - prints the alphabet in lowercase
 *i
 * Return: Always (Success)
*/

int main(void)
{
	/* local variable */
	int n = 'a';

	/* while loop */
	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
