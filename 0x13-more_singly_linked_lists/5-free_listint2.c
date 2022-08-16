#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		h = *head;
		*head = (*head)->next;
		free(h);
	}
}
