#include "main.h"
/**
 * get_bit - gets the bit at an index
 * @n: The number to be checked to get the bit
 * @index: The index where bit is to be gotten
 * Return: Value of given index when successful and -1 when otherwise.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;
	unsigned long int F = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* to show unsuccessful */
	}

	result = (n & F) >> index;

	return (result);
}
