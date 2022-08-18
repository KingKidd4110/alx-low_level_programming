#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @index: bit address index
 * @n: pointer to bit int
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	m = 1 << index;
	*n = *n | m;

	return (1);
}
