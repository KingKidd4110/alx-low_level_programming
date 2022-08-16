#include "lists.h"

/**
 * print_listint - prints elements of listint_t
 * @h: pointer to head node
 * Return: elements of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d" h->n);
		h = h->next;
		count++;
	}
	return (count);
}
