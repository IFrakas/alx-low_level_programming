#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @h: the integer to compute
 * Return: las digit
 */
int print_last_digit(int h)
{
	int last_digit;

	last_digit = h % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
