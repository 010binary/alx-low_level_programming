#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to be capitalized
 * Return: return string
*/

char *cap_string(char *s)
{
	int i;
	int num;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*s >= 'a' && *s <= 'z')
		*s -= 32;

	for (num = 1; s[num] != '\0'; num++)
	{
		for (i = 0; i < 13; i++)
		{
			if (s[num] == separators[i])
			{
				if (s[num + 1] >= 'a' && s[num + 1] <= 'z')
					s[num + 1] -= 32;
				break;
			}
		}
	}
	return (s);
}
