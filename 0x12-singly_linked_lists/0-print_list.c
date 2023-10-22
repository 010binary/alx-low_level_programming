#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: pointer to the head of node.
 *
 * Return: number of elements in list.
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
