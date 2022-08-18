#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @index: bit index
 * @n: bit
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned long int dir, hol;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	dir = 1 << index;

	hol = n & dir;

	if (hol == dir)
		return (1);

	return (0);
}
