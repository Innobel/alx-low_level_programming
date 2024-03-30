#include "main.h"

/**
 * _strstr - Locates the first occurance of the null-terminated string needle\
 * in the null-termined string haystack.
 * @haystack: the sring to be searches.
 * @needle: The string to search for.
 * Return: A pointer to the beginning of the located subsring, or NULL if\
 * the subsring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;

	}

	return (NULL);
}
