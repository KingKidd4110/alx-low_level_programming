#include "lists.h"

/**
 * pop_listint - Delete the head node of listint_t
 * @head: pointer to head node
 * Return: head data
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *h;

	if (*head == NULL)
		return (0);

	h = *head;
	num = h->n;
	*head = h->next;
	free(h);

	return (num);
}
