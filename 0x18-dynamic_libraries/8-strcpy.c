#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _strcpy - Copies a string.
 * @dest: The destination buffer where the string will be copied to.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destinantion buffer.
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++) != '\0')

	return (temp);
}
