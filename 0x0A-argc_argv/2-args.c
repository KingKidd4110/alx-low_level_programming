#include "main.h"
/**
 * main - main
 *
 * @argv: pointer array
 * @argc: counter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
