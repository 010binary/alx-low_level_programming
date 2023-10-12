#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all its arguments
 * @n: the number of arguments given
 * Return: 0 if n is 0 or sum if successfull
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, unsigned int);

		if (n != 0)
			sum += x;
		else
			return (0);
	}
	va_end(args);
	return (sum);
}
