#include "main.h"
#include <unistd.h>

/**
 * _isupper - Checkes whether  acharacter is upper case.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase otherwise 0.
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
