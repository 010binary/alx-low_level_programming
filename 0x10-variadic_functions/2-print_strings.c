#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed b/w the strings
 * @n: the number of the strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		const char *x = va_arg(str, const char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
