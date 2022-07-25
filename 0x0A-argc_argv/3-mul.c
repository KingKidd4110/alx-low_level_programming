#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two num and print result
 * @argv: array pointer
 * @argc: counter string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	i = 1;
	j = 2;
	k = 3;
	if (argc != k)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
	return (0);
}
