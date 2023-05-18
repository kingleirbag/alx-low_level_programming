#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: header pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *element;

	while (head)
	{
		element = head->next;
		free(head);
		head = element;
	}
}
