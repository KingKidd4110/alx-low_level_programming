#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @index: bit index
 * @n: bit
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index < 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}
