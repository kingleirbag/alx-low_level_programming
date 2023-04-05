#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer argument
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (head == NULL)
		return;

	node = *head;
	while (node != NULL)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}
