#include "main.h"
#include <stdio.h>
#include "6-abs.c"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: input number
 * Return: no return
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; n >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}

		}
	}else
		{
			for (i = n; n <= 98; i++)
			{
				printf("%d", i);
				if (n != 98)
				{
					printf(",'");
				}
			}
		}
	printf("\n");
}
