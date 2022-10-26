#include "main.h"
/**
 * print_last_digit - prints the last digit of an int
 * @h:the number to compute an integer
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
