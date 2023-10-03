#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to another place
 * @dest: destination
 * @src: origination source
 * Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	char *origin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin);
}
