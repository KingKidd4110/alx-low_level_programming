#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to node
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	listint_t *current;

	for (sum = 0, current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
