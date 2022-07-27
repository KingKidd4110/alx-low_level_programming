#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates character in string
 *
 * @c: character in location
 * @s: location in string
 *
 * Return: pointer to the  first character location
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
