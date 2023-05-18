#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * @head: pointe head
 * @index: node index to delete
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}
	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
