#include "main.h"

/**
 * _strncpy - copies n character from src to dest
 * @dest: destination
 * @src: source
 * @n: number of characters
 * Return: return to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
