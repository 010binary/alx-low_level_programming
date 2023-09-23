#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: interger to be printed
 * Return: zero at success
*/

void print_number(int n)
{
	unsigned int plus_n;

	if (n < 0)
	{
		_putchar('-');
		plus_n = -n;
	}
	else
		plus_n = n;
	if (plus_n >= 10)
		print_number(plus_n / 10);

	_putchar((plus_n % 10) + '0');
}
