#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @ld: computational digits
 *
 * Return: value of last digit
 */

int print_last_digit(int ld)
{
	ld = ld % 10;
	if (ld < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
