#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
