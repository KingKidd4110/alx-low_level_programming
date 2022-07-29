#include "main.h"
#include <stdio.h>

/**
 * array_range - creates array of integers
 * @min: - minimum value
 * @max: - maximum value
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{

	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (p);
}
