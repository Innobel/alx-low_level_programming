#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds positive numbers.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *input = argv[i];

		for (j = 0; input[j] != '\0'; j++)
		{
			if (input[j] < '0' || input[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(input);
	}

	printf("%d\n", sum);
	return (0);
}

