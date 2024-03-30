#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - Computes the length of a string.
 * @s: The string whose length is to be computed.
 *
 * Return: The length of the strings.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
