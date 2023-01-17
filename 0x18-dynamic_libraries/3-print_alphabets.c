#include <stdio.h>

/**
 * main - print lower and upper case
 * Return:0
 */
int main(void)
{
	char b;
	char c;

	for (b = 'a'; b <= 'z'; b++)
{
	putchar(b);
}
for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
