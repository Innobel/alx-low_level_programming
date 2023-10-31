#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: The first string to concatenate if Null is treated as empty string
 * @s2: The second string to concatenate if NULL is treated as empty string
 * Return: Apointer to a newly allocated string containing the concatination
 * of s1 and s2, followed by a null terminator.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, i, j;
	char *concat;

	if (s1 == NULL || s2 == NULL)
		return ("");

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	concat = (char *)malloc(sizeof(char) * (len1 + len2) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';
	return (concat);
}
