#include "main.h"

/**
 * _puts_recursion - prints screen followed by new line
 *
 * @s: character string
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

