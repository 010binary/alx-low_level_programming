#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @c: parameter
 * Return: 1 if c is digit and 0 otherwise.
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
