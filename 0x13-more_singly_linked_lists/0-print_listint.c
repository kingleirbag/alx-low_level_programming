#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: argument
 * Return: number of nodesin a list
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	for (node = 0; h; node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
