#include "main.h"

/**
 * print_line - prints a line
 * @n: is the number of times the character to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
