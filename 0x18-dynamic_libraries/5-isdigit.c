#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isdigit - Checks whether a character is a digit (0-9).
 * @c: Character to be checked.
 *
 * Return: 1 if the character is a digit, otherwise returns 0.
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
