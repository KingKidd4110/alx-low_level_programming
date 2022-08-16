#include "main.h"

/**
 * free_listint - frees listint_t list
 * @head: list
 *
 */

void free_listint(listint_t *head)
{
	listint_t next;

	while (h != NULL)
	{
		h = head->next;

		free(head);
		head = next;
	}
}
