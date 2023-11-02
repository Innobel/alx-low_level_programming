#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array and initializes it with zeros
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *char_calloc;
	void *calloc;
	unsigned int total_size = 0, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	calloc = malloc(total_size);

	if (calloc == NULL)
		return (NULL);

	char_calloc = (char *)calloc;

	for (i = 0; i < total_size; i++)
		char_calloc[i] = 0;

	return (calloc);
}
