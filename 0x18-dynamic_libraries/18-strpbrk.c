#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in the sring s of any\
 * of the characters in the string accept.
 * @s: The sring to be searched.
 * @accept: the sring containing the characters to search for.
 * Return: a pinter to the located character, or NULL if no such character is\
 * found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
