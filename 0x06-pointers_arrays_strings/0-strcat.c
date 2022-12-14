#include "main.h"

/**
 * *_strcat - concats two arrays
 * @dest: destination of concat
 * @src: source array to concat
 * Return:a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int b;
	int c;

	for (c = 0; dest[c] != '\0'; c++)
	{
		for (b = 0; src[b] != '\0'; b++)
		{
			dest[c + b] = src[b];
		}
		dest[c + b] = '\0';

		return (dest);
	}
}
