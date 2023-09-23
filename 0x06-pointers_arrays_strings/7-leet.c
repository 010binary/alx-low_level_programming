#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: string to be encoded
 * Return: return encoded string
*/

char *leet(char *str)
{
	char leet_map[256] = {0};
	int i;

	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet_map[(unsigned char)str[i]] != 0)
			str[i] = leet_map[(unsigned char)str[i]];
	}
	return (str);
}
