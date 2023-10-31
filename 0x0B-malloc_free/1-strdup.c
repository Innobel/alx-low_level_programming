#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a given string.
 * @str: The string to be duplicated
 * Return: Returns a pointer to a newly allocated space in memory contanining
 * a copy of the input string. Returns NULL if str is NULL or if memory
 * allocations fails.
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *dup;


	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	dup = (char *)malloc((sizeof(char) * i) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < i; a++)
	{
		dup[a] = str[a];
	}

	dup[a] = '\0';

	return (dup);
}
