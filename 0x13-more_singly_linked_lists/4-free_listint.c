#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node, *next_node;

	node = head;
	while (node != NULL)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
}
