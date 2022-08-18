#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, conv;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (conv = 1, total = 0, len--; len >= 0; len--, conv *= 2)
	{
		if (b[len] == '1')
			total += conv;
	}

	return (total);
}
