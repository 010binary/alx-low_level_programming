#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: return result of difference between the strings
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while ((*s1 == *s2) && (s1[a] != '\0' && s2[a] != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
