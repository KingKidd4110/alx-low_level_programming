#include "main.h"

/**
 * flip_bits - returns the bitsvto flip to get from one number to another
 * @n: num
 * @m: number to convert to
 * Return: number of
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int conv;
	int counter;

	conv = n ^ m;
	counter = 0;

	while (conv)
	{
		counter++;
		conv &= (conv - 1);
	}

	return (counter);
}
