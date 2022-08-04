#include "variadic_functions.h"

/**
 * print_strings - prints string followed by nl
 * @separator: string to br ptinted
 * @n: number of strings
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list pa;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
