#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size:, size of table
 * Return: pointer to new ht or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;



	ht =  malloc(sizeof(ht));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
		ht->array[i] = NULL;
		i++;

	return (ht);
}

