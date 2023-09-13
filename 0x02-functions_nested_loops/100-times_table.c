#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times table to print
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;
			
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100)
					_putchar(' ');
			}
			if (result < 10)
			{
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result / 10) % 10);
				_putchar('0' + result % 10);
			}
		}
		_putchar('\n');
	}
}
