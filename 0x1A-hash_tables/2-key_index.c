#include "hash_tables.h"
/**
 * key_index - index at which the key/value pair
 * should be stored in the array of the hash table
 * @key: is the key to get the index
 * @size: the size of array in the hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
