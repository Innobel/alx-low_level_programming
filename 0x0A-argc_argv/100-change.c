#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int coin_count = 0;
	(void)argc;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);

	return (0);
}

