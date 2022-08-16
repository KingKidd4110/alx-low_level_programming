#include "lists.h"

/**
 * listint_len - returns number of elements in listint_t
 * @h: pointer to string
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;

		num++;
	}
	return (num);
}
