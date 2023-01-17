#include <stdio.h>
/**
 * main - print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	char g;


	for (g = 'a'; g <= 'z'; g++)
{
	if (g == 'q' || g == 'e')
	{
		continue;
	}
	putchar(g);
}
putchar('\n');
return (0);
}
