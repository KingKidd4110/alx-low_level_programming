#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: double pointer to head
 * @str: string to be saved in new node(duplicated)
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int c;

	for (c = 0; dup_str[c] != '\0'; c++)
		;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = c;
	newnode->next = *head;

	*head = newnode;
	return (*head);
}
