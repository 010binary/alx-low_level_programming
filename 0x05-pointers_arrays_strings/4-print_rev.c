#include "main.h"
#include <string.h>

/**
 * print_rev - prints in reverse order
 * @s: the string to be printed in reverse
*/

void print_rev(char *s)
{
	int length = strlen(s) - 1;

	while (length >= 0)
	{
	_putchar(s[length]);
	length--;
	}
	_putchar('\n');
}
