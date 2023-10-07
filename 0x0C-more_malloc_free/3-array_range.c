#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: smallest values
 * @max: largest values
 * Return: newly created array or NULL if malloc fails
*/

int *array_range(int min, int max)
{
	int *array;
	int n, i;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	array = malloc(sizeof(int) * n);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
