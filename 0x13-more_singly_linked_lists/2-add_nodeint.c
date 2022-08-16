#include "lists.h"

/**
 * add_nodeint - adds node at the beginning
 * @head: pointer to head node
 * @n: int
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *hold;
	listint_t *new;

	hold = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	*head = new;

	if (hold == NULL)
		new->next = NULL;

	else
		new->next = hold;

	return (new);
}
