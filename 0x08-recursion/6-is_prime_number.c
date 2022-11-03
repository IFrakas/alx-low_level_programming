#include "main.h"
/**
 * _isitprime - looks for prime number
 * @n: the number
 * @i: the number / 2
 *  Return: value
 */
int _isitprime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
			return (1);
	else
		return (_isitprime(n, i - 1));
	}
}
/**
 *is_prime_number - returns a prime number
 * @n: the number
 * Return: boolean
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (_isitprime(n, n / 2));
}
