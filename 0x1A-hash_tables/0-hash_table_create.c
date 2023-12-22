#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * @return: a pointer to a newly created hash table
 * 		error: return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htc;
	unsigned long int m;

	htc = malloc(sizeof(hash_table_t));
	if (htc == NULL)
		return(NULL);
	
	htc->size = size;
	htc->array = malloc(sizeof(hash_table_t *) * size);
	if (htc->array == NULL)
	return (NULL);

	for (m = 0; m < size; m++)
		htc->array[m] = NULL;
	return (htc);
}
