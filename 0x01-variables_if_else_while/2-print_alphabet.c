#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Results: Always (Success)
 */
/* main */
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
