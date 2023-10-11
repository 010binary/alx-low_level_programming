#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers to be searched
 * @size: number of elements in array
 * @cmp: pointer to the function used to compare values
 * Return: -1 if search is unsuccessful or index of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
