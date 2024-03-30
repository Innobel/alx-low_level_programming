#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strncat - Concatenates n characters from the source string to
 * the destination string.
 * @dest: The destination buffer where the strings will be concatenated.
 * @src: The source string to be concatenated to the sestination.
 * @n: The maximum mnumber of characters to concatenate.
 *
 * Return: Returns a pointer to the destination buffer.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		*dest++;
	}

	while (n-- > 0 && *src != '\0')
	{
		*dest = *src;
	}

	*dest = '\0';

	return (temp);
}
