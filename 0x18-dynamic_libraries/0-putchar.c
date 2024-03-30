#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written
 *
 * Return: Character written onf success, on failure return EOF.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
