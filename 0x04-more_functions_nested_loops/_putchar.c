#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character to stdout
 * @c: the character to be written
 * Return: 1 on success -1 if otherwise
 */

int _putchar(char c)
{
	return (write (1, &c, 1))
}

