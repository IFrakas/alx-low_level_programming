#include "main.h"
/**
 *factorial - returns the factorial of n.
 *@n: is the number
 *Return: returns factor or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
