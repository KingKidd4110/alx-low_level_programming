#include "main.h"

/**
 * _pow_recursion - returns a raised value
 *
 * @x: int number
 * @y: int number power
 * Return: 0 or -1 based on 'y'
 */
int _pow_recursion(int x, int y)
{
	int outcome = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	outcome *= _pow_recursion(x, y - 1);

	return (outcome);
}
