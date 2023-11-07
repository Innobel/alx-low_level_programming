#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the allocated memory to d.
 * @d: typedef data type
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
