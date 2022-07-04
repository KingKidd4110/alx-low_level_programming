#include <stdio.h>
/**
 * main - main
 * Prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar ('\n');

	return (0);
}
