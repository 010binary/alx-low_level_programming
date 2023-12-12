#include "main.h"

/**
 * _strncat - concatenates n number of src to dest
 * @dest: destination
 * @src: source
 * @n: number of characters to concatenate
 * Return: return to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *dest_p = dest;

	while (*dest_p != '\0')
	{
		dest_p++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_p = *src;
		dest_p++;
		src++;
		n--;
	}
	*dest_p = '\0';
	return (dest);
}
