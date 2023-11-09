#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to operate on
 * @size: The size of the array
 * @action: A function to be applied to each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
