#include "main.h"

/**
 * _strspn - Calxulates the length (in byte) of the inital segment of s which\
 * consists entirely of characters from accept.
 * @s: The string to be analyzed.
 * @accept: The string containing the characters to match.
 * Return: The length of the inital segment of s which consists enirely\
 * of characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
