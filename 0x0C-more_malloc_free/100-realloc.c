#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: A pointer to the previously allocated memory
* @old_size: The size, in bytes, of the allocated space for ptr
* @new_size: The new size, in bytes, of the new memory block
*
* Return: A pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (new_ptr);
}
