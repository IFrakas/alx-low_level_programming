#include <stdio.h>
/**
 *main - print all single digit numbers of base 10
 *Return:0
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
