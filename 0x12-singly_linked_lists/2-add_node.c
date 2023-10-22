#include "lists.h"

/**
 * add_node - add node to head of linked list
 * @head: pointer to a pointer to the head node.
 * @str: pointer to the string
 *
 * Return: pointer to the new head of list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;
	char *sen;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	sen = strdup(str);
	if (str == NULL)
	{
		sen = NULL;
		i = 0;
	}
	else
	{
		sen = strdup(str);
		i = strlen(str);
	}
	new->len = i;
	new->str = sen;
	new->next = *head;
	*head = new;

	return (*head);
}
