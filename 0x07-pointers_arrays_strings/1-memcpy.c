#include "main.h"

/**
 * _memcpy - coppies memory data
 *
 * @n: bytes to be coppied
 * @src: memory area
 * @dest: memory area
 *
 * Return: pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
