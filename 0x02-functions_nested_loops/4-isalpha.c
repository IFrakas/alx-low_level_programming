#include "main.h"

/**
 *_isalpha - checks for an alphabet character
 *@c: is the alphabet character
 *Return:1 if the character is alpahabet 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= "A" && c <= 'Z'))
		return (1);
	else
		return (0);
}
