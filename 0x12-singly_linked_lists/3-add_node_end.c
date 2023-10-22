#include "lists.h"

/**
 * add_node_end - add new node to end of list_t list
 * @head: pointer to a pointer to the head node.
 * @str: pointer to the string
 *
 * Return: pointer to the address of head of new node or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *rary;
	int i;
	char *n_str;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	n_str = strdup(str);
	if (n_str == NULL)
	{
		free(new);
		return (NULL);
	}

	i = 0;
	while (str[i])
	{
		i++;
	}

	new->len = i;
	new->str = n_str;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		rary = *head;
		while (rary->next != NULL)
			rary = rary->next;
		rary->next = new;
	}

	return (*head);
}
