#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	char y;
	int x;

	x = 0;
	while (x < 10)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
		_putchar(y);
		}
	_putchar('\n');
	x++;
	}
}
