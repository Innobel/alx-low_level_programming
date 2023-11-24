#include "main.h"
/**
 * get_endianness - Checks the endianess of the system.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *endianCheck = (char *)&num;

	/* If the byte at the lowest memory address is 1, it's little endian */
	return (*endianCheck == 1);
}
