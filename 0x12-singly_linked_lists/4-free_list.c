#include "lists.h"

/**
* free_list - frees a list_t list
* @head: pointer to the head node of the list
*
* Return: void
*/

void free_list(list_t *head)
{
list_t *current = head;

while (current)
{
list_t *temp = current;

current = current->next;
free(temp->str);
free(temp);
}
}
