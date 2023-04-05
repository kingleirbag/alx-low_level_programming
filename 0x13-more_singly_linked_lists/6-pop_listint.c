#include "lists.h"
#include <stdlib.h>

/**
 * struct listint_s - a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	node = *head;
	i = node->i;
	*head = node->next;
	free(node);

	return (i);
}
