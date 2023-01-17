#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int c;


	{
		for (c = 0; c != '\0'; c++)
		{}
			for (b = 0; b < n && src[b] != '\0'; b++)
			{
				dest[c + b] = src[b];
			}
			dest[c + b] = '\0';

			return (dest);
		}
}
