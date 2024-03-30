#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _atoi - Converts a string to an inteer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
