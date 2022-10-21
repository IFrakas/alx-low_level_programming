#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100
 *Return: a number
 */
int main(void)
{
	int i;


	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else
			{
				printf("%d", i);
			}
			if (i != 100)
				printf(" ");
		}
		printf("\n");
		return (0);
	}
}
