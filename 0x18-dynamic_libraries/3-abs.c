#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _abs - Computes the absoluted value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute valur of the integer.
 */

int _abs(int n)
{
	return ((n < 0) ? -n : n);
}
