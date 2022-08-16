#include "lists.h"

/**
 * _strlen - returns length of string
 * @s: char string
 * Return: length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}










/**
 * add_node - add a new node at the beginning
 * @head: double pointer to head
 * @str: string to be saved in new node(duplicated)
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *newnode;



	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)

		return (NULL);

	newnode->str = strdup(str);



	newnode->len = _strlen(str);

	newnode->next = *head;

	*head = newnode;



	return (newnode);

}
