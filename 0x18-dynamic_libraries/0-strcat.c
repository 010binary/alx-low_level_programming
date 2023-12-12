#include "main.h"

/**
 * _strcat - concatenates src to dest string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	char *dest_p = dest;

	while (*dest_p != '\0')
	{
		dest_p++;
	}
	while (*src != '\0')
	{
		*dest_p = *src;
		dest_p++;
		src++;
	}
	*dest_p = '\0';
	return (dest);
}
