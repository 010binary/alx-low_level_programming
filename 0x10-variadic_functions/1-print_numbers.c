#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: ptr to the string to be printed b/w numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, int);

		printf("%d", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
