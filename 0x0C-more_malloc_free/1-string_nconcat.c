#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: size of memory
 * Return: ptr to the new memory or NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0' && n > 0)
	{
		len2++;
		n--;
	}

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concat[len1 + i] = s2[i];
	}
	concat[len1 + len2] = '\0';
	return (concat);
}
