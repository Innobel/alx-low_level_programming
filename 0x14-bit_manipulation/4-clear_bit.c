#include "main.h"
/**
 * clear_bit - Sets the bit at a given index to 1
 * @n: Pointer to the unsigned long integer where the bit will be set.
 * @index: The index of the bit to be set, statrting from 0.
 * Return: 1 on success, -1 on failure (if the index is out of bounds).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m, F;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);	/* Return -1 for failure */

	F = 1UL << index;

	m = *n; /* Dereferencing the pointer to get the value */

	m = m & ~F; /* Bitwise OR sets the bit to 1 */

	*n = m; /* The original value of the pointer is updated */

	return (1); /* on success */
}
