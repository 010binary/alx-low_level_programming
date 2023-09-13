#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character in question
 * Return: 1 for c in lowercase or 0 for anyother thing
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
