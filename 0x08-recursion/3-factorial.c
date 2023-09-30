#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: number to determine the factorial
 * Return: factorial of n or -1 if n < 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
