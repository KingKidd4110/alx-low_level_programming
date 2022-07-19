#include "main.h"

/**
 * _memset - fills bytes of the pointed memory
 * @s: char for mem address
 * @b: char pointer
 * @n: bytes of pointed memory
 *
 * Return: pointer to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
