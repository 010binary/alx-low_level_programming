#include "lists.h"

/**
 * list_len - prints elements of a list.
 * @h: pointer to the head of node.
 *
 * Return: size of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
