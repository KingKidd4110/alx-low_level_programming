#include "lists.h"
/**
 * add_dnodeint - adds new node
 * @head: head
 * @n: int
 *
 * Return: list or Null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistnt_t *newnode;

	if (head == NULL)
		return(NULL)
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL)
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;

	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;

	return (newnode);
}
