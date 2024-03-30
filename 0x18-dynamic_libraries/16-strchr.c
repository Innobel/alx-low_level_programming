#include "main.h"

/**
 * _strchr - Locates the first occurrence of character c in the string pointed\
 * to by s.
 * @s: The string to be searched.
 * @c: The character to search for.
 * Return: a pointer to the located charcter or NULL if the character does not\
 * appear in the string.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
