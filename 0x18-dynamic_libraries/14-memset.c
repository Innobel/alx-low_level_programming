#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed\
 * to by s with the constant byte b.
 * @s: The pointer to the memory area to be filled
 * @b:  The value to be set.
 * @n: The number of bytes to be set to the value.
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n-- > 0)
	{
		*s++ = b;
	}

	return (start);
}
