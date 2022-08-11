#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: current node
 *
 * Return: number of nodes
 */



size_t print_list(const list_t *h)
{
	int c = 0;

	cnode = *h;

	if (cnode->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	else
	{
		printf("[%d] %s\n", cnode->len, cnode->str);
	}
		cnode = cnode->next;
		c++;

	}

	return (c);
}
