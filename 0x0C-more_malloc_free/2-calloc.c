#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array of  elements
 * @nmemb: number of elements in the array
 * @size: total bytes of each element in the array
 * Return: ptr to the allocated memory or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}
	return (array);
}
