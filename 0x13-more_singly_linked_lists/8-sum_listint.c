#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) 
 * @head: pointer
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next
	}
	return (sum);
}
