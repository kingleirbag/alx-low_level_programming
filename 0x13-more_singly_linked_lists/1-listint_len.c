#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that adds a new node at the beginning of a listint_t list.
 * @h: argument
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
