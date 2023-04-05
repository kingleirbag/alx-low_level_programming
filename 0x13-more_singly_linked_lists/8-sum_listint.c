#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: pointer
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
