#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: argument
 * Return: number of nodesin a list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++
		printf("%\n", h->n);
		h = h->next
	}
	return (i);
}
