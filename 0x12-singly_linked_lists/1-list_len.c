#include "lists.h"


/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	const list_t *currentnode;
	size_t count;

	count = 0;
	currentnode = h;
	while (currentnode != NULL)
	{
		currentnode = currentnode->next;
		count++;
	}

	return (count);
}
