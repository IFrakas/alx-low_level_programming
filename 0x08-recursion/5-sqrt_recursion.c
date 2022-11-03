#include "main.h"
/**
 * _increasevar - increases i to find sqrt
 *@i: starts at 1
 *@n: integer to get root of
 *Return: value of root
 */
int _increasevar(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (_increasevar(i + 1, n));
	if (i * i > n)
		return (-1);
	return (i);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to return
 * Return: returns int of squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else if (n > 1)
	{
		return (_increasevar(1, n));
	}
	return (-1);
}
