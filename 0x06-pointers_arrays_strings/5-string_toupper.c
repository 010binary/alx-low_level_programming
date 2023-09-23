#include "main.h"

/**
 * string_toupper - function to change alphabet case
 * @str: string to be changed
 * Return: output of the string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
