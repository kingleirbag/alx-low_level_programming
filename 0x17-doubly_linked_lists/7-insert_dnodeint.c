#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: heade pointer
 * @idx: index for node inserted nod
 * @n: interege for new_node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	if (node->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = node;
	new_node->next = node->next;
	node->next->prev = new_node;
	node->next = new_node;

	return (new_node);
}
