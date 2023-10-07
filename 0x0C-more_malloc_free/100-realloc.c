#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: ptr to the previously allocated memory
 * @old_size: size of the previously allocated memory
 * @new_size: size of the previously allocated memory
 * Return: void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, n;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (old_size < new_size)
			n = old_size;
		else
			n = new_size;
		for (i = 0; i < n; i++)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (new_ptr);
}
