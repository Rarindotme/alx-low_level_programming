#include "main.h"

/** main  - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always (Success)
 *
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
