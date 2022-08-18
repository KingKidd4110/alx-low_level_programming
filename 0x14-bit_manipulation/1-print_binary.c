#include "main.h"


/**
 * print_binary - print binary representation of a number
 * @n: decimal num
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int rep;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (temp = n, rep = 0; (temp >>= 1) > 0; rep++)
		;

	for (; rep >= 0; rep--)
	{
		if ((n >> rep) & 1)
			printf("1");
		else
			printf("0");
	}
}
