#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with n bytes of the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes fro s2 to conatenate.
 * Return: A pointer to the newly allocated concatenated string or NUlL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int total_len = 0, len1 = 0, len2 = 0, i, j;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	total_len += len1 + n;

	nconcat = (char *) malloc(total_len + 1);
	/* +1 for null terminator */

	if (nconcat == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		nconcat[i] = s1[i];

	for (j = 0; j < n; j++)
		nconcat[i + j] = s2[j];

	nconcat[i + j] = '\0';

	return (nconcat);
}
