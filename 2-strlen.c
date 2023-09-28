#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string pointer
 * Return: returns the length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		++length;
	}

	return (length);
}
