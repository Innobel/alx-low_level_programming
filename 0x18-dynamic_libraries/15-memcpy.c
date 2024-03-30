#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory ara dest.
 * @dest: The destination memory area where the data will be copied.
 * @src: The source memory area from where the data will be copied.
 * @n: The number of bytes to copy.
 * Return: Returns a pointer to the destination memory ara.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n-- > 0)
	{
		*dest++ = *src++;
	}


	return (start);
}
