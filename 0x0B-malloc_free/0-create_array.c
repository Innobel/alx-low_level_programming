#include "main.h"
#include "stdlib.h"

/**
 * create_array - Creates an array of character and initializes it
 * @size: The size of the array to create
 * @c: The character with which to initialize
 *
 * Return: NULL if size zero, NULL if memory allocation fails and
 * return pointer to s(the created array) if sucessful
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
