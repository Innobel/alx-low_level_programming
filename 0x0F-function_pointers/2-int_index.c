#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function used to compare values.
 *
 * Return: The index of the first element for which the cmp function does not
 *         return 0. If no element matches, return -1.
 *         If size is less than or equal to 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}

	return (-1);
}
