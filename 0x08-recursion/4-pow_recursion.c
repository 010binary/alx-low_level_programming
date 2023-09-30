#include "main.h"

/**
 * _pow_recursion - function that returns the value of x exponential y
 * @x: the number to be raised or the base number
 * @y: the exponent
 * Return: the value of x to the power of y or -1 if y < 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
