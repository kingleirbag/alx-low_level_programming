#include "lists.h"
/**
 * sum_dlistint -  a function that returns the sum of all the data (n)
 * @head: pointer header
 * Return: sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_total = 0;

	while (head)
	{
		sum_total += head->n;
		head = head->next;
	}
	return (sum_total);
}
