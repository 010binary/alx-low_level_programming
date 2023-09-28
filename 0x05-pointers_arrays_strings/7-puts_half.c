#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of string
 * @str: string to be printed
*/

void puts_half(char *str)
{
	int length = strlen(str);
	int n = length / 2;
	int m;

	if (length % 2 != 0)
	{
		n = (length + 1) / 2;
	}
	for (m = n; m < length; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
