#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{

		dlistint_t *temp = head;

		head = head->next;

		free(temp);
	}
}
