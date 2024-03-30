#include "main.h"

/**
 * _strncpy - copies n characters from the source sring to the\
 * deatination string.
 * @dest: The sestination buffer where the string will be copied.
 * @src: The surce string to be copied.
 * @n: The number of characters to copy.
 * Return: a pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *temp = dest;

while (n-- > 0 && *src != '\0')
{
*dest++ = *src++;
}

while (n-- > 0)
{
*dest++ = '\0';
}

return (temp);
}

