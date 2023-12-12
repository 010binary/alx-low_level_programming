#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the main string
 * @accept: Pointer to the string containing acceptable characters
 *
 * Return: The number of bytes in the initial segment of s consisting only
 *         of bytes that appear in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
		length++;
		s++;
	}
	return (length);
}
