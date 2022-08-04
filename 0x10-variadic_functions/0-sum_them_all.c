#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list pmts;

	va_start (pmts, n);

	if (n == 0)
		return (0)

	for (i = 0, sum = 0, i < n, i++)
		sum += va_arg(pmts, int);

	va_end (pmts);
	return (sum);
}
