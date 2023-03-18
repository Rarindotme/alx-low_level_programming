#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - Entry point - prints the alphabet in lowercase
 *
 * Results: Always 0 (Success)
*/

int main(void)
{
	/* local variable */
	int n = 'A';

	/* while loop */
	while (n <= 'Z')
	{
	n = tolower(n);
	putchar(n);
	n++;
	}
	return (0);
}
