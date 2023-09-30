#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 *         or zero if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
