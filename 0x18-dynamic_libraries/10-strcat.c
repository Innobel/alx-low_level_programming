#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination buffer where the strings will be concatenated.
 * @src: The source string to be concatenated to the destination.
 * Return: Returns a pointer to the destination buffer.
 */

char *_strcat(char *dest, char *src)
{
char *temp = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (temp);
}

