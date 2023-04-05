#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: argument
 * Return: void
 */
size_t print_listint(const listint_t *h)
{
	listint_t *i = h;

	while (i != NULL)
	{
		printf("%\n", i->n);
		i = i->next
	}
}
