#include "main.h"

/**
 * print_numbers - prints 0 to 9 with new line
 * onluse _putchar
 * Description: use _putchar twice and print values 0-9
 */
void print_numbers(void)
{
	int i;

	i = o;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n')
}
