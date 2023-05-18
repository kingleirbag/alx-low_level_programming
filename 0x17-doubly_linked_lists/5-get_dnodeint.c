#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list.
 * @head: pointer head
 * @index: the index of nth node
 *  Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
