#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: double pointer to head
 * @str: string to be saved in new node(duplicated)
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int c;

	for (c = 0; dup_str[c] != '\0'; c++)
		;

	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
