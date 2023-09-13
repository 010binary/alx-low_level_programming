#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: the character in question
 * Return: 1 if c is an alphabet or 0 for anything else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
